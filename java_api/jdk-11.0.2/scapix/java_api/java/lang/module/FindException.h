// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_LANG_MODULE_FINDEXCEPTION_H
#define SCAPIX_JAVA_LANG_MODULE_FINDEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::lang::module {

class FindException : public object_base<SCAPIX_META_STRING("java/lang/module/FindException"),
	java::lang::RuntimeException>
{
public:

	static ref<FindException> new_object();
	static ref<FindException> new_object(ref<java::lang::String> msg);
	static ref<FindException> new_object(ref<java::lang::Throwable> cause);
	static ref<FindException> new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause);

protected:

	FindException(handle_type h) : base_(h) {}

};

} // namespace java::lang::module
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::lang::module {

inline ref<FindException> FindException::new_object() { return base_::new_object(); }
inline ref<FindException> FindException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }
inline ref<FindException> FindException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
inline ref<FindException> FindException::new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause) { return base_::new_object(msg, cause); }

} // namespace java::lang::module
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_MODULE_FINDEXCEPTION_H
