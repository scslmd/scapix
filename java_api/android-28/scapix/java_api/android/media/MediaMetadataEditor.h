// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIAMETADATAEDITOR_H
#define SCAPIX_ANDROID_MEDIA_MEDIAMETADATAEDITOR_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace java::lang { class String; }

namespace android::media {

class MediaMetadataEditor : public object_base<SCAPIX_META_STRING("android/media/MediaMetadataEditor"),
	java::lang::Object>
{
public:

	static jint BITMAP_KEY_ARTWORK_();
	static jint RATING_KEY_BY_OTHERS_();
	static jint RATING_KEY_BY_USER_();

	void apply();
	void clear();
	void addEditableKey(jint key);
	void removeEditableKeys();
	ref<link::java::array<jint>> getEditableKeys();
	ref<android::media::MediaMetadataEditor> putString(jint key, ref<java::lang::String> value);
	ref<android::media::MediaMetadataEditor> putLong(jint key, jlong value);
	ref<android::media::MediaMetadataEditor> putBitmap(jint key, ref<android::graphics::Bitmap> bitmap);
	ref<android::media::MediaMetadataEditor> putObject(jint key, ref<java::lang::Object> value);
	jlong getLong(jint key, jlong defaultValue);
	ref<java::lang::String> getString(jint key, ref<java::lang::String> defaultValue);
	ref<android::graphics::Bitmap> getBitmap(jint key, ref<android::graphics::Bitmap> defaultValue);
	ref<java::lang::Object> getObject(jint key, ref<java::lang::Object> defaultValue);

protected:

	MediaMetadataEditor(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media {

inline jint MediaMetadataEditor::BITMAP_KEY_ARTWORK_() { return get_static_field<SCAPIX_META_STRING("BITMAP_KEY_ARTWORK"), jint>(); }
inline jint MediaMetadataEditor::RATING_KEY_BY_OTHERS_() { return get_static_field<SCAPIX_META_STRING("RATING_KEY_BY_OTHERS"), jint>(); }
inline jint MediaMetadataEditor::RATING_KEY_BY_USER_() { return get_static_field<SCAPIX_META_STRING("RATING_KEY_BY_USER"), jint>(); }
inline void MediaMetadataEditor::apply() { return call_method<SCAPIX_META_STRING("apply"), void>(); }
inline void MediaMetadataEditor::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline void MediaMetadataEditor::addEditableKey(jint key) { return call_method<SCAPIX_META_STRING("addEditableKey"), void>(key); }
inline void MediaMetadataEditor::removeEditableKeys() { return call_method<SCAPIX_META_STRING("removeEditableKeys"), void>(); }
inline ref<link::java::array<jint>> MediaMetadataEditor::getEditableKeys() { return call_method<SCAPIX_META_STRING("getEditableKeys"), ref<link::java::array<jint>>>(); }
inline ref<android::media::MediaMetadataEditor> MediaMetadataEditor::putString(jint key, ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("putString"), ref<android::media::MediaMetadataEditor>>(key, value); }
inline ref<android::media::MediaMetadataEditor> MediaMetadataEditor::putLong(jint key, jlong value) { return call_method<SCAPIX_META_STRING("putLong"), ref<android::media::MediaMetadataEditor>>(key, value); }
inline ref<android::media::MediaMetadataEditor> MediaMetadataEditor::putBitmap(jint key, ref<android::graphics::Bitmap> bitmap) { return call_method<SCAPIX_META_STRING("putBitmap"), ref<android::media::MediaMetadataEditor>>(key, bitmap); }
inline ref<android::media::MediaMetadataEditor> MediaMetadataEditor::putObject(jint key, ref<java::lang::Object> value) { return call_method<SCAPIX_META_STRING("putObject"), ref<android::media::MediaMetadataEditor>>(key, value); }
inline jlong MediaMetadataEditor::getLong(jint key, jlong defaultValue) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(key, defaultValue); }
inline ref<java::lang::String> MediaMetadataEditor::getString(jint key, ref<java::lang::String> defaultValue) { return call_method<SCAPIX_META_STRING("getString"), ref<java::lang::String>>(key, defaultValue); }
inline ref<android::graphics::Bitmap> MediaMetadataEditor::getBitmap(jint key, ref<android::graphics::Bitmap> defaultValue) { return call_method<SCAPIX_META_STRING("getBitmap"), ref<android::graphics::Bitmap>>(key, defaultValue); }
inline ref<java::lang::Object> MediaMetadataEditor::getObject(jint key, ref<java::lang::Object> defaultValue) { return call_method<SCAPIX_META_STRING("getObject"), ref<java::lang::Object>>(key, defaultValue); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIAMETADATAEDITOR_H
