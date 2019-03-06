// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVAX_NET_SSL_SSLENGINERESULT_HANDSHAKESTATUS_H
#define SCAPIX_JAVAX_NET_SSL_SSLENGINERESULT_HANDSHAKESTATUS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace javax::net::ssl {

class SSLEngineResult_HandshakeStatus : public object_base<SCAPIX_META_STRING("javax/net/ssl/SSLEngineResult$HandshakeStatus"),
	java::lang::Enum>
{
public:

	static ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> NOT_HANDSHAKING_();
	static ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> FINISHED_();
	static ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> NEED_TASK_();
	static ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> NEED_WRAP_();
	static ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> NEED_UNWRAP_();

	static ref<link::java::array<javax::net::ssl::SSLEngineResult_HandshakeStatus>> values();
	static ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> valueOf(ref<java::lang::String> name);

protected:

	SSLEngineResult_HandshakeStatus(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> SSLEngineResult_HandshakeStatus::NOT_HANDSHAKING_() { return get_static_field<SCAPIX_META_STRING("NOT_HANDSHAKING"), ref<javax::net::ssl::SSLEngineResult_HandshakeStatus>>(); }
inline ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> SSLEngineResult_HandshakeStatus::FINISHED_() { return get_static_field<SCAPIX_META_STRING("FINISHED"), ref<javax::net::ssl::SSLEngineResult_HandshakeStatus>>(); }
inline ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> SSLEngineResult_HandshakeStatus::NEED_TASK_() { return get_static_field<SCAPIX_META_STRING("NEED_TASK"), ref<javax::net::ssl::SSLEngineResult_HandshakeStatus>>(); }
inline ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> SSLEngineResult_HandshakeStatus::NEED_WRAP_() { return get_static_field<SCAPIX_META_STRING("NEED_WRAP"), ref<javax::net::ssl::SSLEngineResult_HandshakeStatus>>(); }
inline ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> SSLEngineResult_HandshakeStatus::NEED_UNWRAP_() { return get_static_field<SCAPIX_META_STRING("NEED_UNWRAP"), ref<javax::net::ssl::SSLEngineResult_HandshakeStatus>>(); }
inline ref<link::java::array<javax::net::ssl::SSLEngineResult_HandshakeStatus>> SSLEngineResult_HandshakeStatus::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<javax::net::ssl::SSLEngineResult_HandshakeStatus>>>(); }
inline ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> SSLEngineResult_HandshakeStatus::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<javax::net::ssl::SSLEngineResult_HandshakeStatus>>(name); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_SSLENGINERESULT_HANDSHAKESTATUS_H
