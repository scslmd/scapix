// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/conn/scheme/LayeredSocketFactory.h>

#ifndef SCAPIX_ORG_APACHE_HTTP_CONN_SSL_SSLSOCKETFACTORY_H
#define SCAPIX_ORG_APACHE_HTTP_CONN_SSL_SSLSOCKETFACTORY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::net { class InetAddress; }
namespace java::net { class Socket; }
namespace java::security { class KeyStore; }
namespace java::security { class SecureRandom; }
namespace org::apache::http::conn::scheme { class HostNameResolver; }
namespace org::apache::http::conn::ssl { class X509HostnameVerifier; }
namespace org::apache::http::params { class HttpParams; }

namespace org::apache::http::conn::ssl {

class SSLSocketFactory : public object_base<SCAPIX_META_STRING("org/apache/http/conn/ssl/SSLSocketFactory"),
	java::lang::Object,
	org::apache::http::conn::scheme::LayeredSocketFactory>
{
public:

	static ref<org::apache::http::conn::ssl::X509HostnameVerifier> ALLOW_ALL_HOSTNAME_VERIFIER_();
	static ref<org::apache::http::conn::ssl::X509HostnameVerifier> BROWSER_COMPATIBLE_HOSTNAME_VERIFIER_();
	static ref<java::lang::String> SSL_();
	static ref<java::lang::String> SSLV2_();
	static ref<org::apache::http::conn::ssl::X509HostnameVerifier> STRICT_HOSTNAME_VERIFIER_();
	static ref<java::lang::String> TLS_();

	static ref<SSLSocketFactory> new_object(ref<java::lang::String> algorithm, ref<java::security::KeyStore> keystore, ref<java::lang::String> keystorePassword, ref<java::security::KeyStore> truststore, ref<java::security::SecureRandom> random, ref<org::apache::http::conn::scheme::HostNameResolver> nameResolver);
	static ref<SSLSocketFactory> new_object(ref<java::security::KeyStore> keystore, ref<java::lang::String> keystorePassword, ref<java::security::KeyStore> truststore);
	static ref<SSLSocketFactory> new_object(ref<java::security::KeyStore> keystore, ref<java::lang::String> keystorePassword);
	static ref<SSLSocketFactory> new_object(ref<java::security::KeyStore> truststore);
	static ref<org::apache::http::conn::ssl::SSLSocketFactory> getSocketFactory();
	ref<java::net::Socket> createSocket();
	ref<java::net::Socket> connectSocket(ref<java::net::Socket> sock, ref<java::lang::String> host, jint port, ref<java::net::InetAddress> localAddress, jint localPort, ref<org::apache::http::params::HttpParams> params);
	jboolean isSecure(ref<java::net::Socket> sock);
	ref<java::net::Socket> createSocket(ref<java::net::Socket> socket, ref<java::lang::String> host, jint port, jboolean autoClose);
	void setHostnameVerifier(ref<org::apache::http::conn::ssl::X509HostnameVerifier> hostnameVerifier);
	ref<org::apache::http::conn::ssl::X509HostnameVerifier> getHostnameVerifier();

protected:

	SSLSocketFactory(handle_type h) : base_(h) {}

};

} // namespace org::apache::http::conn::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/java/security/KeyStore.h>
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/org/apache/http/conn/scheme/HostNameResolver.h>
#include <scapix/java_api/org/apache/http/conn/ssl/X509HostnameVerifier.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>

