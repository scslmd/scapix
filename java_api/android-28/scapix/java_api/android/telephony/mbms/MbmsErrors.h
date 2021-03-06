// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_MBMS_MBMSERRORS_H
#define SCAPIX_ANDROID_TELEPHONY_MBMS_MBMSERRORS_H

namespace scapix::java_api {

namespace android::telephony::mbms { class MbmsErrors_StreamingErrors; }
namespace android::telephony::mbms { class MbmsErrors_InitializationErrors; }
namespace android::telephony::mbms { class MbmsErrors_GeneralErrors; }
namespace android::telephony::mbms { class MbmsErrors_DownloadErrors; }

namespace android::telephony::mbms {

class MbmsErrors : public object_base<SCAPIX_META_STRING("android/telephony/mbms/MbmsErrors"),
	java::lang::Object>
{
public:

	using StreamingErrors = MbmsErrors_StreamingErrors;
	using InitializationErrors = MbmsErrors_InitializationErrors;
	using GeneralErrors = MbmsErrors_GeneralErrors;
	using DownloadErrors = MbmsErrors_DownloadErrors;

	static jint ERROR_MIDDLEWARE_LOST_();
	static jint ERROR_MIDDLEWARE_NOT_BOUND_();
	static jint ERROR_NO_UNIQUE_MIDDLEWARE_();
	static jint SUCCESS_();
	static jint UNKNOWN_();


protected:

	MbmsErrors(handle_type h) : base_(h) {}

};

} // namespace android::telephony::mbms
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::telephony::mbms {

inline jint MbmsErrors::ERROR_MIDDLEWARE_LOST_() { return get_static_field<SCAPIX_META_STRING("ERROR_MIDDLEWARE_LOST"), jint>(); }
inline jint MbmsErrors::ERROR_MIDDLEWARE_NOT_BOUND_() { return get_static_field<SCAPIX_META_STRING("ERROR_MIDDLEWARE_NOT_BOUND"), jint>(); }
inline jint MbmsErrors::ERROR_NO_UNIQUE_MIDDLEWARE_() { return get_static_field<SCAPIX_META_STRING("ERROR_NO_UNIQUE_MIDDLEWARE"), jint>(); }
inline jint MbmsErrors::SUCCESS_() { return get_static_field<SCAPIX_META_STRING("SUCCESS"), jint>(); }
inline jint MbmsErrors::UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("UNKNOWN"), jint>(); }

} // namespace android::telephony::mbms
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_MBMS_MBMSERRORS_H
