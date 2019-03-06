// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_LANG_ENUM_H
#define SCAPIX_JAVA_LANG_ENUM_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class String; }

namespace java::lang {

class Enum : public object_base<SCAPIX_META_STRING("java/lang/Enum"),
	java::lang::Object,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	ref<java::lang::String> name();
	jint ordinal();
	ref<java::lang::String> toString();
	jboolean equals(ref<java::lang::Object> other);
	jint hashCode();
	jint compareTo(ref<java::lang::Enum> o);
	ref<java::lang::Class> getDeclaringClass();
	static ref<java::lang::Enum> valueOf(ref<java::lang::Class> enumType, ref<java::lang::String> name);

protected:

	Enum(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<java::lang::String> Enum::name() { return call_method<SCAPIX_META_STRING("name"), ref<java::lang::String>>(); }
inline jint Enum::ordinal() { return call_method<SCAPIX_META_STRING("ordinal"), jint>(); }
inline ref<java::lang::String> Enum::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jboolean Enum::equals(ref<java::lang::Object> other) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(other); }
inline jint Enum::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jint Enum::compareTo(ref<java::lang::Enum> o) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(o); }
inline ref<java::lang::Class> Enum::getDeclaringClass() { return call_method<SCAPIX_META_STRING("getDeclaringClass"), ref<java::lang::Class>>(); }
inline ref<java::lang::Enum> Enum::valueOf(ref<java::lang::Class> enumType, ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::Enum>>(enumType, name); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_ENUM_H
