// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/ObjectStreamException.h>

#ifndef SCAPIX_JAVA_IO_INVALIDOBJECTEXCEPTION_H
#define SCAPIX_JAVA_IO_INVALIDOBJECTEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::io {

class InvalidObjectException : public object_base<SCAPIX_META_STRING("java/io/InvalidObjectException"),
	java::io::ObjectStreamException>
{
public:

	static ref<InvalidObjectException> new_object(ref<java::lang::String> reason);

protected:

	InvalidObjectException(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::io {

inline ref<InvalidObjectException> InvalidObjectException::new_object(ref<java::lang::String> reason) { return base_::new_object(reason); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_INVALIDOBJECTEXCEPTION_H
