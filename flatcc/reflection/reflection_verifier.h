#ifndef REFLECTION_VERIFIER_H
#define REFLECTION_VERIFIER_H

/* Generated by flatcc 0.5.2 FlatBuffers schema compiler for C by dvide.com */

#ifndef REFLECTION_READER_H
#include "reflection_reader.h"
#endif
#include "C:\Users\emile\Documents\Arduino\test\flatcc/flatcc_verifier.h"
#include "C:\Users\emile\Documents\Arduino\test\flatcc/flatcc_prologue.h"

static int reflection_Type_verify_table(flatcc_table_verifier_descriptor_t *td);
static int reflection_KeyValue_verify_table(flatcc_table_verifier_descriptor_t *td);
static int reflection_EnumVal_verify_table(flatcc_table_verifier_descriptor_t *td);
static int reflection_Enum_verify_table(flatcc_table_verifier_descriptor_t *td);
static int reflection_Field_verify_table(flatcc_table_verifier_descriptor_t *td);
static int reflection_Object_verify_table(flatcc_table_verifier_descriptor_t *td);
static int reflection_Schema_verify_table(flatcc_table_verifier_descriptor_t *td);

static int reflection_Type_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_field(td, 0, 1, 1) /* base_type */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 1, 1) /* element */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 4, 4) /* index */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_Type_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Type_identifier, &reflection_Type_verify_table);
}

static inline int reflection_Type_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Type_type_identifier, &reflection_Type_verify_table);
}

static inline int reflection_Type_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &reflection_Type_verify_table);
}

static inline int reflection_Type_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &reflection_Type_verify_table);
}

static int reflection_KeyValue_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_string_field(td, 0, 1) /* key */)) return ret;
    if ((ret = flatcc_verify_string_field(td, 1, 0) /* value */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_KeyValue_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_KeyValue_identifier, &reflection_KeyValue_verify_table);
}

static inline int reflection_KeyValue_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_KeyValue_type_identifier, &reflection_KeyValue_verify_table);
}

static inline int reflection_KeyValue_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &reflection_KeyValue_verify_table);
}

static inline int reflection_KeyValue_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &reflection_KeyValue_verify_table);
}

static int reflection_EnumVal_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_string_field(td, 0, 1) /* name */)) return ret;
    if ((ret = flatcc_verify_field(td, 1, 8, 8) /* value */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 2, 0, &reflection_Object_verify_table) /* object */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 3, 0, &reflection_Type_verify_table) /* union_type */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_EnumVal_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_EnumVal_identifier, &reflection_EnumVal_verify_table);
}

static inline int reflection_EnumVal_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_EnumVal_type_identifier, &reflection_EnumVal_verify_table);
}

static inline int reflection_EnumVal_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &reflection_EnumVal_verify_table);
}

static inline int reflection_EnumVal_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &reflection_EnumVal_verify_table);
}

static int reflection_Enum_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_string_field(td, 0, 1) /* name */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 1, 1, &reflection_EnumVal_verify_table) /* values */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 1, 1) /* is_union */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 3, 1, &reflection_Type_verify_table) /* underlying_type */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 4, 0, &reflection_KeyValue_verify_table) /* attributes */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_Enum_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Enum_identifier, &reflection_Enum_verify_table);
}

static inline int reflection_Enum_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Enum_type_identifier, &reflection_Enum_verify_table);
}

static inline int reflection_Enum_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &reflection_Enum_verify_table);
}

static inline int reflection_Enum_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &reflection_Enum_verify_table);
}

static int reflection_Field_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_string_field(td, 0, 1) /* name */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 1, 1, &reflection_Type_verify_table) /* type */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 2, 2) /* id */)) return ret;
    if ((ret = flatcc_verify_field(td, 3, 2, 2) /* offset */)) return ret;
    if ((ret = flatcc_verify_field(td, 4, 8, 8) /* default_integer */)) return ret;
    if ((ret = flatcc_verify_field(td, 5, 8, 8) /* default_real */)) return ret;
    if ((ret = flatcc_verify_field(td, 6, 1, 1) /* deprecated */)) return ret;
    if ((ret = flatcc_verify_field(td, 7, 1, 1) /* required */)) return ret;
    if ((ret = flatcc_verify_field(td, 8, 1, 1) /* key */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 9, 0, &reflection_KeyValue_verify_table) /* attributes */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_Field_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Field_identifier, &reflection_Field_verify_table);
}

static inline int reflection_Field_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Field_type_identifier, &reflection_Field_verify_table);
}

static inline int reflection_Field_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &reflection_Field_verify_table);
}

static inline int reflection_Field_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &reflection_Field_verify_table);
}

static int reflection_Object_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_string_field(td, 0, 1) /* name */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 1, 1, &reflection_Field_verify_table) /* fields */)) return ret;
    if ((ret = flatcc_verify_field(td, 2, 1, 1) /* is_struct */)) return ret;
    if ((ret = flatcc_verify_field(td, 3, 4, 4) /* minalign */)) return ret;
    if ((ret = flatcc_verify_field(td, 4, 4, 4) /* bytesize */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 5, 0, &reflection_KeyValue_verify_table) /* attributes */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_Object_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Object_identifier, &reflection_Object_verify_table);
}

static inline int reflection_Object_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Object_type_identifier, &reflection_Object_verify_table);
}

static inline int reflection_Object_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &reflection_Object_verify_table);
}

static inline int reflection_Object_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &reflection_Object_verify_table);
}

static int reflection_Schema_verify_table(flatcc_table_verifier_descriptor_t *td)
{
    int ret;
    if ((ret = flatcc_verify_table_vector_field(td, 0, 1, &reflection_Object_verify_table) /* objects */)) return ret;
    if ((ret = flatcc_verify_table_vector_field(td, 1, 1, &reflection_Enum_verify_table) /* enums */)) return ret;
    if ((ret = flatcc_verify_string_field(td, 2, 0) /* file_ident */)) return ret;
    if ((ret = flatcc_verify_string_field(td, 3, 0) /* file_ext */)) return ret;
    if ((ret = flatcc_verify_table_field(td, 4, 0, &reflection_Object_verify_table) /* root_table */)) return ret;
    return flatcc_verify_ok;
}

static inline int reflection_Schema_verify_as_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Schema_identifier, &reflection_Schema_verify_table);
}

static inline int reflection_Schema_verify_as_typed_root(const void *buf, size_t bufsiz)
{
    return flatcc_verify_table_as_root(buf, bufsiz, reflection_Schema_type_identifier, &reflection_Schema_verify_table);
}

static inline int reflection_Schema_verify_as_root_with_identifier(const void *buf, size_t bufsiz, const char *fid)
{
    return flatcc_verify_table_as_root(buf, bufsiz, fid, &reflection_Schema_verify_table);
}

static inline int reflection_Schema_verify_as_root_with_type_hash(const void *buf, size_t bufsiz, flatbuffers_thash_t thash)
{
    return flatcc_verify_table_as_typed_root(buf, bufsiz, thash, &reflection_Schema_verify_table);
}

#include "C:\Users\emile\Documents\Arduino\test\flatcc/flatcc_epilogue.h"
#endif /* REFLECTION_VERIFIER_H */