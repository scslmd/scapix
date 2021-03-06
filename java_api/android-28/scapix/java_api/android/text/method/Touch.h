// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_METHOD_TOUCH_H
#define SCAPIX_ANDROID_TEXT_METHOD_TOUCH_H

namespace scapix::java_api {

namespace android::text { class Layout; }
namespace android::text { class Spannable; }
namespace android::view { class MotionEvent; }
namespace android::widget { class TextView; }

namespace android::text::method {

class Touch : public object_base<SCAPIX_META_STRING("android/text/method/Touch"),
	java::lang::Object>
{
public:

	static void scrollTo(ref<android::widget::TextView> widget, ref<android::text::Layout> layout, jint x, jint y);
	static jboolean onTouchEvent(ref<android::widget::TextView> widget, ref<android::text::Spannable> buffer, ref<android::view::MotionEvent> event);
	static jint getInitialScrollX(ref<android::widget::TextView> widget, ref<android::text::Spannable> buffer);
	static jint getInitialScrollY(ref<android::widget::TextView> widget, ref<android::text::Spannable> buffer);

protected:

	Touch(handle_type h) : base_(h) {}

};

} // namespace android::text::method
} // namespace scapix::java_api

#include <scapix/java_api/android/text/Layout.h>
#include <scapix/java_api/android/text/Spannable.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/widget/TextView.h>

namespace scapix::java_api {
namespace android::text::method {

inline void Touch::scrollTo(ref<android::widget::TextView> widget, ref<android::text::Layout> layout, jint x, jint y) { return call_static_method<SCAPIX_META_STRING("scrollTo"), void>(widget, layout, x, y); }
inline jboolean Touch::onTouchEvent(ref<android::widget::TextView> widget, ref<android::text::Spannable> buffer, ref<android::view::MotionEvent> event) { return call_static_method<SCAPIX_META_STRING("onTouchEvent"), jboolean>(widget, buffer, event); }
inline jint Touch::getInitialScrollX(ref<android::widget::TextView> widget, ref<android::text::Spannable> buffer) { return call_static_method<SCAPIX_META_STRING("getInitialScrollX"), jint>(widget, buffer); }
inline jint Touch::getInitialScrollY(ref<android::widget::TextView> widget, ref<android::text::Spannable> buffer) { return call_static_method<SCAPIX_META_STRING("getInitialScrollY"), jint>(widget, buffer); }

} // namespace android::text::method
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_METHOD_TOUCH_H
