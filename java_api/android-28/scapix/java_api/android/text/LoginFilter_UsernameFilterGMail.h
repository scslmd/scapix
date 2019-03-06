// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/LoginFilter.h>

#ifndef SCAPIX_ANDROID_TEXT_LOGINFILTER_USERNAMEFILTERGMAIL_H
#define SCAPIX_ANDROID_TEXT_LOGINFILTER_USERNAMEFILTERGMAIL_H

namespace scapix::java_api {


namespace android::text {

class LoginFilter_UsernameFilterGMail : public object_base<SCAPIX_META_STRING("android/text/LoginFilter$UsernameFilterGMail"),
	android::text::LoginFilter>
{
public:

	static ref<LoginFilter_UsernameFilterGMail> new_object();
	static ref<LoginFilter_UsernameFilterGMail> new_object(jboolean appendInvalid);
	jboolean isAllowed(jchar c);

protected:

	LoginFilter_UsernameFilterGMail(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::text {

inline ref<LoginFilter_UsernameFilterGMail> LoginFilter_UsernameFilterGMail::new_object() { return base_::new_object(); }
inline ref<LoginFilter_UsernameFilterGMail> LoginFilter_UsernameFilterGMail::new_object(jboolean appendInvalid) { return base_::new_object(appendInvalid); }
inline jboolean LoginFilter_UsernameFilterGMail::isAllowed(jchar c) { return call_method<SCAPIX_META_STRING("isAllowed"), jboolean>(c); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_LOGINFILTER_USERNAMEFILTERGMAIL_H
