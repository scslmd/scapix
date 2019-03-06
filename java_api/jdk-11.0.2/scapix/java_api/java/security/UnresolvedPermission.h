// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/Permission.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_SECURITY_UNRESOLVEDPERMISSION_H
#define SCAPIX_JAVA_SECURITY_UNRESOLVEDPERMISSION_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::security { class PermissionCollection; }
namespace java::security::cert { class Certificate; }

namespace java::security {

class UnresolvedPermission : public object_base<SCAPIX_META_STRING("java/security/UnresolvedPermission"),
	java::security::Permission,
	java::io::Serializable>
{
public:

	static ref<UnresolvedPermission> new_object(ref<java::lang::String> type, ref<java::lang::String> name, ref<java::lang::String> actions, ref<link::java::array<java::security::cert::Certificate>> certs);
	jboolean implies(ref<java::security::Permission> p);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> getActions();
	ref<java::lang::String> getUnresolvedType();
	ref<java::lang::String> getUnresolvedName();
	ref<java::lang::String> getUnresolvedActions();
	ref<link::java::array<java::security::cert::Certificate>> getUnresolvedCerts();
	ref<java::lang::String> toString();
	ref<java::security::PermissionCollection> newPermissionCollection();

protected:

	UnresolvedPermission(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PermissionCollection.h>
#include <scapix/java_api/java/security/cert/Certificate.h>

namespace scapix::java_api {
namespace java::security {

inline ref<UnresolvedPermission> UnresolvedPermission::new_object(ref<java::lang::String> type, ref<java::lang::String> name, ref<java::lang::String> actions, ref<link::java::array<java::security::cert::Certificate>> certs) { return base_::new_object(type, name, actions, certs); }
inline jboolean UnresolvedPermission::implies(ref<java::security::Permission> p) { return call_method<SCAPIX_META_STRING("implies"), jboolean>(p); }
inline jboolean UnresolvedPermission::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint UnresolvedPermission::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> UnresolvedPermission::getActions() { return call_method<SCAPIX_META_STRING("getActions"), ref<java::lang::String>>(); }
inline ref<java::lang::String> UnresolvedPermission::getUnresolvedType() { return call_method<SCAPIX_META_STRING("getUnresolvedType"), ref<java::lang::String>>(); }
inline ref<java::lang::String> UnresolvedPermission::getUnresolvedName() { return call_method<SCAPIX_META_STRING("getUnresolvedName"), ref<java::lang::String>>(); }
inline ref<java::lang::String> UnresolvedPermission::getUnresolvedActions() { return call_method<SCAPIX_META_STRING("getUnresolvedActions"), ref<java::lang::String>>(); }
inline ref<link::java::array<java::security::cert::Certificate>> UnresolvedPermission::getUnresolvedCerts() { return call_method<SCAPIX_META_STRING("getUnresolvedCerts"), ref<link::java::array<java::security::cert::Certificate>>>(); }
inline ref<java::lang::String> UnresolvedPermission::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::security::PermissionCollection> UnresolvedPermission::newPermissionCollection() { return call_method<SCAPIX_META_STRING("newPermissionCollection"), ref<java::security::PermissionCollection>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_UNRESOLVEDPERMISSION_H
