// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO_H
#define SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::media::session {

class MediaSessionManager_RemoteUserInfo : public object_base<SCAPIX_META_STRING("android/media/session/MediaSessionManager$RemoteUserInfo"),
	java::lang::Object>
{
public:

	static ref<MediaSessionManager_RemoteUserInfo> new_object(ref<java::lang::String> packageName, jint pid, jint uid);
	ref<java::lang::String> getPackageName();
	jint getPid();
	jint getUid();
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();

protected:

	MediaSessionManager_RemoteUserInfo(handle_type h) : base_(h) {}

};

} // namespace android::media::session
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::session {

inline ref<MediaSessionManager_RemoteUserInfo> MediaSessionManager_RemoteUserInfo::new_object(ref<java::lang::String> packageName, jint pid, jint uid) { return base_::new_object(packageName, pid, uid); }
inline ref<java::lang::String> MediaSessionManager_RemoteUserInfo::getPackageName() { return call_method<SCAPIX_META_STRING("getPackageName"), ref<java::lang::String>>(); }
inline jint MediaSessionManager_RemoteUserInfo::getPid() { return call_method<SCAPIX_META_STRING("getPid"), jint>(); }
inline jint MediaSessionManager_RemoteUserInfo::getUid() { return call_method<SCAPIX_META_STRING("getUid"), jint>(); }
inline jboolean MediaSessionManager_RemoteUserInfo::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint MediaSessionManager_RemoteUserInfo::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace android::media::session
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO_H
