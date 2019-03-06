// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_NUMBERINGSYSTEM_H
#define SCAPIX_ANDROID_ICU_TEXT_NUMBERINGSYSTEM_H

namespace scapix::java_api {

namespace android::icu::util { class ULocale; }
namespace java::lang { class String; }
namespace java::util { class Locale; }

namespace android::icu::text {

class NumberingSystem : public object_base<SCAPIX_META_STRING("android/icu/text/NumberingSystem"),
	java::lang::Object>
{
public:

	static ref<NumberingSystem> new_object();
	static ref<android::icu::text::NumberingSystem> getInstance(jint radix_in, jboolean isAlgorithmic_in, ref<java::lang::String> desc_in);
	static ref<android::icu::text::NumberingSystem> getInstance(ref<java::util::Locale> inLocale);
	static ref<android::icu::text::NumberingSystem> getInstance(ref<android::icu::util::ULocale> locale);
	static ref<android::icu::text::NumberingSystem> getInstance();
	static ref<android::icu::text::NumberingSystem> getInstanceByName(ref<java::lang::String> name);
	static ref<link::java::array<java::lang::String>> getAvailableNames();
	static jboolean isValidDigitString(ref<java::lang::String> str);
	jint getRadix();
	ref<java::lang::String> getDescription();
	ref<java::lang::String> getName();
	jboolean isAlgorithmic();

protected:

	NumberingSystem(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<NumberingSystem> NumberingSystem::new_object() { return base_::new_object(); }
inline ref<android::icu::text::NumberingSystem> NumberingSystem::getInstance(jint radix_in, jboolean isAlgorithmic_in, ref<java::lang::String> desc_in) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::NumberingSystem>>(radix_in, isAlgorithmic_in, desc_in); }
inline ref<android::icu::text::NumberingSystem> NumberingSystem::getInstance(ref<java::util::Locale> inLocale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::NumberingSystem>>(inLocale); }
inline ref<android::icu::text::NumberingSystem> NumberingSystem::getInstance(ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::NumberingSystem>>(locale); }
inline ref<android::icu::text::NumberingSystem> NumberingSystem::getInstance() { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::NumberingSystem>>(); }
inline ref<android::icu::text::NumberingSystem> NumberingSystem::getInstanceByName(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getInstanceByName"), ref<android::icu::text::NumberingSystem>>(name); }
inline ref<link::java::array<java::lang::String>> NumberingSystem::getAvailableNames() { return call_static_method<SCAPIX_META_STRING("getAvailableNames"), ref<link::java::array<java::lang::String>>>(); }
inline jboolean NumberingSystem::isValidDigitString(ref<java::lang::String> str) { return call_static_method<SCAPIX_META_STRING("isValidDigitString"), jboolean>(str); }
inline jint NumberingSystem::getRadix() { return call_method<SCAPIX_META_STRING("getRadix"), jint>(); }
inline ref<java::lang::String> NumberingSystem::getDescription() { return call_method<SCAPIX_META_STRING("getDescription"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NumberingSystem::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline jboolean NumberingSystem::isAlgorithmic() { return call_method<SCAPIX_META_STRING("isAlgorithmic"), jboolean>(); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_NUMBERINGSYSTEM_H
