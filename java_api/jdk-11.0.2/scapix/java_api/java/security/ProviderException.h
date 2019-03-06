// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_SECURITY_PROVIDEREXCEPTION_H
#define SCAPIX_JAVA_SECURITY_PROVIDEREXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::security {

class ProviderException : public object_base<SCAPIX_META_STRING("java/security/ProviderException"),
	java::lang::RuntimeException>
{
public:

	static ref<ProviderException> new_object();
	static ref<ProviderException> new_object(ref<java::lang::String> s);
	static ref<ProviderException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<ProviderException> new_object(ref<java::lang::Throwable> cause);

protected:

	ProviderException(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::security {

inline ref<ProviderException> ProviderException::new_object() { return base_::new_object(); }
inline ref<ProviderException> ProviderException::new_object(ref<java::lang::String> s) { return base_::new_object(s); }
inline ref<ProviderException> ProviderException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<ProviderException> ProviderException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_PROVIDEREXCEPTION_H
