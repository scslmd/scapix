// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_SIP_SIPAUDIOCALL_LISTENER_H
#define SCAPIX_ANDROID_NET_SIP_SIPAUDIOCALL_LISTENER_H

namespace scapix::java_api {

namespace android::net::sip { class SipAudioCall; }
namespace android::net::sip { class SipProfile; }
namespace java::lang { class String; }

namespace android::net::sip {

class SipAudioCall_Listener : public object_base<SCAPIX_META_STRING("android/net/sip/SipAudioCall$Listener"),
	java::lang::Object>
{
public:

	static ref<SipAudioCall_Listener> new_object();
	void onReadyToCall(ref<android::net::sip::SipAudioCall> call);
	void onCalling(ref<android::net::sip::SipAudioCall> call);
	void onRinging(ref<android::net::sip::SipAudioCall> call, ref<android::net::sip::SipProfile> caller);
	void onRingingBack(ref<android::net::sip::SipAudioCall> call);
	void onCallEstablished(ref<android::net::sip::SipAudioCall> call);
	void onCallEnded(ref<android::net::sip::SipAudioCall> call);
	void onCallBusy(ref<android::net::sip::SipAudioCall> call);
	void onCallHeld(ref<android::net::sip::SipAudioCall> call);
	void onError(ref<android::net::sip::SipAudioCall> call, jint errorCode, ref<java::lang::String> errorMessage);
	void onChanged(ref<android::net::sip::SipAudioCall> call);

protected:

	SipAudioCall_Listener(handle_type h) : base_(h) {}

};

} // namespace android::net::sip
} // namespace scapix::java_api

#include <scapix/java_api/android/net/sip/SipAudioCall.h>
#include <scapix/java_api/android/net/sip/SipProfile.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net::sip {

inline ref<SipAudioCall_Listener> SipAudioCall_Listener::new_object() { return base_::new_object(); }
inline void SipAudioCall_Listener::onReadyToCall(ref<android::net::sip::SipAudioCall> call) { return call_method<SCAPIX_META_STRING("onReadyToCall"), void>(call); }
inline void SipAudioCall_Listener::onCalling(ref<android::net::sip::SipAudioCall> call) { return call_method<SCAPIX_META_STRING("onCalling"), void>(call); }
inline void SipAudioCall_Listener::onRinging(ref<android::net::sip::SipAudioCall> call, ref<android::net::sip::SipProfile> caller) { return call_method<SCAPIX_META_STRING("onRinging"), void>(call, caller); }
inline void SipAudioCall_Listener::onRingingBack(ref<android::net::sip::SipAudioCall> call) { return call_method<SCAPIX_META_STRING("onRingingBack"), void>(call); }
inline void SipAudioCall_Listener::onCallEstablished(ref<android::net::sip::SipAudioCall> call) { return call_method<SCAPIX_META_STRING("onCallEstablished"), void>(call); }
inline void SipAudioCall_Listener::onCallEnded(ref<android::net::sip::SipAudioCall> call) { return call_method<SCAPIX_META_STRING("onCallEnded"), void>(call); }
inline void SipAudioCall_Listener::onCallBusy(ref<android::net::sip::SipAudioCall> call) { return call_method<SCAPIX_META_STRING("onCallBusy"), void>(call); }
inline void SipAudioCall_Listener::onCallHeld(ref<android::net::sip::SipAudioCall> call) { return call_method<SCAPIX_META_STRING("onCallHeld"), void>(call); }
inline void SipAudioCall_Listener::onError(ref<android::net::sip::SipAudioCall> call, jint errorCode, ref<java::lang::String> errorMessage) { return call_method<SCAPIX_META_STRING("onError"), void>(call, errorCode, errorMessage); }
inline void SipAudioCall_Listener::onChanged(ref<android::net::sip::SipAudioCall> call) { return call_method<SCAPIX_META_STRING("onChanged"), void>(call); }

} // namespace android::net::sip
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_SIP_SIPAUDIOCALL_LISTENER_H
