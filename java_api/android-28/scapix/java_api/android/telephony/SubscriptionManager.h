// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_H
#define SCAPIX_ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::telephony { class SubscriptionInfo; }
namespace android::telephony { class SubscriptionManager_OnSubscriptionsChangedListener; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::telephony {

class SubscriptionManager : public object_base<SCAPIX_META_STRING("android/telephony/SubscriptionManager"),
	java::lang::Object>
{
public:

	using OnSubscriptionsChangedListener = SubscriptionManager_OnSubscriptionsChangedListener;

	static ref<java::lang::String> ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED_();
	static ref<java::lang::String> ACTION_DEFAULT_SUBSCRIPTION_CHANGED_();
	static ref<java::lang::String> ACTION_MANAGE_SUBSCRIPTION_PLANS_();
	static ref<java::lang::String> ACTION_REFRESH_SUBSCRIPTION_PLANS_();
	static jint DATA_ROAMING_DISABLE_();
	static jint DATA_ROAMING_ENABLE_();
	static ref<java::lang::String> EXTRA_SUBSCRIPTION_INDEX_();
	static jint INVALID_SUBSCRIPTION_ID_();

	static ref<android::telephony::SubscriptionManager> from(ref<android::content::Context> context);
	void addOnSubscriptionsChangedListener(ref<android::telephony::SubscriptionManager_OnSubscriptionsChangedListener> listener);
	void removeOnSubscriptionsChangedListener(ref<android::telephony::SubscriptionManager_OnSubscriptionsChangedListener> listener);
	ref<android::telephony::SubscriptionInfo> getActiveSubscriptionInfo(jint subId);
	ref<android::telephony::SubscriptionInfo> getActiveSubscriptionInfoForSimSlotIndex(jint slotIndex);
	ref<java::util::List> getActiveSubscriptionInfoList();
	ref<java::util::List> getAccessibleSubscriptionInfoList();
	jint getActiveSubscriptionInfoCount();
	jint getActiveSubscriptionInfoCountMax();
	static jint getDefaultSubscriptionId();
	static jint getDefaultVoiceSubscriptionId();
	static jint getDefaultSmsSubscriptionId();
	static jint getDefaultDataSubscriptionId();
	jboolean isNetworkRoaming(jint subId);
	ref<java::util::List> getSubscriptionPlans(jint subId);
	void setSubscriptionPlans(jint subId, ref<java::util::List> plans);
	void setSubscriptionOverrideUnmetered(jint subId, jboolean overrideUnmetered, jlong timeoutMillis);
	void setSubscriptionOverrideCongested(jint subId, jboolean overrideCongested, jlong timeoutMillis);
	jboolean canManageSubscription(ref<android::telephony::SubscriptionInfo> info);

protected:

	SubscriptionManager(handle_type h) : base_(h) {}

};

} // namespace android::telephony
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/telephony/SubscriptionInfo.h>
#include <scapix/java_api/android/telephony/SubscriptionManager_OnSubscriptionsChangedListener.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::telephony {

inline ref<java::lang::String> SubscriptionManager::ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED_() { return get_static_field<SCAPIX_META_STRING("ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SubscriptionManager::ACTION_DEFAULT_SUBSCRIPTION_CHANGED_() { return get_static_field<SCAPIX_META_STRING("ACTION_DEFAULT_SUBSCRIPTION_CHANGED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SubscriptionManager::ACTION_MANAGE_SUBSCRIPTION_PLANS_() { return get_static_field<SCAPIX_META_STRING("ACTION_MANAGE_SUBSCRIPTION_PLANS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SubscriptionManager::ACTION_REFRESH_SUBSCRIPTION_PLANS_() { return get_static_field<SCAPIX_META_STRING("ACTION_REFRESH_SUBSCRIPTION_PLANS"), ref<java::lang::String>>(); }
inline jint SubscriptionManager::DATA_ROAMING_DISABLE_() { return get_static_field<SCAPIX_META_STRING("DATA_ROAMING_DISABLE"), jint>(); }
inline jint SubscriptionManager::DATA_ROAMING_ENABLE_() { return get_static_field<SCAPIX_META_STRING("DATA_ROAMING_ENABLE"), jint>(); }
inline ref<java::lang::String> SubscriptionManager::EXTRA_SUBSCRIPTION_INDEX_() { return get_static_field<SCAPIX_META_STRING("EXTRA_SUBSCRIPTION_INDEX"), ref<java::lang::String>>(); }
inline jint SubscriptionManager::INVALID_SUBSCRIPTION_ID_() { return get_static_field<SCAPIX_META_STRING("INVALID_SUBSCRIPTION_ID"), jint>(); }
inline ref<android::telephony::SubscriptionManager> SubscriptionManager::from(ref<android::content::Context> context) { return call_static_method<SCAPIX_META_STRING("from"), ref<android::telephony::SubscriptionManager>>(context); }
inline void SubscriptionManager::addOnSubscriptionsChangedListener(ref<android::telephony::SubscriptionManager_OnSubscriptionsChangedListener> listener) { return call_method<SCAPIX_META_STRING("addOnSubscriptionsChangedListener"), void>(listener); }
inline void SubscriptionManager::removeOnSubscriptionsChangedListener(ref<android::telephony::SubscriptionManager_OnSubscriptionsChangedListener> listener) { return call_method<SCAPIX_META_STRING("removeOnSubscriptionsChangedListener"), void>(listener); }
inline ref<android::telephony::SubscriptionInfo> SubscriptionManager::getActiveSubscriptionInfo(jint subId) { return call_method<SCAPIX_META_STRING("getActiveSubscriptionInfo"), ref<android::telephony::SubscriptionInfo>>(subId); }
inline ref<android::telephony::SubscriptionInfo> SubscriptionManager::getActiveSubscriptionInfoForSimSlotIndex(jint slotIndex) { return call_method<SCAPIX_META_STRING("getActiveSubscriptionInfoForSimSlotIndex"), ref<android::telephony::SubscriptionInfo>>(slotIndex); }
inline ref<java::util::List> SubscriptionManager::getActiveSubscriptionInfoList() { return call_method<SCAPIX_META_STRING("getActiveSubscriptionInfoList"), ref<java::util::List>>(); }
inline ref<java::util::List> SubscriptionManager::getAccessibleSubscriptionInfoList() { return call_method<SCAPIX_META_STRING("getAccessibleSubscriptionInfoList"), ref<java::util::List>>(); }
inline jint SubscriptionManager::getActiveSubscriptionInfoCount() { return call_method<SCAPIX_META_STRING("getActiveSubscriptionInfoCount"), jint>(); }
inline jint SubscriptionManager::getActiveSubscriptionInfoCountMax() { return call_method<SCAPIX_META_STRING("getActiveSubscriptionInfoCountMax"), jint>(); }
inline jint SubscriptionManager::getDefaultSubscriptionId() { return call_static_method<SCAPIX_META_STRING("getDefaultSubscriptionId"), jint>(); }
inline jint SubscriptionManager::getDefaultVoiceSubscriptionId() { return call_static_method<SCAPIX_META_STRING("getDefaultVoiceSubscriptionId"), jint>(); }
inline jint SubscriptionManager::getDefaultSmsSubscriptionId() { return call_static_method<SCAPIX_META_STRING("getDefaultSmsSubscriptionId"), jint>(); }
inline jint SubscriptionManager::getDefaultDataSubscriptionId() { return call_static_method<SCAPIX_META_STRING("getDefaultDataSubscriptionId"), jint>(); }
inline jboolean SubscriptionManager::isNetworkRoaming(jint subId) { return call_method<SCAPIX_META_STRING("isNetworkRoaming"), jboolean>(subId); }
inline ref<java::util::List> SubscriptionManager::getSubscriptionPlans(jint subId) { return call_method<SCAPIX_META_STRING("getSubscriptionPlans"), ref<java::util::List>>(subId); }
inline void SubscriptionManager::setSubscriptionPlans(jint subId, ref<java::util::List> plans) { return call_method<SCAPIX_META_STRING("setSubscriptionPlans"), void>(subId, plans); }
inline void SubscriptionManager::setSubscriptionOverrideUnmetered(jint subId, jboolean overrideUnmetered, jlong timeoutMillis) { return call_method<SCAPIX_META_STRING("setSubscriptionOverrideUnmetered"), void>(subId, overrideUnmetered, timeoutMillis); }
inline void SubscriptionManager::setSubscriptionOverrideCongested(jint subId, jboolean overrideCongested, jlong timeoutMillis) { return call_method<SCAPIX_META_STRING("setSubscriptionOverrideCongested"), void>(subId, overrideCongested, timeoutMillis); }
inline jboolean SubscriptionManager::canManageSubscription(ref<android::telephony::SubscriptionInfo> info) { return call_method<SCAPIX_META_STRING("canManageSubscription"), jboolean>(info); }

} // namespace android::telephony
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_H
