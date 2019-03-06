// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_LANG_REFLECT_TYPE_H
#define SCAPIX_JAVA_LANG_REFLECT_TYPE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::lang::reflect {

class Type : public object_base<SCAPIX_META_STRING("java/lang/reflect/Type"),
	java::lang::Object>
{
public:

	ref<java::lang::String> getTypeName();

protected:

	Type(handle_type h) : base_(h) {}

};

} // namespace java::lang::reflect
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang::reflect {

inline ref<java::lang::String> Type::getTypeName() { return call_method<SCAPIX_META_STRING("getTypeName"), ref<java::lang::String>>(); }

} // namespace java::lang::reflect
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_REFLECT_TYPE_H
