// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/VirtualMachineError.h>

#ifndef SCAPIX_JAVA_LANG_STACKOVERFLOWERROR_H
#define SCAPIX_JAVA_LANG_STACKOVERFLOWERROR_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::lang {

class StackOverflowError : public object_base<SCAPIX_META_STRING("java/lang/StackOverflowError"),
	java::lang::VirtualMachineError>
{
public:

	static ref<StackOverflowError> new_object();
	static ref<StackOverflowError> new_object(ref<java::lang::String> s);

protected:

	StackOverflowError(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<StackOverflowError> StackOverflowError::new_object() { return base_::new_object(); }
inline ref<StackOverflowError> StackOverflowError::new_object(ref<java::lang::String> s) { return base_::new_object(s); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_STACKOVERFLOWERROR_H
