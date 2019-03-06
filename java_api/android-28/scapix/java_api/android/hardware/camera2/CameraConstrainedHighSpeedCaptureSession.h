// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/hardware/camera2/CameraCaptureSession.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CAMERA2_CAMERACONSTRAINEDHIGHSPEEDCAPTURESESSION_H
#define SCAPIX_ANDROID_HARDWARE_CAMERA2_CAMERACONSTRAINEDHIGHSPEEDCAPTURESESSION_H

namespace scapix::java_api {

namespace android::hardware::camera2 { class CaptureRequest; }
namespace java::util { class List; }

namespace android::hardware::camera2 {

class CameraConstrainedHighSpeedCaptureSession : public object_base<SCAPIX_META_STRING("android/hardware/camera2/CameraConstrainedHighSpeedCaptureSession"),
	android::hardware::camera2::CameraCaptureSession>
{
public:

	static ref<CameraConstrainedHighSpeedCaptureSession> new_object();
	ref<java::util::List> createHighSpeedRequestList(ref<android::hardware::camera2::CaptureRequest> p1);

protected:

	CameraConstrainedHighSpeedCaptureSession(handle_type h) : base_(h) {}

};

} // namespace android::hardware::camera2
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/camera2/CaptureRequest.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::hardware::camera2 {

inline ref<CameraConstrainedHighSpeedCaptureSession> CameraConstrainedHighSpeedCaptureSession::new_object() { return base_::new_object(); }
inline ref<java::util::List> CameraConstrainedHighSpeedCaptureSession::createHighSpeedRequestList(ref<android::hardware::camera2::CaptureRequest> p1) { return call_method<SCAPIX_META_STRING("createHighSpeedRequestList"), ref<java::util::List>>(p1); }

} // namespace android::hardware::camera2
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CAMERA2_CAMERACONSTRAINEDHIGHSPEEDCAPTURESESSION_H
