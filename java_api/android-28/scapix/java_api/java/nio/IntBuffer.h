// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/Buffer.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_NIO_INTBUFFER_H
#define SCAPIX_JAVA_NIO_INTBUFFER_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::nio { class ByteOrder; }

namespace java::nio {

class IntBuffer : public object_base<SCAPIX_META_STRING("java/nio/IntBuffer"),
	java::nio::Buffer,
	java::lang::Comparable>
{
public:

	static ref<java::nio::IntBuffer> allocate(jint capacity);
	static ref<java::nio::IntBuffer> wrap(ref<link::java::array<jint>> array, jint offset, jint length);
	static ref<java::nio::IntBuffer> wrap(ref<link::java::array<jint>> array);
	ref<java::nio::IntBuffer> slice();
	ref<java::nio::IntBuffer> duplicate();
	ref<java::nio::IntBuffer> asReadOnlyBuffer();
	jint get();
	ref<java::nio::IntBuffer> put(jint p1);
	jint get(jint p1);
	ref<java::nio::IntBuffer> put(jint p1, jint p2);
	ref<java::nio::IntBuffer> get(ref<link::java::array<jint>> dst, jint offset, jint length);
	ref<java::nio::IntBuffer> get(ref<link::java::array<jint>> dst);
	ref<java::nio::IntBuffer> put(ref<java::nio::IntBuffer> src);
	ref<java::nio::IntBuffer> put(ref<link::java::array<jint>> src, jint offset, jint length);
	ref<java::nio::IntBuffer> put(ref<link::java::array<jint>> src);
	jboolean hasArray();
	ref<link::java::array<jint>> array();
	jint arrayOffset();
	ref<java::nio::IntBuffer> compact();
	jboolean isDirect();
	ref<java::lang::String> toString();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> ob);
	jint compareTo(ref<java::nio::IntBuffer> that);
	ref<java::nio::ByteOrder> order();

protected:

	IntBuffer(handle_type h) : base_(h) {}

};

} // namespace java::nio
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteOrder.h>

namespace scapix::java_api {
namespace java::nio {

inline ref<java::nio::IntBuffer> IntBuffer::allocate(jint capacity) { return call_static_method<SCAPIX_META_STRING("allocate"), ref<java::nio::IntBuffer>>(capacity); }
inline ref<java::nio::IntBuffer> IntBuffer::wrap(ref<link::java::array<jint>> array, jint offset, jint length) { return call_static_method<SCAPIX_META_STRING("wrap"), ref<java::nio::IntBuffer>>(array, offset, length); }
inline ref<java::nio::IntBuffer> IntBuffer::wrap(ref<link::java::array<jint>> array) { return call_static_method<SCAPIX_META_STRING("wrap"), ref<java::nio::IntBuffer>>(array); }
inline ref<java::nio::IntBuffer> IntBuffer::slice() { return call_method<SCAPIX_META_STRING("slice"), ref<java::nio::IntBuffer>>(); }
inline ref<java::nio::IntBuffer> IntBuffer::duplicate() { return call_method<SCAPIX_META_STRING("duplicate"), ref<java::nio::IntBuffer>>(); }
inline ref<java::nio::IntBuffer> IntBuffer::asReadOnlyBuffer() { return call_method<SCAPIX_META_STRING("asReadOnlyBuffer"), ref<java::nio::IntBuffer>>(); }
inline jint IntBuffer::get() { return call_method<SCAPIX_META_STRING("get"), jint>(); }
inline ref<java::nio::IntBuffer> IntBuffer::put(jint p1) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::IntBuffer>>(p1); }
inline jint IntBuffer::get(jint p1) { return call_method<SCAPIX_META_STRING("get"), jint>(p1); }
inline ref<java::nio::IntBuffer> IntBuffer::put(jint p1, jint p2) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::IntBuffer>>(p1, p2); }
inline ref<java::nio::IntBuffer> IntBuffer::get(ref<link::java::array<jint>> dst, jint offset, jint length) { return call_method<SCAPIX_META_STRING("get"), ref<java::nio::IntBuffer>>(dst, offset, length); }
inline ref<java::nio::IntBuffer> IntBuffer::get(ref<link::java::array<jint>> dst) { return call_method<SCAPIX_META_STRING("get"), ref<java::nio::IntBuffer>>(dst); }
inline ref<java::nio::IntBuffer> IntBuffer::put(ref<java::nio::IntBuffer> src) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::IntBuffer>>(src); }
inline ref<java::nio::IntBuffer> IntBuffer::put(ref<link::java::array<jint>> src, jint offset, jint length) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::IntBuffer>>(src, offset, length); }
inline ref<java::nio::IntBuffer> IntBuffer::put(ref<link::java::array<jint>> src) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::IntBuffer>>(src); }
inline jboolean IntBuffer::hasArray() { return call_method<SCAPIX_META_STRING("hasArray"), jboolean>(); }
inline ref<link::java::array<jint>> IntBuffer::array() { return call_method<SCAPIX_META_STRING("array"), ref<link::java::array<jint>>>(); }
inline jint IntBuffer::arrayOffset() { return call_method<SCAPIX_META_STRING("arrayOffset"), jint>(); }
inline ref<java::nio::IntBuffer> IntBuffer::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<java::nio::IntBuffer>>(); }
inline jboolean IntBuffer::isDirect() { return call_method<SCAPIX_META_STRING("isDirect"), jboolean>(); }
inline ref<java::lang::String> IntBuffer::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint IntBuffer::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean IntBuffer::equals(ref<java::lang::Object> ob) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(ob); }
inline jint IntBuffer::compareTo(ref<java::nio::IntBuffer> that) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(that); }
inline ref<java::nio::ByteOrder> IntBuffer::order() { return call_method<SCAPIX_META_STRING("order"), ref<java::nio::ByteOrder>>(); }

} // namespace java::nio
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_INTBUFFER_H
