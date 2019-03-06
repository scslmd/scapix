// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_SIP_SIPPROFILE_BUILDER_H
#define SCAPIX_ANDROID_NET_SIP_SIPPROFILE_BUILDER_H

namespace scapix::java_api {

namespace android::net::sip { class SipProfile; }
namespace java::lang { class String; }

namespace android::net::sip {

class SipProfile_Builder : public object_base<SCAPIX_META_STRING("android/net/sip/SipProfile$Builder"),
	java::lang::Object>
{
public:

	static ref<SipProfile_Builder> new_object(ref<android::net::sip::SipProfile> profile);
	static ref<SipProfile_Builder> new_object(ref<java::lang::String> uriString);
	static ref<SipProfile_Builder> new_object(ref<java::lang::String> username, ref<java::lang::String> serverDomain);
	ref<android::net::sip::SipProfile_Builder> setAuthUserName(ref<java::lang::String> name);
	ref<android::net::sip::SipProfile_Builder> setProfileName(ref<java::lang::String> name);
	ref<android::net::sip::SipProfile_Builder> setPassword(ref<java::lang::String> password);
	ref<android::net::sip::SipProfile_Builder> setPort(jint port);
	ref<android::net::sip::SipProfile_Builder> setProtocol(ref<java::lang::String> protocol);
	ref<android::net::sip::SipProfile_Builder> setOutboundProxy(ref<java::lang::String> outboundProxy);
	ref<android::net::sip::SipProfile_Builder> setDisplayName(ref<java::lang::String> displayName);
	ref<android::net::sip::SipProfile_Builder> setSendKeepAlive(jboolean flag);
	ref<android::net::sip::SipProfile_Builder> setAutoRegistration(jboolean flag);
	ref<android::net::sip::SipProfile> build();

protected:

	SipProfile_Builder(handle_type h) : base_(h) {}

};

} // namespace android::net::sip
} // namespace scapix::java_api

#include <scapix/java_api/android/net/sip/SipProfile.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net::sip {

inline ref<SipProfile_Builder> SipProfile_Builder::new_object(ref<android::net::sip::SipProfile> profile) { return base_::new_object(profile); }
inline ref<SipProfile_Builder> SipProfile_Builder::new_object(ref<java::lang::String> uriString) { return base_::new_object(uriString); }
inline ref<SipProfile_Builder> SipProfile_Builder::new_object(ref<java::lang::String> username, ref<java::lang::String> serverDomain) { return base_::new_object(username, serverDomain); }
inline ref<android::net::sip::SipProfile_Builder> SipProfile_Builder::setAuthUserName(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("setAuthUserName"), ref<android::net::sip::SipProfile_Builder>>(name); }
inline ref<android::net::sip::SipProfile_Builder> SipProfile_Builder::setProfileName(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("setProfileName"), ref<android::net::sip::SipProfile_Builder>>(name); }
inline ref<android::net::sip::SipProfile_Builder> SipProfile_Builder::setPassword(ref<java::lang::String> password) { return call_method<SCAPIX_META_STRING("setPassword"), ref<android::net::sip::SipProfile_Builder>>(password); }
inline ref<android::net::sip::SipProfile_Builder> SipProfile_Builder::setPort(jint port) { return call_method<SCAPIX_META_STRING("setPort"), ref<android::net::sip::SipProfile_Builder>>(port); }
inline ref<android::net::sip::SipProfile_Builder> SipProfile_Builder::setProtocol(ref<java::lang::String> protocol) { return call_method<SCAPIX_META_STRING("setProtocol"), ref<android::net::sip::SipProfile_Builder>>(protocol); }
inline ref<android::net::sip::SipProfile_Builder> SipProfile_Builder::setOutboundProxy(ref<java::lang::String> outboundProxy) { return call_method<SCAPIX_META_STRING("setOutboundProxy"), ref<android::net::sip::SipProfile_Builder>>(outboundProxy); }
inline ref<android::net::sip::SipProfile_Builder> SipProfile_Builder::setDisplayName(ref<java::lang::String> displayName) { return call_method<SCAPIX_META_STRING("setDisplayName"), ref<android::net::sip::SipProfile_Builder>>(displayName); }
inline ref<android::net::sip::SipProfile_Builder> SipProfile_Builder::setSendKeepAlive(jboolean flag) { return call_method<SCAPIX_META_STRING("setSendKeepAlive"), ref<android::net::sip::SipProfile_Builder>>(flag); }
inline ref<android::net::sip::SipProfile_Builder> SipProfile_Builder::setAutoRegistration(jboolean flag) { return call_method<SCAPIX_META_STRING("setAutoRegistration"), ref<android::net::sip::SipProfile_Builder>>(flag); }
inline ref<android::net::sip::SipProfile> SipProfile_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::net::sip::SipProfile>>(); }

} // namespace android::net::sip
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_SIP_SIPPROFILE_BUILDER_H
