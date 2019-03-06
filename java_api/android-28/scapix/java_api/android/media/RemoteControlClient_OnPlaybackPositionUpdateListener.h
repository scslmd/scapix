// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONPLAYBACKPOSITIONUPDATELISTENER_H
#define SCAPIX_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONPLAYBACKPOSITIONUPDATELISTENER_H

namespace scapix::java_api {


namespace android::media {

class RemoteControlClient_OnPlaybackPositionUpdateListener : public object_base<SCAPIX_META_STRING("android/media/RemoteControlClient$OnPlaybackPositionUpdateListener"),
	java::lang::Object>
{
public:

	void onPlaybackPositionUpdate(jlong p1);

protected:

	RemoteControlClient_OnPlaybackPositionUpdateListener(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::media {

inline void RemoteControlClient_OnPlaybackPositionUpdateListener::onPlaybackPositionUpdate(jlong p1) { return call_method<SCAPIX_META_STRING("onPlaybackPositionUpdate"), void>(p1); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONPLAYBACKPOSITIONUPDATELISTENER_H
