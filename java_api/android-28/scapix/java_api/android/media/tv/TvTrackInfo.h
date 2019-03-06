// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_MEDIA_TV_TVTRACKINFO_H
#define SCAPIX_ANDROID_MEDIA_TV_TVTRACKINFO_H

namespace scapix::java_api {

namespace android::os { class Bundle; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace android::media::tv { class TvTrackInfo_Builder; }

namespace android::media::tv {

class TvTrackInfo : public object_base<SCAPIX_META_STRING("android/media/tv/TvTrackInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = TvTrackInfo_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint TYPE_AUDIO_();
	static jint TYPE_SUBTITLE_();
	static jint TYPE_VIDEO_();

	jint getType();
	ref<java::lang::String> getId();
	ref<java::lang::String> getLanguage();
	ref<java::lang::CharSequence> getDescription();
	jint getAudioChannelCount();
	jint getAudioSampleRate();
	jint getVideoWidth();
	jint getVideoHeight();
	jfloat getVideoFrameRate();
	jfloat getVideoPixelAspectRatio();
	jbyte getVideoActiveFormatDescription();
	ref<android::os::Bundle> getExtra();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();

protected:

	TvTrackInfo(handle_type h) : base_(h) {}

};

} // namespace android::media::tv
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::tv {

inline ref<android::os::Parcelable_Creator> TvTrackInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint TvTrackInfo::TYPE_AUDIO_() { return get_static_field<SCAPIX_META_STRING("TYPE_AUDIO"), jint>(); }
inline jint TvTrackInfo::TYPE_SUBTITLE_() { return get_static_field<SCAPIX_META_STRING("TYPE_SUBTITLE"), jint>(); }
inline jint TvTrackInfo::TYPE_VIDEO_() { return get_static_field<SCAPIX_META_STRING("TYPE_VIDEO"), jint>(); }
inline jint TvTrackInfo::getType() { return call_method<SCAPIX_META_STRING("getType"), jint>(); }
inline ref<java::lang::String> TvTrackInfo::getId() { return call_method<SCAPIX_META_STRING("getId"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvTrackInfo::getLanguage() { return call_method<SCAPIX_META_STRING("getLanguage"), ref<java::lang::String>>(); }
inline ref<java::lang::CharSequence> TvTrackInfo::getDescription() { return call_method<SCAPIX_META_STRING("getDescription"), ref<java::lang::CharSequence>>(); }
inline jint TvTrackInfo::getAudioChannelCount() { return call_method<SCAPIX_META_STRING("getAudioChannelCount"), jint>(); }
inline jint TvTrackInfo::getAudioSampleRate() { return call_method<SCAPIX_META_STRING("getAudioSampleRate"), jint>(); }
inline jint TvTrackInfo::getVideoWidth() { return call_method<SCAPIX_META_STRING("getVideoWidth"), jint>(); }
inline jint TvTrackInfo::getVideoHeight() { return call_method<SCAPIX_META_STRING("getVideoHeight"), jint>(); }
inline jfloat TvTrackInfo::getVideoFrameRate() { return call_method<SCAPIX_META_STRING("getVideoFrameRate"), jfloat>(); }
inline jfloat TvTrackInfo::getVideoPixelAspectRatio() { return call_method<SCAPIX_META_STRING("getVideoPixelAspectRatio"), jfloat>(); }
inline jbyte TvTrackInfo::getVideoActiveFormatDescription() { return call_method<SCAPIX_META_STRING("getVideoActiveFormatDescription"), jbyte>(); }
inline ref<android::os::Bundle> TvTrackInfo::getExtra() { return call_method<SCAPIX_META_STRING("getExtra"), ref<android::os::Bundle>>(); }
inline jint TvTrackInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void TvTrackInfo::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jboolean TvTrackInfo::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint TvTrackInfo::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace android::media::tv
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_TV_TVTRACKINFO_H
