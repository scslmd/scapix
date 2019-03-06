// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/Writer.h>

#ifndef SCAPIX_JAVA_IO_PIPEDWRITER_H
#define SCAPIX_JAVA_IO_PIPEDWRITER_H

namespace scapix::java_api {

namespace java::io { class PipedReader; }

namespace java::io {

class PipedWriter : public object_base<SCAPIX_META_STRING("java/io/PipedWriter"),
	java::io::Writer>
{
public:

	static ref<PipedWriter> new_object(ref<java::io::PipedReader> snk);
	static ref<PipedWriter> new_object();
	void connect(ref<java::io::PipedReader> snk);
	void write(jint c);
	void write(ref<link::java::array<jchar>> cbuf, jint off, jint len);
	void flush();
	void close();

protected:

	PipedWriter(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api

#include <scapix/java_api/java/io/PipedReader.h>

namespace scapix::java_api {
namespace java::io {

inline ref<PipedWriter> PipedWriter::new_object(ref<java::io::PipedReader> snk) { return base_::new_object(snk); }
inline ref<PipedWriter> PipedWriter::new_object() { return base_::new_object(); }
inline void PipedWriter::connect(ref<java::io::PipedReader> snk) { return call_method<SCAPIX_META_STRING("connect"), void>(snk); }
inline void PipedWriter::write(jint c) { return call_method<SCAPIX_META_STRING("write"), void>(c); }
inline void PipedWriter::write(ref<link::java::array<jchar>> cbuf, jint off, jint len) { return call_method<SCAPIX_META_STRING("write"), void>(cbuf, off, len); }
inline void PipedWriter::flush() { return call_method<SCAPIX_META_STRING("flush"), void>(); }
inline void PipedWriter::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_PIPEDWRITER_H
