// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_LANG_RUNTIMEEXCEPTION_H
#define SCAPIX_JAVA_LANG_RUNTIMEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::lang {

class RuntimeException : public object_base<SCAPIX_META_STRING("java/lang/RuntimeException"),
	java::lang::Exception>
{
public:

	static ref<RuntimeException> new_object();
	static ref<RuntimeException> new_object(ref<java::lang::String> message);
	static ref<RuntimeException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<RuntimeException> new_object(ref<java::lang::Throwable> cause);

protected:

	RuntimeException(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<RuntimeException> RuntimeException::new_object() { return base_::new_object(); }
inline ref<RuntimeException> RuntimeException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<RuntimeException> RuntimeException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<RuntimeException> RuntimeException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_RUNTIMEEXCEPTION_H
