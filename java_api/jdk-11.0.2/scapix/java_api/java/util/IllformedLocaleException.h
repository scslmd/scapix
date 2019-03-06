// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_UTIL_ILLFORMEDLOCALEEXCEPTION_H
#define SCAPIX_JAVA_UTIL_ILLFORMEDLOCALEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::util {

class IllformedLocaleException : public object_base<SCAPIX_META_STRING("java/util/IllformedLocaleException"),
	java::lang::RuntimeException>
{
public:

	static ref<IllformedLocaleException> new_object();
	static ref<IllformedLocaleException> new_object(ref<java::lang::String> message);
	static ref<IllformedLocaleException> new_object(ref<java::lang::String> message, jint errorIndex);
	jint getErrorIndex();

protected:

	IllformedLocaleException(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::util {

inline ref<IllformedLocaleException> IllformedLocaleException::new_object() { return base_::new_object(); }
inline ref<IllformedLocaleException> IllformedLocaleException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<IllformedLocaleException> IllformedLocaleException::new_object(ref<java::lang::String> message, jint errorIndex) { return base_::new_object(message, errorIndex); }
inline jint IllformedLocaleException::getErrorIndex() { return call_method<SCAPIX_META_STRING("getErrorIndex"), jint>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_ILLFORMEDLOCALEEXCEPTION_H
