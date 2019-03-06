// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_ONSUBSCRIPTIONSCHANGEDLISTENER_H
#define SCAPIX_ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_ONSUBSCRIPTIONSCHANGEDLISTENER_H

namespace scapix::java_api {


namespace android::telephony {

class SubscriptionManager_OnSubscriptionsChangedListener : public object_base<SCAPIX_META_STRING("android/telephony/SubscriptionManager$OnSubscriptionsChangedListener"),
	java::lang::Object>
{
public:

	static ref<SubscriptionManager_OnSubscriptionsChangedListener> new_object();
	void onSubscriptionsChanged();

protected:

	SubscriptionManager_OnSubscriptionsChangedListener(handle_type h) : base_(h) {}

};

} // namespace android::telephony
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::telephony {

inline ref<SubscriptionManager_OnSubscriptionsChangedListener> SubscriptionManager_OnSubscriptionsChangedListener::new_object() { return base_::new_object(); }
inline void SubscriptionManager_OnSubscriptionsChangedListener::onSubscriptionsChanged() { return call_method<SCAPIX_META_STRING("onSubscriptionsChanged"), void>(); }

} // namespace android::telephony
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_SUBSCRIPTIONMANAGER_ONSUBSCRIPTIONSCHANGEDLISTENER_H
