// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_ANDROID_NFC_TAGLOSTEXCEPTION_H
#define SCAPIX_ANDROID_NFC_TAGLOSTEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::nfc {

class TagLostException : public object_base<SCAPIX_META_STRING("android/nfc/TagLostException"),
	java::io::IOException>
{
public:

	static ref<TagLostException> new_object();
	static ref<TagLostException> new_object(ref<java::lang::String> message);

protected:

	TagLostException(handle_type h) : base_(h) {}

};

} // namespace android::nfc
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::nfc {

inline ref<TagLostException> TagLostException::new_object() { return base_::new_object(); }
inline ref<TagLostException> TagLostException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }

} // namespace android::nfc
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NFC_TAGLOSTEXCEPTION_H
