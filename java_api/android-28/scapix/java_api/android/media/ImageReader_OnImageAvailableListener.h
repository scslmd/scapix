// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_IMAGEREADER_ONIMAGEAVAILABLELISTENER_H
#define SCAPIX_ANDROID_MEDIA_IMAGEREADER_ONIMAGEAVAILABLELISTENER_H

namespace scapix::java_api {

namespace android::media { class ImageReader; }

namespace android::media {

class ImageReader_OnImageAvailableListener : public object_base<SCAPIX_META_STRING("android/media/ImageReader$OnImageAvailableListener"),
	java::lang::Object>
{
public:

	void onImageAvailable(ref<android::media::ImageReader> p1);

protected:

	ImageReader_OnImageAvailableListener(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/ImageReader.h>

namespace scapix::java_api {
namespace android::media {

inline void ImageReader_OnImageAvailableListener::onImageAvailable(ref<android::media::ImageReader> p1) { return call_method<SCAPIX_META_STRING("onImageAvailable"), void>(p1); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_IMAGEREADER_ONIMAGEAVAILABLELISTENER_H
