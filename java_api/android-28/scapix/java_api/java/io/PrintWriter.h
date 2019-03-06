// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/Writer.h>

#ifndef SCAPIX_JAVA_IO_PRINTWRITER_H
#define SCAPIX_JAVA_IO_PRINTWRITER_H

namespace scapix::java_api {

namespace java::io { class File; }
namespace java::io { class OutputStream; }
namespace java::lang { class CharSequence; }
namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::util { class Locale; }

namespace java::io {

class PrintWriter : public object_base<SCAPIX_META_STRING("java/io/PrintWriter"),
	java::io::Writer>
{
public:

	static ref<PrintWriter> new_object(ref<java::io::Writer> out);
	static ref<PrintWriter> new_object(ref<java::io::Writer> out, jboolean autoFlush);
	static ref<PrintWriter> new_object(ref<java::io::OutputStream> out);
	static ref<PrintWriter> new_object(ref<java::io::OutputStream> out, jboolean autoFlush);
	static ref<PrintWriter> new_object(ref<java::lang::String> fileName);
	static ref<PrintWriter> new_object(ref<java::lang::String> fileName, ref<java::lang::String> csn);
	static ref<PrintWriter> new_object(ref<java::io::File> file);
	static ref<PrintWriter> new_object(ref<java::io::File> file, ref<java::lang::String> csn);
	void flush();
	void close();
	jboolean checkError();
	void write(jint c);
	void write(ref<link::java::array<jchar>> buf, jint off, jint len);
	void write(ref<link::java::array<jchar>> buf);
	void write(ref<java::lang::String> s, jint off, jint len);
	void write(ref<java::lang::String> s);
	void print(jboolean b);
	void print(jchar c);
	void print(jint i);
	void print(jlong l);
	void print(jfloat f);
	void print(jdouble d);
	void print(ref<link::java::array<jchar>> s);
	void print(ref<java::lang::String> s);
	void print(ref<java::lang::Object> obj);
	void println();
	void println(jboolean x);
	void println(jchar x);
	void println(jint x);
	void println(jlong x);
	void println(jfloat x);
	void println(jdouble x);
	void println(ref<link::java::array<jchar>> x);
	void println(ref<java::lang::String> x);
	void println(ref<java::lang::Object> x);
	ref<java::io::PrintWriter> printf(ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args);
	ref<java::io::PrintWriter> printf(ref<java::util::Locale> l, ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args);
	ref<java::io::PrintWriter> format(ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args);
	ref<java::io::PrintWriter> format(ref<java::util::Locale> l, ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args);
	ref<java::io::PrintWriter> append(ref<java::lang::CharSequence> csq);
	ref<java::io::PrintWriter> append(ref<java::lang::CharSequence> csq, jint start, jint end);
	ref<java::io::PrintWriter> append(jchar c);

protected:

	PrintWriter(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api

#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace java::io {

inline ref<PrintWriter> PrintWriter::new_object(ref<java::io::Writer> out) { return base_::new_object(out); }
inline ref<PrintWriter> PrintWriter::new_object(ref<java::io::Writer> out, jboolean autoFlush) { return base_::new_object(out, autoFlush); }
inline ref<PrintWriter> PrintWriter::new_object(ref<java::io::OutputStream> out) { return base_::new_object(out); }
inline ref<PrintWriter> PrintWriter::new_object(ref<java::io::OutputStream> out, jboolean autoFlush) { return base_::new_object(out, autoFlush); }
inline ref<PrintWriter> PrintWriter::new_object(ref<java::lang::String> fileName) { return base_::new_object(fileName); }
inline ref<PrintWriter> PrintWriter::new_object(ref<java::lang::String> fileName, ref<java::lang::String> csn) { return base_::new_object(fileName, csn); }
inline ref<PrintWriter> PrintWriter::new_object(ref<java::io::File> file) { return base_::new_object(file); }
inline ref<PrintWriter> PrintWriter::new_object(ref<java::io::File> file, ref<java::lang::String> csn) { return base_::new_object(file, csn); }
inline void PrintWriter::flush() { return call_method<SCAPIX_META_STRING("flush"), void>(); }
inline void PrintWriter::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline jboolean PrintWriter::checkError() { return call_method<SCAPIX_META_STRING("checkError"), jboolean>(); }
inline void PrintWriter::write(jint c) { return call_method<SCAPIX_META_STRING("write"), void>(c); }
inline void PrintWriter::write(ref<link::java::array<jchar>> buf, jint off, jint len) { return call_method<SCAPIX_META_STRING("write"), void>(buf, off, len); }
inline void PrintWriter::write(ref<link::java::array<jchar>> buf) { return call_method<SCAPIX_META_STRING("write"), void>(buf); }
inline void PrintWriter::write(ref<java::lang::String> s, jint off, jint len) { return call_method<SCAPIX_META_STRING("write"), void>(s, off, len); }
inline void PrintWriter::write(ref<java::lang::String> s) { return call_method<SCAPIX_META_STRING("write"), void>(s); }
inline void PrintWriter::print(jboolean b) { return call_method<SCAPIX_META_STRING("print"), void>(b); }
inline void PrintWriter::print(jchar c) { return call_method<SCAPIX_META_STRING("print"), void>(c); }
inline void PrintWriter::print(jint i) { return call_method<SCAPIX_META_STRING("print"), void>(i); }
inline void PrintWriter::print(jlong l) { return call_method<SCAPIX_META_STRING("print"), void>(l); }
inline void PrintWriter::print(jfloat f) { return call_method<SCAPIX_META_STRING("print"), void>(f); }
inline void PrintWriter::print(jdouble d) { return call_method<SCAPIX_META_STRING("print"), void>(d); }
inline void PrintWriter::print(ref<link::java::array<jchar>> s) { return call_method<SCAPIX_META_STRING("print"), void>(s); }
inline void PrintWriter::print(ref<java::lang::String> s) { return call_method<SCAPIX_META_STRING("print"), void>(s); }
inline void PrintWriter::print(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("print"), void>(obj); }
inline void PrintWriter::println() { return call_method<SCAPIX_META_STRING("println"), void>(); }
inline void PrintWriter::println(jboolean x) { return call_method<SCAPIX_META_STRING("println"), void>(x); }
inline void PrintWriter::println(jchar x) { return call_method<SCAPIX_META_STRING("println"), void>(x); }
inline void PrintWriter::println(jint x) { return call_method<SCAPIX_META_STRING("println"), void>(x); }
inline void PrintWriter::println(jlong x) { return call_method<SCAPIX_META_STRING("println"), void>(x); }
inline void PrintWriter::println(jfloat x) { return call_method<SCAPIX_META_STRING("println"), void>(x); }
inline void PrintWriter::println(jdouble x) { return call_method<SCAPIX_META_STRING("println"), void>(x); }
inline void PrintWriter::println(ref<link::java::array<jchar>> x) { return call_method<SCAPIX_META_STRING("println"), void>(x); }
inline void PrintWriter::println(ref<java::lang::String> x) { return call_method<SCAPIX_META_STRING("println"), void>(x); }
inline void PrintWriter::println(ref<java::lang::Object> x) { return call_method<SCAPIX_META_STRING("println"), void>(x); }
inline ref<java::io::PrintWriter> PrintWriter::printf(ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args) { return call_method<SCAPIX_META_STRING("printf"), ref<java::io::PrintWriter>>(format, args); }
inline ref<java::io::PrintWriter> PrintWriter::printf(ref<java::util::Locale> l, ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args) { return call_method<SCAPIX_META_STRING("printf"), ref<java::io::PrintWriter>>(l, format, args); }
inline ref<java::io::PrintWriter> PrintWriter::format(ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args) { return call_method<SCAPIX_META_STRING("format"), ref<java::io::PrintWriter>>(format, args); }
inline ref<java::io::PrintWriter> PrintWriter::format(ref<java::util::Locale> l, ref<java::lang::String> format, ref<link::java::array<java::lang::Object>> args) { return call_method<SCAPIX_META_STRING("format"), ref<java::io::PrintWriter>>(l, format, args); }
inline ref<java::io::PrintWriter> PrintWriter::append(ref<java::lang::CharSequence> csq) { return call_method<SCAPIX_META_STRING("append"), ref<java::io::PrintWriter>>(csq); }
inline ref<java::io::PrintWriter> PrintWriter::append(ref<java::lang::CharSequence> csq, jint start, jint end) { return call_method<SCAPIX_META_STRING("append"), ref<java::io::PrintWriter>>(csq, start, end); }
inline ref<java::io::PrintWriter> PrintWriter::append(jchar c) { return call_method<SCAPIX_META_STRING("append"), ref<java::io::PrintWriter>>(c); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_PRINTWRITER_H
