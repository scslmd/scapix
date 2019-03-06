// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/icu/util/Calendar.h>

#ifndef SCAPIX_ANDROID_ICU_UTIL_INDIANCALENDAR_H
#define SCAPIX_ANDROID_ICU_UTIL_INDIANCALENDAR_H

namespace scapix::java_api {

namespace android::icu::util { class TimeZone; }
namespace android::icu::util { class ULocale; }
namespace java::lang { class String; }
namespace java::util { class Date; }
namespace java::util { class Locale; }

namespace android::icu::util {

class IndianCalendar : public object_base<SCAPIX_META_STRING("android/icu/util/IndianCalendar"),
	android::icu::util::Calendar>
{
public:

	static jint AGRAHAYANA_();
	static jint ASADHA_();
	static jint ASVINA_();
	static jint BHADRA_();
	static jint CHAITRA_();
	static jint IE_();
	static jint JYAISTHA_();
	static jint KARTIKA_();
	static jint MAGHA_();
	static jint PAUSA_();
	static jint PHALGUNA_();
	static jint SRAVANA_();
	static jint VAISAKHA_();

	static ref<IndianCalendar> new_object();
	static ref<IndianCalendar> new_object(ref<android::icu::util::TimeZone> zone);
	static ref<IndianCalendar> new_object(ref<java::util::Locale> aLocale);
	static ref<IndianCalendar> new_object(ref<android::icu::util::ULocale> locale);
	static ref<IndianCalendar> new_object(ref<android::icu::util::TimeZone> zone, ref<java::util::Locale> aLocale);
	static ref<IndianCalendar> new_object(ref<android::icu::util::TimeZone> zone, ref<android::icu::util::ULocale> locale);
	static ref<IndianCalendar> new_object(ref<java::util::Date> date);
	static ref<IndianCalendar> new_object(jint year, jint month, jint date);
	static ref<IndianCalendar> new_object(jint year, jint month, jint date, jint hour, jint minute, jint second);
	ref<java::lang::String> getType();

protected:

	IndianCalendar(handle_type h) : base_(h) {}

};

} // namespace android::icu::util
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/util/TimeZone.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace android::icu::util {

inline jint IndianCalendar::AGRAHAYANA_() { return get_static_field<SCAPIX_META_STRING("AGRAHAYANA"), jint>(); }
inline jint IndianCalendar::ASADHA_() { return get_static_field<SCAPIX_META_STRING("ASADHA"), jint>(); }
inline jint IndianCalendar::ASVINA_() { return get_static_field<SCAPIX_META_STRING("ASVINA"), jint>(); }
inline jint IndianCalendar::BHADRA_() { return get_static_field<SCAPIX_META_STRING("BHADRA"), jint>(); }
inline jint IndianCalendar::CHAITRA_() { return get_static_field<SCAPIX_META_STRING("CHAITRA"), jint>(); }
inline jint IndianCalendar::IE_() { return get_static_field<SCAPIX_META_STRING("IE"), jint>(); }
inline jint IndianCalendar::JYAISTHA_() { return get_static_field<SCAPIX_META_STRING("JYAISTHA"), jint>(); }
inline jint IndianCalendar::KARTIKA_() { return get_static_field<SCAPIX_META_STRING("KARTIKA"), jint>(); }
inline jint IndianCalendar::MAGHA_() { return get_static_field<SCAPIX_META_STRING("MAGHA"), jint>(); }
inline jint IndianCalendar::PAUSA_() { return get_static_field<SCAPIX_META_STRING("PAUSA"), jint>(); }
inline jint IndianCalendar::PHALGUNA_() { return get_static_field<SCAPIX_META_STRING("PHALGUNA"), jint>(); }
inline jint IndianCalendar::SRAVANA_() { return get_static_field<SCAPIX_META_STRING("SRAVANA"), jint>(); }
inline jint IndianCalendar::VAISAKHA_() { return get_static_field<SCAPIX_META_STRING("VAISAKHA"), jint>(); }
inline ref<IndianCalendar> IndianCalendar::new_object() { return base_::new_object(); }
inline ref<IndianCalendar> IndianCalendar::new_object(ref<android::icu::util::TimeZone> zone) { return base_::new_object(zone); }
inline ref<IndianCalendar> IndianCalendar::new_object(ref<java::util::Locale> aLocale) { return base_::new_object(aLocale); }
inline ref<IndianCalendar> IndianCalendar::new_object(ref<android::icu::util::ULocale> locale) { return base_::new_object(locale); }
inline ref<IndianCalendar> IndianCalendar::new_object(ref<android::icu::util::TimeZone> zone, ref<java::util::Locale> aLocale) { return base_::new_object(zone, aLocale); }
inline ref<IndianCalendar> IndianCalendar::new_object(ref<android::icu::util::TimeZone> zone, ref<android::icu::util::ULocale> locale) { return base_::new_object(zone, locale); }
inline ref<IndianCalendar> IndianCalendar::new_object(ref<java::util::Date> date) { return base_::new_object(date); }
inline ref<IndianCalendar> IndianCalendar::new_object(jint year, jint month, jint date) { return base_::new_object(year, month, date); }
inline ref<IndianCalendar> IndianCalendar::new_object(jint year, jint month, jint date, jint hour, jint minute, jint second) { return base_::new_object(year, month, date, hour, minute, second); }
inline ref<java::lang::String> IndianCalendar::getType() { return call_method<SCAPIX_META_STRING("getType"), ref<java::lang::String>>(); }

} // namespace android::icu::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_UTIL_INDIANCALENDAR_H
