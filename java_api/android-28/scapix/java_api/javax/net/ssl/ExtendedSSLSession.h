// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/net/ssl/SSLSession.h>

#ifndef SCAPIX_JAVAX_NET_SSL_EXTENDEDSSLSESSION_H
#define SCAPIX_JAVAX_NET_SSL_EXTENDEDSSLSESSION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class List; }

namespace javax::net::ssl {

class ExtendedSSLSession : public object_base<SCAPIX_META_STRING("javax/net/ssl/ExtendedSSLSession"),
	java::lang::Object,
	javax::net::ssl::SSLSession>
{
public:

	static ref<ExtendedSSLSession> new_object();
	ref<link::java::array<java::lang::String>> getLocalSupportedSignatureAlgorithms();
	ref<link::java::array<java::lang::String>> getPeerSupportedSignatureAlgorithms();
	ref<java::util::List> getRequestedServerNames();

protected:

	ExtendedSSLSession(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<ExtendedSSLSession> ExtendedSSLSession::new_object() { return base_::new_object(); }
inline ref<link::java::array<java::lang::String>> ExtendedSSLSession::getLocalSupportedSignatureAlgorithms() { return call_method<SCAPIX_META_STRING("getLocalSupportedSignatureAlgorithms"), ref<link::java::array<java::lang::String>>>(); }
inline ref<link::java::array<java::lang::String>> ExtendedSSLSession::getPeerSupportedSignatureAlgorithms() { return call_method<SCAPIX_META_STRING("getPeerSupportedSignatureAlgorithms"), ref<link::java::array<java::lang::String>>>(); }
inline ref<java::util::List> ExtendedSSLSession::getRequestedServerNames() { return call_method<SCAPIX_META_STRING("getRequestedServerNames"), ref<java::util::List>>(); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_EXTENDEDSSLSESSION_H
