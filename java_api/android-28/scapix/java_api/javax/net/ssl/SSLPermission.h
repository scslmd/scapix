// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/BasicPermission.h>

#ifndef SCAPIX_JAVAX_NET_SSL_SSLPERMISSION_H
#define SCAPIX_JAVAX_NET_SSL_SSLPERMISSION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace javax::net::ssl {

class SSLPermission : public object_base<SCAPIX_META_STRING("javax/net/ssl/SSLPermission"),
	java::security::BasicPermission>
{
public:

	static ref<SSLPermission> new_object(ref<java::lang::String> name);
	static ref<SSLPermission> new_object(ref<java::lang::String> name, ref<java::lang::String> actions);

protected:

	SSLPermission(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<SSLPermission> SSLPermission::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline ref<SSLPermission> SSLPermission::new_object(ref<java::lang::String> name, ref<java::lang::String> actions) { return base_::new_object(name, actions); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_SSLPERMISSION_H
