// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NET_AUTHENTICATOR_H
#define SCAPIX_JAVA_NET_AUTHENTICATOR_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::net { class Authenticator_RequestorType; }
namespace java::net { class InetAddress; }
namespace java::net { class PasswordAuthentication; }
namespace java::net { class URL; }

namespace java::net {

class Authenticator : public object_base<SCAPIX_META_STRING("java/net/Authenticator"),
	java::lang::Object>
{
public:

	using RequestorType = Authenticator_RequestorType;

	static ref<Authenticator> new_object();
	static void setDefault(ref<java::net::Authenticator> a);
	static ref<java::net::Authenticator> getDefault();
	static ref<java::net::PasswordAuthentication> requestPasswordAuthentication(ref<java::net::InetAddress> addr, jint port, ref<java::lang::String> protocol, ref<java::lang::String> prompt, ref<java::lang::String> scheme);
	static ref<java::net::PasswordAuthentication> requestPasswordAuthentication(ref<java::lang::String> host, ref<java::net::InetAddress> addr, jint port, ref<java::lang::String> protocol, ref<java::lang::String> prompt, ref<java::lang::String> scheme);
	static ref<java::net::PasswordAuthentication> requestPasswordAuthentication(ref<java::lang::String> host, ref<java::net::InetAddress> addr, jint port, ref<java::lang::String> protocol, ref<java::lang::String> prompt, ref<java::lang::String> scheme, ref<java::net::URL> url, ref<java::net::Authenticator_RequestorType> reqType);
	static ref<java::net::PasswordAuthentication> requestPasswordAuthentication(ref<java::net::Authenticator> authenticator, ref<java::lang::String> host, ref<java::net::InetAddress> addr, jint port, ref<java::lang::String> protocol, ref<java::lang::String> prompt, ref<java::lang::String> scheme, ref<java::net::URL> url, ref<java::net::Authenticator_RequestorType> reqType);
	ref<java::net::PasswordAuthentication> requestPasswordAuthenticationInstance(ref<java::lang::String> host, ref<java::net::InetAddress> addr, jint port, ref<java::lang::String> protocol, ref<java::lang::String> prompt, ref<java::lang::String> scheme, ref<java::net::URL> url, ref<java::net::Authenticator_RequestorType> reqType);

protected:

	Authenticator(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/Authenticator_RequestorType.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/PasswordAuthentication.h>
#include <scapix/java_api/java/net/URL.h>

namespace scapix::java_api {
namespace java::net {

inline ref<Authenticator> Authenticator::new_object() { return base_::new_object(); }
inline void Authenticator::setDefault(ref<java::net::Authenticator> a) { return call_static_method<SCAPIX_META_STRING("setDefault"), void>(a); }
inline ref<java::net::Authenticator> Authenticator::getDefault() { return call_static_method<SCAPIX_META_STRING("getDefault"), ref<java::net::Authenticator>>(); }
inline ref<java::net::PasswordAuthentication> Authenticator::requestPasswordAuthentication(ref<java::net::InetAddress> addr, jint port, ref<java::lang::String> protocol, ref<java::lang::String> prompt, ref<java::lang::String> scheme) { return call_static_method<SCAPIX_META_STRING("requestPasswordAuthentication"), ref<java::net::PasswordAuthentication>>(addr, port, protocol, prompt, scheme); }
inline ref<java::net::PasswordAuthentication> Authenticator::requestPasswordAuthentication(ref<java::lang::String> host, ref<java::net::InetAddress> addr, jint port, ref<java::lang::String> protocol, ref<java::lang::String> prompt, ref<java::lang::String> scheme) { return call_static_method<SCAPIX_META_STRING("requestPasswordAuthentication"), ref<java::net::PasswordAuthentication>>(host, addr, port, protocol, prompt, scheme); }
inline ref<java::net::PasswordAuthentication> Authenticator::requestPasswordAuthentication(ref<java::lang::String> host, ref<java::net::InetAddress> addr, jint port, ref<java::lang::String> protocol, ref<java::lang::String> prompt, ref<java::lang::String> scheme, ref<java::net::URL> url, ref<java::net::Authenticator_RequestorType> reqType) { return call_static_method<SCAPIX_META_STRING("requestPasswordAuthentication"), ref<java::net::PasswordAuthentication>>(host, addr, port, protocol, prompt, scheme, url, reqType); }
inline ref<java::net::PasswordAuthentication> Authenticator::requestPasswordAuthentication(ref<java::net::Authenticator> authenticator, ref<java::lang::String> host, ref<java::net::InetAddress> addr, jint port, ref<java::lang::String> protocol, ref<java::lang::String> prompt, ref<java::lang::String> scheme, ref<java::net::URL> url, ref<java::net::Authenticator_RequestorType> reqType) { return call_static_method<SCAPIX_META_STRING("requestPasswordAuthentication"), ref<java::net::PasswordAuthentication>>(authenticator, host, addr, port, protocol, prompt, scheme, url, reqType); }
inline ref<java::net::PasswordAuthentication> Authenticator::requestPasswordAuthenticationInstance(ref<java::lang::String> host, ref<java::net::InetAddress> addr, jint port, ref<java::lang::String> protocol, ref<java::lang::String> prompt, ref<java::lang::String> scheme, ref<java::net::URL> url, ref<java::net::Authenticator_RequestorType> reqType) { return call_method<SCAPIX_META_STRING("requestPasswordAuthenticationInstance"), ref<java::net::PasswordAuthentication>>(host, addr, port, protocol, prompt, scheme, url, reqType); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_AUTHENTICATOR_H
