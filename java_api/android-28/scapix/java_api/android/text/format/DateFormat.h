// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_FORMAT_DATEFORMAT_H
#define SCAPIX_ANDROID_TEXT_FORMAT_DATEFORMAT_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::text { class DateFormat; }
namespace java::util { class Calendar; }
namespace java::util { class Date; }
namespace java::util { class Locale; }

namespace android::text::format {

class DateFormat : public object_base<SCAPIX_META_STRING("android/text/format/DateFormat"),
	java::lang::Object>
{
public:

	static ref<DateFormat> new_object();
	static jboolean is24HourFormat(ref<android::content::Context> context);
	static ref<java::lang::String> getBestDateTimePattern(ref<java::util::Locale> locale, ref<java::lang::String> skeleton);
	static ref<java::text::DateFormat> getTimeFormat(ref<android::content::Context> context);
	static ref<java::text::DateFormat> getDateFormat(ref<android::content::Context> context);
	static ref<java::text::DateFormat> getLongDateFormat(ref<android::content::Context> context);
	static ref<java::text::DateFormat> getMediumDateFormat(ref<android::content::Context> context);
	static ref<link::java::array<jchar>> getDateFormatOrder(ref<android::content::Context> context);
	static ref<java::lang::CharSequence> format(ref<java::lang::CharSequence> inFormat, jlong inTimeInMillis);
	static ref<java::lang::CharSequence> format(ref<java::lang::CharSequence> inFormat, ref<java::util::Date> inDate);
	static ref<java::lang::CharSequence> format(ref<java::lang::CharSequence> inFormat, ref<java::util::Calendar> inDate);

protected:

	DateFormat(handle_type h) : base_(h) {}

};

} // namespace android::text::format
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/DateFormat.h>
#include <scapix/java_api/java/util/Calendar.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace android::text::format {

inline ref<DateFormat> DateFormat::new_object() { return base_::new_object(); }
inline jboolean DateFormat::is24HourFormat(ref<android::content::Context> context) { return call_static_method<SCAPIX_META_STRING("is24HourFormat"), jboolean>(context); }
inline ref<java::lang::String> DateFormat::getBestDateTimePattern(ref<java::util::Locale> locale, ref<java::lang::String> skeleton) { return call_static_method<SCAPIX_META_STRING("getBestDateTimePattern"), ref<java::lang::String>>(locale, skeleton); }
inline ref<java::text::DateFormat> DateFormat::getTimeFormat(ref<android::content::Context> context) { return call_static_method<SCAPIX_META_STRING("getTimeFormat"), ref<java::text::DateFormat>>(context); }
inline ref<java::text::DateFormat> DateFormat::getDateFormat(ref<android::content::Context> context) { return call_static_method<SCAPIX_META_STRING("getDateFormat"), ref<java::text::DateFormat>>(context); }
inline ref<java::text::DateFormat> DateFormat::getLongDateFormat(ref<android::content::Context> context) { return call_static_method<SCAPIX_META_STRING("getLongDateFormat"), ref<java::text::DateFormat>>(context); }
inline ref<java::text::DateFormat> DateFormat::getMediumDateFormat(ref<android::content::Context> context) { return call_static_method<SCAPIX_META_STRING("getMediumDateFormat"), ref<java::text::DateFormat>>(context); }
inline ref<link::java::array<jchar>> DateFormat::getDateFormatOrder(ref<android::content::Context> context) { return call_static_method<SCAPIX_META_STRING("getDateFormatOrder"), ref<link::java::array<jchar>>>(context); }
inline ref<java::lang::CharSequence> DateFormat::format(ref<java::lang::CharSequence> inFormat, jlong inTimeInMillis) { return call_static_method<SCAPIX_META_STRING("format"), ref<java::lang::CharSequence>>(inFormat, inTimeInMillis); }
inline ref<java::lang::CharSequence> DateFormat::format(ref<java::lang::CharSequence> inFormat, ref<java::util::Date> inDate) { return call_static_method<SCAPIX_META_STRING("format"), ref<java::lang::CharSequence>>(inFormat, inDate); }
inline ref<java::lang::CharSequence> DateFormat::format(ref<java::lang::CharSequence> inFormat, ref<java::util::Calendar> inDate) { return call_static_method<SCAPIX_META_STRING("format"), ref<java::lang::CharSequence>>(inFormat, inDate); }

} // namespace android::text::format
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_FORMAT_DATEFORMAT_H
