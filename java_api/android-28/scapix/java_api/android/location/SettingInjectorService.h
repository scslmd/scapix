// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_ANDROID_LOCATION_SETTINGINJECTORSERVICE_H
#define SCAPIX_ANDROID_LOCATION_SETTINGINJECTORSERVICE_H

namespace scapix::java_api {

namespace android::content { class Intent; }
namespace android::os { class IBinder; }
namespace java::lang { class String; }

namespace android::location {

class SettingInjectorService : public object_base<SCAPIX_META_STRING("android/location/SettingInjectorService"),
	android::app::Service>
{
public:

	static ref<java::lang::String> ACTION_INJECTED_SETTING_CHANGED_();
	static ref<java::lang::String> ACTION_SERVICE_INTENT_();
	static ref<java::lang::String> ATTRIBUTES_NAME_();
	static ref<java::lang::String> META_DATA_NAME_();

	static ref<SettingInjectorService> new_object(ref<java::lang::String> name);
	ref<android::os::IBinder> onBind(ref<android::content::Intent> intent);
	void onStart(ref<android::content::Intent> intent, jint startId);
	jint onStartCommand(ref<android::content::Intent> intent, jint flags, jint startId);

protected:

	SettingInjectorService(handle_type h) : base_(h) {}

};

} // namespace android::location
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::location {

inline ref<java::lang::String> SettingInjectorService::ACTION_INJECTED_SETTING_CHANGED_() { return get_static_field<SCAPIX_META_STRING("ACTION_INJECTED_SETTING_CHANGED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SettingInjectorService::ACTION_SERVICE_INTENT_() { return get_static_field<SCAPIX_META_STRING("ACTION_SERVICE_INTENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SettingInjectorService::ATTRIBUTES_NAME_() { return get_static_field<SCAPIX_META_STRING("ATTRIBUTES_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SettingInjectorService::META_DATA_NAME_() { return get_static_field<SCAPIX_META_STRING("META_DATA_NAME"), ref<java::lang::String>>(); }
inline ref<SettingInjectorService> SettingInjectorService::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline ref<android::os::IBinder> SettingInjectorService::onBind(ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("onBind"), ref<android::os::IBinder>>(intent); }
inline void SettingInjectorService::onStart(ref<android::content::Intent> intent, jint startId) { return call_method<SCAPIX_META_STRING("onStart"), void>(intent, startId); }
inline jint SettingInjectorService::onStartCommand(ref<android::content::Intent> intent, jint flags, jint startId) { return call_method<SCAPIX_META_STRING("onStartCommand"), jint>(intent, flags, startId); }

} // namespace android::location
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_LOCATION_SETTINGINJECTORSERVICE_H
