// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_CAMCORDERPROFILE_H
#define SCAPIX_ANDROID_MEDIA_CAMCORDERPROFILE_H

namespace scapix::java_api {
namespace android::media {

class CamcorderProfile : public object_base<SCAPIX_META_STRING("android/media/CamcorderProfile"),
	java::lang::Object>
{
public:

	static jint QUALITY_1080P_();
	static jint QUALITY_2160P_();
	static jint QUALITY_480P_();
	static jint QUALITY_720P_();
	static jint QUALITY_CIF_();
	static jint QUALITY_HIGH_();
	static jint QUALITY_HIGH_SPEED_1080P_();
	static jint QUALITY_HIGH_SPEED_2160P_();
	static jint QUALITY_HIGH_SPEED_480P_();
	static jint QUALITY_HIGH_SPEED_720P_();
	static jint QUALITY_HIGH_SPEED_HIGH_();
	static jint QUALITY_HIGH_SPEED_LOW_();
	static jint QUALITY_LOW_();
	static jint QUALITY_QCIF_();
	static jint QUALITY_QVGA_();
	static jint QUALITY_TIME_LAPSE_1080P_();
	static jint QUALITY_TIME_LAPSE_2160P_();
	static jint QUALITY_TIME_LAPSE_480P_();
	static jint QUALITY_TIME_LAPSE_720P_();
	static jint QUALITY_TIME_LAPSE_CIF_();
	static jint QUALITY_TIME_LAPSE_HIGH_();
	static jint QUALITY_TIME_LAPSE_LOW_();
	static jint QUALITY_TIME_LAPSE_QCIF_();
	static jint QUALITY_TIME_LAPSE_QVGA_();
	jint audioBitRate();
	void audioBitRate(jint);
	jint audioChannels();
	void audioChannels(jint);
	jint audioCodec();
	void audioCodec(jint);
	jint audioSampleRate();
	void audioSampleRate(jint);
	jint duration();
	void duration(jint);
	jint fileFormat();
	void fileFormat(jint);
	jint quality();
	void quality(jint);
	jint videoBitRate();
	void videoBitRate(jint);
	jint videoCodec();
	void videoCodec(jint);
	jint videoFrameHeight();
	void videoFrameHeight(jint);
	jint videoFrameRate();
	void videoFrameRate(jint);
	jint videoFrameWidth();
	void videoFrameWidth(jint);

	static ref<android::media::CamcorderProfile> get(jint quality);
	static ref<android::media::CamcorderProfile> get(jint cameraId, jint quality);
	static jboolean hasProfile(jint quality);
	static jboolean hasProfile(jint cameraId, jint quality);

protected:

	CamcorderProfile(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::media {

inline jint CamcorderProfile::QUALITY_1080P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_1080P"), jint>(); }
inline jint CamcorderProfile::QUALITY_2160P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_2160P"), jint>(); }
inline jint CamcorderProfile::QUALITY_480P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_480P"), jint>(); }
inline jint CamcorderProfile::QUALITY_720P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_720P"), jint>(); }
inline jint CamcorderProfile::QUALITY_CIF_() { return get_static_field<SCAPIX_META_STRING("QUALITY_CIF"), jint>(); }
inline jint CamcorderProfile::QUALITY_HIGH_() { return get_static_field<SCAPIX_META_STRING("QUALITY_HIGH"), jint>(); }
inline jint CamcorderProfile::QUALITY_HIGH_SPEED_1080P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_HIGH_SPEED_1080P"), jint>(); }
inline jint CamcorderProfile::QUALITY_HIGH_SPEED_2160P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_HIGH_SPEED_2160P"), jint>(); }
inline jint CamcorderProfile::QUALITY_HIGH_SPEED_480P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_HIGH_SPEED_480P"), jint>(); }
inline jint CamcorderProfile::QUALITY_HIGH_SPEED_720P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_HIGH_SPEED_720P"), jint>(); }
inline jint CamcorderProfile::QUALITY_HIGH_SPEED_HIGH_() { return get_static_field<SCAPIX_META_STRING("QUALITY_HIGH_SPEED_HIGH"), jint>(); }
inline jint CamcorderProfile::QUALITY_HIGH_SPEED_LOW_() { return get_static_field<SCAPIX_META_STRING("QUALITY_HIGH_SPEED_LOW"), jint>(); }
inline jint CamcorderProfile::QUALITY_LOW_() { return get_static_field<SCAPIX_META_STRING("QUALITY_LOW"), jint>(); }
inline jint CamcorderProfile::QUALITY_QCIF_() { return get_static_field<SCAPIX_META_STRING("QUALITY_QCIF"), jint>(); }
inline jint CamcorderProfile::QUALITY_QVGA_() { return get_static_field<SCAPIX_META_STRING("QUALITY_QVGA"), jint>(); }
inline jint CamcorderProfile::QUALITY_TIME_LAPSE_1080P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_TIME_LAPSE_1080P"), jint>(); }
inline jint CamcorderProfile::QUALITY_TIME_LAPSE_2160P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_TIME_LAPSE_2160P"), jint>(); }
inline jint CamcorderProfile::QUALITY_TIME_LAPSE_480P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_TIME_LAPSE_480P"), jint>(); }
inline jint CamcorderProfile::QUALITY_TIME_LAPSE_720P_() { return get_static_field<SCAPIX_META_STRING("QUALITY_TIME_LAPSE_720P"), jint>(); }
inline jint CamcorderProfile::QUALITY_TIME_LAPSE_CIF_() { return get_static_field<SCAPIX_META_STRING("QUALITY_TIME_LAPSE_CIF"), jint>(); }
inline jint CamcorderProfile::QUALITY_TIME_LAPSE_HIGH_() { return get_static_field<SCAPIX_META_STRING("QUALITY_TIME_LAPSE_HIGH"), jint>(); }
inline jint CamcorderProfile::QUALITY_TIME_LAPSE_LOW_() { return get_static_field<SCAPIX_META_STRING("QUALITY_TIME_LAPSE_LOW"), jint>(); }
inline jint CamcorderProfile::QUALITY_TIME_LAPSE_QCIF_() { return get_static_field<SCAPIX_META_STRING("QUALITY_TIME_LAPSE_QCIF"), jint>(); }
inline jint CamcorderProfile::QUALITY_TIME_LAPSE_QVGA_() { return get_static_field<SCAPIX_META_STRING("QUALITY_TIME_LAPSE_QVGA"), jint>(); }
inline jint CamcorderProfile::audioBitRate() { return get_field<SCAPIX_META_STRING("audioBitRate"), jint>(); }
inline void CamcorderProfile::audioBitRate(jint v) { set_field<SCAPIX_META_STRING("audioBitRate"), jint>(v); }
inline jint CamcorderProfile::audioChannels() { return get_field<SCAPIX_META_STRING("audioChannels"), jint>(); }
inline void CamcorderProfile::audioChannels(jint v) { set_field<SCAPIX_META_STRING("audioChannels"), jint>(v); }
inline jint CamcorderProfile::audioCodec() { return get_field<SCAPIX_META_STRING("audioCodec"), jint>(); }
inline void CamcorderProfile::audioCodec(jint v) { set_field<SCAPIX_META_STRING("audioCodec"), jint>(v); }
inline jint CamcorderProfile::audioSampleRate() { return get_field<SCAPIX_META_STRING("audioSampleRate"), jint>(); }
inline void CamcorderProfile::audioSampleRate(jint v) { set_field<SCAPIX_META_STRING("audioSampleRate"), jint>(v); }
inline jint CamcorderProfile::duration() { return get_field<SCAPIX_META_STRING("duration"), jint>(); }
inline void CamcorderProfile::duration(jint v) { set_field<SCAPIX_META_STRING("duration"), jint>(v); }
inline jint CamcorderProfile::fileFormat() { return get_field<SCAPIX_META_STRING("fileFormat"), jint>(); }
inline void CamcorderProfile::fileFormat(jint v) { set_field<SCAPIX_META_STRING("fileFormat"), jint>(v); }
inline jint CamcorderProfile::quality() { return get_field<SCAPIX_META_STRING("quality"), jint>(); }
inline void CamcorderProfile::quality(jint v) { set_field<SCAPIX_META_STRING("quality"), jint>(v); }
inline jint CamcorderProfile::videoBitRate() { return get_field<SCAPIX_META_STRING("videoBitRate"), jint>(); }
inline void CamcorderProfile::videoBitRate(jint v) { set_field<SCAPIX_META_STRING("videoBitRate"), jint>(v); }
inline jint CamcorderProfile::videoCodec() { return get_field<SCAPIX_META_STRING("videoCodec"), jint>(); }
inline void CamcorderProfile::videoCodec(jint v) { set_field<SCAPIX_META_STRING("videoCodec"), jint>(v); }
inline jint CamcorderProfile::videoFrameHeight() { return get_field<SCAPIX_META_STRING("videoFrameHeight"), jint>(); }
inline void CamcorderProfile::videoFrameHeight(jint v) { set_field<SCAPIX_META_STRING("videoFrameHeight"), jint>(v); }
inline jint CamcorderProfile::videoFrameRate() { return get_field<SCAPIX_META_STRING("videoFrameRate"), jint>(); }
inline void CamcorderProfile::videoFrameRate(jint v) { set_field<SCAPIX_META_STRING("videoFrameRate"), jint>(v); }
inline jint CamcorderProfile::videoFrameWidth() { return get_field<SCAPIX_META_STRING("videoFrameWidth"), jint>(); }
inline void CamcorderProfile::videoFrameWidth(jint v) { set_field<SCAPIX_META_STRING("videoFrameWidth"), jint>(v); }
inline ref<android::media::CamcorderProfile> CamcorderProfile::get(jint quality) { return call_static_method<SCAPIX_META_STRING("get"), ref<android::media::CamcorderProfile>>(quality); }
inline ref<android::media::CamcorderProfile> CamcorderProfile::get(jint cameraId, jint quality) { return call_static_method<SCAPIX_META_STRING("get"), ref<android::media::CamcorderProfile>>(cameraId, quality); }
inline jboolean CamcorderProfile::hasProfile(jint quality) { return call_static_method<SCAPIX_META_STRING("hasProfile"), jboolean>(quality); }
inline jboolean CamcorderProfile::hasProfile(jint cameraId, jint quality) { return call_static_method<SCAPIX_META_STRING("hasProfile"), jboolean>(cameraId, quality); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_CAMCORDERPROFILE_H
