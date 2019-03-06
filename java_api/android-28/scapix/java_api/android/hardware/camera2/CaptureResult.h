// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/hardware/camera2/CameraMetadata.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CAMERA2_CAPTURERESULT_H
#define SCAPIX_ANDROID_HARDWARE_CAMERA2_CAPTURERESULT_H

namespace scapix::java_api {

namespace android::hardware::camera2 { class CaptureRequest; }
namespace android::hardware::camera2 { class CaptureResult_Key; }
namespace java::lang { class Object; }
namespace java::util { class List; }

namespace android::hardware::camera2 {

class CaptureResult : public object_base<SCAPIX_META_STRING("android/hardware/camera2/CaptureResult"),
	android::hardware::camera2::CameraMetadata>
{
public:

	using Key = CaptureResult_Key;

	static ref<android::hardware::camera2::CaptureResult_Key> BLACK_LEVEL_LOCK_();
	static ref<android::hardware::camera2::CaptureResult_Key> COLOR_CORRECTION_ABERRATION_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> COLOR_CORRECTION_GAINS_();
	static ref<android::hardware::camera2::CaptureResult_Key> COLOR_CORRECTION_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> COLOR_CORRECTION_TRANSFORM_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_ANTIBANDING_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_EXPOSURE_COMPENSATION_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_LOCK_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_PRECAPTURE_TRIGGER_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_REGIONS_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_STATE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AE_TARGET_FPS_RANGE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AF_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AF_REGIONS_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AF_SCENE_CHANGE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AF_STATE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AF_TRIGGER_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AWB_LOCK_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AWB_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AWB_REGIONS_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_AWB_STATE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_CAPTURE_INTENT_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_EFFECT_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_ENABLE_ZSL_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_POST_RAW_SENSITIVITY_BOOST_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_SCENE_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> CONTROL_VIDEO_STABILIZATION_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> DISTORTION_CORRECTION_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> EDGE_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> FLASH_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> FLASH_STATE_();
	static ref<android::hardware::camera2::CaptureResult_Key> HOT_PIXEL_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> JPEG_GPS_LOCATION_();
	static ref<android::hardware::camera2::CaptureResult_Key> JPEG_ORIENTATION_();
	static ref<android::hardware::camera2::CaptureResult_Key> JPEG_QUALITY_();
	static ref<android::hardware::camera2::CaptureResult_Key> JPEG_THUMBNAIL_QUALITY_();
	static ref<android::hardware::camera2::CaptureResult_Key> JPEG_THUMBNAIL_SIZE_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_APERTURE_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_DISTORTION_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_FILTER_DENSITY_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_FOCAL_LENGTH_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_FOCUS_DISTANCE_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_FOCUS_RANGE_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_INTRINSIC_CALIBRATION_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_OPTICAL_STABILIZATION_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_POSE_ROTATION_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_POSE_TRANSLATION_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_RADIAL_DISTORTION_();
	static ref<android::hardware::camera2::CaptureResult_Key> LENS_STATE_();
	static ref<android::hardware::camera2::CaptureResult_Key> NOISE_REDUCTION_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> REPROCESS_EFFECTIVE_EXPOSURE_FACTOR_();
	static ref<android::hardware::camera2::CaptureResult_Key> REQUEST_PIPELINE_DEPTH_();
	static ref<android::hardware::camera2::CaptureResult_Key> SCALER_CROP_REGION_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_DYNAMIC_BLACK_LEVEL_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_DYNAMIC_WHITE_LEVEL_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_EXPOSURE_TIME_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_FRAME_DURATION_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_GREEN_SPLIT_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_NEUTRAL_COLOR_POINT_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_NOISE_PROFILE_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_ROLLING_SHUTTER_SKEW_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_SENSITIVITY_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_TEST_PATTERN_DATA_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_TEST_PATTERN_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> SENSOR_TIMESTAMP_();
	static ref<android::hardware::camera2::CaptureResult_Key> SHADING_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_FACES_();
	static ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_FACE_DETECT_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_HOT_PIXEL_MAP_();
	static ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_HOT_PIXEL_MAP_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_LENS_SHADING_CORRECTION_MAP_();
	static ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_LENS_SHADING_MAP_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_OIS_DATA_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_OIS_SAMPLES_();
	static ref<android::hardware::camera2::CaptureResult_Key> STATISTICS_SCENE_FLICKER_();
	static ref<android::hardware::camera2::CaptureResult_Key> TONEMAP_CURVE_();
	static ref<android::hardware::camera2::CaptureResult_Key> TONEMAP_GAMMA_();
	static ref<android::hardware::camera2::CaptureResult_Key> TONEMAP_MODE_();
	static ref<android::hardware::camera2::CaptureResult_Key> TONEMAP_PRESET_CURVE_();

	ref<java::lang::Object> get(ref<android::hardware::camera2::CaptureResult_Key> key);
	ref<java::util::List> getKeys();
	ref<android::hardware::camera2::CaptureRequest> getRequest();
	jlong getFrameNumber();
	jint getSequenceId();

protected:

	CaptureResult(handle_type h) : base_(h) {}

};

} // namespace android::hardware::camera2
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/camera2/CaptureRequest.h>
#include <scapix/java_api/android/hardware/camera2/CaptureResult_Key.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::hardware::camera2 {

inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::BLACK_LEVEL_LOCK_() { return get_static_field<SCAPIX_META_STRING("BLACK_LEVEL_LOCK"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::COLOR_CORRECTION_ABERRATION_MODE_() { return get_static_field<SCAPIX_META_STRING("COLOR_CORRECTION_ABERRATION_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::COLOR_CORRECTION_GAINS_() { return get_static_field<SCAPIX_META_STRING("COLOR_CORRECTION_GAINS"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::COLOR_CORRECTION_MODE_() { return get_static_field<SCAPIX_META_STRING("COLOR_CORRECTION_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::COLOR_CORRECTION_TRANSFORM_() { return get_static_field<SCAPIX_META_STRING("COLOR_CORRECTION_TRANSFORM"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AE_ANTIBANDING_MODE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AE_ANTIBANDING_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AE_EXPOSURE_COMPENSATION_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AE_EXPOSURE_COMPENSATION"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AE_LOCK_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AE_LOCK"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AE_MODE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AE_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AE_PRECAPTURE_TRIGGER_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AE_PRECAPTURE_TRIGGER"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AE_REGIONS_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AE_REGIONS"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AE_STATE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AE_STATE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AE_TARGET_FPS_RANGE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AE_TARGET_FPS_RANGE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AF_MODE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AF_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AF_REGIONS_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AF_REGIONS"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AF_SCENE_CHANGE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AF_SCENE_CHANGE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AF_STATE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AF_STATE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AF_TRIGGER_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AF_TRIGGER"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AWB_LOCK_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AWB_LOCK"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AWB_MODE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AWB_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AWB_REGIONS_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AWB_REGIONS"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_AWB_STATE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_AWB_STATE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_CAPTURE_INTENT_() { return get_static_field<SCAPIX_META_STRING("CONTROL_CAPTURE_INTENT"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_EFFECT_MODE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_EFFECT_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_ENABLE_ZSL_() { return get_static_field<SCAPIX_META_STRING("CONTROL_ENABLE_ZSL"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_MODE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_POST_RAW_SENSITIVITY_BOOST_() { return get_static_field<SCAPIX_META_STRING("CONTROL_POST_RAW_SENSITIVITY_BOOST"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_SCENE_MODE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_SCENE_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::CONTROL_VIDEO_STABILIZATION_MODE_() { return get_static_field<SCAPIX_META_STRING("CONTROL_VIDEO_STABILIZATION_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::DISTORTION_CORRECTION_MODE_() { return get_static_field<SCAPIX_META_STRING("DISTORTION_CORRECTION_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::EDGE_MODE_() { return get_static_field<SCAPIX_META_STRING("EDGE_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::FLASH_MODE_() { return get_static_field<SCAPIX_META_STRING("FLASH_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::FLASH_STATE_() { return get_static_field<SCAPIX_META_STRING("FLASH_STATE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::HOT_PIXEL_MODE_() { return get_static_field<SCAPIX_META_STRING("HOT_PIXEL_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::JPEG_GPS_LOCATION_() { return get_static_field<SCAPIX_META_STRING("JPEG_GPS_LOCATION"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::JPEG_ORIENTATION_() { return get_static_field<SCAPIX_META_STRING("JPEG_ORIENTATION"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::JPEG_QUALITY_() { return get_static_field<SCAPIX_META_STRING("JPEG_QUALITY"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::JPEG_THUMBNAIL_QUALITY_() { return get_static_field<SCAPIX_META_STRING("JPEG_THUMBNAIL_QUALITY"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::JPEG_THUMBNAIL_SIZE_() { return get_static_field<SCAPIX_META_STRING("JPEG_THUMBNAIL_SIZE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_APERTURE_() { return get_static_field<SCAPIX_META_STRING("LENS_APERTURE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_DISTORTION_() { return get_static_field<SCAPIX_META_STRING("LENS_DISTORTION"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_FILTER_DENSITY_() { return get_static_field<SCAPIX_META_STRING("LENS_FILTER_DENSITY"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_FOCAL_LENGTH_() { return get_static_field<SCAPIX_META_STRING("LENS_FOCAL_LENGTH"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_FOCUS_DISTANCE_() { return get_static_field<SCAPIX_META_STRING("LENS_FOCUS_DISTANCE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_FOCUS_RANGE_() { return get_static_field<SCAPIX_META_STRING("LENS_FOCUS_RANGE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_INTRINSIC_CALIBRATION_() { return get_static_field<SCAPIX_META_STRING("LENS_INTRINSIC_CALIBRATION"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_OPTICAL_STABILIZATION_MODE_() { return get_static_field<SCAPIX_META_STRING("LENS_OPTICAL_STABILIZATION_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_POSE_ROTATION_() { return get_static_field<SCAPIX_META_STRING("LENS_POSE_ROTATION"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_POSE_TRANSLATION_() { return get_static_field<SCAPIX_META_STRING("LENS_POSE_TRANSLATION"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_RADIAL_DISTORTION_() { return get_static_field<SCAPIX_META_STRING("LENS_RADIAL_DISTORTION"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::LENS_STATE_() { return get_static_field<SCAPIX_META_STRING("LENS_STATE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::NOISE_REDUCTION_MODE_() { return get_static_field<SCAPIX_META_STRING("NOISE_REDUCTION_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::REPROCESS_EFFECTIVE_EXPOSURE_FACTOR_() { return get_static_field<SCAPIX_META_STRING("REPROCESS_EFFECTIVE_EXPOSURE_FACTOR"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::REQUEST_PIPELINE_DEPTH_() { return get_static_field<SCAPIX_META_STRING("REQUEST_PIPELINE_DEPTH"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SCALER_CROP_REGION_() { return get_static_field<SCAPIX_META_STRING("SCALER_CROP_REGION"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_DYNAMIC_BLACK_LEVEL_() { return get_static_field<SCAPIX_META_STRING("SENSOR_DYNAMIC_BLACK_LEVEL"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_DYNAMIC_WHITE_LEVEL_() { return get_static_field<SCAPIX_META_STRING("SENSOR_DYNAMIC_WHITE_LEVEL"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_EXPOSURE_TIME_() { return get_static_field<SCAPIX_META_STRING("SENSOR_EXPOSURE_TIME"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_FRAME_DURATION_() { return get_static_field<SCAPIX_META_STRING("SENSOR_FRAME_DURATION"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_GREEN_SPLIT_() { return get_static_field<SCAPIX_META_STRING("SENSOR_GREEN_SPLIT"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_NEUTRAL_COLOR_POINT_() { return get_static_field<SCAPIX_META_STRING("SENSOR_NEUTRAL_COLOR_POINT"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_NOISE_PROFILE_() { return get_static_field<SCAPIX_META_STRING("SENSOR_NOISE_PROFILE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_ROLLING_SHUTTER_SKEW_() { return get_static_field<SCAPIX_META_STRING("SENSOR_ROLLING_SHUTTER_SKEW"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_SENSITIVITY_() { return get_static_field<SCAPIX_META_STRING("SENSOR_SENSITIVITY"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_TEST_PATTERN_DATA_() { return get_static_field<SCAPIX_META_STRING("SENSOR_TEST_PATTERN_DATA"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_TEST_PATTERN_MODE_() { return get_static_field<SCAPIX_META_STRING("SENSOR_TEST_PATTERN_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SENSOR_TIMESTAMP_() { return get_static_field<SCAPIX_META_STRING("SENSOR_TIMESTAMP"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::SHADING_MODE_() { return get_static_field<SCAPIX_META_STRING("SHADING_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::STATISTICS_FACES_() { return get_static_field<SCAPIX_META_STRING("STATISTICS_FACES"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::STATISTICS_FACE_DETECT_MODE_() { return get_static_field<SCAPIX_META_STRING("STATISTICS_FACE_DETECT_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::STATISTICS_HOT_PIXEL_MAP_() { return get_static_field<SCAPIX_META_STRING("STATISTICS_HOT_PIXEL_MAP"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::STATISTICS_HOT_PIXEL_MAP_MODE_() { return get_static_field<SCAPIX_META_STRING("STATISTICS_HOT_PIXEL_MAP_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::STATISTICS_LENS_SHADING_CORRECTION_MAP_() { return get_static_field<SCAPIX_META_STRING("STATISTICS_LENS_SHADING_CORRECTION_MAP"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::STATISTICS_LENS_SHADING_MAP_MODE_() { return get_static_field<SCAPIX_META_STRING("STATISTICS_LENS_SHADING_MAP_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::STATISTICS_OIS_DATA_MODE_() { return get_static_field<SCAPIX_META_STRING("STATISTICS_OIS_DATA_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::STATISTICS_OIS_SAMPLES_() { return get_static_field<SCAPIX_META_STRING("STATISTICS_OIS_SAMPLES"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::STATISTICS_SCENE_FLICKER_() { return get_static_field<SCAPIX_META_STRING("STATISTICS_SCENE_FLICKER"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::TONEMAP_CURVE_() { return get_static_field<SCAPIX_META_STRING("TONEMAP_CURVE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::TONEMAP_GAMMA_() { return get_static_field<SCAPIX_META_STRING("TONEMAP_GAMMA"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::TONEMAP_MODE_() { return get_static_field<SCAPIX_META_STRING("TONEMAP_MODE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<android::hardware::camera2::CaptureResult_Key> CaptureResult::TONEMAP_PRESET_CURVE_() { return get_static_field<SCAPIX_META_STRING("TONEMAP_PRESET_CURVE"), ref<android::hardware::camera2::CaptureResult_Key>>(); }
inline ref<java::lang::Object> CaptureResult::get(ref<android::hardware::camera2::CaptureResult_Key> key) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(key); }
inline ref<java::util::List> CaptureResult::getKeys() { return call_method<SCAPIX_META_STRING("getKeys"), ref<java::util::List>>(); }
inline ref<android::hardware::camera2::CaptureRequest> CaptureResult::getRequest() { return call_method<SCAPIX_META_STRING("getRequest"), ref<android::hardware::camera2::CaptureRequest>>(); }
inline jlong CaptureResult::getFrameNumber() { return call_method<SCAPIX_META_STRING("getFrameNumber"), jlong>(); }
inline jint CaptureResult::getSequenceId() { return call_method<SCAPIX_META_STRING("getSequenceId"), jint>(); }

} // namespace android::hardware::camera2
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CAMERA2_CAPTURERESULT_H
