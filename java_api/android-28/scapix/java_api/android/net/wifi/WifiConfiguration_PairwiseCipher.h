// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_WIFICONFIGURATION_PAIRWISECIPHER_H
#define SCAPIX_ANDROID_NET_WIFI_WIFICONFIGURATION_PAIRWISECIPHER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::net::wifi {

class WifiConfiguration_PairwiseCipher : public object_base<SCAPIX_META_STRING("android/net/wifi/WifiConfiguration$PairwiseCipher"),
	java::lang::Object>
{
public:

	static jint CCMP_();
	static jint NONE_();
	static jint TKIP_();
	static ref<link::java::array<java::lang::String>> strings();
	static ref<java::lang::String> varName();


protected:

	WifiConfiguration_PairwiseCipher(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net::wifi {

inline jint WifiConfiguration_PairwiseCipher::CCMP_() { return get_static_field<SCAPIX_META_STRING("CCMP"), jint>(); }
inline jint WifiConfiguration_PairwiseCipher::NONE_() { return get_static_field<SCAPIX_META_STRING("NONE"), jint>(); }
inline jint WifiConfiguration_PairwiseCipher::TKIP_() { return get_static_field<SCAPIX_META_STRING("TKIP"), jint>(); }
inline ref<link::java::array<java::lang::String>> WifiConfiguration_PairwiseCipher::strings() { return get_static_field<SCAPIX_META_STRING("strings"), ref<link::java::array<java::lang::String>>>(); }
inline ref<java::lang::String> WifiConfiguration_PairwiseCipher::varName() { return get_static_field<SCAPIX_META_STRING("varName"), ref<java::lang::String>>(); }

} // namespace android::net::wifi
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_WIFICONFIGURATION_PAIRWISECIPHER_H
