// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVAX_SQL_CONNECTIONEVENTLISTENER_H
#define SCAPIX_JAVAX_SQL_CONNECTIONEVENTLISTENER_H

namespace scapix::java_api {

namespace javax::sql { class ConnectionEvent; }

namespace javax::sql {

class ConnectionEventListener : public object_base<SCAPIX_META_STRING("javax/sql/ConnectionEventListener"),
	java::lang::Object,
	java::util::EventListener>
{
public:

	void connectionClosed(ref<javax::sql::ConnectionEvent> p1);
	void connectionErrorOccurred(ref<javax::sql::ConnectionEvent> p1);

protected:

	ConnectionEventListener(handle_type h) : base_(h) {}

};

} // namespace javax::sql
} // namespace scapix::java_api

#include <scapix/java_api/javax/sql/ConnectionEvent.h>

namespace scapix::java_api {
namespace javax::sql {

inline void ConnectionEventListener::connectionClosed(ref<javax::sql::ConnectionEvent> p1) { return call_method<SCAPIX_META_STRING("connectionClosed"), void>(p1); }
inline void ConnectionEventListener::connectionErrorOccurred(ref<javax::sql::ConnectionEvent> p1) { return call_method<SCAPIX_META_STRING("connectionErrorOccurred"), void>(p1); }

} // namespace javax::sql
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SQL_CONNECTIONEVENTLISTENER_H
