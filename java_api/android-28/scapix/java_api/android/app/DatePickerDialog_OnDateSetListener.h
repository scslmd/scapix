// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_DATEPICKERDIALOG_ONDATESETLISTENER_H
#define SCAPIX_ANDROID_APP_DATEPICKERDIALOG_ONDATESETLISTENER_H

namespace scapix::java_api {

namespace android::widget { class DatePicker; }

namespace android::app {

class DatePickerDialog_OnDateSetListener : public object_base<SCAPIX_META_STRING("android/app/DatePickerDialog$OnDateSetListener"),
	java::lang::Object>
{
public:

	void onDateSet(ref<android::widget::DatePicker> p1, jint p2, jint p3, jint p4);

protected:

	DatePickerDialog_OnDateSetListener(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/widget/DatePicker.h>

namespace scapix::java_api {
namespace android::app {

inline void DatePickerDialog_OnDateSetListener::onDateSet(ref<android::widget::DatePicker> p1, jint p2, jint p3, jint p4) { return call_method<SCAPIX_META_STRING("onDateSet"), void>(p1, p2, p3, p4); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_DATEPICKERDIALOG_ONDATESETLISTENER_H
