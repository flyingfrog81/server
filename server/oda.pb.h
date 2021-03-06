// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: oda.proto

#ifndef PROTOBUF_oda_2eproto__INCLUDED
#define PROTOBUF_oda_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace oda {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_oda_2eproto();
void protobuf_AssignDesc_oda_2eproto();
void protobuf_ShutdownFile_oda_2eproto();

class Proposal;
class Reviewer;
class Oda;

// ===================================================================

class Proposal : public ::google::protobuf::Message {
 public:
  Proposal();
  virtual ~Proposal();

  Proposal(const Proposal& from);

  inline Proposal& operator=(const Proposal& from) {
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
  static const Proposal& default_instance();

  void Swap(Proposal* other);

  // implements Message ----------------------------------------------

  Proposal* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Proposal& from);
  void MergeFrom(const Proposal& from);
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

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required string title = 2;
  inline bool has_title() const;
  inline void clear_title();
  static const int kTitleFieldNumber = 2;
  inline const ::std::string& title() const;
  inline void set_title(const ::std::string& value);
  inline void set_title(const char* value);
  inline void set_title(const char* value, size_t size);
  inline ::std::string* mutable_title();
  inline ::std::string* release_title();
  inline void set_allocated_title(::std::string* title);

  // repeated .oda.Reviewer reviewer = 3;
  inline int reviewer_size() const;
  inline void clear_reviewer();
  static const int kReviewerFieldNumber = 3;
  inline const ::oda::Reviewer& reviewer(int index) const;
  inline ::oda::Reviewer* mutable_reviewer(int index);
  inline ::oda::Reviewer* add_reviewer();
  inline const ::google::protobuf::RepeatedPtrField< ::oda::Reviewer >&
      reviewer() const;
  inline ::google::protobuf::RepeatedPtrField< ::oda::Reviewer >*
      mutable_reviewer();

  // @@protoc_insertion_point(class_scope:oda.Proposal)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_title();
  inline void clear_has_title();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* title_;
  ::google::protobuf::RepeatedPtrField< ::oda::Reviewer > reviewer_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_oda_2eproto();
  friend void protobuf_AssignDesc_oda_2eproto();
  friend void protobuf_ShutdownFile_oda_2eproto();

  void InitAsDefaultInstance();
  static Proposal* default_instance_;
};
// -------------------------------------------------------------------

class Reviewer : public ::google::protobuf::Message {
 public:
  Reviewer();
  virtual ~Reviewer();

  Reviewer(const Reviewer& from);

  inline Reviewer& operator=(const Reviewer& from) {
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
  static const Reviewer& default_instance();

  void Swap(Reviewer* other);

  // implements Message ----------------------------------------------

  Reviewer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Reviewer& from);
  void MergeFrom(const Reviewer& from);
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

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required string grade = 2;
  inline bool has_grade() const;
  inline void clear_grade();
  static const int kGradeFieldNumber = 2;
  inline const ::std::string& grade() const;
  inline void set_grade(const ::std::string& value);
  inline void set_grade(const char* value);
  inline void set_grade(const char* value, size_t size);
  inline ::std::string* mutable_grade();
  inline ::std::string* release_grade();
  inline void set_allocated_grade(::std::string* grade);

  // required string name = 3;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 3;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:oda.Reviewer)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_grade();
  inline void clear_has_grade();
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* grade_;
  ::std::string* name_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_oda_2eproto();
  friend void protobuf_AssignDesc_oda_2eproto();
  friend void protobuf_ShutdownFile_oda_2eproto();

  void InitAsDefaultInstance();
  static Reviewer* default_instance_;
};
// -------------------------------------------------------------------

class Oda : public ::google::protobuf::Message {
 public:
  Oda();
  virtual ~Oda();

  Oda(const Oda& from);

  inline Oda& operator=(const Oda& from) {
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
  static const Oda& default_instance();

  void Swap(Oda* other);

  // implements Message ----------------------------------------------

  Oda* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Oda& from);
  void MergeFrom(const Oda& from);
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

