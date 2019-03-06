// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_NET_MALFORMEDURLEXCEPTION_H
#define SCAPIX_JAVA_NET_MALFORMEDURLEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::net {

class MalformedURLException : public object_base<SCAPIX_META_STRING("java/net/MalformedURLException"),
	java::io::IOException>
{
public:

	static ref<MalformedURLException> new_object();
	static ref<MalformedURLException> new_object(ref<java::lang::String> msg);

protected:

	MalformedURLException(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::net {

inline ref<MalformedURLException> MalformedURLException::new_object() { return base_::new_object(); }
inline ref<MalformedURLException> MalformedURLException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_MALFORMEDURLEXCEPTION_H
