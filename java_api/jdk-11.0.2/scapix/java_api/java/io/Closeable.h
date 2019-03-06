// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_IO_CLOSEABLE_H
#define SCAPIX_JAVA_IO_CLOSEABLE_H

namespace scapix::java_api {
namespace java::io {

class Closeable : public object_base<SCAPIX_META_STRING("java/io/Closeable"),
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	void close();

protected:

	Closeable(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::io {

inline void Closeable::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_CLOSEABLE_H
