// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_ANDROID_ICU_UTIL_CALENDAR_H
#define SCAPIX_ANDROID_ICU_UTIL_CALENDAR_H

namespace scapix::java_api {

namespace android::icu::text { class DateFormat; }
namespace android::icu::util { class Calendar_WeekData; }
namespace android::icu::util { class TimeZone; }
namespace android::icu::util { class ULocale; }
namespace java::lang { class String; }
namespace java::util { class Date; }
namespace java::util { class Locale; }

namespace android::icu::util {

class Calendar : public object_base<SCAPIX_META_STRING("android/icu/util/Calendar"),
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable,
	java::lang::Comparable>
{
public:

	using WeekData = Calendar_WeekData;

	static jint AM_();
	static jint AM_PM_();
	static jint APRIL_();
	static jint AUGUST_();
	static jint DATE_();
	static jint DAY_OF_MONTH_();
	static jint DAY_OF_WEEK_();
	static jint DAY_OF_WEEK_IN_MONTH_();
	static jint DAY_OF_YEAR_();
	static jint DECEMBER_();
	static jint DOW_LOCAL_();
	static jint DST_OFFSET_();
	static jint ERA_();
	static jint EXTENDED_YEAR_();
	static jint FEBRUARY_();
	static jint FRIDAY_();
	static jint HOUR_();
	static jint HOUR_OF_DAY_();
	static jint IS_LEAP_MONTH_();
	static jint JANUARY_();
	static jint JULIAN_DAY_();
	static jint JULY_();
	static jint JUNE_();
	static jint MARCH_();
	static jint MAY_();
	static jint MILLISECOND_();
	static jint MILLISECONDS_IN_DAY_();
	static jint MINUTE_();
	static jint MONDAY_();
	static jint MONTH_();
	static jint NOVEMBER_();
	static jint OCTOBER_();
	static jint PM_();
	static jint SATURDAY_();
	static jint SECOND_();
	static jint SEPTEMBER_();
	static jint SUNDAY_();
	static jint THURSDAY_();
	static jint TUESDAY_();
	static jint UNDECIMBER_();
	static jint WALLTIME_FIRST_();
	static jint WALLTIME_LAST_();
	static jint WALLTIME_NEXT_VALID_();
	static jint WEDNESDAY_();
	static jint WEEK_OF_MONTH_();
	static jint WEEK_OF_YEAR_();
	static jint YEAR_();
	static jint YEAR_WOY_();
	static jint ZONE_OFFSET_();

	static ref<android::icu::util::Calendar> getInstance();
	static ref<android::icu::util::Calendar> getInstance(ref<android::icu::util::TimeZone> zone);
	static ref<android::icu::util::Calendar> getInstance(ref<java::util::Locale> aLocale);
	static ref<android::icu::util::Calendar> getInstance(ref<android::icu::util::ULocale> locale);
	static ref<android::icu::util::Calendar> getInstance(ref<android::icu::util::TimeZone> zone, ref<java::util::Locale> aLocale);
	static ref<android::icu::util::Calendar> getInstance(ref<android::icu::util::TimeZone> zone, ref<android::icu::util::ULocale> locale);
	static ref<link::java::array<java::util::Locale>> getAvailableLocales();
	static ref<link::java::array<java::lang::String>> getKeywordValuesForLocale(ref<java::lang::String> key, ref<android::icu::util::ULocale> locale, jboolean commonlyUsed);
	ref<java::util::Date> getTime();
	void setTime(ref<java::util::Date> date);
	jlong getTimeInMillis();
	void setTimeInMillis(jlong millis);
	jint get(jint field);
	void set(jint field, jint value);
	void set(jint year, jint month, jint date);
	void set(jint year, jint month, jint date, jint hour, jint minute);
	void set(jint year, jint month, jint date, jint hour, jint minute, jint second);
	void clear();
	void clear(jint field);
	jboolean isSet(jint field);
	jboolean equals(ref<java::lang::Object> obj);
	jboolean isEquivalentTo(ref<android::icu::util::Calendar> other);
	jint hashCode();
	jboolean before(ref<java::lang::Object> when);
	jboolean after(ref<java::lang::Object> when);
	jint getActualMaximum(jint field);
	jint getActualMinimum(jint field);
	void roll(jint field, jboolean up);
	void roll(jint field, jint amount);
	void add(jint field, jint amount);
	ref<java::lang::String> getDisplayName(ref<java::util::Locale> loc);
	ref<java::lang::String> getDisplayName(ref<android::icu::util::ULocale> loc);
	jint compareTo(ref<android::icu::util::Calendar> that);
	ref<android::icu::text::DateFormat> getDateTimeFormat(jint dateStyle, jint timeStyle, ref<java::util::Locale> loc);
	ref<android::icu::text::DateFormat> getDateTimeFormat(jint dateStyle, jint timeStyle, ref<android::icu::util::ULocale> loc);
	jint fieldDifference(ref<java::util::Date> when, jint field);
	void setTimeZone(ref<android::icu::util::TimeZone> value);
	ref<android::icu::util::TimeZone> getTimeZone();
	void setLenient(jboolean lenient);
	jboolean isLenient();
	void setRepeatedWallTimeOption(jint option);
	jint getRepeatedWallTimeOption();
	void setSkippedWallTimeOption(jint option);
	jint getSkippedWallTimeOption();
	void setFirstDayOfWeek(jint value);
	jint getFirstDayOfWeek();
	void setMinimalDaysInFirstWeek(jint value);
	jint getMinimalDaysInFirstWeek();
	jint getMinimum(jint field);
	jint getMaximum(jint field);
	jint getGreatestMinimum(jint field);
	jint getLeastMaximum(jint field);
	jboolean isWeekend(ref<java::util::Date> date);
	jboolean isWeekend();
	ref<java::lang::Object> clone();
	ref<java::lang::String> toString();
	static ref<android::icu::util::Calendar_WeekData> getWeekDataForRegion(ref<java::lang::String> region);
	ref<android::icu::util::Calendar_WeekData> getWeekData();
	ref<android::icu::util::Calendar> setWeekData(ref<android::icu::util::Calendar_WeekData> wdata);
	jint getFieldCount();
	ref<java::lang::String> getType();

protected:

	Calendar(handle_type h) : base_(h) {}

};

} // namespace android::icu::util
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/text/DateFormat.h>
#include <scapix/java_api/android/icu/util/Calendar_WeekData.h>
#include <scapix/java_api/android/icu/util/TimeZone.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace android::icu::util {

inline jint Calendar::AM_() { return get_static_field<SCAPIX_META_STRING("AM"), jint>(); }
inline jint Calendar::AM_PM_() { return get_static_field<SCAPIX_META_STRING("AM_PM"), jint>(); }
inline jint Calendar::APRIL_() { return get_static_field<SCAPIX_META_STRING("APRIL"), jint>(); }
inline jint Calendar::AUGUST_() { return get_static_field<SCAPIX_META_STRING("AUGUST"), jint>(); }
inline jint Calendar::DATE_() { return get_static_field<SCAPIX_META_STRING("DATE"), jint>(); }
inline jint Calendar::DAY_OF_MONTH_() { return get_static_field<SCAPIX_META_STRING("DAY_OF_MONTH"), jint>(); }
inline jint Calendar::DAY_OF_WEEK_() { return get_static_field<SCAPIX_META_STRING("DAY_OF_WEEK"), jint>(); }
inline jint Calendar::DAY_OF_WEEK_IN_MONTH_() { return get_static_field<SCAPIX_META_STRING("DAY_OF_WEEK_IN_MONTH"), jint>(); }
inline jint Calendar::DAY_OF_YEAR_() { return get_static_field<SCAPIX_META_STRING("DAY_OF_YEAR"), jint>(); }
inline jint Calendar::DECEMBER_() { return get_static_field<SCAPIX_META_STRING("DECEMBER"), jint>(); }
inline jint Calendar::DOW_LOCAL_() { return get_static_field<SCAPIX_META_STRING("DOW_LOCAL"), jint>(); }
inline jint Calendar::DST_OFFSET_() { return get_static_field<SCAPIX_META_STRING("DST_OFFSET"), jint>(); }
inline jint Calendar::ERA_() { return get_static_field<SCAPIX_META_STRING("ERA"), jint>(); }
inline jint Calendar::EXTENDED_YEAR_() { return get_static_field<SCAPIX_META_STRING("EXTENDED_YEAR"), jint>(); }
inline jint Calendar::FEBRUARY_() { return get_static_field<SCAPIX_META_STRING("FEBRUARY"), jint>(); }
inline jint Calendar::FRIDAY_() { return get_static_field<SCAPIX_META_STRING("FRIDAY"), jint>(); }
inline jint Calendar::HOUR_() { return get_static_field<SCAPIX_META_STRING("HOUR"), jint>(); }
inline jint Calendar::HOUR_OF_DAY_() { return get_static_field<SCAPIX_META_STRING("HOUR_OF_DAY"), jint>(); }
inline jint Calendar::IS_LEAP_MONTH_() { return get_static_field<SCAPIX_META_STRING("IS_LEAP_MONTH"), jint>(); }
inline jint Calendar::JANUARY_() { return get_static_field<SCAPIX_META_STRING("JANUARY"), jint>(); }
inline jint Calendar::JULIAN_DAY_() { return get_static_field<SCAPIX_META_STRING("JULIAN_DAY"), jint>(); }
inline jint Calendar::JULY_() { return get_static_field<SCAPIX_META_STRING("JULY"), jint>(); }
inline jint Calendar::JUNE_() { return get_static_field<SCAPIX_META_STRING("JUNE"), jint>(); }
inline jint Calendar::MARCH_() { return get_static_field<SCAPIX_META_STRING("MARCH"), jint>(); }
inline jint Calendar::MAY_() { return get_static_field<SCAPIX_META_STRING("MAY"), jint>(); }
inline jint Calendar::MILLISECOND_() { return get_static_field<SCAPIX_META_STRING("MILLISECOND"), jint>(); }
inline jint Calendar::MILLISECONDS_IN_DAY_() { return get_static_field<SCAPIX_META_STRING("MILLISECONDS_IN_DAY"), jint>(); }
inline jint Calendar::MINUTE_() { return get_static_field<SCAPIX_META_STRING("MINUTE"), jint>(); }
inline jint Calendar::MONDAY_() { return get_static_field<SCAPIX_META_STRING("MONDAY"), jint>(); }
inline jint Calendar::MONTH_() { return get_static_field<SCAPIX_META_STRING("MONTH"), jint>(); }
inline jint Calendar::NOVEMBER_() { return get_static_field<SCAPIX_META_STRING("NOVEMBER"), jint>(); }
inline jint Calendar::OCTOBER_() { return get_static_field<SCAPIX_META_STRING("OCTOBER"), jint>(); }
inline jint Calendar::PM_() { return get_static_field<SCAPIX_META_STRING("PM"), jint>(); }
inline jint Calendar::SATURDAY_() { return get_static_field<SCAPIX_META_STRING("SATURDAY"), jint>(); }
inline jint Calendar::SECOND_() { return get_static_field<SCAPIX_META_STRING("SECOND"), jint>(); }
inline jint Calendar::SEPTEMBER_() { return get_static_field<SCAPIX_META_STRING("SEPTEMBER"), jint>(); }
inline jint Calendar::SUNDAY_() { return get_static_field<SCAPIX_META_STRING("SUNDAY"), jint>(); }
inline jint Calendar::THURSDAY_() { return get_static_field<SCAPIX_META_STRING("THURSDAY"), jint>(); }
inline jint Calendar::TUESDAY_() { return get_static_field<SCAPIX_META_STRING("TUESDAY"), jint>(); }
inline jint Calendar::UNDECIMBER_() { return get_static_field<SCAPIX_META_STRING("UNDECIMBER"), jint>(); }
inline jint Calendar::WALLTIME_FIRST_() { return get_static_field<SCAPIX_META_STRING("WALLTIME_FIRST"), jint>(); }
inline jint Calendar::WALLTIME_LAST_() { return get_static_field<SCAPIX_META_STRING("WALLTIME_LAST"), jint>(); }
inline jint Calendar::WALLTIME_NEXT_VALID_() { return get_static_field<SCAPIX_META_STRING("WALLTIME_NEXT_VALID"), jint>(); }
inline jint Calendar::WEDNESDAY_() { return get_static_field<SCAPIX_META_STRING("WEDNESDAY"), jint>(); }
inline jint Calendar::WEEK_OF_MONTH_() { return get_static_field<SCAPIX_META_STRING("WEEK_OF_MONTH"), jint>(); }
inline jint Calendar::WEEK_OF_YEAR_() { return get_static_field<SCAPIX_META_STRING("WEEK_OF_YEAR"), jint>(); }
inline jint Calendar::YEAR_() { return get_static_field<SCAPIX_META_STRING("YEAR"), jint>(); }
inline jint Calendar::YEAR_WOY_() { return get_static_field<SCAPIX_META_STRING("YEAR_WOY"), jint>(); }
inline jint Calendar::ZONE_OFFSET_() { return get_static_field<SCAPIX_META_STRING("ZONE_OFFSET"), jint>(); }
inline ref<android::icu::util::Calendar> Calendar::getInstance() { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::util::Calendar>>(); }
inline ref<android::icu::util::Calendar> Calendar::getInstance(ref<android::icu::util::TimeZone> zone) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::util::Calendar>>(zone); }
inline ref<android::icu::util::Calendar> Calendar::getInstance(ref<java::util::Locale> aLocale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::util::Calendar>>(aLocale); }
inline ref<android::icu::util::Calendar> Calendar::getInstance(ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::util::Calendar>>(locale); }
inline ref<android::icu::util::Calendar> Calendar::getInstance(ref<android::icu::util::TimeZone> zone, ref<java::util::Locale> aLocale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::util::Calendar>>(zone, aLocale); }
inline ref<android::icu::util::Calendar> Calendar::getInstance(ref<android::icu::util::TimeZone> zone, ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::util::Calendar>>(zone, locale); }
inline ref<link::java::array<java::util::Locale>> Calendar::getAvailableLocales() { return call_static_method<SCAPIX_META_STRING("getAvailableLocales"), ref<link::java::array<java::util::Locale>>>(); }
inline ref<link::java::array<java::lang::String>> Calendar::getKeywordValuesForLocale(ref<java::lang::String> key, ref<android::icu::util::ULocale> locale, jboolean commonlyUsed) { return call_static_method<SCAPIX_META_STRING("getKeywordValuesForLocale"), ref<link::java::array<java::lang::String>>>(key, locale, commonlyUsed); }
inline ref<java::util::Date> Calendar::getTime() { return call_method<SCAPIX_META_STRING("getTime"), ref<java::util::Date>>(); }
inline void Calendar::setTime(ref<java::util::Date> date) { return call_method<SCAPIX_META_STRING("setTime"), void>(date); }
inline jlong Calendar::getTimeInMillis() { return call_method<SCAPIX_META_STRING("getTimeInMillis"), jlong>(); }
inline void Calendar::setTimeInMillis(jlong millis) { return call_method<SCAPIX_META_STRING("setTimeInMillis"), void>(millis); }
inline jint Calendar::get(jint field) { return call_method<SCAPIX_META_STRING("get"), jint>(field); }
inline void Calendar::set(jint field, jint value) { return call_method<SCAPIX_META_STRING("set"), void>(field, value); }
inline void Calendar::set(jint year, jint month, jint date) { return call_method<SCAPIX_META_STRING("set"), void>(year, month, date); }
inline void Calendar::set(jint year, jint month, jint date, jint hour, jint minute) { return call_method<SCAPIX_META_STRING("set"), void>(year, month, date, hour, minute); }
inline void Calendar::set(jint year, jint month, jint date, jint hour, jint minute, jint second) { return call_method<SCAPIX_META_STRING("set"), void>(year, month, date, hour, minute, second); }
inline void Calendar::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline void Calendar::clear(jint field) { return call_method<SCAPIX_META_STRING("clear"), void>(field); }
inline jboolean Calendar::isSet(jint field) { return call_method<SCAPIX_META_STRING("isSet"), jboolean>(field); }
inline jboolean Calendar::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jboolean Calendar::isEquivalentTo(ref<android::icu::util::Calendar> other) { return call_method<SCAPIX_META_STRING("isEquivalentTo"), jboolean>(other); }
inline jint Calendar::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean Calendar::before(ref<java::lang::Object> when) { return call_method<SCAPIX_META_STRING("before"), jboolean>(when); }
inline jboolean Calendar::after(ref<java::lang::Object> when) { return call_method<SCAPIX_META_STRING("after"), jboolean>(when); }
inline jint Calendar::getActualMaximum(jint field) { return call_method<SCAPIX_META_STRING("getActualMaximum"), jint>(field); }
inline jint Calendar::getActualMinimum(jint field) { return call_method<SCAPIX_META_STRING("getActualMinimum"), jint>(field); }
inline void Calendar::roll(jint field, jboolean up) { return call_method<SCAPIX_META_STRING("roll"), void>(field, up); }
inline void Calendar::roll(jint field, jint amount) { return call_method<SCAPIX_META_STRING("roll"), void>(field, amount); }
inline void Calendar::add(jint field, jint amount) { return call_method<SCAPIX_META_STRING("add"), void>(field, amount); }
inline ref<java::lang::String> Calendar::getDisplayName(ref<java::util::Locale> loc) { return call_method<SCAPIX_META_STRING("getDisplayName"), ref<java::lang::String>>(loc); }
inline ref<java::lang::String> Calendar::getDisplayName(ref<android::icu::util::ULocale> loc) { return call_method<SCAPIX_META_STRING("getDisplayName"), ref<java::lang::String>>(loc); }
inline jint Calendar::compareTo(ref<android::icu::util::Calendar> that) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(that); }
inline ref<android::icu::text::DateFormat> Calendar::getDateTimeFormat(jint dateStyle, jint timeStyle, ref<java::util::Locale> loc) { return call_method<SCAPIX_META_STRING("getDateTimeFormat"), ref<android::icu::text::DateFormat>>(dateStyle, timeStyle, loc); }
inline ref<android::icu::text::DateFormat> Calendar::getDateTimeFormat(jint dateStyle, jint timeStyle, ref<android::icu::util::ULocale> loc) { return call_method<SCAPIX_META_STRING("getDateTimeFormat"), ref<android::icu::text::DateFormat>>(dateStyle, timeStyle, loc); }
inline jint Calendar::fieldDifference(ref<java::util::Date> when, jint field) { return call_method<SCAPIX_META_STRING("fieldDifference"), jint>(when, field); }
inline void Calendar::setTimeZone(ref<android::icu::util::TimeZone> value) { return call_method<SCAPIX_META_STRING("setTimeZone"), void>(value); }
inline ref<android::icu::util::TimeZone> Calendar::getTimeZone() { return call_method<SCAPIX_META_STRING("getTimeZone"), ref<android::icu::util::TimeZone>>(); }
inline void Calendar::setLenient(jboolean lenient) { return call_method<SCAPIX_META_STRING("setLenient"), void>(lenient); }
inline jboolean Calendar::isLenient() { return call_method<SCAPIX_META_STRING("isLenient"), jboolean>(); }
inline void Calendar::setRepeatedWallTimeOption(jint option) { return call_method<SCAPIX_META_STRING("setRepeatedWallTimeOption"), void>(option); }
inline jint Calendar::getRepeatedWallTimeOption() { return call_method<SCAPIX_META_STRING("getRepeatedWallTimeOption"), jint>(); }
inline void Calendar::setSkippedWallTimeOption(jint option) { return call_method<SCAPIX_META_STRING("setSkippedWallTimeOption"), void>(option); }
inline jint Calendar::getSkippedWallTimeOption() { return call_method<SCAPIX_META_STRING("getSkippedWallTimeOption"), jint>(); }
inline void Calendar::setFirstDayOfWeek(jint value) { return call_method<SCAPIX_META_STRING("setFirstDayOfWeek"), void>(value); }
inline jint Calendar::getFirstDayOfWeek() { return call_method<SCAPIX_META_STRING("getFirstDayOfWeek"), jint>(); }
inline void Calendar::setMinimalDaysInFirstWeek(jint value) { return call_method<SCAPIX_META_STRING("setMinimalDaysInFirstWeek"), void>(value); }
inline jint Calendar::getMinimalDaysInFirstWeek() { return call_method<SCAPIX_META_STRING("getMinimalDaysInFirstWeek"), jint>(); }
inline jint Calendar::getMinimum(jint field) { return call_method<SCAPIX_META_STRING("getMinimum"), jint>(field); }
inline jint Calendar::getMaximum(jint field) { return call_method<SCAPIX_META_STRING("getMaximum"), jint>(field); }
inline jint Calendar::getGreatestMinimum(jint field) { return call_method<SCAPIX_META_STRING("getGreatestMinimum"), jint>(field); }
inline jint Calendar::getLeastMaximum(jint field) { return call_method<SCAPIX_META_STRING("getLeastMaximum"), jint>(field); }
inline jboolean Calendar::isWeekend(ref<java::util::Date> date) { return call_method<SCAPIX_META_STRING("isWeekend"), jboolean>(date); }
inline jboolean Calendar::isWeekend() { return call_method<SCAPIX_META_STRING("isWeekend"), jboolean>(); }
inline ref<java::lang::Object> Calendar::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline ref<java::lang::String> Calendar::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<android::icu::util::Calendar_WeekData> Calendar::getWeekDataForRegion(ref<java::lang::String> region) { return call_static_method<SCAPIX_META_STRING("getWeekDataForRegion"), ref<android::icu::util::Calendar_WeekData>>(region); }
inline ref<android::icu::util::Calendar_WeekData> Calendar::getWeekData() { return call_method<SCAPIX_META_STRING("getWeekData"), ref<android::icu::util::Calendar_WeekData>>(); }
inline ref<android::icu::util::Calendar> Calendar::setWeekData(ref<android::icu::util::Calendar_WeekData> wdata) { return call_method<SCAPIX_META_STRING("setWeekData"), ref<android::icu::util::Calendar>>(wdata); }
inline jint Calendar::getFieldCount() { return call_method<SCAPIX_META_STRING("getFieldCount"), jint>(); }
inline ref<java::lang::String> Calendar::getType() { return call_method<SCAPIX_META_STRING("getType"), ref<java::lang::String>>(); }

} // namespace android::icu::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_UTIL_CALENDAR_H
