// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedElement.h>

#ifndef SCAPIX_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_H
#define SCAPIX_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang::annotation { class Annotation; }

namespace java::lang::reflect {

class AccessibleObject : public object_base<SCAPIX_META_STRING("java/lang/reflect/AccessibleObject"),
	java::lang::Object,
	java::lang::reflect::AnnotatedElement>
{
public:

	static void setAccessible(ref<link::java::array<java::lang::reflect::AccessibleObject>> array, jboolean flag);
	void setAccessible(jboolean flag);
	jboolean trySetAccessible();
	jboolean isAccessible();
	jboolean canAccess(ref<java::lang::Object> obj);
	ref<java::lang::annotation::Annotation> getAnnotation(ref<java::lang::Class> annotationClass);
	jboolean isAnnotationPresent(ref<java::lang::Class> annotationClass);
	ref<link::java::array<java::lang::annotation::Annotation>> getAnnotationsByType(ref<java::lang::Class> annotationClass);
	ref<link::java::array<java::lang::annotation::Annotation>> getAnnotations();
	ref<java::lang::annotation::Annotation> getDeclaredAnnotation(ref<java::lang::Class> annotationClass);
	ref<link::java::array<java::lang::annotation::Annotation>> getDeclaredAnnotationsByType(ref<java::lang::Class> annotationClass);
	ref<link::java::array<java::lang::annotation::Annotation>> getDeclaredAnnotations();

protected:

	AccessibleObject(handle_type h) : base_(h) {}

};

} // namespace java::lang::reflect
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

namespace scapix::java_api {
namespace java::lang::reflect {

inline void AccessibleObject::setAccessible(ref<link::java::array<java::lang::reflect::AccessibleObject>> array, jboolean flag) { return call_static_method<SCAPIX_META_STRING("setAccessible"), void>(array, flag); }
inline void AccessibleObject::setAccessible(jboolean flag) { return call_method<SCAPIX_META_STRING("setAccessible"), void>(flag); }
inline jboolean AccessibleObject::trySetAccessible() { return call_method<SCAPIX_META_STRING("trySetAccessible"), jboolean>(); }
inline jboolean AccessibleObject::isAccessible() { return call_method<SCAPIX_META_STRING("isAccessible"), jboolean>(); }
inline jboolean AccessibleObject::canAccess(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("canAccess"), jboolean>(obj); }
inline ref<java::lang::annotation::Annotation> AccessibleObject::getAnnotation(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("getAnnotation"), ref<java::lang::annotation::Annotation>>(annotationClass); }
inline jboolean AccessibleObject::isAnnotationPresent(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("isAnnotationPresent"), jboolean>(annotationClass); }
inline ref<link::java::array<java::lang::annotation::Annotation>> AccessibleObject::getAnnotationsByType(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("getAnnotationsByType"), ref<link::java::array<java::lang::annotation::Annotation>>>(annotationClass); }
inline ref<link::java::array<java::lang::annotation::Annotation>> AccessibleObject::getAnnotations() { return call_method<SCAPIX_META_STRING("getAnnotations"), ref<link::java::array<java::lang::annotation::Annotation>>>(); }
inline ref<java::lang::annotation::Annotation> AccessibleObject::getDeclaredAnnotation(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("getDeclaredAnnotation"), ref<java::lang::annotation::Annotation>>(annotationClass); }
inline ref<link::java::array<java::lang::annotation::Annotation>> AccessibleObject::getDeclaredAnnotationsByType(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("getDeclaredAnnotationsByType"), ref<link::java::array<java::lang::annotation::Annotation>>>(annotationClass); }
inline ref<link::java::array<java::lang::annotation::Annotation>> AccessibleObject::getDeclaredAnnotations() { return call_method<SCAPIX_META_STRING("getDeclaredAnnotations"), ref<link::java::array<java::lang::annotation::Annotation>>>(); }

} // namespace java::lang::reflect
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_H
