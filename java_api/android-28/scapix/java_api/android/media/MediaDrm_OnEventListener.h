// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIADRM_ONEVENTLISTENER_H
#define SCAPIX_ANDROID_MEDIA_MEDIADRM_ONEVENTLISTENER_H

namespace scapix::java_api {

namespace android::media { class MediaDrm; }

namespace android::media {

class MediaDrm_OnEventListener : public object_base<SCAPIX_META_STRING("android/media/MediaDrm$OnEventListener"),
	java::lang::Object>
{
public:

	void onEvent(ref<android::media::MediaDrm> p1, ref<link::java::array<jbyte>> p2, jint p3, jint p4, ref<link::java::array<jbyte>> p5);

protected:

	MediaDrm_OnEventListener(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/MediaDrm.h>

namespace scapix::java_api {
namespace android::media {

inline void MediaDrm_OnEventListener::onEvent(ref<android::media::MediaDrm> p1, ref<link::java::array<jbyte>> p2, jint p3, jint p4, ref<link::java::array<jbyte>> p5) { return call_method<SCAPIX_META_STRING("onEvent"), void>(p1, p2, p3, p4, p5); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIADRM_ONEVENTLISTENER_H
