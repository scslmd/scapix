// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/database/ContentObserver.h>

#ifndef SCAPIX_ANDROID_DATABASE_ABSTRACTCURSOR_SELFCONTENTOBSERVER_H
#define SCAPIX_ANDROID_DATABASE_ABSTRACTCURSOR_SELFCONTENTOBSERVER_H

namespace scapix::java_api {

namespace android::database { class AbstractCursor; }

namespace android::database {

class AbstractCursor_SelfContentObserver : public object_base<SCAPIX_META_STRING("android/database/AbstractCursor$SelfContentObserver"),
	android::database::ContentObserver>
{
public:

	static ref<AbstractCursor_SelfContentObserver> new_object(ref<android::database::AbstractCursor> cursor);
	jboolean deliverSelfNotifications();
	void onChange(jboolean selfChange);

protected:

	AbstractCursor_SelfContentObserver(handle_type h) : base_(h) {}

};

} // namespace android::database
} // namespace scapix::java_api

#include <scapix/java_api/android/database/AbstractCursor.h>

namespace scapix::java_api {
namespace android::database {

inline ref<AbstractCursor_SelfContentObserver> AbstractCursor_SelfContentObserver::new_object(ref<android::database::AbstractCursor> cursor) { return base_::new_object(cursor); }
inline jboolean AbstractCursor_SelfContentObserver::deliverSelfNotifications() { return call_method<SCAPIX_META_STRING("deliverSelfNotifications"), jboolean>(); }
inline void AbstractCursor_SelfContentObserver::onChange(jboolean selfChange) { return call_method<SCAPIX_META_STRING("onChange"), void>(selfChange); }

} // namespace android::database
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DATABASE_ABSTRACTCURSOR_SELFCONTENTOBSERVER_H
