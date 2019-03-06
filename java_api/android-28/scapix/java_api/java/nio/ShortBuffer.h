// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/Buffer.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_NIO_SHORTBUFFER_H
#define SCAPIX_JAVA_NIO_SHORTBUFFER_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::nio { class ByteOrder; }

namespace java::nio {

class ShortBuffer : public object_base<SCAPIX_META_STRING("java/nio/ShortBuffer"),
	java::nio::Buffer,
	java::lang::Comparable>
{
public:

	static ref<java::nio::ShortBuffer> allocate(jint capacity);
	static ref<java::nio::ShortBuffer> wrap(ref<link::java::array<jshort>> array, jint offset, jint length);
	static ref<java::nio::ShortBuffer> wrap(ref<link::java::array<jshort>> array);
	ref<java::nio::ShortBuffer> slice();
	ref<java::nio::ShortBuffer> duplicate();
	ref<java::nio::ShortBuffer> asReadOnlyBuffer();
	jshort get();
	ref<java::nio::ShortBuffer> put(jshort p1);
	jshort get(jint p1);
	ref<java::nio::ShortBuffer> put(jint p1, jshort p2);
	ref<java::nio::ShortBuffer> get(ref<link::java::array<jshort>> dst, jint offset, jint length);
	ref<java::nio::ShortBuffer> get(ref<link::java::array<jshort>> dst);
	ref<java::nio::ShortBuffer> put(ref<java::nio::ShortBuffer> src);
	ref<java::nio::ShortBuffer> put(ref<link::java::array<jshort>> src, jint offset, jint length);
	ref<java::nio::ShortBuffer> put(ref<link::java::array<jshort>> src);
	jboolean hasArray();
	ref<link::java::array<jshort>> array();
	jint arrayOffset();
	ref<java::nio::ShortBuffer> compact();
	jboolean isDirect();
	ref<java::lang::String> toString();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> ob);
	jint compareTo(ref<java::nio::ShortBuffer> that);
	ref<java::nio::ByteOrder> order();

protected:

	ShortBuffer(handle_type h) : base_(h) {}

};

} // namespace java::nio
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteOrder.h>

namespace scapix::java_api {
namespace java::nio {

inline ref<java::nio::ShortBuffer> ShortBuffer::allocate(jint capacity) { return call_static_method<SCAPIX_META_STRING("allocate"), ref<java::nio::ShortBuffer>>(capacity); }
inline ref<java::nio::ShortBuffer> ShortBuffer::wrap(ref<link::java::array<jshort>> array, jint offset, jint length) { return call_static_method<SCAPIX_META_STRING("wrap"), ref<java::nio::ShortBuffer>>(array, offset, length); }
inline ref<java::nio::ShortBuffer> ShortBuffer::wrap(ref<link::java::array<jshort>> array) { return call_static_method<SCAPIX_META_STRING("wrap"), ref<java::nio::ShortBuffer>>(array); }
inline ref<java::nio::ShortBuffer> ShortBuffer::slice() { return call_method<SCAPIX_META_STRING("slice"), ref<java::nio::ShortBuffer>>(); }
inline ref<java::nio::ShortBuffer> ShortBuffer::duplicate() { return call_method<SCAPIX_META_STRING("duplicate"), ref<java::nio::ShortBuffer>>(); }
inline ref<java::nio::ShortBuffer> ShortBuffer::asReadOnlyBuffer() { return call_method<SCAPIX_META_STRING("asReadOnlyBuffer"), ref<java::nio::ShortBuffer>>(); }
inline jshort ShortBuffer::get() { return call_method<SCAPIX_META_STRING("get"), jshort>(); }
inline ref<java::nio::ShortBuffer> ShortBuffer::put(jshort p1) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::ShortBuffer>>(p1); }
inline jshort ShortBuffer::get(jint p1) { return call_method<SCAPIX_META_STRING("get"), jshort>(p1); }
inline ref<java::nio::ShortBuffer> ShortBuffer::put(jint p1, jshort p2) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::ShortBuffer>>(p1, p2); }
inline ref<java::nio::ShortBuffer> ShortBuffer::get(ref<link::java::array<jshort>> dst, jint offset, jint length) { return call_method<SCAPIX_META_STRING("get"), ref<java::nio::ShortBuffer>>(dst, offset, length); }
inline ref<java::nio::ShortBuffer> ShortBuffer::get(ref<link::java::array<jshort>> dst) { return call_method<SCAPIX_META_STRING("get"), ref<java::nio::ShortBuffer>>(dst); }
inline ref<java::nio::ShortBuffer> ShortBuffer::put(ref<java::nio::ShortBuffer> src) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::ShortBuffer>>(src); }
inline ref<java::nio::ShortBuffer> ShortBuffer::put(ref<link::java::array<jshort>> src, jint offset, jint length) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::ShortBuffer>>(src, offset, length); }
inline ref<java::nio::ShortBuffer> ShortBuffer::put(ref<link::java::array<jshort>> src) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::ShortBuffer>>(src); }
inline jboolean ShortBuffer::hasArray() { return call_method<SCAPIX_META_STRING("hasArray"), jboolean>(); }
inline ref<link::java::array<jshort>> ShortBuffer::array() { return call_method<SCAPIX_META_STRING("array"), ref<link::java::array<jshort>>>(); }
inline jint ShortBuffer::arrayOffset() { return call_method<SCAPIX_META_STRING("arrayOffset"), jint>(); }
inline ref<java::nio::ShortBuffer> ShortBuffer::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<java::nio::ShortBuffer>>(); }
inline jboolean ShortBuffer::isDirect() { return call_method<SCAPIX_META_STRING("isDirect"), jboolean>(); }
inline ref<java::lang::String> ShortBuffer::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint ShortBuffer::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean ShortBuffer::equals(ref<java::lang::Object> ob) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(ob); }
inline jint ShortBuffer::compareTo(ref<java::nio::ShortBuffer> that) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(that); }
inline ref<java::nio::ByteOrder> ShortBuffer::order() { return call_method<SCAPIX_META_STRING("order"), ref<java::nio::ByteOrder>>(); }

} // namespace java::nio
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_SHORTBUFFER_H
