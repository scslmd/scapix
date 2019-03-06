// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedType.h>

#ifndef SCAPIX_JAVA_LANG_REFLECT_ANNOTATEDWILDCARDTYPE_H
#define SCAPIX_JAVA_LANG_REFLECT_ANNOTATEDWILDCARDTYPE_H

namespace scapix::java_api {
namespace java::lang::reflect {

class AnnotatedWildcardType : public object_base<SCAPIX_META_STRING("java/lang/reflect/AnnotatedWildcardType"),
	java::lang::Object,
	java::lang::reflect::AnnotatedType>
{
public:

	ref<link::java::array<java::lang::reflect::AnnotatedType>> getAnnotatedLowerBounds();
	ref<link::java::array<java::lang::reflect::AnnotatedType>> getAnnotatedUpperBounds();
	ref<java::lang::reflect::AnnotatedType> getAnnotatedOwnerType();

protected:

	AnnotatedWildcardType(handle_type h) : base_(h) {}

};

} // namespace java::lang::reflect
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::lang::reflect {

inline ref<link::java::array<java::lang::reflect::AnnotatedType>> AnnotatedWildcardType::getAnnotatedLowerBounds() { return call_method<SCAPIX_META_STRING("getAnnotatedLowerBounds"), ref<link::java::array<java::lang::reflect::AnnotatedType>>>(); }
inline ref<link::java::array<java::lang::reflect::AnnotatedType>> AnnotatedWildcardType::getAnnotatedUpperBounds() { return call_method<SCAPIX_META_STRING("getAnnotatedUpperBounds"), ref<link::java::array<java::lang::reflect::AnnotatedType>>>(); }
inline ref<java::lang::reflect::AnnotatedType> AnnotatedWildcardType::getAnnotatedOwnerType() { return call_method<SCAPIX_META_STRING("getAnnotatedOwnerType"), ref<java::lang::reflect::AnnotatedType>>(); }

} // namespace java::lang::reflect
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_REFLECT_ANNOTATEDWILDCARDTYPE_H
