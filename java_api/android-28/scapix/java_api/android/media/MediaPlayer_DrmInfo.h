// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIAPLAYER_DRMINFO_H
#define SCAPIX_ANDROID_MEDIA_MEDIAPLAYER_DRMINFO_H

namespace scapix::java_api {

namespace java::util { class Map; }
namespace java::util { class UUID; }

namespace android::media {

class MediaPlayer_DrmInfo : public object_base<SCAPIX_META_STRING("android/media/MediaPlayer$DrmInfo"),
	java::lang::Object>
{
public:

	ref<java::util::Map> getPssh();
	ref<link::java::array<java::util::UUID>> getSupportedSchemes();

protected:

	MediaPlayer_DrmInfo(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/UUID.h>

namespace scapix::java_api {
namespace android::media {

inline ref<java::util::Map> MediaPlayer_DrmInfo::getPssh() { return call_method<SCAPIX_META_STRING("getPssh"), ref<java::util::Map>>(); }
inline ref<link::java::array<java::util::UUID>> MediaPlayer_DrmInfo::getSupportedSchemes() { return call_method<SCAPIX_META_STRING("getSupportedSchemes"), ref<link::java::array<java::util::UUID>>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIAPLAYER_DRMINFO_H
