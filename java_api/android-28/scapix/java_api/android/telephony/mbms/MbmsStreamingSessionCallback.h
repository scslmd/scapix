// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_MBMS_MBMSSTREAMINGSESSIONCALLBACK_H
#define SCAPIX_ANDROID_TELEPHONY_MBMS_MBMSSTREAMINGSESSIONCALLBACK_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::telephony::mbms {

class MbmsStreamingSessionCallback : public object_base<SCAPIX_META_STRING("android/telephony/mbms/MbmsStreamingSessionCallback"),
	java::lang::Object>
{
public:

	static ref<MbmsStreamingSessionCallback> new_object();
	void onError(jint errorCode, ref<java::lang::String> message);
	void onStreamingServicesUpdated(ref<java::util::List> services);
	void onMiddlewareReady();

protected:

	MbmsStreamingSessionCallback(handle_type h) : base_(h) {}

};

} // namespace android::telephony::mbms
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::telephony::mbms {

inline ref<MbmsStreamingSessionCallback> MbmsStreamingSessionCallback::new_object() { return base_::new_object(); }
inline void MbmsStreamingSessionCallback::onError(jint errorCode, ref<java::lang::String> message) { return call_method<SCAPIX_META_STRING("onError"), void>(errorCode, message); }
inline void MbmsStreamingSessionCallback::onStreamingServicesUpdated(ref<java::util::List> services) { return call_method<SCAPIX_META_STRING("onStreamingServicesUpdated"), void>(services); }
inline void MbmsStreamingSessionCallback::onMiddlewareReady() { return call_method<SCAPIX_META_STRING("onMiddlewareReady"), void>(); }

} // namespace android::telephony::mbms
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_MBMS_MBMSSTREAMINGSESSIONCALLBACK_H
