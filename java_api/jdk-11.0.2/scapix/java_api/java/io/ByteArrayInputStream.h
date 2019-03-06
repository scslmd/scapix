// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_IO_BYTEARRAYINPUTSTREAM_H
#define SCAPIX_JAVA_IO_BYTEARRAYINPUTSTREAM_H

namespace scapix::java_api {

namespace java::io { class OutputStream; }

namespace java::io {

class ByteArrayInputStream : public object_base<SCAPIX_META_STRING("java/io/ByteArrayInputStream"),
	java::io::InputStream>
{
public:

	static ref<ByteArrayInputStream> new_object(ref<link::java::array<jbyte>> buf);
	static ref<ByteArrayInputStream> new_object(ref<link::java::array<jbyte>> buf, jint offset, jint length);
	jint read();
	jint read(ref<link::java::array<jbyte>> b, jint off, jint len);
	ref<link::java::array<jbyte>> readAllBytes();
	jint readNBytes(ref<link::java::array<jbyte>> b, jint off, jint len);
	jlong transferTo(ref<java::io::OutputStream> out);
	jlong skip(jlong n);
	jint available();
	jboolean markSupported();
	void mark(jint readAheadLimit);
	void reset();
	void close();

protected:

	ByteArrayInputStream(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api

#include <scapix/java_api/java/io/OutputStream.h>

namespace scapix::java_api {
namespace java::io {

inline ref<ByteArrayInputStream> ByteArrayInputStream::new_object(ref<link::java::array<jbyte>> buf) { return base_::new_object(buf); }
inline ref<ByteArrayInputStream> ByteArrayInputStream::new_object(ref<link::java::array<jbyte>> buf, jint offset, jint length) { return base_::new_object(buf, offset, length); }
inline jint ByteArrayInputStream::read() { return call_method<SCAPIX_META_STRING("read"), jint>(); }
inline jint ByteArrayInputStream::read(ref<link::java::array<jbyte>> b, jint off, jint len) { return call_method<SCAPIX_META_STRING("read"), jint>(b, off, len); }
inline ref<link::java::array<jbyte>> ByteArrayInputStream::readAllBytes() { return call_method<SCAPIX_META_STRING("readAllBytes"), ref<link::java::array<jbyte>>>(); }
inline jint ByteArrayInputStream::readNBytes(ref<link::java::array<jbyte>> b, jint off, jint len) { return call_method<SCAPIX_META_STRING("readNBytes"), jint>(b, off, len); }
inline jlong ByteArrayInputStream::transferTo(ref<java::io::OutputStream> out) { return call_method<SCAPIX_META_STRING("transferTo"), jlong>(out); }
inline jlong ByteArrayInputStream::skip(jlong n) { return call_method<SCAPIX_META_STRING("skip"), jlong>(n); }
inline jint ByteArrayInputStream::available() { return call_method<SCAPIX_META_STRING("available"), jint>(); }
inline jboolean ByteArrayInputStream::markSupported() { return call_method<SCAPIX_META_STRING("markSupported"), jboolean>(); }
inline void ByteArrayInputStream::mark(jint readAheadLimit) { return call_method<SCAPIX_META_STRING("mark"), void>(readAheadLimit); }
inline void ByteArrayInputStream::reset() { return call_method<SCAPIX_META_STRING("reset"), void>(); }
inline void ByteArrayInputStream::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_BYTEARRAYINPUTSTREAM_H
