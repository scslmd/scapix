// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/CalendarContract_SyncColumns.h>
#include <scapix/java_api/android/provider/CalendarContract_EventsColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTSENTITY_H
#define SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTSENTITY_H

namespace scapix::java_api {

namespace android::content { class ContentProviderClient; }
namespace android::content { class ContentResolver; }
namespace android::content { class EntityIterator; }
namespace android::database { class Cursor; }
namespace android::net { class Uri; }

namespace android::provider {

class CalendarContract_EventsEntity : public object_base<SCAPIX_META_STRING("android/provider/CalendarContract$EventsEntity"),
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::CalendarContract_SyncColumns,
	android::provider::CalendarContract_EventsColumns>
{
public:

	static ref<android::net::Uri> CONTENT_URI_();

	static ref<android::content::EntityIterator> newEntityIterator(ref<android::database::Cursor> cursor, ref<android::content::ContentResolver> resolver);
	static ref<android::content::EntityIterator> newEntityIterator(ref<android::database::Cursor> cursor, ref<android::content::ContentProviderClient> provider);

protected:

	CalendarContract_EventsEntity(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentProviderClient.h>
#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/content/EntityIterator.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<android::net::Uri> CalendarContract_EventsEntity::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<android::content::EntityIterator> CalendarContract_EventsEntity::newEntityIterator(ref<android::database::Cursor> cursor, ref<android::content::ContentResolver> resolver) { return call_static_method<SCAPIX_META_STRING("newEntityIterator"), ref<android::content::EntityIterator>>(cursor, resolver); }
inline ref<android::content::EntityIterator> CalendarContract_EventsEntity::newEntityIterator(ref<android::database::Cursor> cursor, ref<android::content::ContentProviderClient> provider) { return call_static_method<SCAPIX_META_STRING("newEntityIterator"), ref<android::content::EntityIterator>>(cursor, provider); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTSENTITY_H
