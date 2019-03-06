// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTSCOLUMNS_H
#define SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTSCOLUMNS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class ContactsContract_ContactsColumns : public object_base<SCAPIX_META_STRING("android/provider/ContactsContract$ContactsColumns"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> CONTACT_LAST_UPDATED_TIMESTAMP_();
	static ref<java::lang::String> DISPLAY_NAME_();
	static ref<java::lang::String> HAS_PHONE_NUMBER_();
	static ref<java::lang::String> IN_DEFAULT_DIRECTORY_();
	static ref<java::lang::String> IN_VISIBLE_GROUP_();
	static ref<java::lang::String> IS_USER_PROFILE_();
	static ref<java::lang::String> LOOKUP_KEY_();
	static ref<java::lang::String> NAME_RAW_CONTACT_ID_();
	static ref<java::lang::String> PHOTO_FILE_ID_();
	static ref<java::lang::String> PHOTO_ID_();
	static ref<java::lang::String> PHOTO_THUMBNAIL_URI_();
	static ref<java::lang::String> PHOTO_URI_();


protected:

	ContactsContract_ContactsColumns(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> ContactsContract_ContactsColumns::CONTACT_LAST_UPDATED_TIMESTAMP_() { return get_static_field<SCAPIX_META_STRING("CONTACT_LAST_UPDATED_TIMESTAMP"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactsColumns::DISPLAY_NAME_() { return get_static_field<SCAPIX_META_STRING("DISPLAY_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactsColumns::HAS_PHONE_NUMBER_() { return get_static_field<SCAPIX_META_STRING("HAS_PHONE_NUMBER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactsColumns::IN_DEFAULT_DIRECTORY_() { return get_static_field<SCAPIX_META_STRING("IN_DEFAULT_DIRECTORY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactsColumns::IN_VISIBLE_GROUP_() { return get_static_field<SCAPIX_META_STRING("IN_VISIBLE_GROUP"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactsColumns::IS_USER_PROFILE_() { return get_static_field<SCAPIX_META_STRING("IS_USER_PROFILE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactsColumns::LOOKUP_KEY_() { return get_static_field<SCAPIX_META_STRING("LOOKUP_KEY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactsColumns::NAME_RAW_CONTACT_ID_() { return get_static_field<SCAPIX_META_STRING("NAME_RAW_CONTACT_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactsColumns::PHOTO_FILE_ID_() { return get_static_field<SCAPIX_META_STRING("PHOTO_FILE_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactsColumns::PHOTO_ID_() { return get_static_field<SCAPIX_META_STRING("PHOTO_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactsColumns::PHOTO_THUMBNAIL_URI_() { return get_static_field<SCAPIX_META_STRING("PHOTO_THUMBNAIL_URI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_ContactsColumns::PHOTO_URI_() { return get_static_field<SCAPIX_META_STRING("PHOTO_URI"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_CONTACTSCOLUMNS_H
