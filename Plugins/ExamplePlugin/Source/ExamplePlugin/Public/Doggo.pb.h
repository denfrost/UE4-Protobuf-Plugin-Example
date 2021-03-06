// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Doggo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Doggo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Doggo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Doggo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Doggo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Doggo_2eproto;
class Doggo;
class DoggoDefaultTypeInternal;
extern DoggoDefaultTypeInternal _Doggo_default_instance_;
class Kennel;
class KennelDefaultTypeInternal;
extern KennelDefaultTypeInternal _Kennel_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Doggo* Arena::CreateMaybeMessage<::Doggo>(Arena*);
template<> ::Kennel* Arena::CreateMaybeMessage<::Kennel>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Doggo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Doggo) */ {
 public:
  Doggo();
  virtual ~Doggo();

  Doggo(const Doggo& from);
  Doggo(Doggo&& from) noexcept
    : Doggo() {
    *this = ::std::move(from);
  }

  inline Doggo& operator=(const Doggo& from) {
    CopyFrom(from);
    return *this;
  }
  inline Doggo& operator=(Doggo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Doggo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Doggo* internal_default_instance() {
    return reinterpret_cast<const Doggo*>(
               &_Doggo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Doggo& a, Doggo& b) {
    a.Swap(&b);
  }
  inline void Swap(Doggo* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Doggo* New() const final {
    return CreateMaybeMessage<Doggo>(nullptr);
  }

  Doggo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Doggo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Doggo& from);
  void MergeFrom(const Doggo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Doggo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Doggo";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Doggo_2eproto);
    return ::descriptor_table_Doggo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kAgeFieldNumber = 2,
    kGoodBoynessFieldNumber = 3,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 age = 2;
  void clear_age();
  ::PROTOBUF_NAMESPACE_ID::int32 age() const;
  void set_age(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_age() const;
  void _internal_set_age(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // float goodBoyness = 3;
  void clear_goodboyness();
  float goodboyness() const;
  void set_goodboyness(float value);
  private:
  float _internal_goodboyness() const;
  void _internal_set_goodboyness(float value);
  public:

  // @@protoc_insertion_point(class_scope:Doggo)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int32 age_;
  float goodboyness_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Doggo_2eproto;
};
// -------------------------------------------------------------------

class Kennel :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Kennel) */ {
 public:
  Kennel();
  virtual ~Kennel();

  Kennel(const Kennel& from);
  Kennel(Kennel&& from) noexcept
    : Kennel() {
    *this = ::std::move(from);
  }

  inline Kennel& operator=(const Kennel& from) {
    CopyFrom(from);
    return *this;
  }
  inline Kennel& operator=(Kennel&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Kennel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Kennel* internal_default_instance() {
    return reinterpret_cast<const Kennel*>(
               &_Kennel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Kennel& a, Kennel& b) {
    a.Swap(&b);
  }
  inline void Swap(Kennel* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Kennel* New() const final {
    return CreateMaybeMessage<Kennel>(nullptr);
  }

  Kennel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Kennel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Kennel& from);
  void MergeFrom(const Kennel& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Kennel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Kennel";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Doggo_2eproto);
    return ::descriptor_table_Doggo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGoodBoysFieldNumber = 1,
    kNameFieldNumber = 2,
  };
  // repeated .Doggo goodBoys = 1;
  int goodboys_size() const;
  private:
  int _internal_goodboys_size() const;
  public:
  void clear_goodboys();
  ::Doggo* mutable_goodboys(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Doggo >*
      mutable_goodboys();
  private:
  const ::Doggo& _internal_goodboys(int index) const;
  ::Doggo* _internal_add_goodboys();
  public:
  const ::Doggo& goodboys(int index) const;
  ::Doggo* add_goodboys();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Doggo >&
      goodboys() const;

  // string name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // @@protoc_insertion_point(class_scope:Kennel)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Doggo > goodboys_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Doggo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Doggo

// string name = 1;
inline void Doggo::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Doggo::name() const {
  // @@protoc_insertion_point(field_get:Doggo.name)
  return _internal_name();
}
inline void Doggo::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Doggo.name)
}
inline std::string* Doggo::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Doggo.name)
  return _internal_mutable_name();
}
inline const std::string& Doggo::_internal_name() const {
  return name_.GetNoArena();
}
inline void Doggo::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Doggo::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Doggo.name)
}
inline void Doggo::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Doggo.name)
}
inline void Doggo::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Doggo.name)
}
inline std::string* Doggo::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Doggo::release_name() {
  // @@protoc_insertion_point(field_release:Doggo.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Doggo::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Doggo.name)
}

