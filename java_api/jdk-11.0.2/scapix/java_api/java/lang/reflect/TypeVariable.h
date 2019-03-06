// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/Type.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedElement.h>

#ifndef SCAPIX_JAVA_LANG_REFLECT_TYPEVARIABLE_H
#define SCAPIX_JAVA_LANG_REFLECT_TYPEVARIABLE_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang::reflect { class AnnotatedType; }
namespace java::lang::reflect { class GenericDeclaration; }

namespace java::lang::reflect {

class TypeVariable : public object_base<SCAPIX_META_STRING("java/lang/reflect/TypeVariable"),
	java::lang::Object,
	java::lang::reflect::Type,
	java::lang::reflect::AnnotatedElement>
{
public:

	ref<link::java::array<java::lang::reflect::Type>> getBounds();
	ref<java::lang::reflect::GenericDeclaration> getGenericDeclaration();
	ref<java::lang::String> getName();
	ref<link::java::array<java::lang::reflect::AnnotatedType>> getAnnotatedBounds();

protected:

	TypeVariable(handle_type h) : base_(h) {}

};

} // namespace java::lang::reflect
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedType.h>
#include <scapix/java_api/java/lang/reflect/GenericDeclaration.h>

namespace scapix::java_api {
namespace java::lang::reflect {

inline ref<link::java::array<java::lang::reflect::Type>> TypeVariable::getBounds() { return call_method<SCAPIX_META_STRING("getBounds"), ref<link::java::array<java::lang::reflect::Type>>>(); }
inline ref<java::lang::reflect::GenericDeclaration> TypeVariable::getGenericDeclaration() { return call_method<SCAPIX_META_STRING("getGenericDeclaration"), ref<java::lang::reflect::GenericDeclaration>>(); }
inline ref<java::lang::String> TypeVariable::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline ref<link::java::array<java::lang::reflect::AnnotatedType>> TypeVariable::getAnnotatedBounds() { return call_method<SCAPIX_META_STRING("getAnnotatedBounds"), ref<link::java::array<java::lang::reflect::AnnotatedType>>>(); }

} // namespace java::lang::reflect
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_REFLECT_TYPEVARIABLE_H
