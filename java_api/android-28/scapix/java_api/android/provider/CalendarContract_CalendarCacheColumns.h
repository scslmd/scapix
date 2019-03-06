// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARCACHECOLUMNS_H
#define SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARCACHECOLUMNS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class CalendarContract_CalendarCacheColumns : public object_base<SCAPIX_META_STRING("android/provider/CalendarContract$CalendarCacheColumns"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> KEY_();
	static ref<java::lang::String> VALUE_();


protected:

	CalendarContract_CalendarCacheColumns(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> CalendarContract_CalendarCacheColumns::KEY_() { return get_static_field<SCAPIX_META_STRING("KEY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> CalendarContract_CalendarCacheColumns::VALUE_() { return get_static_field<SCAPIX_META_STRING("VALUE"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARCACHECOLUMNS_H
