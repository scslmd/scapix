// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Error.h>

#ifndef SCAPIX_JAVA_LANG_LINKAGEERROR_H
#define SCAPIX_JAVA_LANG_LINKAGEERROR_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::lang {

class LinkageError : public object_base<SCAPIX_META_STRING("java/lang/LinkageError"),
	java::lang::Error>
{
public:

	static ref<LinkageError> new_object();
	static ref<LinkageError> new_object(ref<java::lang::String> s);
	static ref<LinkageError> new_object(ref<java::lang::String> s, ref<java::lang::Throwable> cause);

protected:

	LinkageError(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<LinkageError> LinkageError::new_object() { return base_::new_object(); }
inline ref<LinkageError> LinkageError::new_object(ref<java::lang::String> s) { return base_::new_object(s); }
inline ref<LinkageError> LinkageError::new_object(ref<java::lang::String> s, ref<java::lang::Throwable> cause) { return base_::new_object(s, cause); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_LINKAGEERROR_H
