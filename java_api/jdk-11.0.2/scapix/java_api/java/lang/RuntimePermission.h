// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/BasicPermission.h>

#ifndef SCAPIX_JAVA_LANG_RUNTIMEPERMISSION_H
#define SCAPIX_JAVA_LANG_RUNTIMEPERMISSION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::lang {

class RuntimePermission : public object_base<SCAPIX_META_STRING("java/lang/RuntimePermission"),
	java::security::BasicPermission>
{
public:

	static ref<RuntimePermission> new_object(ref<java::lang::String> name);
	static ref<RuntimePermission> new_object(ref<java::lang::String> name, ref<java::lang::String> actions);

protected:

	RuntimePermission(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<RuntimePermission> RuntimePermission::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline ref<RuntimePermission> RuntimePermission::new_object(ref<java::lang::String> name, ref<java::lang::String> actions) { return base_::new_object(name, actions); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_RUNTIMEPERMISSION_H
