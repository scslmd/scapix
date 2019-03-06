// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSION_CALLBACK_H
#define SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSION_CALLBACK_H

namespace scapix::java_api {

namespace android::content { class Intent; }
namespace android::media { class Rating; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace android::os { class ResultReceiver; }
namespace java::lang { class String; }

namespace android::media::session {

class MediaSession_Callback : public object_base<SCAPIX_META_STRING("android/media/session/MediaSession$Callback"),
	java::lang::Object>
{
public:

	static ref<MediaSession_Callback> new_object();
	void onCommand(ref<java::lang::String> command, ref<android::os::Bundle> args, ref<android::os::ResultReceiver> cb);
	jboolean onMediaButtonEvent(ref<android::content::Intent> mediaButtonIntent);
	void onPrepare();
	void onPrepareFromMediaId(ref<java::lang::String> mediaId, ref<android::os::Bundle> extras);
	void onPrepareFromSearch(ref<java::lang::String> query, ref<android::os::Bundle> extras);
	void onPrepareFromUri(ref<android::net::Uri> uri, ref<android::os::Bundle> extras);
	void onPlay();
	void onPlayFromSearch(ref<java::lang::String> query, ref<android::os::Bundle> extras);
	void onPlayFromMediaId(ref<java::lang::String> mediaId, ref<android::os::Bundle> extras);
	void onPlayFromUri(ref<android::net::Uri> uri, ref<android::os::Bundle> extras);
	void onSkipToQueueItem(jlong id);
	void onPause();
	void onSkipToNext();
	void onSkipToPrevious();
	void onFastForward();
	void onRewind();
	void onStop();
	void onSeekTo(jlong pos);
	void onSetRating(ref<android::media::Rating> rating);
	void onCustomAction(ref<java::lang::String> action, ref<android::os::Bundle> extras);

protected:

	MediaSession_Callback(handle_type h) : base_(h) {}

};

} // namespace android::media::session
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/media/Rating.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/ResultReceiver.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::session {

inline ref<MediaSession_Callback> MediaSession_Callback::new_object() { return base_::new_object(); }
inline void MediaSession_Callback::onCommand(ref<java::lang::String> command, ref<android::os::Bundle> args, ref<android::os::ResultReceiver> cb) { return call_method<SCAPIX_META_STRING("onCommand"), void>(command, args, cb); }
inline jboolean MediaSession_Callback::onMediaButtonEvent(ref<android::content::Intent> mediaButtonIntent) { return call_method<SCAPIX_META_STRING("onMediaButtonEvent"), jboolean>(mediaButtonIntent); }
inline void MediaSession_Callback::onPrepare() { return call_method<SCAPIX_META_STRING("onPrepare"), void>(); }
inline void MediaSession_Callback::onPrepareFromMediaId(ref<java::lang::String> mediaId, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("onPrepareFromMediaId"), void>(mediaId, extras); }
inline void MediaSession_Callback::onPrepareFromSearch(ref<java::lang::String> query, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("onPrepareFromSearch"), void>(query, extras); }
inline void MediaSession_Callback::onPrepareFromUri(ref<android::net::Uri> uri, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("onPrepareFromUri"), void>(uri, extras); }
inline void MediaSession_Callback::onPlay() { return call_method<SCAPIX_META_STRING("onPlay"), void>(); }
inline void MediaSession_Callback::onPlayFromSearch(ref<java::lang::String> query, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("onPlayFromSearch"), void>(query, extras); }
inline void MediaSession_Callback::onPlayFromMediaId(ref<java::lang::String> mediaId, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("onPlayFromMediaId"), void>(mediaId, extras); }
inline void MediaSession_Callback::onPlayFromUri(ref<android::net::Uri> uri, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("onPlayFromUri"), void>(uri, extras); }
inline void MediaSession_Callback::onSkipToQueueItem(jlong id) { return call_method<SCAPIX_META_STRING("onSkipToQueueItem"), void>(id); }
inline void MediaSession_Callback::onPause() { return call_method<SCAPIX_META_STRING("onPause"), void>(); }
inline void MediaSession_Callback::onSkipToNext() { return call_method<SCAPIX_META_STRING("onSkipToNext"), void>(); }
inline void MediaSession_Callback::onSkipToPrevious() { return call_method<SCAPIX_META_STRING("onSkipToPrevious"), void>(); }
inline void MediaSession_Callback::onFastForward() { return call_method<SCAPIX_META_STRING("onFastForward"), void>(); }
inline void MediaSession_Callback::onRewind() { return call_method<SCAPIX_META_STRING("onRewind"), void>(); }
inline void MediaSession_Callback::onStop() { return call_method<SCAPIX_META_STRING("onStop"), void>(); }
inline void MediaSession_Callback::onSeekTo(jlong pos) { return call_method<SCAPIX_META_STRING("onSeekTo"), void>(pos); }
inline void MediaSession_Callback::onSetRating(ref<android::media::Rating> rating) { return call_method<SCAPIX_META_STRING("onSetRating"), void>(rating); }
inline void MediaSession_Callback::onCustomAction(ref<java::lang::String> action, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("onCustomAction"), void>(action, extras); }

} // namespace android::media::session
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSION_CALLBACK_H
