// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/ContactsContract_DataColumnsWithJoins.h>
#include <scapix/java_api/android/provider/ContactsContract_CommonDataKinds_CommonColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_EVENT_H
#define SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_EVENT_H

namespace scapix::java_api {

namespace android::content::res { class Resources; }
namespace java::lang { class CharSequence; }
namespace java::lang { class Integer; }
namespace java::lang { class String; }

namespace android::provider {

class ContactsContract_CommonDataKinds_Event : public object_base<SCAPIX_META_STRING("android/provider/ContactsContract$CommonDataKinds$Event"),
	java::lang::Object,
	android::provider::ContactsContract_DataColumnsWithJoins,
	android::provider::ContactsContract_CommonDataKinds_CommonColumns>
{
public:

	static ref<java::lang::String> CONTENT_ITEM_TYPE_();
	static ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX_();
	static ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX_COUNTS_();
	static ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX_TITLES_();
	static ref<java::lang::String> START_DATE_();
	static jint TYPE_ANNIVERSARY_();
	static jint TYPE_BIRTHDAY_();
	static jint TYPE_OTHER_();

	static jint getTypeResource(ref<java::lang::Integer> type);
	static ref<java::lang::CharSequence> getTypeLabel(ref<android::content::res::Resources> res, jint type, ref<java::lang::CharSequence> label);

protected:

	ContactsContract_CommonDataKinds_Event(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> ContactsContract_CommonDataKinds_Event::CONTENT_ITEM_TYPE_() { return get_static_field<SCAPIX_META_STRING("CONTENT_ITEM_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_CommonDataKinds_Event::EXTRA_ADDRESS_BOOK_INDEX_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ADDRESS_BOOK_INDEX"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_CommonDataKinds_Event::EXTRA_ADDRESS_BOOK_INDEX_COUNTS_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ADDRESS_BOOK_INDEX_COUNTS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_CommonDataKinds_Event::EXTRA_ADDRESS_BOOK_INDEX_TITLES_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ADDRESS_BOOK_INDEX_TITLES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_CommonDataKinds_Event::START_DATE_() { return get_static_field<SCAPIX_META_STRING("START_DATE"), ref<java::lang::String>>(); }
inline jint ContactsContract_CommonDataKinds_Event::TYPE_ANNIVERSARY_() { return get_static_field<SCAPIX_META_STRING("TYPE_ANNIVERSARY"), jint>(); }
inline jint ContactsContract_CommonDataKinds_Event::TYPE_BIRTHDAY_() { return get_static_field<SCAPIX_META_STRING("TYPE_BIRTHDAY"), jint>(); }
inline jint ContactsContract_CommonDataKinds_Event::TYPE_OTHER_() { return get_static_field<SCAPIX_META_STRING("TYPE_OTHER"), jint>(); }
inline jint ContactsContract_CommonDataKinds_Event::getTypeResource(ref<java::lang::Integer> type) { return call_static_method<SCAPIX_META_STRING("getTypeResource"), jint>(type); }
inline ref<java::lang::CharSequence> ContactsContract_CommonDataKinds_Event::getTypeLabel(ref<android::content::res::Resources> res, jint type, ref<java::lang::CharSequence> label) { return call_static_method<SCAPIX_META_STRING("getTypeLabel"), ref<java::lang::CharSequence>>(res, type, label); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_EVENT_H
