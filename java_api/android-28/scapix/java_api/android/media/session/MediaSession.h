// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSION_H
#define SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSION_H

namespace scapix::java_api {

namespace android::app { class PendingIntent; }
namespace android::content { class Context; }
namespace android::media { class AudioAttributes; }
namespace android::media { class MediaMetadata; }
namespace android::media { class VolumeProvider; }
namespace android::media::session { class MediaController; }
namespace android::media::session { class MediaSession_Callback; }
namespace android::media::session { class MediaSession_Token; }
namespace android::media::session { class MediaSessionManager_RemoteUserInfo; }
namespace android::media::session { class PlaybackState; }
namespace android::os { class Bundle; }
namespace android::os { class Handler; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::util { class List; }
namespace android::media::session { class MediaSession_QueueItem; }

namespace android::media::session {

class MediaSession : public object_base<SCAPIX_META_STRING("android/media/session/MediaSession"),
	java::lang::Object>
{
public:

	using Token = MediaSession_Token;
	using QueueItem = MediaSession_QueueItem;
	using Callback = MediaSession_Callback;

	static jint FLAG_HANDLES_MEDIA_BUTTONS_();
	static jint FLAG_HANDLES_TRANSPORT_CONTROLS_();

	static ref<MediaSession> new_object(ref<android::content::Context> context, ref<java::lang::String> tag);
	void setCallback(ref<android::media::session::MediaSession_Callback> callback);
	void setCallback(ref<android::media::session::MediaSession_Callback> callback, ref<android::os::Handler> handler);
	void setSessionActivity(ref<android::app::PendingIntent> pi);
	void setMediaButtonReceiver(ref<android::app::PendingIntent> mbr);
	void setFlags(jint flags);
	void setPlaybackToLocal(ref<android::media::AudioAttributes> attributes);
	void setPlaybackToRemote(ref<android::media::VolumeProvider> volumeProvider);
	void setActive(jboolean active);
	jboolean isActive();
	void sendSessionEvent(ref<java::lang::String> event, ref<android::os::Bundle> extras);
	void release();
	ref<android::media::session::MediaSession_Token> getSessionToken();
	ref<android::media::session::MediaController> getController();
	void setPlaybackState(ref<android::media::session::PlaybackState> state);
	void setMetadata(ref<android::media::MediaMetadata> metadata);
	void setQueue(ref<java::util::List> queue);
	void setQueueTitle(ref<java::lang::CharSequence> title);
	void setRatingType(jint type);
	void setExtras(ref<android::os::Bundle> extras);
	ref<android::media::session::MediaSessionManager_RemoteUserInfo> getCurrentControllerInfo();

protected:

	MediaSession(handle_type h) : base_(h) {}

};

} // namespace android::media::session
} // namespace scapix::java_api

#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/media/AudioAttributes.h>
#include <scapix/java_api/android/media/MediaMetadata.h>
#include <scapix/java_api/android/media/VolumeProvider.h>
#include <scapix/java_api/android/media/session/MediaController.h>
#include <scapix/java_api/android/media/session/MediaSession_Callback.h>
#include <scapix/java_api/android/media/session/MediaSession_Token.h>
#include <scapix/java_api/android/media/session/MediaSessionManager_RemoteUserInfo.h>
#include <scapix/java_api/android/media/session/PlaybackState.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::media::session {

inline jint MediaSession::FLAG_HANDLES_MEDIA_BUTTONS_() { return get_static_field<SCAPIX_META_STRING("FLAG_HANDLES_MEDIA_BUTTONS"), jint>(); }
inline jint MediaSession::FLAG_HANDLES_TRANSPORT_CONTROLS_() { return get_static_field<SCAPIX_META_STRING("FLAG_HANDLES_TRANSPORT_CONTROLS"), jint>(); }
inline ref<MediaSession> MediaSession::new_object(ref<android::content::Context> context, ref<java::lang::String> tag) { return base_::new_object(context, tag); }
inline void MediaSession::setCallback(ref<android::media::session::MediaSession_Callback> callback) { return call_method<SCAPIX_META_STRING("setCallback"), void>(callback); }
inline void MediaSession::setCallback(ref<android::media::session::MediaSession_Callback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("setCallback"), void>(callback, handler); }
inline void MediaSession::setSessionActivity(ref<android::app::PendingIntent> pi) { return call_method<SCAPIX_META_STRING("setSessionActivity"), void>(pi); }
inline void MediaSession::setMediaButtonReceiver(ref<android::app::PendingIntent> mbr) { return call_method<SCAPIX_META_STRING("setMediaButtonReceiver"), void>(mbr); }
inline void MediaSession::setFlags(jint flags) { return call_method<SCAPIX_META_STRING("setFlags"), void>(flags); }
inline void MediaSession::setPlaybackToLocal(ref<android::media::AudioAttributes> attributes) { return call_method<SCAPIX_META_STRING("setPlaybackToLocal"), void>(attributes); }
inline void MediaSession::setPlaybackToRemote(ref<android::media::VolumeProvider> volumeProvider) { return call_method<SCAPIX_META_STRING("setPlaybackToRemote"), void>(volumeProvider); }
inline void MediaSession::setActive(jboolean active) { return call_method<SCAPIX_META_STRING("setActive"), void>(active); }
inline jboolean MediaSession::isActive() { return call_method<SCAPIX_META_STRING("isActive"), jboolean>(); }
inline void MediaSession::sendSessionEvent(ref<java::lang::String> event, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("sendSessionEvent"), void>(event, extras); }
inline void MediaSession::release() { return call_method<SCAPIX_META_STRING("release"), void>(); }
inline ref<android::media::session::MediaSession_Token> MediaSession::getSessionToken() { return call_method<SCAPIX_META_STRING("getSessionToken"), ref<android::media::session::MediaSession_Token>>(); }
inline ref<android::media::session::MediaController> MediaSession::getController() { return call_method<SCAPIX_META_STRING("getController"), ref<android::media::session::MediaController>>(); }
inline void MediaSession::setPlaybackState(ref<android::media::session::PlaybackState> state) { return call_method<SCAPIX_META_STRING("setPlaybackState"), void>(state); }
inline void MediaSession::setMetadata(ref<android::media::MediaMetadata> metadata) { return call_method<SCAPIX_META_STRING("setMetadata"), void>(metadata); }
inline void MediaSession::setQueue(ref<java::util::List> queue) { return call_method<SCAPIX_META_STRING("setQueue"), void>(queue); }
inline void MediaSession::setQueueTitle(ref<java::lang::CharSequence> title) { return call_method<SCAPIX_META_STRING("setQueueTitle"), void>(title); }
inline void MediaSession::setRatingType(jint type) { return call_method<SCAPIX_META_STRING("setRatingType"), void>(type); }
inline void MediaSession::setExtras(ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("setExtras"), void>(extras); }
inline ref<android::media::session::MediaSessionManager_RemoteUserInfo> MediaSession::getCurrentControllerInfo() { return call_method<SCAPIX_META_STRING("getCurrentControllerInfo"), ref<android::media::session::MediaSessionManager_RemoteUserInfo>>(); }

} // namespace android::media::session
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSION_H
