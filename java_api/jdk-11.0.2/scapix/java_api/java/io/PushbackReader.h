// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterReader.h>

#ifndef SCAPIX_JAVA_IO_PUSHBACKREADER_H
#define SCAPIX_JAVA_IO_PUSHBACKREADER_H

namespace scapix::java_api {

namespace java::io { class Reader; }

namespace java::io {

class PushbackReader : public object_base<SCAPIX_META_STRING("java/io/PushbackReader"),
	java::io::FilterReader>
{
public:

	static ref<PushbackReader> new_object(ref<java::io::Reader> in, jint size);
	static ref<PushbackReader> new_object(ref<java::io::Reader> in);
	jint read();
	jint read(ref<link::java::array<jchar>> cbuf, jint off, jint len);
	void unread(jint c);
	void unread(ref<link::java::array<jchar>> cbuf, jint off, jint len);
	void unread(ref<link::java::array<jchar>> cbuf);
	jboolean ready();
	void mark(jint readAheadLimit);
	void reset();
	jboolean markSupported();
	void close();
	jlong skip(jlong n);

protected:

	PushbackReader(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api

#include <scapix/java_api/java/io/Reader.h>

namespace scapix::java_api {
namespace java::io {

inline ref<PushbackReader> PushbackReader::new_object(ref<java::io::Reader> in, jint size) { return base_::new_object(in, size); }
inline ref<PushbackReader> PushbackReader::new_object(ref<java::io::Reader> in) { return base_::new_object(in); }
inline jint PushbackReader::read() { return call_method<SCAPIX_META_STRING("read"), jint>(); }
inline jint PushbackReader::read(ref<link::java::array<jchar>> cbuf, jint off, jint len) { return call_method<SCAPIX_META_STRING("read"), jint>(cbuf, off, len); }
inline void PushbackReader::unread(jint c) { return call_method<SCAPIX_META_STRING("unread"), void>(c); }
inline void PushbackReader::unread(ref<link::java::array<jchar>> cbuf, jint off, jint len) { return call_method<SCAPIX_META_STRING("unread"), void>(cbuf, off, len); }
inline void PushbackReader::unread(ref<link::java::array<jchar>> cbuf) { return call_method<SCAPIX_META_STRING("unread"), void>(cbuf); }
inline jboolean PushbackReader::ready() { return call_method<SCAPIX_META_STRING("ready"), jboolean>(); }
inline void PushbackReader::mark(jint readAheadLimit) { return call_method<SCAPIX_META_STRING("mark"), void>(readAheadLimit); }
inline void PushbackReader::reset() { return call_method<SCAPIX_META_STRING("reset"), void>(); }
inline jboolean PushbackReader::markSupported() { return call_method<SCAPIX_META_STRING("markSupported"), jboolean>(); }
inline void PushbackReader::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline jlong PushbackReader::skip(jlong n) { return call_method<SCAPIX_META_STRING("skip"), jlong>(n); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_PUSHBACKREADER_H
