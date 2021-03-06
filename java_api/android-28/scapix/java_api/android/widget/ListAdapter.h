// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/widget/Adapter.h>

#ifndef SCAPIX_ANDROID_WIDGET_LISTADAPTER_H
#define SCAPIX_ANDROID_WIDGET_LISTADAPTER_H

namespace scapix::java_api {
namespace android::widget {

class ListAdapter : public object_base<SCAPIX_META_STRING("android/widget/ListAdapter"),
	java::lang::Object,
	android::widget::Adapter>
{
public:

	jboolean areAllItemsEnabled();
	jboolean isEnabled(jint p1);

protected:

	ListAdapter(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::widget {

inline jboolean ListAdapter::areAllItemsEnabled() { return call_method<SCAPIX_META_STRING("areAllItemsEnabled"), jboolean>(); }
inline jboolean ListAdapter::isEnabled(jint p1) { return call_method<SCAPIX_META_STRING("isEnabled"), jboolean>(p1); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_LISTADAPTER_H
