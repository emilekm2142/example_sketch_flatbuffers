#ifndef LAYOUTATTRIBUTES_READER_H
#define LAYOUTATTRIBUTES_READER_H

/* Generated by flatcc 0.5.2 FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"


#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif


typedef const struct AllWatchSerialize_LayoutAttributes_table *AllWatchSerialize_LayoutAttributes_table_t;
typedef const flatbuffers_uoffset_t *AllWatchSerialize_LayoutAttributes_vec_t;
typedef flatbuffers_uoffset_t *AllWatchSerialize_LayoutAttributes_mutable_vec_t;
#ifndef AllWatchSerialize_LayoutAttributes_identifier
#define AllWatchSerialize_LayoutAttributes_identifier 0
#endif
#define AllWatchSerialize_LayoutAttributes_type_hash ((flatbuffers_thash_t)0xc54bd01c)
#define AllWatchSerialize_LayoutAttributes_type_identifier "\x1c\xd0\x4b\xc5"



struct AllWatchSerialize_LayoutAttributes_table { uint8_t unused__; };

static inline size_t AllWatchSerialize_LayoutAttributes_vec_len(AllWatchSerialize_LayoutAttributes_vec_t vec)
__flatbuffers_vec_len(vec)
static inline AllWatchSerialize_LayoutAttributes_table_t AllWatchSerialize_LayoutAttributes_vec_at(AllWatchSerialize_LayoutAttributes_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(AllWatchSerialize_LayoutAttributes_table_t, vec, i, 0)
__flatbuffers_table_as_root(AllWatchSerialize_LayoutAttributes)

__flatbuffers_define_scalar_field(0, AllWatchSerialize_LayoutAttributes, spacing, flatbuffers_int16, int16_t, INT16_C(0))

#include "flatcc/flatcc_epilogue.h"
#endif /* LAYOUTATTRIBUTES_READER_H */
