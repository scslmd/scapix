// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_MEDIA_AUDIOFORMAT_H
#define SCAPIX_ANDROID_MEDIA_AUDIOFORMAT_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }
namespace android::media { class AudioFormat_Builder; }

namespace android::media {

class AudioFormat : public object_base<SCAPIX_META_STRING("android/media/AudioFormat"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = AudioFormat_Builder;

	static jint CHANNEL_CONFIGURATION_DEFAULT_();
	static jint CHANNEL_CONFIGURATION_INVALID_();
	static jint CHANNEL_CONFIGURATION_MONO_();
	static jint CHANNEL_CONFIGURATION_STEREO_();
	static jint CHANNEL_INVALID_();
	static jint CHANNEL_IN_BACK_();
	static jint CHANNEL_IN_BACK_PROCESSED_();
	static jint CHANNEL_IN_DEFAULT_();
	static jint CHANNEL_IN_FRONT_();
	static jint CHANNEL_IN_FRONT_PROCESSED_();
	static jint CHANNEL_IN_LEFT_();
	static jint CHANNEL_IN_LEFT_PROCESSED_();
	static jint CHANNEL_IN_MONO_();
	static jint CHANNEL_IN_PRESSURE_();
	static jint CHANNEL_IN_RIGHT_();
	static jint CHANNEL_IN_RIGHT_PROCESSED_();
	static jint CHANNEL_IN_STEREO_();
	static jint CHANNEL_IN_VOICE_DNLINK_();
	static jint CHANNEL_IN_VOICE_UPLINK_();
	static jint CHANNEL_IN_X_AXIS_();
	static jint CHANNEL_IN_Y_AXIS_();
	static jint CHANNEL_IN_Z_AXIS_();
	static jint CHANNEL_OUT_5POINT1_();
	static jint CHANNEL_OUT_7POINT1_();
	static jint CHANNEL_OUT_7POINT1_SURROUND_();
	static jint CHANNEL_OUT_BACK_CENTER_();
	static jint CHANNEL_OUT_BACK_LEFT_();
	static jint CHANNEL_OUT_BACK_RIGHT_();
	static jint CHANNEL_OUT_DEFAULT_();
	static jint CHANNEL_OUT_FRONT_CENTER_();
	static jint CHANNEL_OUT_FRONT_LEFT_();
	static jint CHANNEL_OUT_FRONT_LEFT_OF_CENTER_();
	static jint CHANNEL_OUT_FRONT_RIGHT_();
	static jint CHANNEL_OUT_FRONT_RIGHT_OF_CENTER_();
	static jint CHANNEL_OUT_LOW_FREQUENCY_();
	static jint CHANNEL_OUT_MONO_();
	static jint CHANNEL_OUT_QUAD_();
	static jint CHANNEL_OUT_SIDE_LEFT_();
	static jint CHANNEL_OUT_SIDE_RIGHT_();
	static jint CHANNEL_OUT_STEREO_();
	static jint CHANNEL_OUT_SURROUND_();
	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint ENCODING_AAC_ELD_();
	static jint ENCODING_AAC_HE_V1_();
	static jint ENCODING_AAC_HE_V2_();
	static jint ENCODING_AAC_LC_();
	static jint ENCODING_AAC_XHE_();
	static jint ENCODING_AC3_();
	static jint ENCODING_AC4_();
	static jint ENCODING_DEFAULT_();
	static jint ENCODING_DOLBY_TRUEHD_();
	static jint ENCODING_DTS_();
	static jint ENCODING_DTS_HD_();
	static jint ENCODING_E_AC3_();
	static jint ENCODING_E_AC3_JOC_();
	static jint ENCODING_IEC61937_();
	static jint ENCODING_INVALID_();
	static jint ENCODING_MP3_();
	static jint ENCODING_PCM_16BIT_();
	static jint ENCODING_PCM_8BIT_();
	static jint ENCODING_PCM_FLOAT_();
	static jint SAMPLE_RATE_UNSPECIFIED_();

	jint getEncoding();
	jint getSampleRate();
	jint getChannelMask();
	jint getChannelIndexMask();
	jint getChannelCount();
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	ref<java::lang::String> toString();

protected:

	AudioFormat(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media {

inline jint AudioFormat::CHANNEL_CONFIGURATION_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_CONFIGURATION_DEFAULT"), jint>(); }
inline jint AudioFormat::CHANNEL_CONFIGURATION_INVALID_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_CONFIGURATION_INVALID"), jint>(); }
inline jint AudioFormat::CHANNEL_CONFIGURATION_MONO_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_CONFIGURATION_MONO"), jint>(); }
inline jint AudioFormat::CHANNEL_CONFIGURATION_STEREO_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_CONFIGURATION_STEREO"), jint>(); }
inline jint AudioFormat::CHANNEL_INVALID_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_INVALID"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_BACK_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_BACK"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_BACK_PROCESSED_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_BACK_PROCESSED"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_DEFAULT"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_FRONT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_FRONT"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_FRONT_PROCESSED_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_FRONT_PROCESSED"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_LEFT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_LEFT"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_LEFT_PROCESSED_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_LEFT_PROCESSED"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_MONO_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_MONO"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_PRESSURE_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_PRESSURE"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_RIGHT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_RIGHT"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_RIGHT_PROCESSED_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_RIGHT_PROCESSED"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_STEREO_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_STEREO"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_VOICE_DNLINK_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_VOICE_DNLINK"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_VOICE_UPLINK_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_VOICE_UPLINK"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_X_AXIS_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_X_AXIS"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_Y_AXIS_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_Y_AXIS"), jint>(); }
inline jint AudioFormat::CHANNEL_IN_Z_AXIS_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_IN_Z_AXIS"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_5POINT1_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_5POINT1"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_7POINT1_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_7POINT1"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_7POINT1_SURROUND_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_7POINT1_SURROUND"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_BACK_CENTER_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_BACK_CENTER"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_BACK_LEFT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_BACK_LEFT"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_BACK_RIGHT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_BACK_RIGHT"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_DEFAULT"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_FRONT_CENTER_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_FRONT_CENTER"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_FRONT_LEFT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_FRONT_LEFT"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_FRONT_LEFT_OF_CENTER_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_FRONT_LEFT_OF_CENTER"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_FRONT_RIGHT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_FRONT_RIGHT"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_FRONT_RIGHT_OF_CENTER_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_FRONT_RIGHT_OF_CENTER"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_LOW_FREQUENCY_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_LOW_FREQUENCY"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_MONO_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_MONO"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_QUAD_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_QUAD"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_SIDE_LEFT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_SIDE_LEFT"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_SIDE_RIGHT_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_SIDE_RIGHT"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_STEREO_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_STEREO"), jint>(); }
inline jint AudioFormat::CHANNEL_OUT_SURROUND_() { return get_static_field<SCAPIX_META_STRING("CHANNEL_OUT_SURROUND"), jint>(); }
inline ref<android::os::Parcelable_Creator> AudioFormat::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint AudioFormat::ENCODING_AAC_ELD_() { return get_static_field<SCAPIX_META_STRING("ENCODING_AAC_ELD"), jint>(); }
inline jint AudioFormat::ENCODING_AAC_HE_V1_() { return get_static_field<SCAPIX_META_STRING("ENCODING_AAC_HE_V1"), jint>(); }
inline jint AudioFormat::ENCODING_AAC_HE_V2_() { return get_static_field<SCAPIX_META_STRING("ENCODING_AAC_HE_V2"), jint>(); }
inline jint AudioFormat::ENCODING_AAC_LC_() { return get_static_field<SCAPIX_META_STRING("ENCODING_AAC_LC"), jint>(); }
inline jint AudioFormat::ENCODING_AAC_XHE_() { return get_static_field<SCAPIX_META_STRING("ENCODING_AAC_XHE"), jint>(); }
inline jint AudioFormat::ENCODING_AC3_() { return get_static_field<SCAPIX_META_STRING("ENCODING_AC3"), jint>(); }
inline jint AudioFormat::ENCODING_AC4_() { return get_static_field<SCAPIX_META_STRING("ENCODING_AC4"), jint>(); }
inline jint AudioFormat::ENCODING_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("ENCODING_DEFAULT"), jint>(); }
inline jint AudioFormat::ENCODING_DOLBY_TRUEHD_() { return get_static_field<SCAPIX_META_STRING("ENCODING_DOLBY_TRUEHD"), jint>(); }
inline jint AudioFormat::ENCODING_DTS_() { return get_static_field<SCAPIX_META_STRING("ENCODING_DTS"), jint>(); }
inline jint AudioFormat::ENCODING_DTS_HD_() { return get_static_field<SCAPIX_META_STRING("ENCODING_DTS_HD"), jint>(); }
inline jint AudioFormat::ENCODING_E_AC3_() { return get_static_field<SCAPIX_META_STRING("ENCODING_E_AC3"), jint>(); }
inline jint AudioFormat::ENCODING_E_AC3_JOC_() { return get_static_field<SCAPIX_META_STRING("ENCODING_E_AC3_JOC"), jint>(); }
inline jint AudioFormat::ENCODING_IEC61937_() { return get_static_field<SCAPIX_META_STRING("ENCODING_IEC61937"), jint>(); }
inline jint AudioFormat::ENCODING_INVALID_() { return get_static_field<SCAPIX_META_STRING("ENCODING_INVALID"), jint>(); }
inline jint AudioFormat::ENCODING_MP3_() { return get_static_field<SCAPIX_META_STRING("ENCODING_MP3"), jint>(); }
inline jint AudioFormat::ENCODING_PCM_16BIT_() { return get_static_field<SCAPIX_META_STRING("ENCODING_PCM_16BIT"), jint>(); }
inline jint AudioFormat::ENCODING_PCM_8BIT_() { return get_static_field<SCAPIX_META_STRING("ENCODING_PCM_8BIT"), jint>(); }
inline jint AudioFormat::ENCODING_PCM_FLOAT_() { return get_static_field<SCAPIX_META_STRING("ENCODING_PCM_FLOAT"), jint>(); }
inline jint AudioFormat::SAMPLE_RATE_UNSPECIFIED_() { return get_static_field<SCAPIX_META_STRING("SAMPLE_RATE_UNSPECIFIED"), jint>(); }
inline jint AudioFormat::getEncoding() { return call_method<SCAPIX_META_STRING("getEncoding"), jint>(); }
inline jint AudioFormat::getSampleRate() { return call_method<SCAPIX_META_STRING("getSampleRate"), jint>(); }
inline jint AudioFormat::getChannelMask() { return call_method<SCAPIX_META_STRING("getChannelMask"), jint>(); }
inline jint AudioFormat::getChannelIndexMask() { return call_method<SCAPIX_META_STRING("getChannelIndexMask"), jint>(); }
inline jint AudioFormat::getChannelCount() { return call_method<SCAPIX_META_STRING("getChannelCount"), jint>(); }
inline jboolean AudioFormat::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint AudioFormat::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jint AudioFormat::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void AudioFormat::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline ref<java::lang::String> AudioFormat::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_AUDIOFORMAT_H
