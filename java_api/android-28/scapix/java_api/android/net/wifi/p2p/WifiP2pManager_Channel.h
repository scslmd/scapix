// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_CHANNEL_H
#define SCAPIX_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_CHANNEL_H

namespace scapix::java_api {


namespace android::net::wifi::p2p {

class WifiP2pManager_Channel : public object_base<SCAPIX_META_STRING("android/net/wifi/p2p/WifiP2pManager$Channel"),
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	void close();

protected:

	WifiP2pManager_Channel(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi::p2p
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::net::wifi::p2p {

inline void WifiP2pManager_Channel::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace android::net::wifi::p2p
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_P2P_WIFIP2PMANAGER_CHANNEL_H
