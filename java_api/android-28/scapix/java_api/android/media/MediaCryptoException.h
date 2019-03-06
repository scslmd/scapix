// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIACRYPTOEXCEPTION_H
#define SCAPIX_ANDROID_MEDIA_MEDIACRYPTOEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::media {

class MediaCryptoException : public object_base<SCAPIX_META_STRING("android/media/MediaCryptoException"),
	java::lang::Exception>
{
public:

	static ref<MediaCryptoException> new_object(ref<java::lang::String> detailMessage);

protected:

	MediaCryptoException(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media {

inline ref<MediaCryptoException> MediaCryptoException::new_object(ref<java::lang::String> detailMessage) { return base_::new_object(detailMessage); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIACRYPTOEXCEPTION_H
