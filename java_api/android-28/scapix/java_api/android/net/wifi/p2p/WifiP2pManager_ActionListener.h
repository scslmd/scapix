// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_ACTIONLISTENER_H
#define SCAPIX_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_ACTIONLISTENER_H

namespace scapix::java_api {


namespace android::net::wifi::p2p {

class WifiP2pManager_ActionListener : public object_base<SCAPIX_META_STRING("android/net/wifi/p2p/WifiP2pManager$ActionListener"),
	java::lang::Object>
{
public:

	void onSuccess();
	void onFailure(jint p1);

protected:

	WifiP2pManager_ActionListener(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi::p2p
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::net::wifi::p2p {

inline void WifiP2pManager_ActionListener::onSuccess() { return call_method<SCAPIX_META_STRING("onSuccess"), void>(); }
inline void WifiP2pManager_ActionListener::onFailure(jint p1) { return call_method<SCAPIX_META_STRING("onFailure"), void>(p1); }

} // namespace android::net::wifi::p2p
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_ACTIONLISTENER_H
