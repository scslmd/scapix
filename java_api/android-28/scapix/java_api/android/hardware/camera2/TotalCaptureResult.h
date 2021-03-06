// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/hardware/camera2/CaptureResult.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CAMERA2_TOTALCAPTURERESULT_H
#define SCAPIX_ANDROID_HARDWARE_CAMERA2_TOTALCAPTURERESULT_H

namespace scapix::java_api {

namespace java::util { class List; }
namespace java::util { class Map; }

namespace android::hardware::camera2 {

class TotalCaptureResult : public object_base<SCAPIX_META_STRING("android/hardware/camera2/TotalCaptureResult"),
	android::hardware::camera2::CaptureResult>
{
public:

	ref<java::util::List> getPartialResults();
	ref<java::util::Map> getPhysicalCameraResults();

protected:

	TotalCaptureResult(handle_type h) : base_(h) {}

};

} // namespace android::hardware::camera2
} // namespace scapix::java_api

#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>

namespace scapix::java_api {
namespace android::hardware::camera2 {

inline ref<java::util::List> TotalCaptureResult::getPartialResults() { return call_method<SCAPIX_META_STRING("getPartialResults"), ref<java::util::List>>(); }
inline ref<java::util::Map> TotalCaptureResult::getPhysicalCameraResults() { return call_method<SCAPIX_META_STRING("getPhysicalCameraResults"), ref<java::util::Map>>(); }

} // namespace android::hardware::camera2
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CAMERA2_TOTALCAPTURERESULT_H
