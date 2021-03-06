// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_H
#define SCAPIX_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_H

namespace scapix::java_api {

namespace java::lang { class ClassLoader; }
namespace java::lang { class String; }
namespace java::util { class List; }
namespace java::util { class Locale; }
namespace java::util { class ResourceBundle; }

namespace java::util {

class ResourceBundle_Control : public object_base<SCAPIX_META_STRING("java/util/ResourceBundle$Control"),
	java::lang::Object>
{
public:

	static ref<java::util::List> FORMAT_DEFAULT_();
	static ref<java::util::List> FORMAT_CLASS_();
	static ref<java::util::List> FORMAT_PROPERTIES_();
	static jlong TTL_DONT_CACHE_();
	static jlong TTL_NO_EXPIRATION_CONTROL_();

	static ref<java::util::ResourceBundle_Control> getControl(ref<java::util::List> formats);
	static ref<java::util::ResourceBundle_Control> getNoFallbackControl(ref<java::util::List> formats);
	ref<java::util::List> getFormats(ref<java::lang::String> baseName);
	ref<java::util::List> getCandidateLocales(ref<java::lang::String> baseName, ref<java::util::Locale> locale);
	ref<java::util::Locale> getFallbackLocale(ref<java::lang::String> baseName, ref<java::util::Locale> locale);
	ref<java::util::ResourceBundle> newBundle(ref<java::lang::String> baseName, ref<java::util::Locale> locale, ref<java::lang::String> format, ref<java::lang::ClassLoader> loader, jboolean reload);
	jlong getTimeToLive(ref<java::lang::String> baseName, ref<java::util::Locale> locale);
	jboolean needsReload(ref<java::lang::String> baseName, ref<java::util::Locale> locale, ref<java::lang::String> format, ref<java::lang::ClassLoader> loader, ref<java::util::ResourceBundle> bundle, jlong loadTime);
	ref<java::lang::String> toBundleName(ref<java::lang::String> baseName, ref<java::util::Locale> locale);
	ref<java::lang::String> toResourceName(ref<java::lang::String> bundleName, ref<java::lang::String> suffix);

protected:

	ResourceBundle_Control(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/ResourceBundle.h>

namespace scapix::java_api {
namespace java::util {

inline ref<java::util::List> ResourceBundle_Control::FORMAT_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("FORMAT_DEFAULT"), ref<java::util::List>>(); }
inline ref<java::util::List> ResourceBundle_Control::FORMAT_CLASS_() { return get_static_field<SCAPIX_META_STRING("FORMAT_CLASS"), ref<java::util::List>>(); }
inline ref<java::util::List> ResourceBundle_Control::FORMAT_PROPERTIES_() { return get_static_field<SCAPIX_META_STRING("FORMAT_PROPERTIES"), ref<java::util::List>>(); }
inline jlong ResourceBundle_Control::TTL_DONT_CACHE_() { return get_static_field<SCAPIX_META_STRING("TTL_DONT_CACHE"), jlong>(); }
inline jlong ResourceBundle_Control::TTL_NO_EXPIRATION_CONTROL_() { return get_static_field<SCAPIX_META_STRING("TTL_NO_EXPIRATION_CONTROL"), jlong>(); }
inline ref<java::util::ResourceBundle_Control> ResourceBundle_Control::getControl(ref<java::util::List> formats) { return call_static_method<SCAPIX_META_STRING("getControl"), ref<java::util::ResourceBundle_Control>>(formats); }
inline ref<java::util::ResourceBundle_Control> ResourceBundle_Control::getNoFallbackControl(ref<java::util::List> formats) { return call_static_method<SCAPIX_META_STRING("getNoFallbackControl"), ref<java::util::ResourceBundle_Control>>(formats); }
inline ref<java::util::List> ResourceBundle_Control::getFormats(ref<java::lang::String> baseName) { return call_method<SCAPIX_META_STRING("getFormats"), ref<java::util::List>>(baseName); }
inline ref<java::util::List> ResourceBundle_Control::getCandidateLocales(ref<java::lang::String> baseName, ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("getCandidateLocales"), ref<java::util::List>>(baseName, locale); }
inline ref<java::util::Locale> ResourceBundle_Control::getFallbackLocale(ref<java::lang::String> baseName, ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("getFallbackLocale"), ref<java::util::Locale>>(baseName, locale); }
inline ref<java::util::ResourceBundle> ResourceBundle_Control::newBundle(ref<java::lang::String> baseName, ref<java::util::Locale> locale, ref<java::lang::String> format, ref<java::lang::ClassLoader> loader, jboolean reload) { return call_method<SCAPIX_META_STRING("newBundle"), ref<java::util::ResourceBundle>>(baseName, locale, format, loader, reload); }
inline jlong ResourceBundle_Control::getTimeToLive(ref<java::lang::String> baseName, ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("getTimeToLive"), jlong>(baseName, locale); }
inline jboolean ResourceBundle_Control::needsReload(ref<java::lang::String> baseName, ref<java::util::Locale> locale, ref<java::lang::String> format, ref<java::lang::ClassLoader> loader, ref<java::util::ResourceBundle> bundle, jlong loadTime) { return call_method<SCAPIX_META_STRING("needsReload"), jboolean>(baseName, locale, format, loader, bundle, loadTime); }
inline ref<java::lang::String> ResourceBundle_Control::toBundleName(ref<java::lang::String> baseName, ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("toBundleName"), ref<java::lang::String>>(baseName, locale); }
inline ref<java::lang::String> ResourceBundle_Control::toResourceName(ref<java::lang::String> bundleName, ref<java::lang::String> suffix) { return call_method<SCAPIX_META_STRING("toResourceName"), ref<java::lang::String>>(bundleName, suffix); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_RESOURCEBUNDLE_CONTROL_H
