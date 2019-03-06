// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIADESCRIPTION_BUILDER_H
#define SCAPIX_ANDROID_MEDIA_MEDIADESCRIPTION_BUILDER_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace android::media { class MediaDescription; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::media {

class MediaDescription_Builder : public object_base<SCAPIX_META_STRING("android/media/MediaDescription$Builder"),
	java::lang::Object>
{
public:

	static ref<MediaDescription_Builder> new_object();
	ref<android::media::MediaDescription_Builder> setMediaId(ref<java::lang::String> mediaId);
	ref<android::media::MediaDescription_Builder> setTitle(ref<java::lang::CharSequence> title);
	ref<android::media::MediaDescription_Builder> setSubtitle(ref<java::lang::CharSequence> subtitle);
	ref<android::media::MediaDescription_Builder> setDescription(ref<java::lang::CharSequence> description);
	ref<android::media::MediaDescription_Builder> setIconBitmap(ref<android::graphics::Bitmap> icon);
	ref<android::media::MediaDescription_Builder> setIconUri(ref<android::net::Uri> iconUri);
	ref<android::media::MediaDescription_Builder> setExtras(ref<android::os::Bundle> extras);
	ref<android::media::MediaDescription_Builder> setMediaUri(ref<android::net::Uri> mediaUri);
	ref<android::media::MediaDescription> build();

protected:

	MediaDescription_Builder(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/media/MediaDescription.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media {

inline ref<MediaDescription_Builder> MediaDescription_Builder::new_object() { return base_::new_object(); }
inline ref<android::media::MediaDescription_Builder> MediaDescription_Builder::setMediaId(ref<java::lang::String> mediaId) { return call_method<SCAPIX_META_STRING("setMediaId"), ref<android::media::MediaDescription_Builder>>(mediaId); }
inline ref<android::media::MediaDescription_Builder> MediaDescription_Builder::setTitle(ref<java::lang::CharSequence> title) { return call_method<SCAPIX_META_STRING("setTitle"), ref<android::media::MediaDescription_Builder>>(title); }
inline ref<android::media::MediaDescription_Builder> MediaDescription_Builder::setSubtitle(ref<java::lang::CharSequence> subtitle) { return call_method<SCAPIX_META_STRING("setSubtitle"), ref<android::media::MediaDescription_Builder>>(subtitle); }
inline ref<android::media::MediaDescription_Builder> MediaDescription_Builder::setDescription(ref<java::lang::CharSequence> description) { return call_method<SCAPIX_META_STRING("setDescription"), ref<android::media::MediaDescription_Builder>>(description); }
inline ref<android::media::MediaDescription_Builder> MediaDescription_Builder::setIconBitmap(ref<android::graphics::Bitmap> icon) { return call_method<SCAPIX_META_STRING("setIconBitmap"), ref<android::media::MediaDescription_Builder>>(icon); }
inline ref<android::media::MediaDescription_Builder> MediaDescription_Builder::setIconUri(ref<android::net::Uri> iconUri) { return call_method<SCAPIX_META_STRING("setIconUri"), ref<android::media::MediaDescription_Builder>>(iconUri); }
inline ref<android::media::MediaDescription_Builder> MediaDescription_Builder::setExtras(ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("setExtras"), ref<android::media::MediaDescription_Builder>>(extras); }
inline ref<android::media::MediaDescription_Builder> MediaDescription_Builder::setMediaUri(ref<android::net::Uri> mediaUri) { return call_method<SCAPIX_META_STRING("setMediaUri"), ref<android::media::MediaDescription_Builder>>(mediaUri); }
inline ref<android::media::MediaDescription> MediaDescription_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::media::MediaDescription>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIADESCRIPTION_BUILDER_H
