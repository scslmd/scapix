// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_DISPLAYPHOTO_H
#define SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_DISPLAYPHOTO_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class ContactsContract_DisplayPhoto : public object_base<SCAPIX_META_STRING("android/provider/ContactsContract$DisplayPhoto"),
	java::lang::Object>
{
public:

	static ref<android::net::Uri> CONTENT_MAX_DIMENSIONS_URI_();
	static ref<android::net::Uri> CONTENT_URI_();
	static ref<java::lang::String> DISPLAY_MAX_DIM_();
	static ref<java::lang::String> THUMBNAIL_MAX_DIM_();


protected:

	ContactsContract_DisplayPhoto(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<android::net::Uri> ContactsContract_DisplayPhoto::CONTENT_MAX_DIMENSIONS_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_MAX_DIMENSIONS_URI"), ref<android::net::Uri>>(); }
inline ref<android::net::Uri> ContactsContract_DisplayPhoto::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<java::lang::String> ContactsContract_DisplayPhoto::DISPLAY_MAX_DIM_() { return get_static_field<SCAPIX_META_STRING("DISPLAY_MAX_DIM"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_DisplayPhoto::THUMBNAIL_MAX_DIM_() { return get_static_field<SCAPIX_META_STRING("THUMBNAIL_MAX_DIM"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_DISPLAYPHOTO_H
