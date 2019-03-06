// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_H
#define SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_H

namespace scapix::java_api {

namespace android::content { class ComponentName; }
namespace android::media::session { class MediaSessionManager_OnActiveSessionsChangedListener; }
namespace android::media::session { class MediaSessionManager_RemoteUserInfo; }
namespace android::os { class Handler; }
namespace java::util { class List; }

namespace android::media::session {

class MediaSessionManager : public object_base<SCAPIX_META_STRING("android/media/session/MediaSessionManager"),
	java::lang::Object>
{
public:

	using RemoteUserInfo = MediaSessionManager_RemoteUserInfo;
	using OnActiveSessionsChangedListener = MediaSessionManager_OnActiveSessionsChangedListener;

	ref<java::util::List> getActiveSessions(ref<android::content::ComponentName> notificationListener);
	void addOnActiveSessionsChangedListener(ref<android::media::session::MediaSessionManager_OnActiveSessionsChangedListener> sessionListener, ref<android::content::ComponentName> notificationListener);
	void addOnActiveSessionsChangedListener(ref<android::media::session::MediaSessionManager_OnActiveSessionsChangedListener> sessionListener, ref<android::content::ComponentName> notificationListener, ref<android::os::Handler> handler);
	void removeOnActiveSessionsChangedListener(ref<android::media::session::MediaSessionManager_OnActiveSessionsChangedListener> listener);
	jboolean isTrustedForMediaControl(ref<android::media::session::MediaSessionManager_RemoteUserInfo> userInfo);

protected:

	MediaSessionManager(handle_type h) : base_(h) {}

};

} // namespace android::media::session
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/media/session/MediaSessionManager_OnActiveSessionsChangedListener.h>
#include <scapix/java_api/android/media/session/MediaSessionManager_RemoteUserInfo.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::media::session {

inline ref<java::util::List> MediaSessionManager::getActiveSessions(ref<android::content::ComponentName> notificationListener) { return call_method<SCAPIX_META_STRING("getActiveSessions"), ref<java::util::List>>(notificationListener); }
inline void MediaSessionManager::addOnActiveSessionsChangedListener(ref<android::media::session::MediaSessionManager_OnActiveSessionsChangedListener> sessionListener, ref<android::content::ComponentName> notificationListener) { return call_method<SCAPIX_META_STRING("addOnActiveSessionsChangedListener"), void>(sessionListener, notificationListener); }
inline void MediaSessionManager::addOnActiveSessionsChangedListener(ref<android::media::session::MediaSessionManager_OnActiveSessionsChangedListener> sessionListener, ref<android::content::ComponentName> notificationListener, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("addOnActiveSessionsChangedListener"), void>(sessionListener, notificationListener, handler); }
inline void MediaSessionManager::removeOnActiveSessionsChangedListener(ref<android::media::session::MediaSessionManager_OnActiveSessionsChangedListener> listener) { return call_method<SCAPIX_META_STRING("removeOnActiveSessionsChangedListener"), void>(listener); }
inline jboolean MediaSessionManager::isTrustedForMediaControl(ref<android::media::session::MediaSessionManager_RemoteUserInfo> userInfo) { return call_method<SCAPIX_META_STRING("isTrustedForMediaControl"), jboolean>(userInfo); }

} // namespace android::media::session
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_H
