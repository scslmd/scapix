// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONGETPLAYBACKPOSITIONLISTENER_H
#define SCAPIX_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONGETPLAYBACKPOSITIONLISTENER_H

namespace scapix::java_api {


namespace android::media {

class RemoteControlClient_OnGetPlaybackPositionListener : public object_base<SCAPIX_META_STRING("android/media/RemoteControlClient$OnGetPlaybackPositionListener"),
	java::lang::Object>
{
public:

	jlong onGetPlaybackPosition();

protected:

	RemoteControlClient_OnGetPlaybackPositionListener(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::media {

inline jlong RemoteControlClient_OnGetPlaybackPositionListener::onGetPlaybackPosition() { return call_method<SCAPIX_META_STRING("onGetPlaybackPosition"), jlong>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONGETPLAYBACKPOSITIONLISTENER_H
