// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/Permission.h>

#ifndef SCAPIX_JAVA_NET_URLPERMISSION_H
#define SCAPIX_JAVA_NET_URLPERMISSION_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }

namespace java::net {

class URLPermission : public object_base<SCAPIX_META_STRING("java/net/URLPermission"),
	java::security::Permission>
{
public:

	static ref<URLPermission> new_object(ref<java::lang::String> url, ref<java::lang::String> actions);
	static ref<URLPermission> new_object(ref<java::lang::String> url);
	ref<java::lang::String> getActions();
	jboolean implies(ref<java::security::Permission> p);
	jboolean equals(ref<java::lang::Object> p);
	jint hashCode();

protected:

	URLPermission(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::net {

inline ref<URLPermission> URLPermission::new_object(ref<java::lang::String> url, ref<java::lang::String> actions) { return base_::new_object(url, actions); }
inline ref<URLPermission> URLPermission::new_object(ref<java::lang::String> url) { return base_::new_object(url); }
inline ref<java::lang::String> URLPermission::getActions() { return call_method<SCAPIX_META_STRING("getActions"), ref<java::lang::String>>(); }
inline jboolean URLPermission::implies(ref<java::security::Permission> p) { return call_method<SCAPIX_META_STRING("implies"), jboolean>(p); }
inline jboolean URLPermission::equals(ref<java::lang::Object> p) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(p); }
inline jint URLPermission::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_URLPERMISSION_H
