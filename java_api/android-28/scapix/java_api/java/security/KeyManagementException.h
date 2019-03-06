// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/KeyException.h>

#ifndef SCAPIX_JAVA_SECURITY_KEYMANAGEMENTEXCEPTION_H
#define SCAPIX_JAVA_SECURITY_KEYMANAGEMENTEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::security {

class KeyManagementException : public object_base<SCAPIX_META_STRING("java/security/KeyManagementException"),
	java::security::KeyException>
{
public:

	static ref<KeyManagementException> new_object();
	static ref<KeyManagementException> new_object(ref<java::lang::String> msg);
	static ref<KeyManagementException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<KeyManagementException> new_object(ref<java::lang::Throwable> cause);

protected:

	KeyManagementException(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::security {

inline ref<KeyManagementException> KeyManagementException::new_object() { return base_::new_object(); }
inline ref<KeyManagementException> KeyManagementException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }
inline ref<KeyManagementException> KeyManagementException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<KeyManagementException> KeyManagementException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_KEYMANAGEMENTEXCEPTION_H
