// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_CALENDARVIEW_ONDATECHANGELISTENER_H
#define SCAPIX_ANDROID_WIDGET_CALENDARVIEW_ONDATECHANGELISTENER_H

namespace scapix::java_api {

namespace android::widget { class CalendarView; }

namespace android::widget {

class CalendarView_OnDateChangeListener : public object_base<SCAPIX_META_STRING("android/widget/CalendarView$OnDateChangeListener"),
	java::lang::Object>
{
public:

	void onSelectedDayChange(ref<android::widget::CalendarView> p1, jint p2, jint p3, jint p4);

protected:

	CalendarView_OnDateChangeListener(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/widget/CalendarView.h>

namespace scapix::java_api {
namespace android::widget {

inline void CalendarView_OnDateChangeListener::onSelectedDayChange(ref<android::widget::CalendarView> p1, jint p2, jint p3, jint p4) { return call_method<SCAPIX_META_STRING("onSelectedDayChange"), void>(p1, p2, p3, p4); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_CALENDARVIEW_ONDATECHANGELISTENER_H
