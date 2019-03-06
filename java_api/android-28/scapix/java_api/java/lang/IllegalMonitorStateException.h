// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_LANG_ILLEGALMONITORSTATEEXCEPTION_H
#define SCAPIX_JAVA_LANG_ILLEGALMONITORSTATEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::lang {

class IllegalMonitorStateException : public object_base<SCAPIX_META_STRING("java/lang/IllegalMonitorStateException"),
	java::lang::RuntimeException>
{
public:

	static ref<IllegalMonitorStateException> new_object();
	static ref<IllegalMonitorStateException> new_object(ref<java::lang::String> s);

protected:

	IllegalMonitorStateException(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<IllegalMonitorStateException> IllegalMonitorStateException::new_object() { return base_::new_object(); }
inline ref<IllegalMonitorStateException> IllegalMonitorStateException::new_object(ref<java::lang::String> s) { return base_::new_object(s); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_ILLEGALMONITORSTATEEXCEPTION_H
