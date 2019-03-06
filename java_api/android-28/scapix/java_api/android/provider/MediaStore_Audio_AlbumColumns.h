// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMCOLUMNS_H
#define SCAPIX_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMCOLUMNS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class MediaStore_Audio_AlbumColumns : public object_base<SCAPIX_META_STRING("android/provider/MediaStore$Audio$AlbumColumns"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> ALBUM_();
	static ref<java::lang::String> ALBUM_ART_();
	static ref<java::lang::String> ALBUM_ID_();
	static ref<java::lang::String> ALBUM_KEY_();
	static ref<java::lang::String> ARTIST_();
	static ref<java::lang::String> FIRST_YEAR_();
	static ref<java::lang::String> LAST_YEAR_();
	static ref<java::lang::String> NUMBER_OF_SONGS_();
	static ref<java::lang::String> NUMBER_OF_SONGS_FOR_ARTIST_();


protected:

	MediaStore_Audio_AlbumColumns(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> MediaStore_Audio_AlbumColumns::ALBUM_() { return get_static_field<SCAPIX_META_STRING("ALBUM"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaStore_Audio_AlbumColumns::ALBUM_ART_() { return get_static_field<SCAPIX_META_STRING("ALBUM_ART"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaStore_Audio_AlbumColumns::ALBUM_ID_() { return get_static_field<SCAPIX_META_STRING("ALBUM_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaStore_Audio_AlbumColumns::ALBUM_KEY_() { return get_static_field<SCAPIX_META_STRING("ALBUM_KEY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaStore_Audio_AlbumColumns::ARTIST_() { return get_static_field<SCAPIX_META_STRING("ARTIST"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaStore_Audio_AlbumColumns::FIRST_YEAR_() { return get_static_field<SCAPIX_META_STRING("FIRST_YEAR"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaStore_Audio_AlbumColumns::LAST_YEAR_() { return get_static_field<SCAPIX_META_STRING("LAST_YEAR"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaStore_Audio_AlbumColumns::NUMBER_OF_SONGS_() { return get_static_field<SCAPIX_META_STRING("NUMBER_OF_SONGS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaStore_Audio_AlbumColumns::NUMBER_OF_SONGS_FOR_ARTIST_() { return get_static_field<SCAPIX_META_STRING("NUMBER_OF_SONGS_FOR_ARTIST"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMCOLUMNS_H
