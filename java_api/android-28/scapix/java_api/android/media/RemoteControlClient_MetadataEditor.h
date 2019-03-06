// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/media/MediaMetadataEditor.h>

#ifndef SCAPIX_ANDROID_MEDIA_REMOTECONTROLCLIENT_METADATAEDITOR_H
#define SCAPIX_ANDROID_MEDIA_REMOTECONTROLCLIENT_METADATAEDITOR_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace java::lang { class Object; }
namespace java::lang { class String; }

namespace android::media {

class RemoteControlClient_MetadataEditor : public object_base<SCAPIX_META_STRING("android/media/RemoteControlClient$MetadataEditor"),
	android::media::MediaMetadataEditor>
{
public:

	static jint BITMAP_KEY_ARTWORK_();

	ref<java::lang::Object> clone();
	ref<android::media::RemoteControlClient_MetadataEditor> putString(jint key, ref<java::lang::String> value);
	ref<android::media::RemoteControlClient_MetadataEditor> putLong(jint key, jlong value);
	ref<android::media::RemoteControlClient_MetadataEditor> putBitmap(jint key, ref<android::graphics::Bitmap> bitmap);
	ref<android::media::RemoteControlClient_MetadataEditor> putObject(jint key, ref<java::lang::Object> object);
	void clear();
	void apply();

protected:

	RemoteControlClient_MetadataEditor(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media {

inline jint RemoteControlClient_MetadataEditor::BITMAP_KEY_ARTWORK_() { return get_static_field<SCAPIX_META_STRING("BITMAP_KEY_ARTWORK"), jint>(); }
inline ref<java::lang::Object> RemoteControlClient_MetadataEditor::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline ref<android::media::RemoteControlClient_MetadataEditor> RemoteControlClient_MetadataEditor::putString(jint key, ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("putString"), ref<android::media::RemoteControlClient_MetadataEditor>>(key, value); }
inline ref<android::media::RemoteControlClient_MetadataEditor> RemoteControlClient_MetadataEditor::putLong(jint key, jlong value) { return call_method<SCAPIX_META_STRING("putLong"), ref<android::media::RemoteControlClient_MetadataEditor>>(key, value); }
inline ref<android::media::RemoteControlClient_MetadataEditor> RemoteControlClient_MetadataEditor::putBitmap(jint key, ref<android::graphics::Bitmap> bitmap) { return call_method<SCAPIX_META_STRING("putBitmap"), ref<android::media::RemoteControlClient_MetadataEditor>>(key, bitmap); }
inline ref<android::media::RemoteControlClient_MetadataEditor> RemoteControlClient_MetadataEditor::putObject(jint key, ref<java::lang::Object> object) { return call_method<SCAPIX_META_STRING("putObject"), ref<android::media::RemoteControlClient_MetadataEditor>>(key, object); }
inline void RemoteControlClient_MetadataEditor::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline void RemoteControlClient_MetadataEditor::apply() { return call_method<SCAPIX_META_STRING("apply"), void>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_REMOTECONTROLCLIENT_METADATAEDITOR_H
