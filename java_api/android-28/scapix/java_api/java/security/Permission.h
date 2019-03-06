// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/Guard.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_SECURITY_PERMISSION_H
#define SCAPIX_JAVA_SECURITY_PERMISSION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class PermissionCollection; }

namespace java::security {

class Permission : public object_base<SCAPIX_META_STRING("java/security/Permission"),
	java::lang::Object,
	java::security::Guard,
	java::io::Serializable>
{
public:

	static ref<Permission> new_object(ref<java::lang::String> name);
	void checkGuard(ref<java::lang::Object> object);
	jboolean implies(ref<java::security::Permission> p1);
	ref<java::lang::String> getName();
	ref<java::lang::String> getActions();
	ref<java::security::PermissionCollection> newPermissionCollection();

protected:

	Permission(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PermissionCollection.h>

namespace scapix::java_api {
namespace java::security {

inline ref<Permission> Permission::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline void Permission::checkGuard(ref<java::lang::Object> object) { return call_method<SCAPIX_META_STRING("checkGuard"), void>(object); }
inline jboolean Permission::implies(ref<java::security::Permission> p1) { return call_method<SCAPIX_META_STRING("implies"), jboolean>(p1); }
inline ref<java::lang::String> Permission::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Permission::getActions() { return call_method<SCAPIX_META_STRING("getActions"), ref<java::lang::String>>(); }
inline ref<java::security::PermissionCollection> Permission::newPermissionCollection() { return call_method<SCAPIX_META_STRING("newPermissionCollection"), ref<java::security::PermissionCollection>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_PERMISSION_H
