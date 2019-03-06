// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_COMPANION_COMPANIONDEVICEMANAGER_H
#define SCAPIX_ANDROID_COMPANION_COMPANIONDEVICEMANAGER_H

namespace scapix::java_api {

namespace android::companion { class AssociationRequest; }
namespace android::companion { class CompanionDeviceManager_Callback; }
namespace android::content { class ComponentName; }
namespace android::os { class Handler; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::companion {

class CompanionDeviceManager : public object_base<SCAPIX_META_STRING("android/companion/CompanionDeviceManager"),
	java::lang::Object>
{
public:

	using Callback = CompanionDeviceManager_Callback;

	static ref<java::lang::String> EXTRA_DEVICE_();

	void associate(ref<android::companion::AssociationRequest> request, ref<android::companion::CompanionDeviceManager_Callback> callback, ref<android::os::Handler> handler);
	ref<java::util::List> getAssociations();
	void disassociate(ref<java::lang::String> deviceMacAddress);
	void requestNotificationAccess(ref<android::content::ComponentName> component);
	jboolean hasNotificationAccess(ref<android::content::ComponentName> component);

protected:

	CompanionDeviceManager(handle_type h) : base_(h) {}

};

} // namespace android::companion
} // namespace scapix::java_api

#include <scapix/java_api/android/companion/AssociationRequest.h>
#include <scapix/java_api/android/companion/CompanionDeviceManager_Callback.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::companion {

inline ref<java::lang::String> CompanionDeviceManager::EXTRA_DEVICE_() { return get_static_field<SCAPIX_META_STRING("EXTRA_DEVICE"), ref<java::lang::String>>(); }
inline void CompanionDeviceManager::associate(ref<android::companion::AssociationRequest> request, ref<android::companion::CompanionDeviceManager_Callback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("associate"), void>(request, callback, handler); }
inline ref<java::util::List> CompanionDeviceManager::getAssociations() { return call_method<SCAPIX_META_STRING("getAssociations"), ref<java::util::List>>(); }
inline void CompanionDeviceManager::disassociate(ref<java::lang::String> deviceMacAddress) { return call_method<SCAPIX_META_STRING("disassociate"), void>(deviceMacAddress); }
inline void CompanionDeviceManager::requestNotificationAccess(ref<android::content::ComponentName> component) { return call_method<SCAPIX_META_STRING("requestNotificationAccess"), void>(component); }
inline jboolean CompanionDeviceManager::hasNotificationAccess(ref<android::content::ComponentName> component) { return call_method<SCAPIX_META_STRING("hasNotificationAccess"), jboolean>(component); }

} // namespace android::companion
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_COMPANION_COMPANIONDEVICEMANAGER_H
