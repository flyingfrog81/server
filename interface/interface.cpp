/*! \file client.cpp
	\brief Client code.

	This file contains the Client code for connecting to a remote server and sending or requesting data from a mySQL database.

	Copyright (C) 2014 Marco Messina
*/

#include "interface.h"
#include "socket.h"

namespace API_ODA {


string insertNewProposal(Proposals *proposal, string &error_message)
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    int n;
    string proposal_id = "-1";
    error_message = "no error";

    // setting up the socket and opening the connection
    Connect connection;
    if ( connection.openSocket()<0 )
    {
        cerr<<"ERROR: problems with socket\n";
    }

    /* Connection with the Server is now established */
    // Preparing the message to send
    PHTmessage *pht_data = new PHTmessage;
    pht_data->set_type(PHTmessage::DATA);
    //pht_data->set_allocated_proposal(proposal);
    Proposals *p_temp;
    p_temp = pht_data->add_proposal();
    *p_temp = *proposal;
    // Serializing to a string the data to send
    string message;
    if (!pht_data->SerializeToString(&message))
    {
	    cerr<<"ERROR: Can not serialize the message.\n";
    }
    connection.sendMessage(message);

    string reply;
    connection.receiveMessage(reply);
    PHTmessage *p_r = new PHTmessage;
    p_r->ParseFromString(reply);
    cout<<p_r->DebugString();
    messageType_data m_t;
    m_t = checkMessageType(p_r);
    Answer *a = 0;
    cout<<"Checking reply from server...\n";
    switch ( m_t )
    {
        case PHTmessage::ANSWER:
                a = p_r->mutable_answer();
                proposal_id = a->answer();
                cout<<"       ANSWER found\n";
                break;
        case PHTmessage::ERROR:
                a = p_r->mutable_answer();
                error_message = a->answer();
                cout<<"       ERROR found\n";
                break;
        default:
            cerr<<"ERROR: reply from server not yet implemented"<<endl;
    }

    // Closing connection
    connection.Close();

    // Deleting pht_data
    delete pht_data;

    return proposal_id;
}


void modifyProposal(Proposals *proposal, string &error_message)
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    int n;
    error_message = "no error";

    // setting up the socket and opening the connection
    Connect connection;
    if ( connection.openSocket()<0 )
    {
        cerr<<"ERROR: problems with socket\n";
    }

    /* Connection with the Server is now established */
    // Preparing the message to send
    PHTmessage *pht_data = new PHTmessage;
    pht_data->set_type(PHTmessage::DATA);
    Proposals *p_p; 
    p_p = pht_data->add_proposal();
    *p_p = *proposal;
    //pht_data->set_allocated_proposal(&proposal);
    
    // Serializing to a string the data to send
    string message;
    if (!pht_data->SerializeToString(&message))
    {
	    cerr<<"ERROR: Can not serialize the message.\n";
    }

    cout<<"here\n";
    cout<<"Sending update..\n";
    connection.sendMessage(message);
    
    string reply;
    connection.receiveMessage(reply);
    PHTmessage *p_r = new PHTmessage;
    p_r->ParseFromString(reply);
    messageType_data m_t;
    m_t = checkMessageType(p_r);
    Answer *a = 0;

    cout<<"Checking reply from server...\n";
    switch ( m_t )
    {
        case PHTmessage::ANSWER:
                cout<<"       ANSWER found\n";
                break;
        case PHTmessage::ERROR:
                a = p_r->mutable_answer();
                error_message = a->answer();
                cout<<"       ERROR found\n";
                break;
        default:
            cerr<<"ERROR: reply from server not yet implemented"<<endl;
    }

    // Closing connection
    connection.Close();

    // Deleting pht_data
    delete pht_data;
}


messageType_data checkMessageType(PHTmessage *oda_msg)
{
    messageType_data m_type;

    if ( oda_msg->type() == PHTmessage::DATA ) m_type = DATA;
    if ( oda_msg->type() == PHTmessage::ERROR ) m_type = ERROR;
    if ( oda_msg->type() == PHTmessage::QUERY ) m_type = QUERY;
    if ( oda_msg->type() == PHTmessage::ANSWER ) m_type = ANSWER;

    return m_type;
}


vector<Proposals *> requestProposalsWithStatus(int )
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    
    vector<Proposals *> p_list;

    int n;
    string proposal_id = "-1";

    // setting up the socket and opening the connection
    Connect connection;
    if ( connection.openSocket()<0 )
    {
        cerr<<"ERROR: problems with socket\n";
    }

    /* Connection with the Server is now established */
    // Preparing the message to send
    PHTmessage *pht_data = new PHTmessage;
    pht_data->set_type(PHTmessage::QUERY);

    Query *q = new Query;
    q->set_query(PHT::Draft+1); // +1 due to mySQL Enum starting from 0
    pht_data->set_allocated_query(q);

    // Serializing to a string the data to send
    string message;
    if (!pht_data->SerializeToString(&message))
    {
	    cerr<<"ERROR: Can not serialize the message.\n";
    }

    connection.sendMessage(message);

    string reply;
    connection.receiveMessage(reply);
    PHTmessage *p_r = new PHTmessage;
    p_r->ParseFromString(reply);
    messageType_data m_t;
    m_t = checkMessageType(p_r);
    cout<<"Checking reply from server...\n";

    switch ( m_t )
    {
        case PHTmessage::DATA:
            {
                cout<<"       DATA found\n";

                cout<<p_r->DebugString()<<endl;
               
                Proposals p = p_r->proposal(0);
                cout<<p.abstract()<<endl;

                break;
            }
        case PHTmessage::ERROR:
                cout<<"       ERROR found\n";
                break;
        default:
            cerr<<"ERROR: reply from server not yet implemented"<<endl;
    }

    // Closing connection
    connection.Close();

    // Deleting pht_data
    delete pht_data;

    return p_list;
}

}
