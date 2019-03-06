// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYSCOLUMNS_H
#define SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYSCOLUMNS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class CalendarContract_EventDaysColumns : public object_base<SCAPIX_META_STRING("android/provider/CalendarContract$EventDaysColumns"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> ENDDAY_();
	static ref<java::lang::String> STARTDAY_();


protected:

	CalendarContract_EventDaysColumns(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> CalendarContract_EventDaysColumns::ENDDAY_() { return get_static_field<SCAPIX_META_STRING("ENDDAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> CalendarContract_EventDaysColumns::STARTDAY_() { return get_static_field<SCAPIX_META_STRING("STARTDAY"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYSCOLUMNS_H
