// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_MEDIACONTROLLER_MEDIAPLAYERCONTROL_H
#define SCAPIX_ANDROID_WIDGET_MEDIACONTROLLER_MEDIAPLAYERCONTROL_H

namespace scapix::java_api {


namespace android::widget {

class MediaController_MediaPlayerControl : public object_base<SCAPIX_META_STRING("android/widget/MediaController$MediaPlayerControl"),
	java::lang::Object>
{
public:

	void start();
	void pause();
	jint getDuration();
	jint getCurrentPosition();
	void seekTo(jint p1);
	jboolean isPlaying();
	jint getBufferPercentage();
	jboolean canPause();
	jboolean canSeekBackward();
	jboolean canSeekForward();
	jint getAudioSessionId();

protected:

	MediaController_MediaPlayerControl(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::widget {

inline void MediaController_MediaPlayerControl::start() { return call_method<SCAPIX_META_STRING("start"), void>(); }
inline void MediaController_MediaPlayerControl::pause() { return call_method<SCAPIX_META_STRING("pause"), void>(); }
inline jint MediaController_MediaPlayerControl::getDuration() { return call_method<SCAPIX_META_STRING("getDuration"), jint>(); }
inline jint MediaController_MediaPlayerControl::getCurrentPosition() { return call_method<SCAPIX_META_STRING("getCurrentPosition"), jint>(); }
inline void MediaController_MediaPlayerControl::seekTo(jint p1) { return call_method<SCAPIX_META_STRING("seekTo"), void>(p1); }
inline jboolean MediaController_MediaPlayerControl::isPlaying() { return call_method<SCAPIX_META_STRING("isPlaying"), jboolean>(); }
inline jint MediaController_MediaPlayerControl::getBufferPercentage() { return call_method<SCAPIX_META_STRING("getBufferPercentage"), jint>(); }
inline jboolean MediaController_MediaPlayerControl::canPause() { return call_method<SCAPIX_META_STRING("canPause"), jboolean>(); }
inline jboolean MediaController_MediaPlayerControl::canSeekBackward() { return call_method<SCAPIX_META_STRING("canSeekBackward"), jboolean>(); }
inline jboolean MediaController_MediaPlayerControl::canSeekForward() { return call_method<SCAPIX_META_STRING("canSeekForward"), jboolean>(); }
inline jint MediaController_MediaPlayerControl::getAudioSessionId() { return call_method<SCAPIX_META_STRING("getAudioSessionId"), jint>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_MEDIACONTROLLER_MEDIAPLAYERCONTROL_H
