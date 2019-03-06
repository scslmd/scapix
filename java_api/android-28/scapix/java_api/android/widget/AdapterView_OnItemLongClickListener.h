// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_ADAPTERVIEW_ONITEMLONGCLICKLISTENER_H
#define SCAPIX_ANDROID_WIDGET_ADAPTERVIEW_ONITEMLONGCLICKLISTENER_H

namespace scapix::java_api {

namespace android::view { class View; }
namespace android::widget { class AdapterView; }

namespace android::widget {

class AdapterView_OnItemLongClickListener : public object_base<SCAPIX_META_STRING("android/widget/AdapterView$OnItemLongClickListener"),
	java::lang::Object>
{
public:

	jboolean onItemLongClick(ref<android::widget::AdapterView> p1, ref<android::view::View> p2, jint p3, jlong p4);

protected:

	AdapterView_OnItemLongClickListener(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/widget/AdapterView.h>

namespace scapix::java_api {
namespace android::widget {

inline jboolean AdapterView_OnItemLongClickListener::onItemLongClick(ref<android::widget::AdapterView> p1, ref<android::view::View> p2, jint p3, jlong p4) { return call_method<SCAPIX_META_STRING("onItemLongClick"), jboolean>(p1, p2, p3, p4); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_ADAPTERVIEW_ONITEMLONGCLICKLISTENER_H
