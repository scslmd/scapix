// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/NamedPackage.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedElement.h>

#ifndef SCAPIX_JAVA_LANG_PACKAGE_H
#define SCAPIX_JAVA_LANG_PACKAGE_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class String; }
namespace java::lang::annotation { class Annotation; }
namespace java::net { class URL; }

namespace java::lang {

class Package : public object_base<SCAPIX_META_STRING("java/lang/Package"),
	java::lang::NamedPackage,
	java::lang::reflect::AnnotatedElement>
{
public:

	ref<java::lang::String> getName();
	ref<java::lang::String> getSpecificationTitle();
	ref<java::lang::String> getSpecificationVersion();
	ref<java::lang::String> getSpecificationVendor();
	ref<java::lang::String> getImplementationTitle();
	ref<java::lang::String> getImplementationVersion();
	ref<java::lang::String> getImplementationVendor();
	jboolean isSealed();
	jboolean isSealed(ref<java::net::URL> url);
	jboolean isCompatibleWith(ref<java::lang::String> desired);
	static ref<java::lang::Package> getPackage(ref<java::lang::String> name);
	static ref<link::java::array<java::lang::Package>> getPackages();
	jint hashCode();
	ref<java::lang::String> toString();
	ref<java::lang::annotation::Annotation> getAnnotation(ref<java::lang::Class> annotationClass);
	jboolean isAnnotationPresent(ref<java::lang::Class> annotationClass);
	ref<link::java::array<java::lang::annotation::Annotation>> getAnnotationsByType(ref<java::lang::Class> annotationClass);
	ref<link::java::array<java::lang::annotation::Annotation>> getAnnotations();
	ref<java::lang::annotation::Annotation> getDeclaredAnnotation(ref<java::lang::Class> annotationClass);
	ref<link::java::array<java::lang::annotation::Annotation>> getDeclaredAnnotationsByType(ref<java::lang::Class> annotationClass);
	ref<link::java::array<java::lang::annotation::Annotation>> getDeclaredAnnotations();

protected:

	Package(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>
#include <scapix/java_api/java/net/URL.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<java::lang::String> Package::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Package::getSpecificationTitle() { return call_method<SCAPIX_META_STRING("getSpecificationTitle"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Package::getSpecificationVersion() { return call_method<SCAPIX_META_STRING("getSpecificationVersion"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Package::getSpecificationVendor() { return call_method<SCAPIX_META_STRING("getSpecificationVendor"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Package::getImplementationTitle() { return call_method<SCAPIX_META_STRING("getImplementationTitle"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Package::getImplementationVersion() { return call_method<SCAPIX_META_STRING("getImplementationVersion"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Package::getImplementationVendor() { return call_method<SCAPIX_META_STRING("getImplementationVendor"), ref<java::lang::String>>(); }
inline jboolean Package::isSealed() { return call_method<SCAPIX_META_STRING("isSealed"), jboolean>(); }
inline jboolean Package::isSealed(ref<java::net::URL> url) { return call_method<SCAPIX_META_STRING("isSealed"), jboolean>(url); }
inline jboolean Package::isCompatibleWith(ref<java::lang::String> desired) { return call_method<SCAPIX_META_STRING("isCompatibleWith"), jboolean>(desired); }
inline ref<java::lang::Package> Package::getPackage(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getPackage"), ref<java::lang::Package>>(name); }
inline ref<link::java::array<java::lang::Package>> Package::getPackages() { return call_static_method<SCAPIX_META_STRING("getPackages"), ref<link::java::array<java::lang::Package>>>(); }
inline jint Package::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> Package::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::annotation::Annotation> Package::getAnnotation(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("getAnnotation"), ref<java::lang::annotation::Annotation>>(annotationClass); }
inline jboolean Package::isAnnotationPresent(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("isAnnotationPresent"), jboolean>(annotationClass); }
inline ref<link::java::array<java::lang::annotation::Annotation>> Package::getAnnotationsByType(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("getAnnotationsByType"), ref<link::java::array<java::lang::annotation::Annotation>>>(annotationClass); }
inline ref<link::java::array<java::lang::annotation::Annotation>> Package::getAnnotations() { return call_method<SCAPIX_META_STRING("getAnnotations"), ref<link::java::array<java::lang::annotation::Annotation>>>(); }
inline ref<java::lang::annotation::Annotation> Package::getDeclaredAnnotation(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("getDeclaredAnnotation"), ref<java::lang::annotation::Annotation>>(annotationClass); }
inline ref<link::java::array<java::lang::annotation::Annotation>> Package::getDeclaredAnnotationsByType(ref<java::lang::Class> annotationClass) { return call_method<SCAPIX_META_STRING("getDeclaredAnnotationsByType"), ref<link::java::array<java::lang::annotation::Annotation>>>(annotationClass); }
inline ref<link::java::array<java::lang::annotation::Annotation>> Package::getDeclaredAnnotations() { return call_method<SCAPIX_META_STRING("getDeclaredAnnotations"), ref<link::java::array<java::lang::annotation::Annotation>>>(); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_PACKAGE_H
