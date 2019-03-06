// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APPWIDGET_APPWIDGETHOST_H
#define SCAPIX_ANDROID_APPWIDGET_APPWIDGETHOST_H

namespace scapix::java_api {

namespace android::app { class Activity; }
namespace android::appwidget { class AppWidgetHostView; }
namespace android::appwidget { class AppWidgetProviderInfo; }
namespace android::content { class Context; }
namespace android::os { class Bundle; }

namespace android::appwidget {

class AppWidgetHost : public object_base<SCAPIX_META_STRING("android/appwidget/AppWidgetHost"),
	java::lang::Object>
{
public:

	static ref<AppWidgetHost> new_object(ref<android::content::Context> context, jint hostId);
	void startListening();
	void stopListening();
	jint allocateAppWidgetId();
	void startAppWidgetConfigureActivityForResult(ref<android::app::Activity> activity, jint appWidgetId, jint intentFlags, jint requestCode, ref<android::os::Bundle> options);
	ref<link::java::array<jint>> getAppWidgetIds();
	void deleteAppWidgetId(jint appWidgetId);
	void deleteHost();
	static void deleteAllHosts();
	ref<android::appwidget::AppWidgetHostView> createView(ref<android::content::Context> context, jint appWidgetId, ref<android::appwidget::AppWidgetProviderInfo> appWidget);

protected:

	AppWidgetHost(handle_type h) : base_(h) {}

};

} // namespace android::appwidget
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/appwidget/AppWidgetHostView.h>
#include <scapix/java_api/android/appwidget/AppWidgetProviderInfo.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Bundle.h>

namespace scapix::java_api {
namespace android::appwidget {

inline ref<AppWidgetHost> AppWidgetHost::new_object(ref<android::content::Context> context, jint hostId) { return base_::new_object(context, hostId); }
inline void AppWidgetHost::startListening() { return call_method<SCAPIX_META_STRING("startListening"), void>(); }
inline void AppWidgetHost::stopListening() { return call_method<SCAPIX_META_STRING("stopListening"), void>(); }
inline jint AppWidgetHost::allocateAppWidgetId() { return call_method<SCAPIX_META_STRING("allocateAppWidgetId"), jint>(); }
inline void AppWidgetHost::startAppWidgetConfigureActivityForResult(ref<android::app::Activity> activity, jint appWidgetId, jint intentFlags, jint requestCode, ref<android::os::Bundle> options) { return call_method<SCAPIX_META_STRING("startAppWidgetConfigureActivityForResult"), void>(activity, appWidgetId, intentFlags, requestCode, options); }
inline ref<link::java::array<jint>> AppWidgetHost::getAppWidgetIds() { return call_method<SCAPIX_META_STRING("getAppWidgetIds"), ref<link::java::array<jint>>>(); }
inline void AppWidgetHost::deleteAppWidgetId(jint appWidgetId) { return call_method<SCAPIX_META_STRING("deleteAppWidgetId"), void>(appWidgetId); }
inline void AppWidgetHost::deleteHost() { return call_method<SCAPIX_META_STRING("deleteHost"), void>(); }
inline void AppWidgetHost::deleteAllHosts() { return call_static_method<SCAPIX_META_STRING("deleteAllHosts"), void>(); }
inline ref<android::appwidget::AppWidgetHostView> AppWidgetHost::createView(ref<android::content::Context> context, jint appWidgetId, ref<android::appwidget::AppWidgetProviderInfo> appWidget) { return call_method<SCAPIX_META_STRING("createView"), ref<android::appwidget::AppWidgetHostView>>(context, appWidgetId, appWidget); }

} // namespace android::appwidget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APPWIDGET_APPWIDGETHOST_H
