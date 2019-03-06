// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/javax/net/ssl/SSLSocketFactory.h>

#ifndef SCAPIX_ANDROID_NET_SSLCERTIFICATESOCKETFACTORY_H
#define SCAPIX_ANDROID_NET_SSLCERTIFICATESOCKETFACTORY_H

namespace scapix::java_api {

namespace android::net { class SSLSessionCache; }
namespace java::lang { class String; }
namespace java::net { class InetAddress; }
namespace java::net { class Socket; }
namespace javax::net { class SocketFactory; }
namespace javax::net::ssl { class KeyManager; }
namespace javax::net::ssl { class TrustManager; }

namespace android::net {

class SSLCertificateSocketFactory : public object_base<SCAPIX_META_STRING("android/net/SSLCertificateSocketFactory"),
	javax::net::ssl::SSLSocketFactory>
{
public:

	static ref<SSLCertificateSocketFactory> new_object(jint handshakeTimeoutMillis);
	static ref<javax::net::SocketFactory> getDefault(jint handshakeTimeoutMillis);
	static ref<javax::net::ssl::SSLSocketFactory> getDefault(jint handshakeTimeoutMillis, ref<android::net::SSLSessionCache> cache);
	static ref<javax::net::ssl::SSLSocketFactory> getInsecure(jint handshakeTimeoutMillis, ref<android::net::SSLSessionCache> cache);
	void setTrustManagers(ref<link::java::array<javax::net::ssl::TrustManager>> trustManager);
	void setNpnProtocols(ref<link::java::array<link::java::array<jbyte>>> npnProtocols);
	ref<link::java::array<jbyte>> getNpnSelectedProtocol(ref<java::net::Socket> socket);
	void setKeyManagers(ref<link::java::array<javax::net::ssl::KeyManager>> keyManagers);
	void setUseSessionTickets(ref<java::net::Socket> socket, jboolean useSessionTickets);
	void setHostname(ref<java::net::Socket> socket, ref<java::lang::String> hostName);
	ref<java::net::Socket> createSocket(ref<java::net::Socket> k, ref<java::lang::String> host, jint port, jboolean close);
	ref<java::net::Socket> createSocket();
	ref<java::net::Socket> createSocket(ref<java::net::InetAddress> addr, jint port, ref<java::net::InetAddress> localAddr, jint localPort);
	ref<java::net::Socket> createSocket(ref<java::net::InetAddress> addr, jint port);
	ref<java::net::Socket> createSocket(ref<java::lang::String> host, jint port, ref<java::net::InetAddress> localAddr, jint localPort);
	ref<java::net::Socket> createSocket(ref<java::lang::String> host, jint port);
	ref<link::java::array<java::lang::String>> getDefaultCipherSuites();
	ref<link::java::array<java::lang::String>> getSupportedCipherSuites();

protected:

	SSLCertificateSocketFactory(handle_type h) : base_(h) {}

};

} // namespace android::net
} // namespace scapix::java_api

#include <scapix/java_api/android/net/SSLSessionCache.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/javax/net/SocketFactory.h>
#include <scapix/java_api/javax/net/ssl/KeyManager.h>
#include <scapix/java_api/javax/net/ssl/TrustManager.h>

