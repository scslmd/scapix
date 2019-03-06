// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/BasicPermission.h>

#ifndef SCAPIX_JAVA_SECURITY_SECURITYPERMISSION_H
#define SCAPIX_JAVA_SECURITY_SECURITYPERMISSION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::security {

class SecurityPermission : public object_base<SCAPIX_META_STRING("java/security/SecurityPermission"),
	java::security::BasicPermission>
{
public:

	static ref<SecurityPermission> new_object(ref<java::lang::String> name);
	static ref<SecurityPermission> new_object(ref<java::lang::String> name, ref<java::lang::String> actions);

protected:

	SecurityPermission(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::security {

inline ref<SecurityPermission> SecurityPermission::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline ref<SecurityPermission> SecurityPermission::new_object(ref<java::lang::String> name, ref<java::lang::String> actions) { return base_::new_object(name, actions); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_SECURITYPERMISSION_H
