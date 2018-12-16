// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chat.proto

#ifndef PROTOBUF_INCLUDED_chat_2eproto
#define PROTOBUF_INCLUDED_chat_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_chat_2eproto 

namespace protobuf_chat_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_chat_2eproto
namespace pr {
class chatMessagePB;
class chatMessagePBDefaultTypeInternal;
extern chatMessagePBDefaultTypeInternal _chatMessagePB_default_instance_;
}  // namespace pr
namespace google {
namespace protobuf {
template<> ::pr::chatMessagePB* Arena::CreateMaybeMessage<::pr::chatMessagePB>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace pr {

// ===================================================================

class chatMessagePB : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pr.chatMessagePB) */ {
 public:
  chatMessagePB();
  virtual ~chatMessagePB();

  chatMessagePB(const chatMessagePB& from);

  inline chatMessagePB& operator=(const chatMessagePB& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  chatMessagePB(chatMessagePB&& from) noexcept
    : chatMessagePB() {
    *this = ::std::move(from);
  }

  inline chatMessagePB& operator=(chatMessagePB&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const chatMessagePB& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const chatMessagePB* internal_default_instance() {
    return reinterpret_cast<const chatMessagePB*>(
               &_chatMessagePB_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(chatMessagePB* other);
  friend void swap(chatMessagePB& a, chatMessagePB& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline chatMessagePB* New() const final {
    return CreateMaybeMessage<chatMessagePB>(NULL);
  }

  chatMessagePB* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<chatMessagePB>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const chatMessagePB& from);
  void MergeFrom(const chatMessagePB& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(chatMessagePB* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string author = 1;
  void clear_author();
  static const int kAuthorFieldNumber = 1;
  const ::std::string& author() const;
  void set_author(const ::std::string& value);
  #if LANG_CXX11
  void set_author(::std::string&& value);
  #endif
  void set_author(const char* value);
  void set_author(const char* value, size_t size);
  ::std::string* mutable_author();
  ::std::string* release_author();
  void set_allocated_author(::std::string* author);

  // string mes = 2;
  void clear_mes();
  static const int kMesFieldNumber = 2;
  const ::std::string& mes() const;
  void set_mes(const ::std::string& value);
  #if LANG_CXX11
  void set_mes(::std::string&& value);
  #endif
  void set_mes(const char* value);
  void set_mes(const char* value, size_t size);
  ::std::string* mutable_mes();
  ::std::string* release_mes();
  void set_allocated_mes(::std::string* mes);

  // @@protoc_insertion_point(class_scope:pr.chatMessagePB)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr author_;
  ::google::protobuf::internal::ArenaStringPtr mes_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_chat_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// chatMessagePB

// string author = 1;
inline void chatMessagePB::clear_author() {
  author_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& chatMessagePB::author() const {
  // @@protoc_insertion_point(field_get:pr.chatMessagePB.author)
  return author_.GetNoArena();
}
inline void chatMessagePB::set_author(const ::std::string& value) {
  
  author_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pr.chatMessagePB.author)
}
#if LANG_CXX11
inline void chatMessagePB::set_author(::std::string&& value) {
  
  author_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pr.chatMessagePB.author)
}
#endif
inline void chatMessagePB::set_author(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  author_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pr.chatMessagePB.author)
}
inline void chatMessagePB::set_author(const char* value, size_t size) {
  
  author_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pr.chatMessagePB.author)
}
inline ::std::string* chatMessagePB::mutable_author() {
  
  // @@protoc_insertion_point(field_mutable:pr.chatMessagePB.author)
  return author_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* chatMessagePB::release_author() {
  // @@protoc_insertion_point(field_release:pr.chatMessagePB.author)
  
  return author_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void chatMessagePB::set_allocated_author(::std::string* author) {
  if (author != NULL) {
    
  } else {
    
  }
  author_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), author);
  // @@protoc_insertion_point(field_set_allocated:pr.chatMessagePB.author)
}

// string mes = 2;
inline void chatMessagePB::clear_mes() {
  mes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& chatMessagePB::mes() const {
  // @@protoc_insertion_point(field_get:pr.chatMessagePB.mes)
  return mes_.GetNoArena();
}
inline void chatMessagePB::set_mes(const ::std::string& value) {
  
  mes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pr.chatMessagePB.mes)
}
#if LANG_CXX11
inline void chatMessagePB::set_mes(::std::string&& value) {
  
  mes_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pr.chatMessagePB.mes)
}
#endif
inline void chatMessagePB::set_mes(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  mes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pr.chatMessagePB.mes)
}
inline void chatMessagePB::set_mes(const char* value, size_t size) {
  
  mes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pr.chatMessagePB.mes)
}
inline ::std::string* chatMessagePB::mutable_mes() {
  
  // @@protoc_insertion_point(field_mutable:pr.chatMessagePB.mes)
  return mes_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* chatMessagePB::release_mes() {
  // @@protoc_insertion_point(field_release:pr.chatMessagePB.mes)
  
  return mes_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void chatMessagePB::set_allocated_mes(::std::string* mes) {
  if (mes != NULL) {
    
  } else {
    
  }
  mes_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mes);
  // @@protoc_insertion_point(field_set_allocated:pr.chatMessagePB.mes)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace pr

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_chat_2eproto