#ifndef HANDSHAKE_READER_H
#define HANDSHAKE_READER_H

/* Generated by flatcc 0.5.2 FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#ifndef REQUIREMENTS_READER_H
#include "Requirements_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif


typedef const struct AllWatchSerialize_Handshake_table *AllWatchSerialize_Handshake_table_t;
typedef const flatbuffers_uoffset_t *AllWatchSerialize_Handshake_vec_t;
typedef flatbuffers_uoffset_t *AllWatchSerialize_Handshake_mutable_vec_t;
#ifndef AllWatchSerialize_Handshake_identifier
#define AllWatchSerialize_Handshake_identifier flatbuffers_identifier
#endif
#define AllWatchSerialize_Handshake_type_hash ((flatbuffers_thash_t)0xb7040d68)
#define AllWatchSerialize_Handshake_type_identifier "\x68\x0d\x04\xb7"



struct AllWatchSerialize_Handshake_table { uint8_t unused__; };

static inline size_t AllWatchSerialize_Handshake_vec_len(AllWatchSerialize_Handshake_vec_t vec)
__flatbuffers_vec_len(vec)
static inline AllWatchSerialize_Handshake_table_t AllWatchSerialize_Handshake_vec_at(AllWatchSerialize_Handshake_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(AllWatchSerialize_Handshake_table_t, vec, i, 0)
__flatbuffers_table_as_root(AllWatchSerialize_Handshake)

__flatbuffers_define_string_field(0, AllWatchSerialize_Handshake, manufacturer, 0)
__flatbuffers_define_string_field(1, AllWatchSerialize_Handshake, modelName, 0)
__flatbuffers_define_string_field(2, AllWatchSerialize_Handshake, extraModelInfo, 0)
__flatbuffers_define_string_field(3, AllWatchSerialize_Handshake, firmwareVersion, 0)
__flatbuffers_define_scalar_field(4, AllWatchSerialize_Handshake, bufferKbSize, flatbuffers_uint16, uint16_t, UINT16_C(0))
__flatbuffers_define_scalar_field(5, AllWatchSerialize_Handshake, usesEncryption, flatbuffers_bool, flatbuffers_bool_t, UINT8_C(0))
__flatbuffers_define_vector_field(6, AllWatchSerialize_Handshake, requirements, AllWatchSerialize_Requirements_vec_t, 0)

#include "flatcc/flatcc_epilogue.h"
#endif /* HANDSHAKE_READER_H */
