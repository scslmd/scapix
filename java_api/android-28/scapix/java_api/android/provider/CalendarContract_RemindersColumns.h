// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_REMINDERSCOLUMNS_H
#define SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_REMINDERSCOLUMNS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class CalendarContract_RemindersColumns : public object_base<SCAPIX_META_STRING("android/provider/CalendarContract$RemindersColumns"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> EVENT_ID_();
	static ref<java::lang::String> METHOD_();
	static jint METHOD_ALARM_();
	static jint METHOD_ALERT_();
	static jint METHOD_DEFAULT_();
	static jint METHOD_EMAIL_();
	static jint METHOD_SMS_();
	static ref<java::lang::String> MINUTES_();
	static jint MINUTES_DEFAULT_();


protected:

	CalendarContract_RemindersColumns(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> CalendarContract_RemindersColumns::EVENT_ID_() { return get_static_field<SCAPIX_META_STRING("EVENT_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> CalendarContract_RemindersColumns::METHOD_() { return get_static_field<SCAPIX_META_STRING("METHOD"), ref<java::lang::String>>(); }
inline jint CalendarContract_RemindersColumns::METHOD_ALARM_() { return get_static_field<SCAPIX_META_STRING("METHOD_ALARM"), jint>(); }
inline jint CalendarContract_RemindersColumns::METHOD_ALERT_() { return get_static_field<SCAPIX_META_STRING("METHOD_ALERT"), jint>(); }
inline jint CalendarContract_RemindersColumns::METHOD_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("METHOD_DEFAULT"), jint>(); }
inline jint CalendarContract_RemindersColumns::METHOD_EMAIL_() { return get_static_field<SCAPIX_META_STRING("METHOD_EMAIL"), jint>(); }
inline jint CalendarContract_RemindersColumns::METHOD_SMS_() { return get_static_field<SCAPIX_META_STRING("METHOD_SMS"), jint>(); }
inline ref<java::lang::String> CalendarContract_RemindersColumns::MINUTES_() { return get_static_field<SCAPIX_META_STRING("MINUTES"), ref<java::lang::String>>(); }
inline jint CalendarContract_RemindersColumns::MINUTES_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("MINUTES_DEFAULT"), jint>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_REMINDERSCOLUMNS_H
