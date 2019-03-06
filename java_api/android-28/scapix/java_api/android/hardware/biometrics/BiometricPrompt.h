// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_H
#define SCAPIX_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_H

namespace scapix::java_api {

namespace android::hardware::biometrics { class BiometricPrompt_AuthenticationCallback; }
namespace android::hardware::biometrics { class BiometricPrompt_CryptoObject; }
namespace android::os { class CancellationSignal; }
namespace java::util::concurrent { class Executor; }
namespace android::hardware::biometrics { class BiometricPrompt_Builder; }
namespace android::hardware::biometrics { class BiometricPrompt_AuthenticationResult; }

namespace android::hardware::biometrics {

class BiometricPrompt : public object_base<SCAPIX_META_STRING("android/hardware/biometrics/BiometricPrompt"),
	java::lang::Object>
{
public:

	using CryptoObject = BiometricPrompt_CryptoObject;
	using Builder = BiometricPrompt_Builder;
	using AuthenticationResult = BiometricPrompt_AuthenticationResult;
	using AuthenticationCallback = BiometricPrompt_AuthenticationCallback;

	static jint BIOMETRIC_ACQUIRED_GOOD_();
	static jint BIOMETRIC_ACQUIRED_IMAGER_DIRTY_();
	static jint BIOMETRIC_ACQUIRED_INSUFFICIENT_();
	static jint BIOMETRIC_ACQUIRED_PARTIAL_();
	static jint BIOMETRIC_ACQUIRED_TOO_FAST_();
	static jint BIOMETRIC_ACQUIRED_TOO_SLOW_();
	static jint BIOMETRIC_ERROR_CANCELED_();
	static jint BIOMETRIC_ERROR_HW_NOT_PRESENT_();
	static jint BIOMETRIC_ERROR_HW_UNAVAILABLE_();
	static jint BIOMETRIC_ERROR_LOCKOUT_();
	static jint BIOMETRIC_ERROR_LOCKOUT_PERMANENT_();
	static jint BIOMETRIC_ERROR_NO_BIOMETRICS_();
	static jint BIOMETRIC_ERROR_NO_SPACE_();
	static jint BIOMETRIC_ERROR_TIMEOUT_();
	static jint BIOMETRIC_ERROR_UNABLE_TO_PROCESS_();
	static jint BIOMETRIC_ERROR_USER_CANCELED_();
	static jint BIOMETRIC_ERROR_VENDOR_();

	void authenticate(ref<android::hardware::biometrics::BiometricPrompt_CryptoObject> crypto, ref<android::os::CancellationSignal> cancel, ref<java::util::concurrent::Executor> executor, ref<android::hardware::biometrics::BiometricPrompt_AuthenticationCallback> callback);
	void authenticate(ref<android::os::CancellationSignal> cancel, ref<java::util::concurrent::Executor> executor, ref<android::hardware::biometrics::BiometricPrompt_AuthenticationCallback> callback);

protected:

	BiometricPrompt(handle_type h) : base_(h) {}

};

} // namespace android::hardware::biometrics
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/biometrics/BiometricPrompt_AuthenticationCallback.h>
#include <scapix/java_api/android/hardware/biometrics/BiometricPrompt_CryptoObject.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>

namespace scapix::java_api {
namespace android::hardware::biometrics {

inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_GOOD_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ACQUIRED_GOOD"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_IMAGER_DIRTY_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ACQUIRED_IMAGER_DIRTY"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_INSUFFICIENT_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ACQUIRED_INSUFFICIENT"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_PARTIAL_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ACQUIRED_PARTIAL"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_TOO_FAST_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ACQUIRED_TOO_FAST"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_TOO_SLOW_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ACQUIRED_TOO_SLOW"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ERROR_CANCELED_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ERROR_CANCELED"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ERROR_HW_NOT_PRESENT_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ERROR_HW_NOT_PRESENT"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ERROR_HW_UNAVAILABLE_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ERROR_HW_UNAVAILABLE"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ERROR_LOCKOUT_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ERROR_LOCKOUT"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ERROR_LOCKOUT_PERMANENT_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ERROR_LOCKOUT_PERMANENT"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ERROR_NO_BIOMETRICS_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ERROR_NO_BIOMETRICS"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ERROR_NO_SPACE_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ERROR_NO_SPACE"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ERROR_TIMEOUT_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ERROR_TIMEOUT"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ERROR_UNABLE_TO_PROCESS_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ERROR_UNABLE_TO_PROCESS"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ERROR_USER_CANCELED_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ERROR_USER_CANCELED"), jint>(); }
inline jint BiometricPrompt::BIOMETRIC_ERROR_VENDOR_() { return get_static_field<SCAPIX_META_STRING("BIOMETRIC_ERROR_VENDOR"), jint>(); }
inline void BiometricPrompt::authenticate(ref<android::hardware::biometrics::BiometricPrompt_CryptoObject> crypto, ref<android::os::CancellationSignal> cancel, ref<java::util::concurrent::Executor> executor, ref<android::hardware::biometrics::BiometricPrompt_AuthenticationCallback> callback) { return call_method<SCAPIX_META_STRING("authenticate"), void>(crypto, cancel, executor, callback); }
inline void BiometricPrompt::authenticate(ref<android::os::CancellationSignal> cancel, ref<java::util::concurrent::Executor> executor, ref<android::hardware::biometrics::BiometricPrompt_AuthenticationCallback> callback) { return call_method<SCAPIX_META_STRING("authenticate"), void>(cancel, executor, callback); }

} // namespace android::hardware::biometrics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_H
