// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_AWARE_PEERHANDLE_H
#define SCAPIX_ANDROID_NET_WIFI_AWARE_PEERHANDLE_H

namespace scapix::java_api {
namespace android::net::wifi::aware {

class PeerHandle : public object_base<SCAPIX_META_STRING("android/net/wifi/aware/PeerHandle"),
	java::lang::Object>
{
public:

	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();

protected:

	PeerHandle(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi::aware
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::net::wifi::aware {

inline jboolean PeerHandle::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint PeerHandle::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace android::net::wifi::aware
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_AWARE_PEERHANDLE_H