// int32 age = 2;
inline void Doggo::clear_age() {
  age_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Doggo::_internal_age() const {
  return age_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Doggo::age() const {
  // @@protoc_insertion_point(field_get:Doggo.age)
  return _internal_age();
}
inline void Doggo::_internal_set_age(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  age_ = value;
}
inline void Doggo::set_age(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:Doggo.age)
}

// float goodBoyness = 3;
inline void Doggo::clear_goodboyness() {
  goodboyness_ = 0;
}
inline float Doggo::_internal_goodboyness() const {
  return goodboyness_;
}
inline float Doggo::goodboyness() const {
  // @@protoc_insertion_point(field_get:Doggo.goodBoyness)
  return _internal_goodboyness();
}
inline void Doggo::_internal_set_goodboyness(float value) {
  
  goodboyness_ = value;
}
inline void Doggo::set_goodboyness(float value) {
  _internal_set_goodboyness(value);
  // @@protoc_insertion_point(field_set:Doggo.goodBoyness)
}

// -------------------------------------------------------------------

// Kennel

// repeated .Doggo goodBoys = 1;
inline int Kennel::_internal_goodboys_size() const {
  return goodboys_.size();
}
inline int Kennel::goodboys_size() const {
  return _internal_goodboys_size();
}
inline void Kennel::clear_goodboys() {
  goodboys_.Clear();
}
inline ::Doggo* Kennel::mutable_goodboys(int index) {
  // @@protoc_insertion_point(field_mutable:Kennel.goodBoys)
  return goodboys_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Doggo >*
Kennel::mutable_goodboys() {
  // @@protoc_insertion_point(field_mutable_list:Kennel.goodBoys)
  return &goodboys_;
}
inline const ::Doggo& Kennel::_internal_goodboys(int index) const {
  return goodboys_.Get(index);
}
inline const ::Doggo& Kennel::goodboys(int index) const {
  // @@protoc_insertion_point(field_get:Kennel.goodBoys)
  return _internal_goodboys(index);
}
inline ::Doggo* Kennel::_internal_add_goodboys() {
  return goodboys_.Add();
}
inline ::Doggo* Kennel::add_goodboys() {
  // @@protoc_insertion_point(field_add:Kennel.goodBoys)
  return _internal_add_goodboys();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Doggo >&
Kennel::goodboys() const {
  // @@protoc_insertion_point(field_list:Kennel.goodBoys)
  return goodboys_;
}

// string name = 2;
inline void Kennel::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Kennel::name() const {
  // @@protoc_insertion_point(field_get:Kennel.name)
  return _internal_name();
}
inline void Kennel::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Kennel.name)
}
inline std::string* Kennel::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Kennel.name)
  return _internal_mutable_name();
}
inline const std::string& Kennel::_internal_name() const {
  return name_.GetNoArena();
}
inline void Kennel::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Kennel::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Kennel.name)
}
inline void Kennel::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Kennel.name)
}
inline void Kennel::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Kennel.name)
}
inline std::string* Kennel::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Kennel::release_name() {
  // @@protoc_insertion_point(field_release:Kennel.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Kennel::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Kennel.name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Doggo_2eproto
