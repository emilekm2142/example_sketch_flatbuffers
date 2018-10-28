#ifndef REQUIREMENTS_READER_H
#define REQUIREMENTS_READER_H

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



typedef int16_t AllWatchSerialize_Requirements_enum_t;
__flatbuffers_define_integer_type(AllWatchSerialize_Requirements, AllWatchSerialize_Requirements_enum_t, 16)
#define AllWatchSerialize_Requirements_color ((AllWatchSerialize_Requirements_enum_t)INT16_C(0))
#define AllWatchSerialize_Requirements_images ((AllWatchSerialize_Requirements_enum_t)INT16_C(1))
#define AllWatchSerialize_Requirements_templates ((AllWatchSerialize_Requirements_enum_t)INT16_C(2))
#define AllWatchSerialize_Requirements_unicode ((AllWatchSerialize_Requirements_enum_t)INT16_C(3))
#define AllWatchSerialize_Requirements_icons ((AllWatchSerialize_Requirements_enum_t)INT16_C(4))
#define AllWatchSerialize_Requirements_png ((AllWatchSerialize_Requirements_enum_t)INT16_C(5))
#define AllWatchSerialize_Requirements_touchscreen ((AllWatchSerialize_Requirements_enum_t)INT16_C(6))

static inline const char *AllWatchSerialize_Requirements_name(AllWatchSerialize_Requirements_enum_t value)
{
    switch (value) {
    case AllWatchSerialize_Requirements_color: return "color";
    case AllWatchSerialize_Requirements_images: return "images";
    case AllWatchSerialize_Requirements_templates: return "templates";
    case AllWatchSerialize_Requirements_unicode: return "unicode";
    case AllWatchSerialize_Requirements_icons: return "icons";
    case AllWatchSerialize_Requirements_png: return "png";
    case AllWatchSerialize_Requirements_touchscreen: return "touchscreen";
    default: return "";
    }
}

static inline int AllWatchSerialize_Requirements_is_known_value(AllWatchSerialize_Requirements_enum_t value)
{
    switch (value) {
    case AllWatchSerialize_Requirements_color: return 1;
    case AllWatchSerialize_Requirements_images: return 1;
    case AllWatchSerialize_Requirements_templates: return 1;
    case AllWatchSerialize_Requirements_unicode: return 1;
    case AllWatchSerialize_Requirements_icons: return 1;
    case AllWatchSerialize_Requirements_png: return 1;
    case AllWatchSerialize_Requirements_touchscreen: return 1;
    default: return 0;
    }
}



#include "flatcc/flatcc_epilogue.h"
#endif /* REQUIREMENTS_READER_H */