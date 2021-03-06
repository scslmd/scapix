// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_NET_DHCPINFO_H
#define SCAPIX_ANDROID_NET_DHCPINFO_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace java::lang { class String; }

namespace android::net {

class DhcpInfo : public object_base<SCAPIX_META_STRING("android/net/DhcpInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	jint dns1();
	void dns1(jint);
	jint dns2();
	void dns2(jint);
	jint gateway();
	void gateway(jint);
	jint ipAddress();
	void ipAddress(jint);
	jint leaseDuration();
	void leaseDuration(jint);
	jint netmask();
	void netmask(jint);
	jint serverAddress();
	void serverAddress(jint);

	static ref<DhcpInfo> new_object();
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	DhcpInfo(handle_type h) : base_(h) {}

};

} // namespace android::net
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net {

inline jint DhcpInfo::dns1() { return get_field<SCAPIX_META_STRING("dns1"), jint>(); }
inline void DhcpInfo::dns1(jint v) { set_field<SCAPIX_META_STRING("dns1"), jint>(v); }
inline jint DhcpInfo::dns2() { return get_field<SCAPIX_META_STRING("dns2"), jint>(); }
inline void DhcpInfo::dns2(jint v) { set_field<SCAPIX_META_STRING("dns2"), jint>(v); }
inline jint DhcpInfo::gateway() { return get_field<SCAPIX_META_STRING("gateway"), jint>(); }
inline void DhcpInfo::gateway(jint v) { set_field<SCAPIX_META_STRING("gateway"), jint>(v); }
inline jint DhcpInfo::ipAddress() { return get_field<SCAPIX_META_STRING("ipAddress"), jint>(); }
inline void DhcpInfo::ipAddress(jint v) { set_field<SCAPIX_META_STRING("ipAddress"), jint>(v); }
inline jint DhcpInfo::leaseDuration() { return get_field<SCAPIX_META_STRING("leaseDuration"), jint>(); }
inline void DhcpInfo::leaseDuration(jint v) { set_field<SCAPIX_META_STRING("leaseDuration"), jint>(v); }
inline jint DhcpInfo::netmask() { return get_field<SCAPIX_META_STRING("netmask"), jint>(); }
inline void DhcpInfo::netmask(jint v) { set_field<SCAPIX_META_STRING("netmask"), jint>(v); }
inline jint DhcpInfo::serverAddress() { return get_field<SCAPIX_META_STRING("serverAddress"), jint>(); }
inline void DhcpInfo::serverAddress(jint v) { set_field<SCAPIX_META_STRING("serverAddress"), jint>(v); }
inline ref<DhcpInfo> DhcpInfo::new_object() { return base_::new_object(); }
inline ref<java::lang::String> DhcpInfo::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint DhcpInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void DhcpInfo::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::net
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_DHCPINFO_H
