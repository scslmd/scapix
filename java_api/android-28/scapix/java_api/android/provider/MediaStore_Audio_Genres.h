// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/MediaStore_Audio_GenresColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_MEDIASTORE_AUDIO_GENRES_H
#define SCAPIX_ANDROID_PROVIDER_MEDIASTORE_AUDIO_GENRES_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }
namespace android::provider { class MediaStore_Audio_Genres_Members; }

namespace android::provider {

class MediaStore_Audio_Genres : public object_base<SCAPIX_META_STRING("android/provider/MediaStore$Audio$Genres"),
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::MediaStore_Audio_GenresColumns>
{
public:

	using Members = MediaStore_Audio_Genres_Members;

	static ref<java::lang::String> CONTENT_TYPE_();
	static ref<java::lang::String> DEFAULT_SORT_ORDER_();
	static ref<java::lang::String> ENTRY_CONTENT_TYPE_();
	static ref<android::net::Uri> EXTERNAL_CONTENT_URI_();
	static ref<android::net::Uri> INTERNAL_CONTENT_URI_();

	static ref<MediaStore_Audio_Genres> new_object();
	static ref<android::net::Uri> getContentUri(ref<java::lang::String> volumeName);
	static ref<android::net::Uri> getContentUriForAudioId(ref<java::lang::String> volumeName, jint audioId);

protected:

	MediaStore_Audio_Genres(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> MediaStore_Audio_Genres::CONTENT_TYPE_() { return get_static_field<SCAPIX_META_STRING("CONTENT_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaStore_Audio_Genres::DEFAULT_SORT_ORDER_() { return get_static_field<SCAPIX_META_STRING("DEFAULT_SORT_ORDER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaStore_Audio_Genres::ENTRY_CONTENT_TYPE_() { return get_static_field<SCAPIX_META_STRING("ENTRY_CONTENT_TYPE"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> MediaStore_Audio_Genres::EXTERNAL_CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("EXTERNAL_CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<android::net::Uri> MediaStore_Audio_Genres::INTERNAL_CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("INTERNAL_CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<MediaStore_Audio_Genres> MediaStore_Audio_Genres::new_object() { return base_::new_object(); }
inline ref<android::net::Uri> MediaStore_Audio_Genres::getContentUri(ref<java::lang::String> volumeName) { return call_static_method<SCAPIX_META_STRING("getContentUri"), ref<android::net::Uri>>(volumeName); }
inline ref<android::net::Uri> MediaStore_Audio_Genres::getContentUriForAudioId(ref<java::lang::String> volumeName, jint audioId) { return call_static_method<SCAPIX_META_STRING("getContentUriForAudioId"), ref<android::net::Uri>>(volumeName, audioId); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_MEDIASTORE_AUDIO_GENRES_H
