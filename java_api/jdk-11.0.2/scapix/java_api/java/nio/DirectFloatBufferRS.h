// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/DirectFloatBufferS.h>
#include <scapix/java_api/sun/nio/ch/DirectBuffer.h>

#ifndef SCAPIX_JAVA_NIO_DIRECTFLOATBUFFERRS_H
#define SCAPIX_JAVA_NIO_DIRECTFLOATBUFFERRS_H

namespace scapix::java_api {

namespace java::nio { class ByteOrder; }
namespace java::nio { class FloatBuffer; }

namespace java::nio {

// private
class DirectFloatBufferRS : public object_base<SCAPIX_META_STRING("java/nio/DirectFloatBufferRS"),
	java::nio::DirectFloatBufferS,
	sun::nio::ch::DirectBuffer>
{
public:

	ref<java::nio::FloatBuffer> slice();
	ref<java::nio::FloatBuffer> duplicate();
	ref<java::nio::FloatBuffer> asReadOnlyBuffer();
	ref<java::nio::FloatBuffer> put(jfloat x);
	ref<java::nio::FloatBuffer> put(jint i, jfloat x);
	ref<java::nio::FloatBuffer> put(ref<java::nio::FloatBuffer> src);
	ref<java::nio::FloatBuffer> put(ref<link::java::array<jfloat>> src, jint offset, jint length);
	ref<java::nio::FloatBuffer> compact();
	jboolean isDirect();
	jboolean isReadOnly();
	ref<java::nio::ByteOrder> order();

protected:

	DirectFloatBufferRS(handle_type h) : base_(h) {}

};

} // namespace java::nio
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/FloatBuffer.h>

namespace scapix::java_api {
namespace java::nio {

inline ref<java::nio::FloatBuffer> DirectFloatBufferRS::slice() { return call_method<SCAPIX_META_STRING("slice"), ref<java::nio::FloatBuffer>>(); }
inline ref<java::nio::FloatBuffer> DirectFloatBufferRS::duplicate() { return call_method<SCAPIX_META_STRING("duplicate"), ref<java::nio::FloatBuffer>>(); }
inline ref<java::nio::FloatBuffer> DirectFloatBufferRS::asReadOnlyBuffer() { return call_method<SCAPIX_META_STRING("asReadOnlyBuffer"), ref<java::nio::FloatBuffer>>(); }
inline ref<java::nio::FloatBuffer> DirectFloatBufferRS::put(jfloat x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::FloatBuffer>>(x); }
inline ref<java::nio::FloatBuffer> DirectFloatBufferRS::put(jint i, jfloat x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::FloatBuffer>>(i, x); }
inline ref<java::nio::FloatBuffer> DirectFloatBufferRS::put(ref<java::nio::FloatBuffer> src) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::FloatBuffer>>(src); }
inline ref<java::nio::FloatBuffer> DirectFloatBufferRS::put(ref<link::java::array<jfloat>> src, jint offset, jint length) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::FloatBuffer>>(src, offset, length); }
inline ref<java::nio::FloatBuffer> DirectFloatBufferRS::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<java::nio::FloatBuffer>>(); }
inline jboolean DirectFloatBufferRS::isDirect() { return call_method<SCAPIX_META_STRING("isDirect"), jboolean>(); }
inline jboolean DirectFloatBufferRS::isReadOnly() { return call_method<SCAPIX_META_STRING("isReadOnly"), jboolean>(); }
inline ref<java::nio::ByteOrder> DirectFloatBufferRS::order() { return call_method<SCAPIX_META_STRING("order"), ref<java::nio::ByteOrder>>(); }

} // namespace java::nio
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_DIRECTFLOATBUFFERRS_H
