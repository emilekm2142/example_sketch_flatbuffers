#ifndef TEMPLATE_READER_H
#define TEMPLATE_READER_H

/* Generated by flatcc 0.5.2 FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
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


typedef const struct AllWatchSerialize_Template_table *AllWatchSerialize_Template_table_t;
typedef const flatbuffers_uoffset_t *AllWatchSerialize_Template_vec_t;
typedef flatbuffers_uoffset_t *AllWatchSerialize_Template_mutable_vec_t;
#ifndef AllWatchSerialize_Template_identifier
#define AllWatchSerialize_Template_identifier flatbuffers_identifier
#endif
#define AllWatchSerialize_Template_type_hash ((flatbuffers_thash_t)0x506fd485)
#define AllWatchSerialize_Template_type_identifier "\x85\xd4\x6f\x50"



struct AllWatchSerialize_Template_table { uint8_t unused__; };

static inline size_t AllWatchSerialize_Template_vec_len(AllWatchSerialize_Template_vec_t vec)
__flatbuffers_vec_len(vec)
static inline AllWatchSerialize_Template_table_t AllWatchSerialize_Template_vec_at(AllWatchSerialize_Template_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(AllWatchSerialize_Template_table_t, vec, i, 0)
__flatbuffers_table_as_root(AllWatchSerialize_Template)

__flatbuffers_define_string_field(0, AllWatchSerialize_Template, id, 0)

#include "flatcc/flatcc_epilogue.h"
#endif /* TEMPLATE_READER_H */
