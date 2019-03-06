// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES_DIALECTHANDLING_H
#define SCAPIX_ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES_DIALECTHANDLING_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::icu::text {

class LocaleDisplayNames_DialectHandling : public object_base<SCAPIX_META_STRING("android/icu/text/LocaleDisplayNames$DialectHandling"),
	java::lang::Enum>
{
public:

	static ref<android::icu::text::LocaleDisplayNames_DialectHandling> STANDARD_NAMES_();
	static ref<android::icu::text::LocaleDisplayNames_DialectHandling> DIALECT_NAMES_();

	static ref<link::java::array<android::icu::text::LocaleDisplayNames_DialectHandling>> values();
	static ref<android::icu::text::LocaleDisplayNames_DialectHandling> valueOf(ref<java::lang::String> name);

protected:

	LocaleDisplayNames_DialectHandling(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<android::icu::text::LocaleDisplayNames_DialectHandling> LocaleDisplayNames_DialectHandling::STANDARD_NAMES_() { return get_static_field<SCAPIX_META_STRING("STANDARD_NAMES"), ref<android::icu::text::LocaleDisplayNames_DialectHandling>>(); }
inline ref<android::icu::text::LocaleDisplayNames_DialectHandling> LocaleDisplayNames_DialectHandling::DIALECT_NAMES_() { return get_static_field<SCAPIX_META_STRING("DIALECT_NAMES"), ref<android::icu::text::LocaleDisplayNames_DialectHandling>>(); }
inline ref<link::java::array<android::icu::text::LocaleDisplayNames_DialectHandling>> LocaleDisplayNames_DialectHandling::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::icu::text::LocaleDisplayNames_DialectHandling>>>(); }
inline ref<android::icu::text::LocaleDisplayNames_DialectHandling> LocaleDisplayNames_DialectHandling::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::icu::text::LocaleDisplayNames_DialectHandling>>(name); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES_DIALECTHANDLING_H
