// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_VIEWBINDER_H
#define SCAPIX_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_VIEWBINDER_H

namespace scapix::java_api {

namespace android::database { class Cursor; }
namespace android::view { class View; }

namespace android::widget {

class SimpleCursorTreeAdapter_ViewBinder : public object_base<SCAPIX_META_STRING("android/widget/SimpleCursorTreeAdapter$ViewBinder"),
	java::lang::Object>
{
public:

	jboolean setViewValue(ref<android::view::View> p1, ref<android::database::Cursor> p2, jint p3);

protected:

	SimpleCursorTreeAdapter_ViewBinder(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/view/View.h>

namespace scapix::java_api {
namespace android::widget {

inline jboolean SimpleCursorTreeAdapter_ViewBinder::setViewValue(ref<android::view::View> p1, ref<android::database::Cursor> p2, jint p3) { return call_method<SCAPIX_META_STRING("setViewValue"), jboolean>(p1, p2, p3); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_VIEWBINDER_H
