// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/BasicPermission.h>

#ifndef SCAPIX_JAVA_LANG_REFLECT_REFLECTPERMISSION_H
#define SCAPIX_JAVA_LANG_REFLECT_REFLECTPERMISSION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::lang::reflect {

class ReflectPermission : public object_base<SCAPIX_META_STRING("java/lang/reflect/ReflectPermission"),
	java::security::BasicPermission>
{
public:

	static ref<ReflectPermission> new_object(ref<java::lang::String> name);
	static ref<ReflectPermission> new_object(ref<java::lang::String> name, ref<java::lang::String> actions);

protected:

	ReflectPermission(handle_type h) : base_(h) {}

};

} // namespace java::lang::reflect
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang::reflect {

inline ref<ReflectPermission> ReflectPermission::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline ref<ReflectPermission> ReflectPermission::new_object(ref<java::lang::String> name, ref<java::lang::String> actions) { return base_::new_object(name, actions); }

} // namespace java::lang::reflect
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_REFLECT_REFLECTPERMISSION_H
