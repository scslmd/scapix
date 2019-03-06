// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIADRM_CRYPTOSESSION_H
#define SCAPIX_ANDROID_MEDIA_MEDIADRM_CRYPTOSESSION_H

namespace scapix::java_api {


namespace android::media {

class MediaDrm_CryptoSession : public object_base<SCAPIX_META_STRING("android/media/MediaDrm$CryptoSession"),
	java::lang::Object>
{
public:

	ref<link::java::array<jbyte>> encrypt(ref<link::java::array<jbyte>> keyid, ref<link::java::array<jbyte>> input, ref<link::java::array<jbyte>> iv);
	ref<link::java::array<jbyte>> decrypt(ref<link::java::array<jbyte>> keyid, ref<link::java::array<jbyte>> input, ref<link::java::array<jbyte>> iv);
	ref<link::java::array<jbyte>> sign(ref<link::java::array<jbyte>> keyid, ref<link::java::array<jbyte>> message);
	jboolean verify(ref<link::java::array<jbyte>> keyid, ref<link::java::array<jbyte>> message, ref<link::java::array<jbyte>> signature);

protected:

	MediaDrm_CryptoSession(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::media {

inline ref<link::java::array<jbyte>> MediaDrm_CryptoSession::encrypt(ref<link::java::array<jbyte>> keyid, ref<link::java::array<jbyte>> input, ref<link::java::array<jbyte>> iv) { return call_method<SCAPIX_META_STRING("encrypt"), ref<link::java::array<jbyte>>>(keyid, input, iv); }
inline ref<link::java::array<jbyte>> MediaDrm_CryptoSession::decrypt(ref<link::java::array<jbyte>> keyid, ref<link::java::array<jbyte>> input, ref<link::java::array<jbyte>> iv) { return call_method<SCAPIX_META_STRING("decrypt"), ref<link::java::array<jbyte>>>(keyid, input, iv); }
inline ref<link::java::array<jbyte>> MediaDrm_CryptoSession::sign(ref<link::java::array<jbyte>> keyid, ref<link::java::array<jbyte>> message) { return call_method<SCAPIX_META_STRING("sign"), ref<link::java::array<jbyte>>>(keyid, message); }
inline jboolean MediaDrm_CryptoSession::verify(ref<link::java::array<jbyte>> keyid, ref<link::java::array<jbyte>> message, ref<link::java::array<jbyte>> signature) { return call_method<SCAPIX_META_STRING("verify"), jboolean>(keyid, message, signature); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIADRM_CRYPTOSESSION_H