namespace scapix::java_api {
namespace android::net {

inline ref<SSLCertificateSocketFactory> SSLCertificateSocketFactory::new_object(jint handshakeTimeoutMillis) { return base_::new_object(handshakeTimeoutMillis); }
inline ref<javax::net::SocketFactory> SSLCertificateSocketFactory::getDefault(jint handshakeTimeoutMillis) { return call_static_method<SCAPIX_META_STRING("getDefault"), ref<javax::net::SocketFactory>>(handshakeTimeoutMillis); }
inline ref<javax::net::ssl::SSLSocketFactory> SSLCertificateSocketFactory::getDefault(jint handshakeTimeoutMillis, ref<android::net::SSLSessionCache> cache) { return call_static_method<SCAPIX_META_STRING("getDefault"), ref<javax::net::ssl::SSLSocketFactory>>(handshakeTimeoutMillis, cache); }
inline ref<javax::net::ssl::SSLSocketFactory> SSLCertificateSocketFactory::getInsecure(jint handshakeTimeoutMillis, ref<android::net::SSLSessionCache> cache) { return call_static_method<SCAPIX_META_STRING("getInsecure"), ref<javax::net::ssl::SSLSocketFactory>>(handshakeTimeoutMillis, cache); }
inline void SSLCertificateSocketFactory::setTrustManagers(ref<link::java::array<javax::net::ssl::TrustManager>> trustManager) { return call_method<SCAPIX_META_STRING("setTrustManagers"), void>(trustManager); }
inline void SSLCertificateSocketFactory::setNpnProtocols(ref<link::java::array<link::java::array<jbyte>>> npnProtocols) { return call_method<SCAPIX_META_STRING("setNpnProtocols"), void>(npnProtocols); }
inline ref<link::java::array<jbyte>> SSLCertificateSocketFactory::getNpnSelectedProtocol(ref<java::net::Socket> socket) { return call_method<SCAPIX_META_STRING("getNpnSelectedProtocol"), ref<link::java::array<jbyte>>>(socket); }
inline void SSLCertificateSocketFactory::setKeyManagers(ref<link::java::array<javax::net::ssl::KeyManager>> keyManagers) { return call_method<SCAPIX_META_STRING("setKeyManagers"), void>(keyManagers); }
inline void SSLCertificateSocketFactory::setUseSessionTickets(ref<java::net::Socket> socket, jboolean useSessionTickets) { return call_method<SCAPIX_META_STRING("setUseSessionTickets"), void>(socket, useSessionTickets); }
inline void SSLCertificateSocketFactory::setHostname(ref<java::net::Socket> socket, ref<java::lang::String> hostName) { return call_method<SCAPIX_META_STRING("setHostname"), void>(socket, hostName); }
inline ref<java::net::Socket> SSLCertificateSocketFactory::createSocket(ref<java::net::Socket> k, ref<java::lang::String> host, jint port, jboolean close) { return call_method<SCAPIX_META_STRING("createSocket"), ref<java::net::Socket>>(k, host, port, close); }
inline ref<java::net::Socket> SSLCertificateSocketFactory::createSocket() { return call_method<SCAPIX_META_STRING("createSocket"), ref<java::net::Socket>>(); }
inline ref<java::net::Socket> SSLCertificateSocketFactory::createSocket(ref<java::net::InetAddress> addr, jint port, ref<java::net::InetAddress> localAddr, jint localPort) { return call_method<SCAPIX_META_STRING("createSocket"), ref<java::net::Socket>>(addr, port, localAddr, localPort); }
inline ref<java::net::Socket> SSLCertificateSocketFactory::createSocket(ref<java::net::InetAddress> addr, jint port) { return call_method<SCAPIX_META_STRING("createSocket"), ref<java::net::Socket>>(addr, port); }
inline ref<java::net::Socket> SSLCertificateSocketFactory::createSocket(ref<java::lang::String> host, jint port, ref<java::net::InetAddress> localAddr, jint localPort) { return call_method<SCAPIX_META_STRING("createSocket"), ref<java::net::Socket>>(host, port, localAddr, localPort); }
inline ref<java::net::Socket> SSLCertificateSocketFactory::createSocket(ref<java::lang::String> host, jint port) { return call_method<SCAPIX_META_STRING("createSocket"), ref<java::net::Socket>>(host, port); }
inline ref<link::java::array<java::lang::String>> SSLCertificateSocketFactory::getDefaultCipherSuites() { return call_method<SCAPIX_META_STRING("getDefaultCipherSuites"), ref<link::java::array<java::lang::String>>>(); }
inline ref<link::java::array<java::lang::String>> SSLCertificateSocketFactory::getSupportedCipherSuites() { return call_method<SCAPIX_META_STRING("getSupportedCipherSuites"), ref<link::java::array<java::lang::String>>>(); }

} // namespace android::net
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_SSLCERTIFICATESOCKETFACTORY_H
