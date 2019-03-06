// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_NET_SSL_SSLENGINE_H
#define SCAPIX_JAVAX_NET_SSL_SSLENGINE_H

namespace scapix::java_api {

namespace java::lang { class Runnable; }
namespace java::lang { class String; }
namespace java::nio { class ByteBuffer; }
namespace javax::net::ssl { class SSLEngineResult; }
namespace javax::net::ssl { class SSLEngineResult_HandshakeStatus; }
namespace javax::net::ssl { class SSLParameters; }
namespace javax::net::ssl { class SSLSession; }

namespace javax::net::ssl {

class SSLEngine : public object_base<SCAPIX_META_STRING("javax/net/ssl/SSLEngine"),
	java::lang::Object>
{
public:

	ref<java::lang::String> getPeerHost();
	jint getPeerPort();
	ref<javax::net::ssl::SSLEngineResult> wrap(ref<java::nio::ByteBuffer> src, ref<java::nio::ByteBuffer> dst);
	ref<javax::net::ssl::SSLEngineResult> wrap(ref<link::java::array<java::nio::ByteBuffer>> srcs, ref<java::nio::ByteBuffer> dst);
	ref<javax::net::ssl::SSLEngineResult> wrap(ref<link::java::array<java::nio::ByteBuffer>> p1, jint p2, jint p3, ref<java::nio::ByteBuffer> p4);
	ref<javax::net::ssl::SSLEngineResult> unwrap(ref<java::nio::ByteBuffer> src, ref<java::nio::ByteBuffer> dst);
	ref<javax::net::ssl::SSLEngineResult> unwrap(ref<java::nio::ByteBuffer> src, ref<link::java::array<java::nio::ByteBuffer>> dsts);
	ref<javax::net::ssl::SSLEngineResult> unwrap(ref<java::nio::ByteBuffer> p1, ref<link::java::array<java::nio::ByteBuffer>> p2, jint p3, jint p4);
	ref<java::lang::Runnable> getDelegatedTask();
	void closeInbound();
	jboolean isInboundDone();
	void closeOutbound();
	jboolean isOutboundDone();
	ref<link::java::array<java::lang::String>> getSupportedCipherSuites();
	ref<link::java::array<java::lang::String>> getEnabledCipherSuites();
	void setEnabledCipherSuites(ref<link::java::array<java::lang::String>> p1);
	ref<link::java::array<java::lang::String>> getSupportedProtocols();
	ref<link::java::array<java::lang::String>> getEnabledProtocols();
	void setEnabledProtocols(ref<link::java::array<java::lang::String>> p1);
	ref<javax::net::ssl::SSLSession> getSession();
	ref<javax::net::ssl::SSLSession> getHandshakeSession();
	void beginHandshake();
	ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> getHandshakeStatus();
	void setUseClientMode(jboolean p1);
	jboolean getUseClientMode();
	void setNeedClientAuth(jboolean p1);
	jboolean getNeedClientAuth();
	void setWantClientAuth(jboolean p1);
	jboolean getWantClientAuth();
	void setEnableSessionCreation(jboolean p1);
	jboolean getEnableSessionCreation();
	ref<javax::net::ssl::SSLParameters> getSSLParameters();
	void setSSLParameters(ref<javax::net::ssl::SSLParameters> params);

protected:

	SSLEngine(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/javax/net/ssl/SSLEngineResult.h>
#include <scapix/java_api/javax/net/ssl/SSLEngineResult_HandshakeStatus.h>
#include <scapix/java_api/javax/net/ssl/SSLParameters.h>
#include <scapix/java_api/javax/net/ssl/SSLSession.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<java::lang::String> SSLEngine::getPeerHost() { return call_method<SCAPIX_META_STRING("getPeerHost"), ref<java::lang::String>>(); }
inline jint SSLEngine::getPeerPort() { return call_method<SCAPIX_META_STRING("getPeerPort"), jint>(); }
inline ref<javax::net::ssl::SSLEngineResult> SSLEngine::wrap(ref<java::nio::ByteBuffer> src, ref<java::nio::ByteBuffer> dst) { return call_method<SCAPIX_META_STRING("wrap"), ref<javax::net::ssl::SSLEngineResult>>(src, dst); }
inline ref<javax::net::ssl::SSLEngineResult> SSLEngine::wrap(ref<link::java::array<java::nio::ByteBuffer>> srcs, ref<java::nio::ByteBuffer> dst) { return call_method<SCAPIX_META_STRING("wrap"), ref<javax::net::ssl::SSLEngineResult>>(srcs, dst); }
inline ref<javax::net::ssl::SSLEngineResult> SSLEngine::wrap(ref<link::java::array<java::nio::ByteBuffer>> p1, jint p2, jint p3, ref<java::nio::ByteBuffer> p4) { return call_method<SCAPIX_META_STRING("wrap"), ref<javax::net::ssl::SSLEngineResult>>(p1, p2, p3, p4); }
inline ref<javax::net::ssl::SSLEngineResult> SSLEngine::unwrap(ref<java::nio::ByteBuffer> src, ref<java::nio::ByteBuffer> dst) { return call_method<SCAPIX_META_STRING("unwrap"), ref<javax::net::ssl::SSLEngineResult>>(src, dst); }
inline ref<javax::net::ssl::SSLEngineResult> SSLEngine::unwrap(ref<java::nio::ByteBuffer> src, ref<link::java::array<java::nio::ByteBuffer>> dsts) { return call_method<SCAPIX_META_STRING("unwrap"), ref<javax::net::ssl::SSLEngineResult>>(src, dsts); }
inline ref<javax::net::ssl::SSLEngineResult> SSLEngine::unwrap(ref<java::nio::ByteBuffer> p1, ref<link::java::array<java::nio::ByteBuffer>> p2, jint p3, jint p4) { return call_method<SCAPIX_META_STRING("unwrap"), ref<javax::net::ssl::SSLEngineResult>>(p1, p2, p3, p4); }
inline ref<java::lang::Runnable> SSLEngine::getDelegatedTask() { return call_method<SCAPIX_META_STRING("getDelegatedTask"), ref<java::lang::Runnable>>(); }
inline void SSLEngine::closeInbound() { return call_method<SCAPIX_META_STRING("closeInbound"), void>(); }
inline jboolean SSLEngine::isInboundDone() { return call_method<SCAPIX_META_STRING("isInboundDone"), jboolean>(); }
inline void SSLEngine::closeOutbound() { return call_method<SCAPIX_META_STRING("closeOutbound"), void>(); }
inline jboolean SSLEngine::isOutboundDone() { return call_method<SCAPIX_META_STRING("isOutboundDone"), jboolean>(); }
inline ref<link::java::array<java::lang::String>> SSLEngine::getSupportedCipherSuites() { return call_method<SCAPIX_META_STRING("getSupportedCipherSuites"), ref<link::java::array<java::lang::String>>>(); }
inline ref<link::java::array<java::lang::String>> SSLEngine::getEnabledCipherSuites() { return call_method<SCAPIX_META_STRING("getEnabledCipherSuites"), ref<link::java::array<java::lang::String>>>(); }
inline void SSLEngine::setEnabledCipherSuites(ref<link::java::array<java::lang::String>> p1) { return call_method<SCAPIX_META_STRING("setEnabledCipherSuites"), void>(p1); }
inline ref<link::java::array<java::lang::String>> SSLEngine::getSupportedProtocols() { return call_method<SCAPIX_META_STRING("getSupportedProtocols"), ref<link::java::array<java::lang::String>>>(); }
inline ref<link::java::array<java::lang::String>> SSLEngine::getEnabledProtocols() { return call_method<SCAPIX_META_STRING("getEnabledProtocols"), ref<link::java::array<java::lang::String>>>(); }
inline void SSLEngine::setEnabledProtocols(ref<link::java::array<java::lang::String>> p1) { return call_method<SCAPIX_META_STRING("setEnabledProtocols"), void>(p1); }
inline ref<javax::net::ssl::SSLSession> SSLEngine::getSession() { return call_method<SCAPIX_META_STRING("getSession"), ref<javax::net::ssl::SSLSession>>(); }
inline ref<javax::net::ssl::SSLSession> SSLEngine::getHandshakeSession() { return call_method<SCAPIX_META_STRING("getHandshakeSession"), ref<javax::net::ssl::SSLSession>>(); }
inline void SSLEngine::beginHandshake() { return call_method<SCAPIX_META_STRING("beginHandshake"), void>(); }
inline ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> SSLEngine::getHandshakeStatus() { return call_method<SCAPIX_META_STRING("getHandshakeStatus"), ref<javax::net::ssl::SSLEngineResult_HandshakeStatus>>(); }
inline void SSLEngine::setUseClientMode(jboolean p1) { return call_method<SCAPIX_META_STRING("setUseClientMode"), void>(p1); }
inline jboolean SSLEngine::getUseClientMode() { return call_method<SCAPIX_META_STRING("getUseClientMode"), jboolean>(); }
inline void SSLEngine::setNeedClientAuth(jboolean p1) { return call_method<SCAPIX_META_STRING("setNeedClientAuth"), void>(p1); }
inline jboolean SSLEngine::getNeedClientAuth() { return call_method<SCAPIX_META_STRING("getNeedClientAuth"), jboolean>(); }
inline void SSLEngine::setWantClientAuth(jboolean p1) { return call_method<SCAPIX_META_STRING("setWantClientAuth"), void>(p1); }
inline jboolean SSLEngine::getWantClientAuth() { return call_method<SCAPIX_META_STRING("getWantClientAuth"), jboolean>(); }
inline void SSLEngine::setEnableSessionCreation(jboolean p1) { return call_method<SCAPIX_META_STRING("setEnableSessionCreation"), void>(p1); }
inline jboolean SSLEngine::getEnableSessionCreation() { return call_method<SCAPIX_META_STRING("getEnableSessionCreation"), jboolean>(); }
inline ref<javax::net::ssl::SSLParameters> SSLEngine::getSSLParameters() { return call_method<SCAPIX_META_STRING("getSSLParameters"), ref<javax::net::ssl::SSLParameters>>(); }
inline void SSLEngine::setSSLParameters(ref<javax::net::ssl::SSLParameters> params) { return call_method<SCAPIX_META_STRING("setSSLParameters"), void>(params); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_SSLENGINE_H
