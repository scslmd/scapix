// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_VIBRATOR_H
#define SCAPIX_ANDROID_OS_VIBRATOR_H

namespace scapix::java_api {

namespace android::media { class AudioAttributes; }
namespace android::os { class VibrationEffect; }

namespace android::os {

class Vibrator : public object_base<SCAPIX_META_STRING("android/os/Vibrator"),
	java::lang::Object>
{
public:

	jboolean hasVibrator();
	jboolean hasAmplitudeControl();
	void vibrate(jlong milliseconds);
	void vibrate(jlong milliseconds, ref<android::media::AudioAttributes> p2);
	void vibrate(ref<link::java::array<jlong>> pattern, jint repeat);
	void vibrate(ref<link::java::array<jlong>> pattern, jint repeat, ref<android::media::AudioAttributes> attributes);
	void vibrate(ref<android::os::VibrationEffect> vibe);
	void vibrate(ref<android::os::VibrationEffect> vibe, ref<android::media::AudioAttributes> attributes);
	void cancel();

protected:

	Vibrator(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/media/AudioAttributes.h>
#include <scapix/java_api/android/os/VibrationEffect.h>

namespace scapix::java_api {
namespace android::os {

inline jboolean Vibrator::hasVibrator() { return call_method<SCAPIX_META_STRING("hasVibrator"), jboolean>(); }
inline jboolean Vibrator::hasAmplitudeControl() { return call_method<SCAPIX_META_STRING("hasAmplitudeControl"), jboolean>(); }
inline void Vibrator::vibrate(jlong milliseconds) { return call_method<SCAPIX_META_STRING("vibrate"), void>(milliseconds); }
inline void Vibrator::vibrate(jlong milliseconds, ref<android::media::AudioAttributes> p2) { return call_method<SCAPIX_META_STRING("vibrate"), void>(milliseconds, p2); }
inline void Vibrator::vibrate(ref<link::java::array<jlong>> pattern, jint repeat) { return call_method<SCAPIX_META_STRING("vibrate"), void>(pattern, repeat); }
inline void Vibrator::vibrate(ref<link::java::array<jlong>> pattern, jint repeat, ref<android::media::AudioAttributes> attributes) { return call_method<SCAPIX_META_STRING("vibrate"), void>(pattern, repeat, attributes); }
inline void Vibrator::vibrate(ref<android::os::VibrationEffect> vibe) { return call_method<SCAPIX_META_STRING("vibrate"), void>(vibe); }
inline void Vibrator::vibrate(ref<android::os::VibrationEffect> vibe, ref<android::media::AudioAttributes> attributes) { return call_method<SCAPIX_META_STRING("vibrate"), void>(vibe, attributes); }
inline void Vibrator::cancel() { return call_method<SCAPIX_META_STRING("cancel"), void>(); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_VIBRATOR_H
