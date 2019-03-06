// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_IMAGEDECODER_IMAGEINFO_H
#define SCAPIX_ANDROID_GRAPHICS_IMAGEDECODER_IMAGEINFO_H

namespace scapix::java_api {

namespace android::graphics { class ColorSpace; }
namespace android::util { class Size; }
namespace java::lang { class String; }

namespace android::graphics {

class ImageDecoder_ImageInfo : public object_base<SCAPIX_META_STRING("android/graphics/ImageDecoder$ImageInfo"),
	java::lang::Object>
{
public:

	ref<android::util::Size> getSize();
	ref<java::lang::String> getMimeType();
	jboolean isAnimated();
	ref<android::graphics::ColorSpace> getColorSpace();

protected:

	ImageDecoder_ImageInfo(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/ColorSpace.h>
#include <scapix/java_api/android/util/Size.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<android::util::Size> ImageDecoder_ImageInfo::getSize() { return call_method<SCAPIX_META_STRING("getSize"), ref<android::util::Size>>(); }
inline ref<java::lang::String> ImageDecoder_ImageInfo::getMimeType() { return call_method<SCAPIX_META_STRING("getMimeType"), ref<java::lang::String>>(); }
inline jboolean ImageDecoder_ImageInfo::isAnimated() { return call_method<SCAPIX_META_STRING("isAnimated"), jboolean>(); }
inline ref<android::graphics::ColorSpace> ImageDecoder_ImageInfo::getColorSpace() { return call_method<SCAPIX_META_STRING("getColorSpace"), ref<android::graphics::ColorSpace>>(); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_IMAGEDECODER_IMAGEINFO_H
