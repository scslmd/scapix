// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_AUDIOFOCUSREQUEST_H
#define SCAPIX_ANDROID_MEDIA_AUDIOFOCUSREQUEST_H

namespace scapix::java_api {

namespace android::media { class AudioAttributes; }
namespace android::media { class AudioFocusRequest_Builder; }

namespace android::media {

class AudioFocusRequest : public object_base<SCAPIX_META_STRING("android/media/AudioFocusRequest"),
	java::lang::Object>
{
public:

	using Builder = AudioFocusRequest_Builder;

	ref<android::media::AudioAttributes> getAudioAttributes();
	jint getFocusGain();
	jboolean willPauseWhenDucked();
	jboolean acceptsDelayedFocusGain();

protected:

	AudioFocusRequest(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/AudioAttributes.h>

namespace scapix::java_api {
namespace android::media {

inline ref<android::media::AudioAttributes> AudioFocusRequest::getAudioAttributes() { return call_method<SCAPIX_META_STRING("getAudioAttributes"), ref<android::media::AudioAttributes>>(); }
inline jint AudioFocusRequest::getFocusGain() { return call_method<SCAPIX_META_STRING("getFocusGain"), jint>(); }
inline jboolean AudioFocusRequest::willPauseWhenDucked() { return call_method<SCAPIX_META_STRING("willPauseWhenDucked"), jboolean>(); }
inline jboolean AudioFocusRequest::acceptsDelayedFocusGain() { return call_method<SCAPIX_META_STRING("acceptsDelayedFocusGain"), jboolean>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_AUDIOFOCUSREQUEST_H
