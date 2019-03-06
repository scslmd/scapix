// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_H
#define SCAPIX_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::security {

class PrivilegedActionException : public object_base<SCAPIX_META_STRING("java/security/PrivilegedActionException"),
	java::lang::Exception>
{
public:

	static ref<PrivilegedActionException> new_object(ref<java::lang::Exception> exception);
	ref<java::lang::Exception> getException();
	ref<java::lang::Throwable> getCause();
	ref<java::lang::String> toString();

protected:

	PrivilegedActionException(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::security {

inline ref<PrivilegedActionException> PrivilegedActionException::new_object(ref<java::lang::Exception> exception) { return base_::new_object(exception); }
inline ref<java::lang::Exception> PrivilegedActionException::getException() { return call_method<SCAPIX_META_STRING("getException"), ref<java::lang::Exception>>(); }
inline ref<java::lang::Throwable> PrivilegedActionException::getCause() { return call_method<SCAPIX_META_STRING("getCause"), ref<java::lang::Throwable>>(); }
inline ref<java::lang::String> PrivilegedActionException::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_H
