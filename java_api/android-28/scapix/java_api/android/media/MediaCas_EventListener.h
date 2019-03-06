// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIACAS_EVENTLISTENER_H
#define SCAPIX_ANDROID_MEDIA_MEDIACAS_EVENTLISTENER_H

namespace scapix::java_api {

namespace android::media { class MediaCas; }

namespace android::media {

class MediaCas_EventListener : public object_base<SCAPIX_META_STRING("android/media/MediaCas$EventListener"),
	java::lang::Object>
{
public:

	void onEvent(ref<android::media::MediaCas> p1, jint p2, jint p3, ref<link::java::array<jbyte>> p4);

protected:

	MediaCas_EventListener(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/MediaCas.h>

namespace scapix::java_api {
namespace android::media {

inline void MediaCas_EventListener::onEvent(ref<android::media::MediaCas> p1, jint p2, jint p3, ref<link::java::array<jbyte>> p4) { return call_method<SCAPIX_META_STRING("onEvent"), void>(p1, p2, p3, p4); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIACAS_EVENTLISTENER_H
