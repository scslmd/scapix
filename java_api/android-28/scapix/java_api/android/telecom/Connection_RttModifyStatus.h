// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS_H
#define SCAPIX_ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS_H

namespace scapix::java_api {


namespace android::telecom {

class Connection_RttModifyStatus : public object_base<SCAPIX_META_STRING("android/telecom/Connection$RttModifyStatus"),
	java::lang::Object>
{
public:

	static jint SESSION_MODIFY_REQUEST_FAIL_();
	static jint SESSION_MODIFY_REQUEST_INVALID_();
	static jint SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE_();
	static jint SESSION_MODIFY_REQUEST_SUCCESS_();
	static jint SESSION_MODIFY_REQUEST_TIMED_OUT_();


protected:

	Connection_RttModifyStatus(handle_type h) : base_(h) {}

};

} // namespace android::telecom
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::telecom {

inline jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_FAIL_() { return get_static_field<SCAPIX_META_STRING("SESSION_MODIFY_REQUEST_FAIL"), jint>(); }
inline jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_INVALID_() { return get_static_field<SCAPIX_META_STRING("SESSION_MODIFY_REQUEST_INVALID"), jint>(); }
inline jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE_() { return get_static_field<SCAPIX_META_STRING("SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE"), jint>(); }
inline jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_SUCCESS_() { return get_static_field<SCAPIX_META_STRING("SESSION_MODIFY_REQUEST_SUCCESS"), jint>(); }
inline jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_TIMED_OUT_() { return get_static_field<SCAPIX_META_STRING("SESSION_MODIFY_REQUEST_TIMED_OUT"), jint>(); }

} // namespace android::telecom
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS_H
