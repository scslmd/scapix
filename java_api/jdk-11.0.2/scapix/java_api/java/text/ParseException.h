// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_TEXT_PARSEEXCEPTION_H
#define SCAPIX_JAVA_TEXT_PARSEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::text {

class ParseException : public object_base<SCAPIX_META_STRING("java/text/ParseException"),
	java::lang::Exception>
{
public:

	static ref<ParseException> new_object(ref<java::lang::String> s, jint errorOffset);
	jint getErrorOffset();

protected:

	ParseException(handle_type h) : base_(h) {}

};

} // namespace java::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::text {

inline ref<ParseException> ParseException::new_object(ref<java::lang::String> s, jint errorOffset) { return base_::new_object(s, errorOffset); }
inline jint ParseException::getErrorOffset() { return call_method<SCAPIX_META_STRING("getErrorOffset"), jint>(); }

} // namespace java::text
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TEXT_PARSEEXCEPTION_H
