// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_LANG_ILLEGALCALLEREXCEPTION_H
#define SCAPIX_JAVA_LANG_ILLEGALCALLEREXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::lang {

class IllegalCallerException : public object_base<SCAPIX_META_STRING("java/lang/IllegalCallerException"),
	java::lang::RuntimeException>
{
public:

	static ref<IllegalCallerException> new_object();
	static ref<IllegalCallerException> new_object(ref<java::lang::String> s);
	static ref<IllegalCallerException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<IllegalCallerException> new_object(ref<java::lang::Throwable> cause);

protected:

	IllegalCallerException(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<IllegalCallerException> IllegalCallerException::new_object() { return base_::new_object(); }
inline ref<IllegalCallerException> IllegalCallerException::new_object(ref<java::lang::String> s) { return base_::new_object(s); }
inline ref<IllegalCallerException> IllegalCallerException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<IllegalCallerException> IllegalCallerException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_ILLEGALCALLEREXCEPTION_H
