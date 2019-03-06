// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_ADMIN_FREEZEPERIOD_H
#define SCAPIX_ANDROID_APP_ADMIN_FREEZEPERIOD_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::time { class MonthDay; }

namespace android::app::admin {

class FreezePeriod : public object_base<SCAPIX_META_STRING("android/app/admin/FreezePeriod"),
	java::lang::Object>
{
public:

	static ref<FreezePeriod> new_object(ref<java::time::MonthDay> start, ref<java::time::MonthDay> end);
	ref<java::time::MonthDay> getStart();
	ref<java::time::MonthDay> getEnd();
	ref<java::lang::String> toString();

protected:

	FreezePeriod(handle_type h) : base_(h) {}

};

} // namespace android::app::admin
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/MonthDay.h>

namespace scapix::java_api {
namespace android::app::admin {

inline ref<FreezePeriod> FreezePeriod::new_object(ref<java::time::MonthDay> start, ref<java::time::MonthDay> end) { return base_::new_object(start, end); }
inline ref<java::time::MonthDay> FreezePeriod::getStart() { return call_method<SCAPIX_META_STRING("getStart"), ref<java::time::MonthDay>>(); }
inline ref<java::time::MonthDay> FreezePeriod::getEnd() { return call_method<SCAPIX_META_STRING("getEnd"), ref<java::time::MonthDay>>(); }
inline ref<java::lang::String> FreezePeriod::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::app::admin
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_ADMIN_FREEZEPERIOD_H
