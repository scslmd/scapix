// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_DIRECTORY_H
#define SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_DIRECTORY_H

namespace scapix::java_api {

namespace android::content { class ContentResolver; }
namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class ContactsContract_Directory : public object_base<SCAPIX_META_STRING("android/provider/ContactsContract$Directory"),
	java::lang::Object,
	android::provider::BaseColumns>
{
public:

	static ref<java::lang::String> ACCOUNT_NAME_();
	static ref<java::lang::String> ACCOUNT_TYPE_();
	static ref<java::lang::String> CALLER_PACKAGE_PARAM_KEY_();
	static ref<java::lang::String> CONTENT_ITEM_TYPE_();
	static ref<java::lang::String> CONTENT_TYPE_();
	static ref<android::net::Uri> CONTENT_URI_();
	static jlong DEFAULT_();
	static ref<java::lang::String> DIRECTORY_AUTHORITY_();
	static ref<java::lang::String> DISPLAY_NAME_();
	static ref<android::net::Uri> ENTERPRISE_CONTENT_URI_();
	static jlong ENTERPRISE_DEFAULT_();
	static jlong ENTERPRISE_LOCAL_INVISIBLE_();
	static ref<java::lang::String> EXPORT_SUPPORT_();
	static jint EXPORT_SUPPORT_ANY_ACCOUNT_();
	static jint EXPORT_SUPPORT_NONE_();
	static jint EXPORT_SUPPORT_SAME_ACCOUNT_ONLY_();
	static jlong LOCAL_INVISIBLE_();
	static ref<java::lang::String> PACKAGE_NAME_();
	static ref<java::lang::String> PHOTO_SUPPORT_();
	static jint PHOTO_SUPPORT_FULL_();
	static jint PHOTO_SUPPORT_FULL_SIZE_ONLY_();
	static jint PHOTO_SUPPORT_NONE_();
	static jint PHOTO_SUPPORT_THUMBNAIL_ONLY_();
	static ref<java::lang::String> SHORTCUT_SUPPORT_();
	static jint SHORTCUT_SUPPORT_DATA_ITEMS_ONLY_();
	static jint SHORTCUT_SUPPORT_FULL_();
	static jint SHORTCUT_SUPPORT_NONE_();
	static ref<java::lang::String> TYPE_RESOURCE_ID_();

	static jboolean isRemoteDirectoryId(jlong directoryId);
	static jboolean isEnterpriseDirectoryId(jlong directoryId);
	static void notifyDirectoryChange(ref<android::content::ContentResolver> resolver);

protected:

	ContactsContract_Directory(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> ContactsContract_Directory::ACCOUNT_NAME_() { return get_static_field<SCAPIX_META_STRING("ACCOUNT_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_Directory::ACCOUNT_TYPE_() { return get_static_field<SCAPIX_META_STRING("ACCOUNT_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_Directory::CALLER_PACKAGE_PARAM_KEY_() { return get_static_field<SCAPIX_META_STRING("CALLER_PACKAGE_PARAM_KEY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_Directory::CONTENT_ITEM_TYPE_() { return get_static_field<SCAPIX_META_STRING("CONTENT_ITEM_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_Directory::CONTENT_TYPE_() { return get_static_field<SCAPIX_META_STRING("CONTENT_TYPE"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> ContactsContract_Directory::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline jlong ContactsContract_Directory::DEFAULT_() { return get_static_field<SCAPIX_META_STRING("DEFAULT"), jlong>(); }
inline ref<java::lang::String> ContactsContract_Directory::DIRECTORY_AUTHORITY_() { return get_static_field<SCAPIX_META_STRING("DIRECTORY_AUTHORITY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_Directory::DISPLAY_NAME_() { return get_static_field<SCAPIX_META_STRING("DISPLAY_NAME"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> ContactsContract_Directory::ENTERPRISE_CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("ENTERPRISE_CONTENT_URI"), ref<android::net::Uri>>(); }
inline jlong ContactsContract_Directory::ENTERPRISE_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("ENTERPRISE_DEFAULT"), jlong>(); }
inline jlong ContactsContract_Directory::ENTERPRISE_LOCAL_INVISIBLE_() { return get_static_field<SCAPIX_META_STRING("ENTERPRISE_LOCAL_INVISIBLE"), jlong>(); }
inline ref<java::lang::String> ContactsContract_Directory::EXPORT_SUPPORT_() { return get_static_field<SCAPIX_META_STRING("EXPORT_SUPPORT"), ref<java::lang::String>>(); }
inline jint ContactsContract_Directory::EXPORT_SUPPORT_ANY_ACCOUNT_() { return get_static_field<SCAPIX_META_STRING("EXPORT_SUPPORT_ANY_ACCOUNT"), jint>(); }
inline jint ContactsContract_Directory::EXPORT_SUPPORT_NONE_() { return get_static_field<SCAPIX_META_STRING("EXPORT_SUPPORT_NONE"), jint>(); }
inline jint ContactsContract_Directory::EXPORT_SUPPORT_SAME_ACCOUNT_ONLY_() { return get_static_field<SCAPIX_META_STRING("EXPORT_SUPPORT_SAME_ACCOUNT_ONLY"), jint>(); }
inline jlong ContactsContract_Directory::LOCAL_INVISIBLE_() { return get_static_field<SCAPIX_META_STRING("LOCAL_INVISIBLE"), jlong>(); }
inline ref<java::lang::String> ContactsContract_Directory::PACKAGE_NAME_() { return get_static_field<SCAPIX_META_STRING("PACKAGE_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_Directory::PHOTO_SUPPORT_() { return get_static_field<SCAPIX_META_STRING("PHOTO_SUPPORT"), ref<java::lang::String>>(); }
inline jint ContactsContract_Directory::PHOTO_SUPPORT_FULL_() { return get_static_field<SCAPIX_META_STRING("PHOTO_SUPPORT_FULL"), jint>(); }
inline jint ContactsContract_Directory::PHOTO_SUPPORT_FULL_SIZE_ONLY_() { return get_static_field<SCAPIX_META_STRING("PHOTO_SUPPORT_FULL_SIZE_ONLY"), jint>(); }
inline jint ContactsContract_Directory::PHOTO_SUPPORT_NONE_() { return get_static_field<SCAPIX_META_STRING("PHOTO_SUPPORT_NONE"), jint>(); }
inline jint ContactsContract_Directory::PHOTO_SUPPORT_THUMBNAIL_ONLY_() { return get_static_field<SCAPIX_META_STRING("PHOTO_SUPPORT_THUMBNAIL_ONLY"), jint>(); }
inline ref<java::lang::String> ContactsContract_Directory::SHORTCUT_SUPPORT_() { return get_static_field<SCAPIX_META_STRING("SHORTCUT_SUPPORT"), ref<java::lang::String>>(); }
inline jint ContactsContract_Directory::SHORTCUT_SUPPORT_DATA_ITEMS_ONLY_() { return get_static_field<SCAPIX_META_STRING("SHORTCUT_SUPPORT_DATA_ITEMS_ONLY"), jint>(); }
inline jint ContactsContract_Directory::SHORTCUT_SUPPORT_FULL_() { return get_static_field<SCAPIX_META_STRING("SHORTCUT_SUPPORT_FULL"), jint>(); }
inline jint ContactsContract_Directory::SHORTCUT_SUPPORT_NONE_() { return get_static_field<SCAPIX_META_STRING("SHORTCUT_SUPPORT_NONE"), jint>(); }
inline ref<java::lang::String> ContactsContract_Directory::TYPE_RESOURCE_ID_() { return get_static_field<SCAPIX_META_STRING("TYPE_RESOURCE_ID"), ref<java::lang::String>>(); }
inline jboolean ContactsContract_Directory::isRemoteDirectoryId(jlong directoryId) { return call_static_method<SCAPIX_META_STRING("isRemoteDirectoryId"), jboolean>(directoryId); }
inline jboolean ContactsContract_Directory::isEnterpriseDirectoryId(jlong directoryId) { return call_static_method<SCAPIX_META_STRING("isEnterpriseDirectoryId"), jboolean>(directoryId); }
inline void ContactsContract_Directory::notifyDirectoryChange(ref<android::content::ContentResolver> resolver) { return call_static_method<SCAPIX_META_STRING("notifyDirectoryChange"), void>(resolver); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_DIRECTORY_H
