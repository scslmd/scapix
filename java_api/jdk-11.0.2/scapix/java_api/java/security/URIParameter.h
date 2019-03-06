// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/Policy_Parameters.h>
#include <scapix/java_api/javax/security/auth/login/Configuration_Parameters.h>

#ifndef SCAPIX_JAVA_SECURITY_URIPARAMETER_H
#define SCAPIX_JAVA_SECURITY_URIPARAMETER_H

namespace scapix::java_api {

namespace java::net { class URI; }

namespace java::security {

class URIParameter : public object_base<SCAPIX_META_STRING("java/security/URIParameter"),
	java::lang::Object,
	java::security::Policy_Parameters,
	javax::security::auth::login::Configuration_Parameters>
{
public:

	static ref<URIParameter> new_object(ref<java::net::URI> uri);
	ref<java::net::URI> getURI();

protected:

	URIParameter(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/net/URI.h>

namespace scapix::java_api {
namespace java::security {

inline ref<URIParameter> URIParameter::new_object(ref<java::net::URI> uri) { return base_::new_object(uri); }
inline ref<java::net::URI> URIParameter::getURI() { return call_method<SCAPIX_META_STRING("getURI"), ref<java::net::URI>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_URIPARAMETER_H