namespace scapix::java_api {
namespace org::apache::http::conn::ssl {

inline ref<org::apache::http::conn::ssl::X509HostnameVerifier> SSLSocketFactory::ALLOW_ALL_HOSTNAME_VERIFIER_() { return get_static_field<SCAPIX_META_STRING("ALLOW_ALL_HOSTNAME_VERIFIER"), ref<org::apache::http::conn::ssl::X509HostnameVerifier>>(); }
inline ref<org::apache::http::conn::ssl::X509HostnameVerifier> SSLSocketFactory::BROWSER_COMPATIBLE_HOSTNAME_VERIFIER_() { return get_static_field<SCAPIX_META_STRING("BROWSER_COMPATIBLE_HOSTNAME_VERIFIER"), ref<org::apache::http::conn::ssl::X509HostnameVerifier>>(); }
inline ref<java::lang::String> SSLSocketFactory::SSL_() { return get_static_field<SCAPIX_META_STRING("SSL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SSLSocketFactory::SSLV2_() { return get_static_field<SCAPIX_META_STRING("SSLV2"), ref<java::lang::String>>(); }
inline ref<org::apache::http::conn::ssl::X509HostnameVerifier> SSLSocketFactory::STRICT_HOSTNAME_VERIFIER_() { return get_static_field<SCAPIX_META_STRING("STRICT_HOSTNAME_VERIFIER"), ref<org::apache::http::conn::ssl::X509HostnameVerifier>>(); }
inline ref<java::lang::String> SSLSocketFactory::TLS_() { return get_static_field<SCAPIX_META_STRING("TLS"), ref<java::lang::String>>(); }
inline ref<SSLSocketFactory> SSLSocketFactory::new_object(ref<java::lang::String> algorithm, ref<java::security::KeyStore> keystore, ref<java::lang::String> keystorePassword, ref<java::security::KeyStore> truststore, ref<java::security::SecureRandom> random, ref<org::apache::http::conn::scheme::HostNameResolver> nameResolver) { return base_::new_object(algorithm, keystore, keystorePassword, truststore, random, nameResolver); }
inline ref<SSLSocketFactory> SSLSocketFactory::new_object(ref<java::security::KeyStore> keystore, ref<java::lang::String> keystorePassword, ref<java::security::KeyStore> truststore) { return base_::new_object(keystore, keystorePassword, truststore); }
inline ref<SSLSocketFactory> SSLSocketFactory::new_object(ref<java::security::KeyStore> keystore, ref<java::lang::String> keystorePassword) { return base_::new_object(keystore, keystorePassword); }
inline ref<SSLSocketFactory> SSLSocketFactory::new_object(ref<java::security::KeyStore> truststore) { return base_::new_object(truststore); }
inline ref<org::apache::http::conn::ssl::SSLSocketFactory> SSLSocketFactory::getSocketFactory() { return call_static_method<SCAPIX_META_STRING("getSocketFactory"), ref<org::apache::http::conn::ssl::SSLSocketFactory>>(); }
inline ref<java::net::Socket> SSLSocketFactory::createSocket() { return call_method<SCAPIX_META_STRING("createSocket"), ref<java::net::Socket>>(); }
inline ref<java::net::Socket> SSLSocketFactory::connectSocket(ref<java::net::Socket> sock, ref<java::lang::String> host, jint port, ref<java::net::InetAddress> localAddress, jint localPort, ref<org::apache::http::params::HttpParams> params) { return call_method<SCAPIX_META_STRING("connectSocket"), ref<java::net::Socket>>(sock, host, port, localAddress, localPort, params); }
inline jboolean SSLSocketFactory::isSecure(ref<java::net::Socket> sock) { return call_method<SCAPIX_META_STRING("isSecure"), jboolean>(sock); }
inline ref<java::net::Socket> SSLSocketFactory::createSocket(ref<java::net::Socket> socket, ref<java::lang::String> host, jint port, jboolean autoClose) { return call_method<SCAPIX_META_STRING("createSocket"), ref<java::net::Socket>>(socket, host, port, autoClose); }
inline void SSLSocketFactory::setHostnameVerifier(ref<org::apache::http::conn::ssl::X509HostnameVerifier> hostnameVerifier) { return call_method<SCAPIX_META_STRING("setHostnameVerifier"), void>(hostnameVerifier); }
inline ref<org::apache::http::conn::ssl::X509HostnameVerifier> SSLSocketFactory::getHostnameVerifier() { return call_method<SCAPIX_META_STRING("getHostnameVerifier"), ref<org::apache::http::conn::ssl::X509HostnameVerifier>>(); }

} // namespace org::apache::http::conn::ssl
} // namespace scapix::java_api

#endif // SCAPIX_ORG_APACHE_HTTP_CONN_SSL_SSLSOCKETFACTORY_H
