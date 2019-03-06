// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/widget/ListAdapter.h>

#ifndef SCAPIX_ANDROID_WIDGET_WRAPPERLISTADAPTER_H
#define SCAPIX_ANDROID_WIDGET_WRAPPERLISTADAPTER_H

namespace scapix::java_api {
namespace android::widget {

class WrapperListAdapter : public object_base<SCAPIX_META_STRING("android/widget/WrapperListAdapter"),
	java::lang::Object,
	android::widget::ListAdapter>
{
public:

	ref<android::widget::ListAdapter> getWrappedAdapter();

protected:

	WrapperListAdapter(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::widget {

inline ref<android::widget::ListAdapter> WrapperListAdapter::getWrappedAdapter() { return call_method<SCAPIX_META_STRING("getWrappedAdapter"), ref<android::widget::ListAdapter>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_WRAPPERLISTADAPTER_H
