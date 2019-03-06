// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIAPLAYER_ONINFOLISTENER_H
#define SCAPIX_ANDROID_MEDIA_MEDIAPLAYER_ONINFOLISTENER_H

namespace scapix::java_api {

namespace android::media { class MediaPlayer; }

namespace android::media {

class MediaPlayer_OnInfoListener : public object_base<SCAPIX_META_STRING("android/media/MediaPlayer$OnInfoListener"),
	java::lang::Object>
{
public:

	jboolean onInfo(ref<android::media::MediaPlayer> p1, jint p2, jint p3);

protected:

	MediaPlayer_OnInfoListener(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/MediaPlayer.h>

namespace scapix::java_api {
namespace android::media {

inline jboolean MediaPlayer_OnInfoListener::onInfo(ref<android::media::MediaPlayer> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("onInfo"), jboolean>(p1, p2, p3); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIAPLAYER_ONINFOLISTENER_H
