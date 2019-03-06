// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_STREAMSHAPE_H
#define SCAPIX_JAVA_UTIL_STREAM_STREAMSHAPE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::util::stream {

// private
class StreamShape : public object_base<SCAPIX_META_STRING("java/util/stream/StreamShape"),
	java::lang::Enum>
{
public:

	static ref<java::util::stream::StreamShape> REFERENCE_();
	static ref<java::util::stream::StreamShape> INT_VALUE_();
	static ref<java::util::stream::StreamShape> LONG_VALUE_();
	static ref<java::util::stream::StreamShape> DOUBLE_VALUE_();

	static ref<link::java::array<java::util::stream::StreamShape>> values();
	static ref<java::util::stream::StreamShape> valueOf(ref<java::lang::String> name);

protected:

	StreamShape(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::util::stream {

inline ref<java::util::stream::StreamShape> StreamShape::REFERENCE_() { return get_static_field<SCAPIX_META_STRING("REFERENCE"), ref<java::util::stream::StreamShape>>(); }
inline ref<java::util::stream::StreamShape> StreamShape::INT_VALUE_() { return get_static_field<SCAPIX_META_STRING("INT_VALUE"), ref<java::util::stream::StreamShape>>(); }
inline ref<java::util::stream::StreamShape> StreamShape::LONG_VALUE_() { return get_static_field<SCAPIX_META_STRING("LONG_VALUE"), ref<java::util::stream::StreamShape>>(); }
inline ref<java::util::stream::StreamShape> StreamShape::DOUBLE_VALUE_() { return get_static_field<SCAPIX_META_STRING("DOUBLE_VALUE"), ref<java::util::stream::StreamShape>>(); }
inline ref<link::java::array<java::util::stream::StreamShape>> StreamShape::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<java::util::stream::StreamShape>>>(); }
inline ref<java::util::stream::StreamShape> StreamShape::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::util::stream::StreamShape>>(name); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_STREAMSHAPE_H
