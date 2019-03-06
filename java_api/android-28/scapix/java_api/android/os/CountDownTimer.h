// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_COUNTDOWNTIMER_H
#define SCAPIX_ANDROID_OS_COUNTDOWNTIMER_H

namespace scapix::java_api {
namespace android::os {

class CountDownTimer : public object_base<SCAPIX_META_STRING("android/os/CountDownTimer"),
	java::lang::Object>
{
public:

	static ref<CountDownTimer> new_object(jlong millisInFuture, jlong p2);
	void cancel();
	ref<android::os::CountDownTimer> start();
	void onTick(jlong p1);
	void onFinish();

protected:

	CountDownTimer(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::os {

inline ref<CountDownTimer> CountDownTimer::new_object(jlong millisInFuture, jlong p2) { return base_::new_object(millisInFuture, p2); }
inline void CountDownTimer::cancel() { return call_method<SCAPIX_META_STRING("cancel"), void>(); }
inline ref<android::os::CountDownTimer> CountDownTimer::start() { return call_method<SCAPIX_META_STRING("start"), ref<android::os::CountDownTimer>>(); }
inline void CountDownTimer::onTick(jlong p1) { return call_method<SCAPIX_META_STRING("onTick"), void>(p1); }
inline void CountDownTimer::onFinish() { return call_method<SCAPIX_META_STRING("onFinish"), void>(); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_COUNTDOWNTIMER_H
