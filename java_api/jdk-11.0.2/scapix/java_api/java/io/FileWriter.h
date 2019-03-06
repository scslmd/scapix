// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/OutputStreamWriter.h>

#ifndef SCAPIX_JAVA_IO_FILEWRITER_H
#define SCAPIX_JAVA_IO_FILEWRITER_H

namespace scapix::java_api {

namespace java::io { class File; }
namespace java::io { class FileDescriptor; }
namespace java::lang { class String; }
namespace java::nio::charset { class Charset; }

namespace java::io {

class FileWriter : public object_base<SCAPIX_META_STRING("java/io/FileWriter"),
	java::io::OutputStreamWriter>
{
public:

	static ref<FileWriter> new_object(ref<java::lang::String> fileName);
	static ref<FileWriter> new_object(ref<java::lang::String> fileName, jboolean append);
	static ref<FileWriter> new_object(ref<java::io::File> file);
	static ref<FileWriter> new_object(ref<java::io::File> file, jboolean append);
	static ref<FileWriter> new_object(ref<java::io::FileDescriptor> fd);
	static ref<FileWriter> new_object(ref<java::lang::String> fileName, ref<java::nio::charset::Charset> charset);
	static ref<FileWriter> new_object(ref<java::lang::String> fileName, ref<java::nio::charset::Charset> charset, jboolean append);
	static ref<FileWriter> new_object(ref<java::io::File> file, ref<java::nio::charset::Charset> charset);
	static ref<FileWriter> new_object(ref<java::io::File> file, ref<java::nio::charset::Charset> charset, jboolean append);

protected:

	FileWriter(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api

#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/Charset.h>

namespace scapix::java_api {
namespace java::io {

inline ref<FileWriter> FileWriter::new_object(ref<java::lang::String> fileName) { return base_::new_object(fileName); }
inline ref<FileWriter> FileWriter::new_object(ref<java::lang::String> fileName, jboolean append) { return base_::new_object(fileName, append); }
inline ref<FileWriter> FileWriter::new_object(ref<java::io::File> file) { return base_::new_object(file); }
inline ref<FileWriter> FileWriter::new_object(ref<java::io::File> file, jboolean append) { return base_::new_object(file, append); }
inline ref<FileWriter> FileWriter::new_object(ref<java::io::FileDescriptor> fd) { return base_::new_object(fd); }
inline ref<FileWriter> FileWriter::new_object(ref<java::lang::String> fileName, ref<java::nio::charset::Charset> charset) { return base_::new_object(fileName, charset); }
inline ref<FileWriter> FileWriter::new_object(ref<java::lang::String> fileName, ref<java::nio::charset::Charset> charset, jboolean append) { return base_::new_object(fileName, charset, append); }
inline ref<FileWriter> FileWriter::new_object(ref<java::io::File> file, ref<java::nio::charset::Charset> charset) { return base_::new_object(file, charset); }
inline ref<FileWriter> FileWriter::new_object(ref<java::io::File> file, ref<java::nio::charset::Charset> charset, jboolean append) { return base_::new_object(file, charset, append); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_FILEWRITER_H
