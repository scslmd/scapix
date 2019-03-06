// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/ReflectiveOperationException.h>

#ifndef SCAPIX_JAVA_LANG_INSTANTIATIONEXCEPTION_H
#define SCAPIX_JAVA_LANG_INSTANTIATIONEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::lang {

class InstantiationException : public object_base<SCAPIX_META_STRING("java/lang/InstantiationException"),
	java::lang::ReflectiveOperationException>
{
public:

	static ref<InstantiationException> new_object();
	static ref<InstantiationException> new_object(ref<java::lang::String> s);

protected:

	InstantiationException(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<InstantiationException> InstantiationException::new_object() { return base_::new_object(); }
inline ref<InstantiationException> InstantiationException::new_object(ref<java::lang::String> s) { return base_::new_object(s); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INSTANTIATIONEXCEPTION_H
