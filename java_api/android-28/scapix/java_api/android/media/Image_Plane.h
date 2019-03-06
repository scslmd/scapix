// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_IMAGE_PLANE_H
#define SCAPIX_ANDROID_MEDIA_IMAGE_PLANE_H

namespace scapix::java_api {

namespace java::nio { class ByteBuffer; }

namespace android::media {

class Image_Plane : public object_base<SCAPIX_META_STRING("android/media/Image$Plane"),
	java::lang::Object>
{
public:

	jint getRowStride();
	jint getPixelStride();
	ref<java::nio::ByteBuffer> getBuffer();

protected:

	Image_Plane(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/ByteBuffer.h>

namespace scapix::java_api {
namespace android::media {

inline jint Image_Plane::getRowStride() { return call_method<SCAPIX_META_STRING("getRowStride"), jint>(); }
inline jint Image_Plane::getPixelStride() { return call_method<SCAPIX_META_STRING("getPixelStride"), jint>(); }
inline ref<java::nio::ByteBuffer> Image_Plane::getBuffer() { return call_method<SCAPIX_META_STRING("getBuffer"), ref<java::nio::ByteBuffer>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_IMAGE_PLANE_H