  // repeated .oda.Proposal proposal = 1;
  inline int proposal_size() const;
  inline void clear_proposal();
  static const int kProposalFieldNumber = 1;
  inline const ::oda::Proposal& proposal(int index) const;
  inline ::oda::Proposal* mutable_proposal(int index);
  inline ::oda::Proposal* add_proposal();
  inline const ::google::protobuf::RepeatedPtrField< ::oda::Proposal >&
      proposal() const;
  inline ::google::protobuf::RepeatedPtrField< ::oda::Proposal >*
      mutable_proposal();

  // @@protoc_insertion_point(class_scope:oda.Oda)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::oda::Proposal > proposal_;
  friend void  protobuf_AddDesc_oda_2eproto();
  friend void protobuf_AssignDesc_oda_2eproto();
  friend void protobuf_ShutdownFile_oda_2eproto();

  void InitAsDefaultInstance();
  static Oda* default_instance_;
};
// ===================================================================


// ===================================================================

// Proposal

// required int32 id = 1;
inline bool Proposal::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Proposal::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Proposal::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Proposal::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Proposal::id() const {
  // @@protoc_insertion_point(field_get:oda.Proposal.id)
  return id_;
}
inline void Proposal::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:oda.Proposal.id)
}

// required string title = 2;
inline bool Proposal::has_title() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Proposal::set_has_title() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Proposal::clear_has_title() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Proposal::clear_title() {
  if (title_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    title_->clear();
  }
  clear_has_title();
}
inline const ::std::string& Proposal::title() const {
  // @@protoc_insertion_point(field_get:oda.Proposal.title)
  return *title_;
}
inline void Proposal::set_title(const ::std::string& value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    title_ = new ::std::string;
  }
  title_->assign(value);
  // @@protoc_insertion_point(field_set:oda.Proposal.title)
}
inline void Proposal::set_title(const char* value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    title_ = new ::std::string;
  }
  title_->assign(value);
  // @@protoc_insertion_point(field_set_char:oda.Proposal.title)
}
inline void Proposal::set_title(const char* value, size_t size) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    title_ = new ::std::string;
  }
  title_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:oda.Proposal.title)
}
inline ::std::string* Proposal::mutable_title() {
  set_has_title();
  if (title_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    title_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:oda.Proposal.title)
  return title_;
}
inline ::std::string* Proposal::release_title() {
  clear_has_title();
  if (title_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = title_;
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Proposal::set_allocated_title(::std::string* title) {
  if (title_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete title_;
  }
  if (title) {
    set_has_title();
    title_ = title;
  } else {
    clear_has_title();
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:oda.Proposal.title)
}

// repeated .oda.Reviewer reviewer = 3;
inline int Proposal::reviewer_size() const {
  return reviewer_.size();
}
inline void Proposal::clear_reviewer() {
  reviewer_.Clear();
}
inline const ::oda::Reviewer& Proposal::reviewer(int index) const {
  // @@protoc_insertion_point(field_get:oda.Proposal.reviewer)
  return reviewer_.Get(index);
}
inline ::oda::Reviewer* Proposal::mutable_reviewer(int index) {
  // @@protoc_insertion_point(field_mutable:oda.Proposal.reviewer)
  return reviewer_.Mutable(index);
}
inline ::oda::Reviewer* Proposal::add_reviewer() {
  // @@protoc_insertion_point(field_add:oda.Proposal.reviewer)
  return reviewer_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::oda::Reviewer >&
Proposal::reviewer() const {
  // @@protoc_insertion_point(field_list:oda.Proposal.reviewer)
  return reviewer_;
}
inline ::google::protobuf::RepeatedPtrField< ::oda::Reviewer >*
Proposal::mutable_reviewer() {
  // @@protoc_insertion_point(field_mutable_list:oda.Proposal.reviewer)
  return &reviewer_;
}

// -------------------------------------------------------------------

// Reviewer

// required int32 id = 1;
inline bool Reviewer::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Reviewer::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Reviewer::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Reviewer::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Reviewer::id() const {
  // @@protoc_insertion_point(field_get:oda.Reviewer.id)
  return id_;
}
inline void Reviewer::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:oda.Reviewer.id)
}

// required string grade = 2;
inline bool Reviewer::has_grade() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Reviewer::set_has_grade() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Reviewer::clear_has_grade() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Reviewer::clear_grade() {
  if (grade_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    grade_->clear();
  }
  clear_has_grade();
}
inline const ::std::string& Reviewer::grade() const {
  // @@protoc_insertion_point(field_get:oda.Reviewer.grade)
  return *grade_;
}
inline void Reviewer::set_grade(const ::std::string& value) {
  set_has_grade();
  if (grade_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    grade_ = new ::std::string;
  }
  grade_->assign(value);
  // @@protoc_insertion_point(field_set:oda.Reviewer.grade)
}
inline void Reviewer::set_grade(const char* value) {
  set_has_grade();
  if (grade_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    grade_ = new ::std::string;
  }
  grade_->assign(value);
  // @@protoc_insertion_point(field_set_char:oda.Reviewer.grade)
}
inline void Reviewer::set_grade(const char* value, size_t size) {
  set_has_grade();
  if (grade_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    grade_ = new ::std::string;
  }
  grade_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:oda.Reviewer.grade)
}
inline ::std::string* Reviewer::mutable_grade() {
  set_has_grade();
  if (grade_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    grade_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:oda.Reviewer.grade)
  return grade_;
}
inline ::std::string* Reviewer::release_grade() {
  clear_has_grade();
  if (grade_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = grade_;
    grade_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Reviewer::set_allocated_grade(::std::string* grade) {
  if (grade_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete grade_;
  }
  if (grade) {
    set_has_grade();
    grade_ = grade;
  } else {
    clear_has_grade();
    grade_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:oda.Reviewer.grade)
}

// required string name = 3;
inline bool Reviewer::has_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Reviewer::set_has_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Reviewer::clear_has_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Reviewer::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Reviewer::name() const {
  // @@protoc_insertion_point(field_get:oda.Reviewer.name)
  return *name_;
}
inline void Reviewer::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:oda.Reviewer.name)
}
inline void Reviewer::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:oda.Reviewer.name)
}
inline void Reviewer::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:oda.Reviewer.name)
}
inline ::std::string* Reviewer::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:oda.Reviewer.name)
  return name_;
}
inline ::std::string* Reviewer::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Reviewer::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:oda.Reviewer.name)
}

// -------------------------------------------------------------------

// Oda

// repeated .oda.Proposal proposal = 1;
inline int Oda::proposal_size() const {
  return proposal_.size();
}
inline void Oda::clear_proposal() {
  proposal_.Clear();
}
inline const ::oda::Proposal& Oda::proposal(int index) const {
  // @@protoc_insertion_point(field_get:oda.Oda.proposal)
  return proposal_.Get(index);
}
inline ::oda::Proposal* Oda::mutable_proposal(int index) {
  // @@protoc_insertion_point(field_mutable:oda.Oda.proposal)
  return proposal_.Mutable(index);
}
inline ::oda::Proposal* Oda::add_proposal() {
  // @@protoc_insertion_point(field_add:oda.Oda.proposal)
  return proposal_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::oda::Proposal >&
Oda::proposal() const {
  // @@protoc_insertion_point(field_list:oda.Oda.proposal)
  return proposal_;
}
inline ::google::protobuf::RepeatedPtrField< ::oda::Proposal >*
Oda::mutable_proposal() {
  // @@protoc_insertion_point(field_mutable_list:oda.Oda.proposal)
  return &proposal_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace oda

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_oda_2eproto__INCLUDED
