// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/UnsupportedOperationException.h>

#ifndef SCAPIX_JAVA_NIO_FILE_READONLYFILESYSTEMEXCEPTION_H
#define SCAPIX_JAVA_NIO_FILE_READONLYFILESYSTEMEXCEPTION_H

namespace scapix::java_api {
namespace java::nio::file {

class ReadOnlyFileSystemException : public object_base<SCAPIX_META_STRING("java/nio/file/ReadOnlyFileSystemException"),
	java::lang::UnsupportedOperationException>
{
public:

	static ref<ReadOnlyFileSystemException> new_object();

protected:

	ReadOnlyFileSystemException(handle_type h) : base_(h) {}

};

} // namespace java::nio::file
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::nio::file {

inline ref<ReadOnlyFileSystemException> ReadOnlyFileSystemException::new_object() { return base_::new_object(); }

} // namespace java::nio::file
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_FILE_READONLYFILESYSTEMEXCEPTION_H
