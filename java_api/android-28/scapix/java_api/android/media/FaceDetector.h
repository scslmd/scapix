// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_FACEDETECTOR_H
#define SCAPIX_ANDROID_MEDIA_FACEDETECTOR_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace android::media { class FaceDetector_Face; }

namespace android::media {

class FaceDetector : public object_base<SCAPIX_META_STRING("android/media/FaceDetector"),
	java::lang::Object>
{
public:

	using Face = FaceDetector_Face;

	static ref<FaceDetector> new_object(jint width, jint height, jint maxFaces);
	jint findFaces(ref<android::graphics::Bitmap> bitmap, ref<link::java::array<android::media::FaceDetector_Face>> faces);

protected:

	FaceDetector(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/media/FaceDetector_Face.h>

namespace scapix::java_api {
namespace android::media {

inline ref<FaceDetector> FaceDetector::new_object(jint width, jint height, jint maxFaces) { return base_::new_object(width, height, maxFaces); }
inline jint FaceDetector::findFaces(ref<android::graphics::Bitmap> bitmap, ref<link::java::array<android::media::FaceDetector_Face>> faces) { return call_method<SCAPIX_META_STRING("findFaces"), jint>(bitmap, faces); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_FACEDETECTOR_H
