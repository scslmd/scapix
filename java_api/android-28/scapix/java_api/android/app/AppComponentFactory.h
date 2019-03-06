// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_APPCOMPONENTFACTORY_H
#define SCAPIX_ANDROID_APP_APPCOMPONENTFACTORY_H

namespace scapix::java_api {

namespace android::app { class Activity; }
namespace android::app { class Application; }
namespace android::app { class Service; }
namespace android::content { class BroadcastReceiver; }
namespace android::content { class ContentProvider; }
namespace android::content { class Intent; }
namespace java::lang { class ClassLoader; }
namespace java::lang { class String; }

namespace android::app {

class AppComponentFactory : public object_base<SCAPIX_META_STRING("android/app/AppComponentFactory"),
	java::lang::Object>
{
public:

	static ref<AppComponentFactory> new_object();
	ref<android::app::Application> instantiateApplication(ref<java::lang::ClassLoader> cl, ref<java::lang::String> className);
	ref<android::app::Activity> instantiateActivity(ref<java::lang::ClassLoader> cl, ref<java::lang::String> className, ref<android::content::Intent> intent);
	ref<android::content::BroadcastReceiver> instantiateReceiver(ref<java::lang::ClassLoader> cl, ref<java::lang::String> className, ref<android::content::Intent> intent);
	ref<android::app::Service> instantiateService(ref<java::lang::ClassLoader> cl, ref<java::lang::String> className, ref<android::content::Intent> intent);
	ref<android::content::ContentProvider> instantiateProvider(ref<java::lang::ClassLoader> cl, ref<java::lang::String> className);

protected:

	AppComponentFactory(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/app/Application.h>
#include <scapix/java_api/android/app/Service.h>
#include <scapix/java_api/android/content/BroadcastReceiver.h>
#include <scapix/java_api/android/content/ContentProvider.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::app {

inline ref<AppComponentFactory> AppComponentFactory::new_object() { return base_::new_object(); }
inline ref<android::app::Application> AppComponentFactory::instantiateApplication(ref<java::lang::ClassLoader> cl, ref<java::lang::String> className) { return call_method<SCAPIX_META_STRING("instantiateApplication"), ref<android::app::Application>>(cl, className); }
inline ref<android::app::Activity> AppComponentFactory::instantiateActivity(ref<java::lang::ClassLoader> cl, ref<java::lang::String> className, ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("instantiateActivity"), ref<android::app::Activity>>(cl, className, intent); }
inline ref<android::content::BroadcastReceiver> AppComponentFactory::instantiateReceiver(ref<java::lang::ClassLoader> cl, ref<java::lang::String> className, ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("instantiateReceiver"), ref<android::content::BroadcastReceiver>>(cl, className, intent); }
inline ref<android::app::Service> AppComponentFactory::instantiateService(ref<java::lang::ClassLoader> cl, ref<java::lang::String> className, ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("instantiateService"), ref<android::app::Service>>(cl, className, intent); }
inline ref<android::content::ContentProvider> AppComponentFactory::instantiateProvider(ref<java::lang::ClassLoader> cl, ref<java::lang::String> className) { return call_method<SCAPIX_META_STRING("instantiateProvider"), ref<android::content::ContentProvider>>(cl, className); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_APPCOMPONENTFACTORY_H
