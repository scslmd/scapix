// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_TIME_DATETIMEEXCEPTION_H
#define SCAPIX_JAVA_TIME_DATETIMEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::time {

class DateTimeException : public object_base<SCAPIX_META_STRING("java/time/DateTimeException"),
	java::lang::RuntimeException>
{
public:

	static ref<DateTimeException> new_object(ref<java::lang::String> message);
	static ref<DateTimeException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);

protected:

	DateTimeException(handle_type h) : base_(h) {}

};

} // namespace java::time
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::time {

inline ref<DateTimeException> DateTimeException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<DateTimeException> DateTimeException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

} // namespace java::time
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_DATETIMEEXCEPTION_H
