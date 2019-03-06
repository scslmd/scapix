// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/net/wifi/p2p/nsd/WifiP2pServiceInfo.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PDNSSDSERVICEINFO_H
#define SCAPIX_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PDNSSDSERVICEINFO_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class Map; }

namespace android::net::wifi::p2p::nsd {

class WifiP2pDnsSdServiceInfo : public object_base<SCAPIX_META_STRING("android/net/wifi/p2p/nsd/WifiP2pDnsSdServiceInfo"),
	android::net::wifi::p2p::nsd::WifiP2pServiceInfo>
{
public:

	static ref<android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceInfo> newInstance(ref<java::lang::String> instanceName, ref<java::lang::String> serviceType, ref<java::util::Map> txtMap);

protected:

	WifiP2pDnsSdServiceInfo(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi::p2p::nsd
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>

namespace scapix::java_api {
namespace android::net::wifi::p2p::nsd {

inline ref<android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceInfo> WifiP2pDnsSdServiceInfo::newInstance(ref<java::lang::String> instanceName, ref<java::lang::String> serviceType, ref<java::util::Map> txtMap) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceInfo>>(instanceName, serviceType, txtMap); }

} // namespace android::net::wifi::p2p::nsd
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PDNSSDSERVICEINFO_H
