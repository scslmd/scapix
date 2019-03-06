// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/time/DateTimeException.h>

#ifndef SCAPIX_JAVA_TIME_FORMAT_DATETIMEPARSEEXCEPTION_H
#define SCAPIX_JAVA_TIME_FORMAT_DATETIMEPARSEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::time::format {

class DateTimeParseException : public object_base<SCAPIX_META_STRING("java/time/format/DateTimeParseException"),
	java::time::DateTimeException>
{
public:

	static ref<DateTimeParseException> new_object(ref<java::lang::String> message, ref<java::lang::CharSequence> parsedData, jint errorIndex);
	static ref<DateTimeParseException> new_object(ref<java::lang::String> message, ref<java::lang::CharSequence> parsedData, jint errorIndex, ref<java::lang::Throwable> cause);
	ref<java::lang::String> getParsedString();
	jint getErrorIndex();

protected:

	DateTimeParseException(handle_type h) : base_(h) {}

};

} // namespace java::time::format
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::time::format {

inline ref<DateTimeParseException> DateTimeParseException::new_object(ref<java::lang::String> message, ref<java::lang::CharSequence> parsedData, jint errorIndex) { return base_::new_object(message, parsedData, errorIndex); }
inline ref<DateTimeParseException> DateTimeParseException::new_object(ref<java::lang::String> message, ref<java::lang::CharSequence> parsedData, jint errorIndex, ref<java::lang::Throwable> cause) { return base_::new_object(message, parsedData, errorIndex, cause); }
inline ref<java::lang::String> DateTimeParseException::getParsedString() { return call_method<SCAPIX_META_STRING("getParsedString"), ref<java::lang::String>>(); }
inline jint DateTimeParseException::getErrorIndex() { return call_method<SCAPIX_META_STRING("getErrorIndex"), jint>(); }

} // namespace java::time::format
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_FORMAT_DATETIMEPARSEEXCEPTION_H
