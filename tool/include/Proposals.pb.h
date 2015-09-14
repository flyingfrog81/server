// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Proposals.proto

#ifndef PROTOBUF_Proposals_2eproto__INCLUDED
#define PROTOBUF_Proposals_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "ProposalStatus.pb.h"
#include "ProposalType.pb.h"
#include "CoAuthors.pb.h"
#include "ProposalEditors.pb.h"
#include "Reviews.pb.h"
#include "ScienceGoals.pb.h"
#include "SupportingDocuments.pb.h"
#include "TACReviews.pb.h"
// @@protoc_insertion_point(includes)

namespace PHT {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Proposals_2eproto();
void protobuf_AssignDesc_Proposals_2eproto();
void protobuf_ShutdownFile_Proposals_2eproto();

class Proposals;

// ===================================================================

class Proposals : public ::google::protobuf::Message {
 public:
  Proposals();
  virtual ~Proposals();

  Proposals(const Proposals& from);

  inline Proposals& operator=(const Proposals& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Proposals& default_instance();

  void Swap(Proposals* other);

  // implements Message ----------------------------------------------

  Proposals* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Proposals& from);
  void MergeFrom(const Proposals& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string abstract = 1;
  inline bool has_abstract() const;
  inline void clear_abstract();
  static const int kAbstractFieldNumber = 1;
  inline const ::std::string& abstract() const;
  inline void set_abstract(const ::std::string& value);
  inline void set_abstract(const char* value);
  inline void set_abstract(const char* value, size_t size);
  inline ::std::string* mutable_abstract();
  inline ::std::string* release_abstract();
  inline void set_allocated_abstract(::std::string* abstract);

  // optional string more_info = 2;
  inline bool has_more_info() const;
  inline void clear_more_info();
  static const int kMoreInfoFieldNumber = 2;
  inline const ::std::string& more_info() const;
  inline void set_more_info(const ::std::string& value);
  inline void set_more_info(const char* value);
  inline void set_more_info(const char* value, size_t size);
  inline ::std::string* mutable_more_info();
  inline ::std::string* release_more_info();
  inline void set_allocated_more_info(::std::string* more_info);

  // optional int64 proposal_id = 3;
  inline bool has_proposal_id() const;
  inline void clear_proposal_id();
  static const int kProposalIdFieldNumber = 3;
  inline ::google::protobuf::int64 proposal_id() const;
  inline void set_proposal_id(::google::protobuf::int64 value);

  // optional .PHT.ProposalStatus proposal_status = 4;
  inline bool has_proposal_status() const;
  inline void clear_proposal_status();
  static const int kProposalStatusFieldNumber = 4;
  inline ::PHT::ProposalStatus proposal_status() const;
  inline void set_proposal_status(::PHT::ProposalStatus value);

  // optional .PHT.ProposalType proposal_type = 5;
  inline bool has_proposal_type() const;
  inline void clear_proposal_type();
  static const int kProposalTypeFieldNumber = 5;
  inline ::PHT::ProposalType proposal_type() const;
  inline void set_proposal_type(::PHT::ProposalType value);

  // optional .PHT.CoAuthors m_CoAuthors = 6;
  inline bool has_m_coauthors() const;
  inline void clear_m_coauthors();
  static const int kMCoAuthorsFieldNumber = 6;
  inline const ::PHT::CoAuthors& m_coauthors() const;
  inline ::PHT::CoAuthors* mutable_m_coauthors();
  inline ::PHT::CoAuthors* release_m_coauthors();
  inline void set_allocated_m_coauthors(::PHT::CoAuthors* m_coauthors);

  // optional .PHT.ProposalEditors m_ProposalEditors = 7;
  inline bool has_m_proposaleditors() const;
  inline void clear_m_proposaleditors();
  static const int kMProposalEditorsFieldNumber = 7;
  inline const ::PHT::ProposalEditors& m_proposaleditors() const;
  inline ::PHT::ProposalEditors* mutable_m_proposaleditors();
  inline ::PHT::ProposalEditors* release_m_proposaleditors();
  inline void set_allocated_m_proposaleditors(::PHT::ProposalEditors* m_proposaleditors);

  // optional .PHT.TACReviews m_TACReviews = 8;
  inline bool has_m_tacreviews() const;
  inline void clear_m_tacreviews();
  static const int kMTACReviewsFieldNumber = 8;
  inline const ::PHT::TACReviews& m_tacreviews() const;
  inline ::PHT::TACReviews* mutable_m_tacreviews();
  inline ::PHT::TACReviews* release_m_tacreviews();
  inline void set_allocated_m_tacreviews(::PHT::TACReviews* m_tacreviews);

  // optional .PHT.Reviews m_Reviews = 9;
  inline bool has_m_reviews() const;
  inline void clear_m_reviews();
  static const int kMReviewsFieldNumber = 9;
  inline const ::PHT::Reviews& m_reviews() const;
  inline ::PHT::Reviews* mutable_m_reviews();
  inline ::PHT::Reviews* release_m_reviews();
  inline void set_allocated_m_reviews(::PHT::Reviews* m_reviews);

  // optional .PHT.SupportingDocuments m_SupportingDocuments = 10;
  inline bool has_m_supportingdocuments() const;
  inline void clear_m_supportingdocuments();
  static const int kMSupportingDocumentsFieldNumber = 10;
  inline const ::PHT::SupportingDocuments& m_supportingdocuments() const;
  inline ::PHT::SupportingDocuments* mutable_m_supportingdocuments();
  inline ::PHT::SupportingDocuments* release_m_supportingdocuments();
  inline void set_allocated_m_supportingdocuments(::PHT::SupportingDocuments* m_supportingdocuments);

  // optional .PHT.ScienceGoals m_ScienceGoals = 11;
  inline bool has_m_sciencegoals() const;
  inline void clear_m_sciencegoals();
  static const int kMScienceGoalsFieldNumber = 11;
  inline const ::PHT::ScienceGoals& m_sciencegoals() const;
  inline ::PHT::ScienceGoals* mutable_m_sciencegoals();
  inline ::PHT::ScienceGoals* release_m_sciencegoals();
  inline void set_allocated_m_sciencegoals(::PHT::ScienceGoals* m_sciencegoals);

  // @@protoc_insertion_point(class_scope:PHT.Proposals)
 private:
  inline void set_has_abstract();
  inline void clear_has_abstract();
  inline void set_has_more_info();
  inline void clear_has_more_info();
  inline void set_has_proposal_id();
  inline void clear_has_proposal_id();
  inline void set_has_proposal_status();
  inline void clear_has_proposal_status();
  inline void set_has_proposal_type();
  inline void clear_has_proposal_type();
  inline void set_has_m_coauthors();
  inline void clear_has_m_coauthors();
  inline void set_has_m_proposaleditors();
  inline void clear_has_m_proposaleditors();
  inline void set_has_m_tacreviews();
  inline void clear_has_m_tacreviews();
  inline void set_has_m_reviews();
  inline void clear_has_m_reviews();
  inline void set_has_m_supportingdocuments();
  inline void clear_has_m_supportingdocuments();
  inline void set_has_m_sciencegoals();
  inline void clear_has_m_sciencegoals();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* abstract_;
  ::std::string* more_info_;
  ::google::protobuf::int64 proposal_id_;
  int proposal_status_;
  int proposal_type_;
  ::PHT::CoAuthors* m_coauthors_;
  ::PHT::ProposalEditors* m_proposaleditors_;
  ::PHT::TACReviews* m_tacreviews_;
  ::PHT::Reviews* m_reviews_;
  ::PHT::SupportingDocuments* m_supportingdocuments_;
  ::PHT::ScienceGoals* m_sciencegoals_;
  friend void  protobuf_AddDesc_Proposals_2eproto();
  friend void protobuf_AssignDesc_Proposals_2eproto();
  friend void protobuf_ShutdownFile_Proposals_2eproto();

  void InitAsDefaultInstance();
  static Proposals* default_instance_;
};
// ===================================================================


// ===================================================================

// Proposals

// optional string abstract = 1;
inline bool Proposals::has_abstract() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Proposals::set_has_abstract() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Proposals::clear_has_abstract() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Proposals::clear_abstract() {
  if (abstract_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    abstract_->clear();
  }
  clear_has_abstract();
}
inline const ::std::string& Proposals::abstract() const {
  // @@protoc_insertion_point(field_get:PHT.Proposals.abstract)
  return *abstract_;
}
inline void Proposals::set_abstract(const ::std::string& value) {
  set_has_abstract();
  if (abstract_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    abstract_ = new ::std::string;
  }
  abstract_->assign(value);
  // @@protoc_insertion_point(field_set:PHT.Proposals.abstract)
}
inline void Proposals::set_abstract(const char* value) {
  set_has_abstract();
  if (abstract_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    abstract_ = new ::std::string;
  }
  abstract_->assign(value);
  // @@protoc_insertion_point(field_set_char:PHT.Proposals.abstract)
}
inline void Proposals::set_abstract(const char* value, size_t size) {
  set_has_abstract();
  if (abstract_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    abstract_ = new ::std::string;
  }
  abstract_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PHT.Proposals.abstract)
}
inline ::std::string* Proposals::mutable_abstract() {
  set_has_abstract();
  if (abstract_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    abstract_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:PHT.Proposals.abstract)
  return abstract_;
}
inline ::std::string* Proposals::release_abstract() {
  clear_has_abstract();
  if (abstract_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = abstract_;
    abstract_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Proposals::set_allocated_abstract(::std::string* abstract) {
  if (abstract_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete abstract_;
  }
  if (abstract) {
    set_has_abstract();
    abstract_ = abstract;
  } else {
    clear_has_abstract();
    abstract_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:PHT.Proposals.abstract)
}

// optional string more_info = 2;
inline bool Proposals::has_more_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Proposals::set_has_more_info() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Proposals::clear_has_more_info() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Proposals::clear_more_info() {
  if (more_info_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    more_info_->clear();
  }
  clear_has_more_info();
}
inline const ::std::string& Proposals::more_info() const {
  // @@protoc_insertion_point(field_get:PHT.Proposals.more_info)
  return *more_info_;
}
inline void Proposals::set_more_info(const ::std::string& value) {
  set_has_more_info();
  if (more_info_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    more_info_ = new ::std::string;
  }
  more_info_->assign(value);
  // @@protoc_insertion_point(field_set:PHT.Proposals.more_info)
}
inline void Proposals::set_more_info(const char* value) {
  set_has_more_info();
  if (more_info_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    more_info_ = new ::std::string;
  }
  more_info_->assign(value);
  // @@protoc_insertion_point(field_set_char:PHT.Proposals.more_info)
}
inline void Proposals::set_more_info(const char* value, size_t size) {
  set_has_more_info();
  if (more_info_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    more_info_ = new ::std::string;
  }
  more_info_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PHT.Proposals.more_info)
}
inline ::std::string* Proposals::mutable_more_info() {
  set_has_more_info();
  if (more_info_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    more_info_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:PHT.Proposals.more_info)
  return more_info_;
}
inline ::std::string* Proposals::release_more_info() {
  clear_has_more_info();
  if (more_info_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = more_info_;
    more_info_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Proposals::set_allocated_more_info(::std::string* more_info) {
  if (more_info_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete more_info_;
  }
  if (more_info) {
    set_has_more_info();
    more_info_ = more_info;
  } else {
    clear_has_more_info();
    more_info_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:PHT.Proposals.more_info)
}

// optional int64 proposal_id = 3;
inline bool Proposals::has_proposal_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Proposals::set_has_proposal_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Proposals::clear_has_proposal_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Proposals::clear_proposal_id() {
  proposal_id_ = GOOGLE_LONGLONG(0);
  clear_has_proposal_id();
}
inline ::google::protobuf::int64 Proposals::proposal_id() const {
  // @@protoc_insertion_point(field_get:PHT.Proposals.proposal_id)
  return proposal_id_;
}
inline void Proposals::set_proposal_id(::google::protobuf::int64 value) {
  set_has_proposal_id();
  proposal_id_ = value;
  // @@protoc_insertion_point(field_set:PHT.Proposals.proposal_id)
}

// optional .PHT.ProposalStatus proposal_status = 4;
inline bool Proposals::has_proposal_status() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Proposals::set_has_proposal_status() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Proposals::clear_has_proposal_status() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Proposals::clear_proposal_status() {
  proposal_status_ = 0;
  clear_has_proposal_status();
}
inline ::PHT::ProposalStatus Proposals::proposal_status() const {
  // @@protoc_insertion_point(field_get:PHT.Proposals.proposal_status)
  return static_cast< ::PHT::ProposalStatus >(proposal_status_);
}
inline void Proposals::set_proposal_status(::PHT::ProposalStatus value) {
  assert(::PHT::ProposalStatus_IsValid(value));
  set_has_proposal_status();
  proposal_status_ = value;
  // @@protoc_insertion_point(field_set:PHT.Proposals.proposal_status)
}

// optional .PHT.ProposalType proposal_type = 5;
inline bool Proposals::has_proposal_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Proposals::set_has_proposal_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Proposals::clear_has_proposal_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Proposals::clear_proposal_type() {
  proposal_type_ = 0;
  clear_has_proposal_type();
}
inline ::PHT::ProposalType Proposals::proposal_type() const {
  // @@protoc_insertion_point(field_get:PHT.Proposals.proposal_type)
  return static_cast< ::PHT::ProposalType >(proposal_type_);
}
inline void Proposals::set_proposal_type(::PHT::ProposalType value) {
  assert(::PHT::ProposalType_IsValid(value));
  set_has_proposal_type();
  proposal_type_ = value;
  // @@protoc_insertion_point(field_set:PHT.Proposals.proposal_type)
}

// optional .PHT.CoAuthors m_CoAuthors = 6;
inline bool Proposals::has_m_coauthors() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Proposals::set_has_m_coauthors() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Proposals::clear_has_m_coauthors() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Proposals::clear_m_coauthors() {
  if (m_coauthors_ != NULL) m_coauthors_->::PHT::CoAuthors::Clear();
  clear_has_m_coauthors();
}
inline const ::PHT::CoAuthors& Proposals::m_coauthors() const {
  // @@protoc_insertion_point(field_get:PHT.Proposals.m_CoAuthors)
  return m_coauthors_ != NULL ? *m_coauthors_ : *default_instance_->m_coauthors_;
}
inline ::PHT::CoAuthors* Proposals::mutable_m_coauthors() {
  set_has_m_coauthors();
  if (m_coauthors_ == NULL) m_coauthors_ = new ::PHT::CoAuthors;
  // @@protoc_insertion_point(field_mutable:PHT.Proposals.m_CoAuthors)
  return m_coauthors_;
}
inline ::PHT::CoAuthors* Proposals::release_m_coauthors() {
  clear_has_m_coauthors();
  ::PHT::CoAuthors* temp = m_coauthors_;
  m_coauthors_ = NULL;
  return temp;
}
inline void Proposals::set_allocated_m_coauthors(::PHT::CoAuthors* m_coauthors) {
  delete m_coauthors_;
  m_coauthors_ = m_coauthors;
  if (m_coauthors) {
    set_has_m_coauthors();
  } else {
    clear_has_m_coauthors();
  }
  // @@protoc_insertion_point(field_set_allocated:PHT.Proposals.m_CoAuthors)
}

// optional .PHT.ProposalEditors m_ProposalEditors = 7;
inline bool Proposals::has_m_proposaleditors() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Proposals::set_has_m_proposaleditors() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Proposals::clear_has_m_proposaleditors() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Proposals::clear_m_proposaleditors() {
  if (m_proposaleditors_ != NULL) m_proposaleditors_->::PHT::ProposalEditors::Clear();
  clear_has_m_proposaleditors();
}
inline const ::PHT::ProposalEditors& Proposals::m_proposaleditors() const {
  // @@protoc_insertion_point(field_get:PHT.Proposals.m_ProposalEditors)
  return m_proposaleditors_ != NULL ? *m_proposaleditors_ : *default_instance_->m_proposaleditors_;
}
inline ::PHT::ProposalEditors* Proposals::mutable_m_proposaleditors() {
  set_has_m_proposaleditors();
  if (m_proposaleditors_ == NULL) m_proposaleditors_ = new ::PHT::ProposalEditors;
  // @@protoc_insertion_point(field_mutable:PHT.Proposals.m_ProposalEditors)
  return m_proposaleditors_;
}
inline ::PHT::ProposalEditors* Proposals::release_m_proposaleditors() {
  clear_has_m_proposaleditors();
  ::PHT::ProposalEditors* temp = m_proposaleditors_;
  m_proposaleditors_ = NULL;
  return temp;
}
inline void Proposals::set_allocated_m_proposaleditors(::PHT::ProposalEditors* m_proposaleditors) {
  delete m_proposaleditors_;
  m_proposaleditors_ = m_proposaleditors;
  if (m_proposaleditors) {
    set_has_m_proposaleditors();
  } else {
    clear_has_m_proposaleditors();
  }
  // @@protoc_insertion_point(field_set_allocated:PHT.Proposals.m_ProposalEditors)
}

// optional .PHT.TACReviews m_TACReviews = 8;
inline bool Proposals::has_m_tacreviews() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Proposals::set_has_m_tacreviews() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Proposals::clear_has_m_tacreviews() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Proposals::clear_m_tacreviews() {
  if (m_tacreviews_ != NULL) m_tacreviews_->::PHT::TACReviews::Clear();
  clear_has_m_tacreviews();
}
inline const ::PHT::TACReviews& Proposals::m_tacreviews() const {
  // @@protoc_insertion_point(field_get:PHT.Proposals.m_TACReviews)
  return m_tacreviews_ != NULL ? *m_tacreviews_ : *default_instance_->m_tacreviews_;
}
inline ::PHT::TACReviews* Proposals::mutable_m_tacreviews() {
  set_has_m_tacreviews();
  if (m_tacreviews_ == NULL) m_tacreviews_ = new ::PHT::TACReviews;
  // @@protoc_insertion_point(field_mutable:PHT.Proposals.m_TACReviews)
  return m_tacreviews_;
}
inline ::PHT::TACReviews* Proposals::release_m_tacreviews() {
  clear_has_m_tacreviews();
  ::PHT::TACReviews* temp = m_tacreviews_;
  m_tacreviews_ = NULL;
  return temp;
}
inline void Proposals::set_allocated_m_tacreviews(::PHT::TACReviews* m_tacreviews) {
  delete m_tacreviews_;
  m_tacreviews_ = m_tacreviews;
  if (m_tacreviews) {
    set_has_m_tacreviews();
  } else {
    clear_has_m_tacreviews();
  }
  // @@protoc_insertion_point(field_set_allocated:PHT.Proposals.m_TACReviews)
}

// optional .PHT.Reviews m_Reviews = 9;
inline bool Proposals::has_m_reviews() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Proposals::set_has_m_reviews() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Proposals::clear_has_m_reviews() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Proposals::clear_m_reviews() {
  if (m_reviews_ != NULL) m_reviews_->::PHT::Reviews::Clear();
  clear_has_m_reviews();
}
inline const ::PHT::Reviews& Proposals::m_reviews() const {
  // @@protoc_insertion_point(field_get:PHT.Proposals.m_Reviews)
  return m_reviews_ != NULL ? *m_reviews_ : *default_instance_->m_reviews_;
}
inline ::PHT::Reviews* Proposals::mutable_m_reviews() {
  set_has_m_reviews();
  if (m_reviews_ == NULL) m_reviews_ = new ::PHT::Reviews;
  // @@protoc_insertion_point(field_mutable:PHT.Proposals.m_Reviews)
  return m_reviews_;
}
inline ::PHT::Reviews* Proposals::release_m_reviews() {
  clear_has_m_reviews();
  ::PHT::Reviews* temp = m_reviews_;
  m_reviews_ = NULL;
  return temp;
}
inline void Proposals::set_allocated_m_reviews(::PHT::Reviews* m_reviews) {
  delete m_reviews_;
  m_reviews_ = m_reviews;
  if (m_reviews) {
    set_has_m_reviews();
  } else {
    clear_has_m_reviews();
  }
  // @@protoc_insertion_point(field_set_allocated:PHT.Proposals.m_Reviews)
}

// optional .PHT.SupportingDocuments m_SupportingDocuments = 10;
inline bool Proposals::has_m_supportingdocuments() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Proposals::set_has_m_supportingdocuments() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Proposals::clear_has_m_supportingdocuments() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Proposals::clear_m_supportingdocuments() {
  if (m_supportingdocuments_ != NULL) m_supportingdocuments_->::PHT::SupportingDocuments::Clear();
  clear_has_m_supportingdocuments();
}
inline const ::PHT::SupportingDocuments& Proposals::m_supportingdocuments() const {
  // @@protoc_insertion_point(field_get:PHT.Proposals.m_SupportingDocuments)
  return m_supportingdocuments_ != NULL ? *m_supportingdocuments_ : *default_instance_->m_supportingdocuments_;
}
inline ::PHT::SupportingDocuments* Proposals::mutable_m_supportingdocuments() {
  set_has_m_supportingdocuments();
  if (m_supportingdocuments_ == NULL) m_supportingdocuments_ = new ::PHT::SupportingDocuments;
  // @@protoc_insertion_point(field_mutable:PHT.Proposals.m_SupportingDocuments)
  return m_supportingdocuments_;
}
inline ::PHT::SupportingDocuments* Proposals::release_m_supportingdocuments() {
  clear_has_m_supportingdocuments();
  ::PHT::SupportingDocuments* temp = m_supportingdocuments_;
  m_supportingdocuments_ = NULL;
  return temp;
}
inline void Proposals::set_allocated_m_supportingdocuments(::PHT::SupportingDocuments* m_supportingdocuments) {
  delete m_supportingdocuments_;
  m_supportingdocuments_ = m_supportingdocuments;
  if (m_supportingdocuments) {
    set_has_m_supportingdocuments();
  } else {
    clear_has_m_supportingdocuments();
  }
  // @@protoc_insertion_point(field_set_allocated:PHT.Proposals.m_SupportingDocuments)
}

// optional .PHT.ScienceGoals m_ScienceGoals = 11;
inline bool Proposals::has_m_sciencegoals() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Proposals::set_has_m_sciencegoals() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Proposals::clear_has_m_sciencegoals() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Proposals::clear_m_sciencegoals() {
  if (m_sciencegoals_ != NULL) m_sciencegoals_->::PHT::ScienceGoals::Clear();
  clear_has_m_sciencegoals();
}
inline const ::PHT::ScienceGoals& Proposals::m_sciencegoals() const {
  // @@protoc_insertion_point(field_get:PHT.Proposals.m_ScienceGoals)
  return m_sciencegoals_ != NULL ? *m_sciencegoals_ : *default_instance_->m_sciencegoals_;
}
inline ::PHT::ScienceGoals* Proposals::mutable_m_sciencegoals() {
  set_has_m_sciencegoals();
  if (m_sciencegoals_ == NULL) m_sciencegoals_ = new ::PHT::ScienceGoals;
  // @@protoc_insertion_point(field_mutable:PHT.Proposals.m_ScienceGoals)
  return m_sciencegoals_;
}
inline ::PHT::ScienceGoals* Proposals::release_m_sciencegoals() {
  clear_has_m_sciencegoals();
  ::PHT::ScienceGoals* temp = m_sciencegoals_;
  m_sciencegoals_ = NULL;
  return temp;
}
inline void Proposals::set_allocated_m_sciencegoals(::PHT::ScienceGoals* m_sciencegoals) {
  delete m_sciencegoals_;
  m_sciencegoals_ = m_sciencegoals;
  if (m_sciencegoals) {
    set_has_m_sciencegoals();
  } else {
    clear_has_m_sciencegoals();
  }
  // @@protoc_insertion_point(field_set_allocated:PHT.Proposals.m_ScienceGoals)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PHT

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Proposals_2eproto__INCLUDED