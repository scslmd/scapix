// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_AUDIOMANAGER_AUDIOPLAYBACKCALLBACK_H
#define SCAPIX_ANDROID_MEDIA_AUDIOMANAGER_AUDIOPLAYBACKCALLBACK_H

namespace scapix::java_api {

namespace java::util { class List; }

namespace android::media {

class AudioManager_AudioPlaybackCallback : public object_base<SCAPIX_META_STRING("android/media/AudioManager$AudioPlaybackCallback"),
	java::lang::Object>
{
public:

	static ref<AudioManager_AudioPlaybackCallback> new_object();
	void onPlaybackConfigChanged(ref<java::util::List> configs);

protected:

	AudioManager_AudioPlaybackCallback(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::media {

inline ref<AudioManager_AudioPlaybackCallback> AudioManager_AudioPlaybackCallback::new_object() { return base_::new_object(); }
inline void AudioManager_AudioPlaybackCallback::onPlaybackConfigChanged(ref<java::util::List> configs) { return call_method<SCAPIX_META_STRING("onPlaybackConfigChanged"), void>(configs); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_AUDIOMANAGER_AUDIOPLAYBACKCALLBACK_H
