// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CAMERA_PARAMETERS_H
#define SCAPIX_ANDROID_HARDWARE_CAMERA_PARAMETERS_H

namespace scapix::java_api {

namespace android::hardware { class Camera_Size; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::hardware {

class Camera_Parameters : public object_base<SCAPIX_META_STRING("android/hardware/Camera$Parameters"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> ANTIBANDING_50HZ_();
	static ref<java::lang::String> ANTIBANDING_60HZ_();
	static ref<java::lang::String> ANTIBANDING_AUTO_();
	static ref<java::lang::String> ANTIBANDING_OFF_();
	static ref<java::lang::String> EFFECT_AQUA_();
	static ref<java::lang::String> EFFECT_BLACKBOARD_();
	static ref<java::lang::String> EFFECT_MONO_();
	static ref<java::lang::String> EFFECT_NEGATIVE_();
	static ref<java::lang::String> EFFECT_NONE_();
	static ref<java::lang::String> EFFECT_POSTERIZE_();
	static ref<java::lang::String> EFFECT_SEPIA_();
	static ref<java::lang::String> EFFECT_SOLARIZE_();
	static ref<java::lang::String> EFFECT_WHITEBOARD_();
	static ref<java::lang::String> FLASH_MODE_AUTO_();
	static ref<java::lang::String> FLASH_MODE_OFF_();
	static ref<java::lang::String> FLASH_MODE_ON_();
	static ref<java::lang::String> FLASH_MODE_RED_EYE_();
	static ref<java::lang::String> FLASH_MODE_TORCH_();
	static jint FOCUS_DISTANCE_FAR_INDEX_();
	static jint FOCUS_DISTANCE_NEAR_INDEX_();
	static jint FOCUS_DISTANCE_OPTIMAL_INDEX_();
	static ref<java::lang::String> FOCUS_MODE_AUTO_();
	static ref<java::lang::String> FOCUS_MODE_CONTINUOUS_PICTURE_();
	static ref<java::lang::String> FOCUS_MODE_CONTINUOUS_VIDEO_();
	static ref<java::lang::String> FOCUS_MODE_EDOF_();
	static ref<java::lang::String> FOCUS_MODE_FIXED_();
	static ref<java::lang::String> FOCUS_MODE_INFINITY_();
	static ref<java::lang::String> FOCUS_MODE_MACRO_();
	static jint PREVIEW_FPS_MAX_INDEX_();
	static jint PREVIEW_FPS_MIN_INDEX_();
	static ref<java::lang::String> SCENE_MODE_ACTION_();
	static ref<java::lang::String> SCENE_MODE_AUTO_();
	static ref<java::lang::String> SCENE_MODE_BARCODE_();
	static ref<java::lang::String> SCENE_MODE_BEACH_();
	static ref<java::lang::String> SCENE_MODE_CANDLELIGHT_();
	static ref<java::lang::String> SCENE_MODE_FIREWORKS_();
	static ref<java::lang::String> SCENE_MODE_HDR_();
	static ref<java::lang::String> SCENE_MODE_LANDSCAPE_();
	static ref<java::lang::String> SCENE_MODE_NIGHT_();
	static ref<java::lang::String> SCENE_MODE_NIGHT_PORTRAIT_();
	static ref<java::lang::String> SCENE_MODE_PARTY_();
	static ref<java::lang::String> SCENE_MODE_PORTRAIT_();
	static ref<java::lang::String> SCENE_MODE_SNOW_();
	static ref<java::lang::String> SCENE_MODE_SPORTS_();
	static ref<java::lang::String> SCENE_MODE_STEADYPHOTO_();
	static ref<java::lang::String> SCENE_MODE_SUNSET_();
	static ref<java::lang::String> SCENE_MODE_THEATRE_();
	static ref<java::lang::String> WHITE_BALANCE_AUTO_();
	static ref<java::lang::String> WHITE_BALANCE_CLOUDY_DAYLIGHT_();
	static ref<java::lang::String> WHITE_BALANCE_DAYLIGHT_();
	static ref<java::lang::String> WHITE_BALANCE_FLUORESCENT_();
	static ref<java::lang::String> WHITE_BALANCE_INCANDESCENT_();
	static ref<java::lang::String> WHITE_BALANCE_SHADE_();
	static ref<java::lang::String> WHITE_BALANCE_TWILIGHT_();
	static ref<java::lang::String> WHITE_BALANCE_WARM_FLUORESCENT_();

	ref<java::lang::String> flatten();
	void unflatten(ref<java::lang::String> flattened);
	void remove(ref<java::lang::String> key);
	void set(ref<java::lang::String> key, ref<java::lang::String> value);
	void set(ref<java::lang::String> key, jint value);
	ref<java::lang::String> get(ref<java::lang::String> key);
	jint getInt(ref<java::lang::String> key);
	void setPreviewSize(jint width, jint height);
	ref<android::hardware::Camera_Size> getPreviewSize();
	ref<java::util::List> getSupportedPreviewSizes();
	ref<java::util::List> getSupportedVideoSizes();
	ref<android::hardware::Camera_Size> getPreferredPreviewSizeForVideo();
	void setJpegThumbnailSize(jint width, jint height);
	ref<android::hardware::Camera_Size> getJpegThumbnailSize();
	ref<java::util::List> getSupportedJpegThumbnailSizes();
	void setJpegThumbnailQuality(jint quality);
	jint getJpegThumbnailQuality();
	void setJpegQuality(jint quality);
	jint getJpegQuality();
	void setPreviewFrameRate(jint fps);
	jint getPreviewFrameRate();
	ref<java::util::List> getSupportedPreviewFrameRates();
	void setPreviewFpsRange(jint min, jint max);
	void getPreviewFpsRange(ref<link::java::array<jint>> range);
	ref<java::util::List> getSupportedPreviewFpsRange();
	void setPreviewFormat(jint pixel_format);
	jint getPreviewFormat();
	ref<java::util::List> getSupportedPreviewFormats();
	void setPictureSize(jint width, jint height);
	ref<android::hardware::Camera_Size> getPictureSize();
	ref<java::util::List> getSupportedPictureSizes();
	void setPictureFormat(jint pixel_format);
	jint getPictureFormat();
	ref<java::util::List> getSupportedPictureFormats();
	void setRotation(jint rotation);
	void setGpsLatitude(jdouble latitude);
	void setGpsLongitude(jdouble longitude);
	void setGpsAltitude(jdouble altitude);
	void setGpsTimestamp(jlong timestamp);
	void setGpsProcessingMethod(ref<java::lang::String> processing_method);
	void removeGpsData();
	ref<java::lang::String> getWhiteBalance();
	void setWhiteBalance(ref<java::lang::String> value);
	ref<java::util::List> getSupportedWhiteBalance();
	ref<java::lang::String> getColorEffect();
	void setColorEffect(ref<java::lang::String> value);
	ref<java::util::List> getSupportedColorEffects();
	ref<java::lang::String> getAntibanding();
	void setAntibanding(ref<java::lang::String> antibanding);
	ref<java::util::List> getSupportedAntibanding();
	ref<java::lang::String> getSceneMode();
	void setSceneMode(ref<java::lang::String> value);
	ref<java::util::List> getSupportedSceneModes();
	ref<java::lang::String> getFlashMode();
	void setFlashMode(ref<java::lang::String> value);
	ref<java::util::List> getSupportedFlashModes();
	ref<java::lang::String> getFocusMode();
	void setFocusMode(ref<java::lang::String> value);
	ref<java::util::List> getSupportedFocusModes();
	jfloat getFocalLength();
	jfloat getHorizontalViewAngle();
	jfloat getVerticalViewAngle();
	jint getExposureCompensation();
	void setExposureCompensation(jint value);
	jint getMaxExposureCompensation();
	jint getMinExposureCompensation();
	jfloat getExposureCompensationStep();
	void setAutoExposureLock(jboolean toggle);
	jboolean getAutoExposureLock();
	jboolean isAutoExposureLockSupported();
	void setAutoWhiteBalanceLock(jboolean toggle);
	jboolean getAutoWhiteBalanceLock();
	jboolean isAutoWhiteBalanceLockSupported();
	jint getZoom();
	void setZoom(jint value);
	jboolean isZoomSupported();
	jint getMaxZoom();
	ref<java::util::List> getZoomRatios();
	jboolean isSmoothZoomSupported();
	void getFocusDistances(ref<link::java::array<jfloat>> output);
	jint getMaxNumFocusAreas();
	ref<java::util::List> getFocusAreas();
	void setFocusAreas(ref<java::util::List> focusAreas);
	jint getMaxNumMeteringAreas();
	ref<java::util::List> getMeteringAreas();
	void setMeteringAreas(ref<java::util::List> meteringAreas);
	jint getMaxNumDetectedFaces();
	void setRecordingHint(jboolean hint);
	jboolean isVideoSnapshotSupported();
	void setVideoStabilization(jboolean toggle);
	jboolean getVideoStabilization();
	jboolean isVideoStabilizationSupported();

protected:

	Camera_Parameters(handle_type h) : base_(h) {}

};

} // namespace android::hardware
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/Camera_Size.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::hardware {

inline ref<java::lang::String> Camera_Parameters::ANTIBANDING_50HZ_() { return get_static_field<SCAPIX_META_STRING("ANTIBANDING_50HZ"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::ANTIBANDING_60HZ_() { return get_static_field<SCAPIX_META_STRING("ANTIBANDING_60HZ"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::ANTIBANDING_AUTO_() { return get_static_field<SCAPIX_META_STRING("ANTIBANDING_AUTO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::ANTIBANDING_OFF_() { return get_static_field<SCAPIX_META_STRING("ANTIBANDING_OFF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::EFFECT_AQUA_() { return get_static_field<SCAPIX_META_STRING("EFFECT_AQUA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::EFFECT_BLACKBOARD_() { return get_static_field<SCAPIX_META_STRING("EFFECT_BLACKBOARD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::EFFECT_MONO_() { return get_static_field<SCAPIX_META_STRING("EFFECT_MONO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::EFFECT_NEGATIVE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_NEGATIVE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::EFFECT_NONE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_NONE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::EFFECT_POSTERIZE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_POSTERIZE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::EFFECT_SEPIA_() { return get_static_field<SCAPIX_META_STRING("EFFECT_SEPIA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::EFFECT_SOLARIZE_() { return get_static_field<SCAPIX_META_STRING("EFFECT_SOLARIZE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::EFFECT_WHITEBOARD_() { return get_static_field<SCAPIX_META_STRING("EFFECT_WHITEBOARD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::FLASH_MODE_AUTO_() { return get_static_field<SCAPIX_META_STRING("FLASH_MODE_AUTO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::FLASH_MODE_OFF_() { return get_static_field<SCAPIX_META_STRING("FLASH_MODE_OFF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::FLASH_MODE_ON_() { return get_static_field<SCAPIX_META_STRING("FLASH_MODE_ON"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::FLASH_MODE_RED_EYE_() { return get_static_field<SCAPIX_META_STRING("FLASH_MODE_RED_EYE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::FLASH_MODE_TORCH_() { return get_static_field<SCAPIX_META_STRING("FLASH_MODE_TORCH"), ref<java::lang::String>>(); }
inline jint Camera_Parameters::FOCUS_DISTANCE_FAR_INDEX_() { return get_static_field<SCAPIX_META_STRING("FOCUS_DISTANCE_FAR_INDEX"), jint>(); }
inline jint Camera_Parameters::FOCUS_DISTANCE_NEAR_INDEX_() { return get_static_field<SCAPIX_META_STRING("FOCUS_DISTANCE_NEAR_INDEX"), jint>(); }
inline jint Camera_Parameters::FOCUS_DISTANCE_OPTIMAL_INDEX_() { return get_static_field<SCAPIX_META_STRING("FOCUS_DISTANCE_OPTIMAL_INDEX"), jint>(); }
inline ref<java::lang::String> Camera_Parameters::FOCUS_MODE_AUTO_() { return get_static_field<SCAPIX_META_STRING("FOCUS_MODE_AUTO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::FOCUS_MODE_CONTINUOUS_PICTURE_() { return get_static_field<SCAPIX_META_STRING("FOCUS_MODE_CONTINUOUS_PICTURE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::FOCUS_MODE_CONTINUOUS_VIDEO_() { return get_static_field<SCAPIX_META_STRING("FOCUS_MODE_CONTINUOUS_VIDEO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::FOCUS_MODE_EDOF_() { return get_static_field<SCAPIX_META_STRING("FOCUS_MODE_EDOF"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::FOCUS_MODE_FIXED_() { return get_static_field<SCAPIX_META_STRING("FOCUS_MODE_FIXED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::FOCUS_MODE_INFINITY_() { return get_static_field<SCAPIX_META_STRING("FOCUS_MODE_INFINITY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::FOCUS_MODE_MACRO_() { return get_static_field<SCAPIX_META_STRING("FOCUS_MODE_MACRO"), ref<java::lang::String>>(); }
inline jint Camera_Parameters::PREVIEW_FPS_MAX_INDEX_() { return get_static_field<SCAPIX_META_STRING("PREVIEW_FPS_MAX_INDEX"), jint>(); }
inline jint Camera_Parameters::PREVIEW_FPS_MIN_INDEX_() { return get_static_field<SCAPIX_META_STRING("PREVIEW_FPS_MIN_INDEX"), jint>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_ACTION_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_ACTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_AUTO_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_AUTO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_BARCODE_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_BARCODE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_BEACH_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_BEACH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_CANDLELIGHT_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_CANDLELIGHT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_FIREWORKS_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_FIREWORKS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_HDR_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_HDR"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_LANDSCAPE_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_LANDSCAPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_NIGHT_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_NIGHT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_NIGHT_PORTRAIT_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_NIGHT_PORTRAIT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_PARTY_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_PARTY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_PORTRAIT_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_PORTRAIT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_SNOW_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_SNOW"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_SPORTS_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_SPORTS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_STEADYPHOTO_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_STEADYPHOTO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_SUNSET_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_SUNSET"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::SCENE_MODE_THEATRE_() { return get_static_field<SCAPIX_META_STRING("SCENE_MODE_THEATRE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::WHITE_BALANCE_AUTO_() { return get_static_field<SCAPIX_META_STRING("WHITE_BALANCE_AUTO"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::WHITE_BALANCE_CLOUDY_DAYLIGHT_() { return get_static_field<SCAPIX_META_STRING("WHITE_BALANCE_CLOUDY_DAYLIGHT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::WHITE_BALANCE_DAYLIGHT_() { return get_static_field<SCAPIX_META_STRING("WHITE_BALANCE_DAYLIGHT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::WHITE_BALANCE_FLUORESCENT_() { return get_static_field<SCAPIX_META_STRING("WHITE_BALANCE_FLUORESCENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::WHITE_BALANCE_INCANDESCENT_() { return get_static_field<SCAPIX_META_STRING("WHITE_BALANCE_INCANDESCENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::WHITE_BALANCE_SHADE_() { return get_static_field<SCAPIX_META_STRING("WHITE_BALANCE_SHADE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::WHITE_BALANCE_TWILIGHT_() { return get_static_field<SCAPIX_META_STRING("WHITE_BALANCE_TWILIGHT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::WHITE_BALANCE_WARM_FLUORESCENT_() { return get_static_field<SCAPIX_META_STRING("WHITE_BALANCE_WARM_FLUORESCENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Camera_Parameters::flatten() { return call_method<SCAPIX_META_STRING("flatten"), ref<java::lang::String>>(); }
inline void Camera_Parameters::unflatten(ref<java::lang::String> flattened) { return call_method<SCAPIX_META_STRING("unflatten"), void>(flattened); }
inline void Camera_Parameters::remove(ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("remove"), void>(key); }
inline void Camera_Parameters::set(ref<java::lang::String> key, ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("set"), void>(key, value); }
inline void Camera_Parameters::set(ref<java::lang::String> key, jint value) { return call_method<SCAPIX_META_STRING("set"), void>(key, value); }
inline ref<java::lang::String> Camera_Parameters::get(ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::String>>(key); }
inline jint Camera_Parameters::getInt(ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("getInt"), jint>(key); }
inline void Camera_Parameters::setPreviewSize(jint width, jint height) { return call_method<SCAPIX_META_STRING("setPreviewSize"), void>(width, height); }
inline ref<android::hardware::Camera_Size> Camera_Parameters::getPreviewSize() { return call_method<SCAPIX_META_STRING("getPreviewSize"), ref<android::hardware::Camera_Size>>(); }
inline ref<java::util::List> Camera_Parameters::getSupportedPreviewSizes() { return call_method<SCAPIX_META_STRING("getSupportedPreviewSizes"), ref<java::util::List>>(); }
inline ref<java::util::List> Camera_Parameters::getSupportedVideoSizes() { return call_method<SCAPIX_META_STRING("getSupportedVideoSizes"), ref<java::util::List>>(); }
inline ref<android::hardware::Camera_Size> Camera_Parameters::getPreferredPreviewSizeForVideo() { return call_method<SCAPIX_META_STRING("getPreferredPreviewSizeForVideo"), ref<android::hardware::Camera_Size>>(); }
inline void Camera_Parameters::setJpegThumbnailSize(jint width, jint height) { return call_method<SCAPIX_META_STRING("setJpegThumbnailSize"), void>(width, height); }
inline ref<android::hardware::Camera_Size> Camera_Parameters::getJpegThumbnailSize() { return call_method<SCAPIX_META_STRING("getJpegThumbnailSize"), ref<android::hardware::Camera_Size>>(); }
inline ref<java::util::List> Camera_Parameters::getSupportedJpegThumbnailSizes() { return call_method<SCAPIX_META_STRING("getSupportedJpegThumbnailSizes"), ref<java::util::List>>(); }
inline void Camera_Parameters::setJpegThumbnailQuality(jint quality) { return call_method<SCAPIX_META_STRING("setJpegThumbnailQuality"), void>(quality); }
inline jint Camera_Parameters::getJpegThumbnailQuality() { return call_method<SCAPIX_META_STRING("getJpegThumbnailQuality"), jint>(); }
inline void Camera_Parameters::setJpegQuality(jint quality) { return call_method<SCAPIX_META_STRING("setJpegQuality"), void>(quality); }
inline jint Camera_Parameters::getJpegQuality() { return call_method<SCAPIX_META_STRING("getJpegQuality"), jint>(); }
inline void Camera_Parameters::setPreviewFrameRate(jint fps) { return call_method<SCAPIX_META_STRING("setPreviewFrameRate"), void>(fps); }
inline jint Camera_Parameters::getPreviewFrameRate() { return call_method<SCAPIX_META_STRING("getPreviewFrameRate"), jint>(); }
inline ref<java::util::List> Camera_Parameters::getSupportedPreviewFrameRates() { return call_method<SCAPIX_META_STRING("getSupportedPreviewFrameRates"), ref<java::util::List>>(); }
inline void Camera_Parameters::setPreviewFpsRange(jint min, jint max) { return call_method<SCAPIX_META_STRING("setPreviewFpsRange"), void>(min, max); }
inline void Camera_Parameters::getPreviewFpsRange(ref<link::java::array<jint>> range) { return call_method<SCAPIX_META_STRING("getPreviewFpsRange"), void>(range); }
inline ref<java::util::List> Camera_Parameters::getSupportedPreviewFpsRange() { return call_method<SCAPIX_META_STRING("getSupportedPreviewFpsRange"), ref<java::util::List>>(); }
inline void Camera_Parameters::setPreviewFormat(jint pixel_format) { return call_method<SCAPIX_META_STRING("setPreviewFormat"), void>(pixel_format); }
inline jint Camera_Parameters::getPreviewFormat() { return call_method<SCAPIX_META_STRING("getPreviewFormat"), jint>(); }
inline ref<java::util::List> Camera_Parameters::getSupportedPreviewFormats() { return call_method<SCAPIX_META_STRING("getSupportedPreviewFormats"), ref<java::util::List>>(); }
inline void Camera_Parameters::setPictureSize(jint width, jint height) { return call_method<SCAPIX_META_STRING("setPictureSize"), void>(width, height); }
inline ref<android::hardware::Camera_Size> Camera_Parameters::getPictureSize() { return call_method<SCAPIX_META_STRING("getPictureSize"), ref<android::hardware::Camera_Size>>(); }
inline ref<java::util::List> Camera_Parameters::getSupportedPictureSizes() { return call_method<SCAPIX_META_STRING("getSupportedPictureSizes"), ref<java::util::List>>(); }
inline void Camera_Parameters::setPictureFormat(jint pixel_format) { return call_method<SCAPIX_META_STRING("setPictureFormat"), void>(pixel_format); }
inline jint Camera_Parameters::getPictureFormat() { return call_method<SCAPIX_META_STRING("getPictureFormat"), jint>(); }
inline ref<java::util::List> Camera_Parameters::getSupportedPictureFormats() { return call_method<SCAPIX_META_STRING("getSupportedPictureFormats"), ref<java::util::List>>(); }
inline void Camera_Parameters::setRotation(jint rotation) { return call_method<SCAPIX_META_STRING("setRotation"), void>(rotation); }
inline void Camera_Parameters::setGpsLatitude(jdouble latitude) { return call_method<SCAPIX_META_STRING("setGpsLatitude"), void>(latitude); }
inline void Camera_Parameters::setGpsLongitude(jdouble longitude) { return call_method<SCAPIX_META_STRING("setGpsLongitude"), void>(longitude); }
inline void Camera_Parameters::setGpsAltitude(jdouble altitude) { return call_method<SCAPIX_META_STRING("setGpsAltitude"), void>(altitude); }
inline void Camera_Parameters::setGpsTimestamp(jlong timestamp) { return call_method<SCAPIX_META_STRING("setGpsTimestamp"), void>(timestamp); }
inline void Camera_Parameters::setGpsProcessingMethod(ref<java::lang::String> processing_method) { return call_method<SCAPIX_META_STRING("setGpsProcessingMethod"), void>(processing_method); }
inline void Camera_Parameters::removeGpsData() { return call_method<SCAPIX_META_STRING("removeGpsData"), void>(); }
inline ref<java::lang::String> Camera_Parameters::getWhiteBalance() { return call_method<SCAPIX_META_STRING("getWhiteBalance"), ref<java::lang::String>>(); }
inline void Camera_Parameters::setWhiteBalance(ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("setWhiteBalance"), void>(value); }
inline ref<java::util::List> Camera_Parameters::getSupportedWhiteBalance() { return call_method<SCAPIX_META_STRING("getSupportedWhiteBalance"), ref<java::util::List>>(); }
inline ref<java::lang::String> Camera_Parameters::getColorEffect() { return call_method<SCAPIX_META_STRING("getColorEffect"), ref<java::lang::String>>(); }
inline void Camera_Parameters::setColorEffect(ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("setColorEffect"), void>(value); }
inline ref<java::util::List> Camera_Parameters::getSupportedColorEffects() { return call_method<SCAPIX_META_STRING("getSupportedColorEffects"), ref<java::util::List>>(); }
inline ref<java::lang::String> Camera_Parameters::getAntibanding() { return call_method<SCAPIX_META_STRING("getAntibanding"), ref<java::lang::String>>(); }
inline void Camera_Parameters::setAntibanding(ref<java::lang::String> antibanding) { return call_method<SCAPIX_META_STRING("setAntibanding"), void>(antibanding); }
inline ref<java::util::List> Camera_Parameters::getSupportedAntibanding() { return call_method<SCAPIX_META_STRING("getSupportedAntibanding"), ref<java::util::List>>(); }
inline ref<java::lang::String> Camera_Parameters::getSceneMode() { return call_method<SCAPIX_META_STRING("getSceneMode"), ref<java::lang::String>>(); }
inline void Camera_Parameters::setSceneMode(ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("setSceneMode"), void>(value); }
inline ref<java::util::List> Camera_Parameters::getSupportedSceneModes() { return call_method<SCAPIX_META_STRING("getSupportedSceneModes"), ref<java::util::List>>(); }
inline ref<java::lang::String> Camera_Parameters::getFlashMode() { return call_method<SCAPIX_META_STRING("getFlashMode"), ref<java::lang::String>>(); }
inline void Camera_Parameters::setFlashMode(ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("setFlashMode"), void>(value); }
inline ref<java::util::List> Camera_Parameters::getSupportedFlashModes() { return call_method<SCAPIX_META_STRING("getSupportedFlashModes"), ref<java::util::List>>(); }
inline ref<java::lang::String> Camera_Parameters::getFocusMode() { return call_method<SCAPIX_META_STRING("getFocusMode"), ref<java::lang::String>>(); }
inline void Camera_Parameters::setFocusMode(ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("setFocusMode"), void>(value); }
inline ref<java::util::List> Camera_Parameters::getSupportedFocusModes() { return call_method<SCAPIX_META_STRING("getSupportedFocusModes"), ref<java::util::List>>(); }
inline jfloat Camera_Parameters::getFocalLength() { return call_method<SCAPIX_META_STRING("getFocalLength"), jfloat>(); }
inline jfloat Camera_Parameters::getHorizontalViewAngle() { return call_method<SCAPIX_META_STRING("getHorizontalViewAngle"), jfloat>(); }
inline jfloat Camera_Parameters::getVerticalViewAngle() { return call_method<SCAPIX_META_STRING("getVerticalViewAngle"), jfloat>(); }
inline jint Camera_Parameters::getExposureCompensation() { return call_method<SCAPIX_META_STRING("getExposureCompensation"), jint>(); }
inline void Camera_Parameters::setExposureCompensation(jint value) { return call_method<SCAPIX_META_STRING("setExposureCompensation"), void>(value); }
inline jint Camera_Parameters::getMaxExposureCompensation() { return call_method<SCAPIX_META_STRING("getMaxExposureCompensation"), jint>(); }
inline jint Camera_Parameters::getMinExposureCompensation() { return call_method<SCAPIX_META_STRING("getMinExposureCompensation"), jint>(); }
inline jfloat Camera_Parameters::getExposureCompensationStep() { return call_method<SCAPIX_META_STRING("getExposureCompensationStep"), jfloat>(); }
inline void Camera_Parameters::setAutoExposureLock(jboolean toggle) { return call_method<SCAPIX_META_STRING("setAutoExposureLock"), void>(toggle); }
inline jboolean Camera_Parameters::getAutoExposureLock() { return call_method<SCAPIX_META_STRING("getAutoExposureLock"), jboolean>(); }
inline jboolean Camera_Parameters::isAutoExposureLockSupported() { return call_method<SCAPIX_META_STRING("isAutoExposureLockSupported"), jboolean>(); }
inline void Camera_Parameters::setAutoWhiteBalanceLock(jboolean toggle) { return call_method<SCAPIX_META_STRING("setAutoWhiteBalanceLock"), void>(toggle); }
inline jboolean Camera_Parameters::getAutoWhiteBalanceLock() { return call_method<SCAPIX_META_STRING("getAutoWhiteBalanceLock"), jboolean>(); }
inline jboolean Camera_Parameters::isAutoWhiteBalanceLockSupported() { return call_method<SCAPIX_META_STRING("isAutoWhiteBalanceLockSupported"), jboolean>(); }
inline jint Camera_Parameters::getZoom() { return call_method<SCAPIX_META_STRING("getZoom"), jint>(); }
inline void Camera_Parameters::setZoom(jint value) { return call_method<SCAPIX_META_STRING("setZoom"), void>(value); }
inline jboolean Camera_Parameters::isZoomSupported() { return call_method<SCAPIX_META_STRING("isZoomSupported"), jboolean>(); }
inline jint Camera_Parameters::getMaxZoom() { return call_method<SCAPIX_META_STRING("getMaxZoom"), jint>(); }
inline ref<java::util::List> Camera_Parameters::getZoomRatios() { return call_method<SCAPIX_META_STRING("getZoomRatios"), ref<java::util::List>>(); }
inline jboolean Camera_Parameters::isSmoothZoomSupported() { return call_method<SCAPIX_META_STRING("isSmoothZoomSupported"), jboolean>(); }
inline void Camera_Parameters::getFocusDistances(ref<link::java::array<jfloat>> output) { return call_method<SCAPIX_META_STRING("getFocusDistances"), void>(output); }
inline jint Camera_Parameters::getMaxNumFocusAreas() { return call_method<SCAPIX_META_STRING("getMaxNumFocusAreas"), jint>(); }
inline ref<java::util::List> Camera_Parameters::getFocusAreas() { return call_method<SCAPIX_META_STRING("getFocusAreas"), ref<java::util::List>>(); }
inline void Camera_Parameters::setFocusAreas(ref<java::util::List> focusAreas) { return call_method<SCAPIX_META_STRING("setFocusAreas"), void>(focusAreas); }
inline jint Camera_Parameters::getMaxNumMeteringAreas() { return call_method<SCAPIX_META_STRING("getMaxNumMeteringAreas"), jint>(); }
inline ref<java::util::List> Camera_Parameters::getMeteringAreas() { return call_method<SCAPIX_META_STRING("getMeteringAreas"), ref<java::util::List>>(); }
inline void Camera_Parameters::setMeteringAreas(ref<java::util::List> meteringAreas) { return call_method<SCAPIX_META_STRING("setMeteringAreas"), void>(meteringAreas); }
inline jint Camera_Parameters::getMaxNumDetectedFaces() { return call_method<SCAPIX_META_STRING("getMaxNumDetectedFaces"), jint>(); }
inline void Camera_Parameters::setRecordingHint(jboolean hint) { return call_method<SCAPIX_META_STRING("setRecordingHint"), void>(hint); }
inline jboolean Camera_Parameters::isVideoSnapshotSupported() { return call_method<SCAPIX_META_STRING("isVideoSnapshotSupported"), jboolean>(); }
inline void Camera_Parameters::setVideoStabilization(jboolean toggle) { return call_method<SCAPIX_META_STRING("setVideoStabilization"), void>(toggle); }
inline jboolean Camera_Parameters::getVideoStabilization() { return call_method<SCAPIX_META_STRING("getVideoStabilization"), jboolean>(); }
inline jboolean Camera_Parameters::isVideoStabilizationSupported() { return call_method<SCAPIX_META_STRING("isVideoStabilizationSupported"), jboolean>(); }

} // namespace android::hardware
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CAMERA_PARAMETERS_H
