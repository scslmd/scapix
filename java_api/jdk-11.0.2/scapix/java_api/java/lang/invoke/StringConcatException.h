// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_LANG_INVOKE_STRINGCONCATEXCEPTION_H
#define SCAPIX_JAVA_LANG_INVOKE_STRINGCONCATEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::lang::invoke {

class StringConcatException : public object_base<SCAPIX_META_STRING("java/lang/invoke/StringConcatException"),
	java::lang::Exception>
{
public:

	static ref<StringConcatException> new_object(ref<java::lang::String> msg);
	static ref<StringConcatException> new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause);

protected:

	StringConcatException(handle_type h) : base_(h) {}

};

} // namespace java::lang::invoke
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::lang::invoke {

inline ref<StringConcatException> StringConcatException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }
inline ref<StringConcatException> StringConcatException::new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause) { return base_::new_object(msg, cause); }

} // namespace java::lang::invoke
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INVOKE_STRINGCONCATEXCEPTION_H
