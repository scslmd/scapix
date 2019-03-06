// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NET_STANDARDSOCKETOPTIONS_H
#define SCAPIX_JAVA_NET_STANDARDSOCKETOPTIONS_H

namespace scapix::java_api {

namespace java::net { class SocketOption; }

namespace java::net {

class StandardSocketOptions : public object_base<SCAPIX_META_STRING("java/net/StandardSocketOptions"),
	java::lang::Object>
{
public:

	static ref<java::net::SocketOption> IP_MULTICAST_IF_();
	static ref<java::net::SocketOption> IP_MULTICAST_LOOP_();
	static ref<java::net::SocketOption> IP_MULTICAST_TTL_();
	static ref<java::net::SocketOption> IP_TOS_();
	static ref<java::net::SocketOption> SO_BROADCAST_();
	static ref<java::net::SocketOption> SO_KEEPALIVE_();
	static ref<java::net::SocketOption> SO_LINGER_();
	static ref<java::net::SocketOption> SO_RCVBUF_();
	static ref<java::net::SocketOption> SO_REUSEADDR_();
	static ref<java::net::SocketOption> SO_SNDBUF_();
	static ref<java::net::SocketOption> TCP_NODELAY_();


protected:

	StandardSocketOptions(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/net/SocketOption.h>

namespace scapix::java_api {
namespace java::net {

inline ref<java::net::SocketOption> StandardSocketOptions::IP_MULTICAST_IF_() { return get_static_field<SCAPIX_META_STRING("IP_MULTICAST_IF"), ref<java::net::SocketOption>>(); }
inline ref<java::net::SocketOption> StandardSocketOptions::IP_MULTICAST_LOOP_() { return get_static_field<SCAPIX_META_STRING("IP_MULTICAST_LOOP"), ref<java::net::SocketOption>>(); }
inline ref<java::net::SocketOption> StandardSocketOptions::IP_MULTICAST_TTL_() { return get_static_field<SCAPIX_META_STRING("IP_MULTICAST_TTL"), ref<java::net::SocketOption>>(); }
inline ref<java::net::SocketOption> StandardSocketOptions::IP_TOS_() { return get_static_field<SCAPIX_META_STRING("IP_TOS"), ref<java::net::SocketOption>>(); }
inline ref<java::net::SocketOption> StandardSocketOptions::SO_BROADCAST_() { return get_static_field<SCAPIX_META_STRING("SO_BROADCAST"), ref<java::net::SocketOption>>(); }
inline ref<java::net::SocketOption> StandardSocketOptions::SO_KEEPALIVE_() { return get_static_field<SCAPIX_META_STRING("SO_KEEPALIVE"), ref<java::net::SocketOption>>(); }
inline ref<java::net::SocketOption> StandardSocketOptions::SO_LINGER_() { return get_static_field<SCAPIX_META_STRING("SO_LINGER"), ref<java::net::SocketOption>>(); }
inline ref<java::net::SocketOption> StandardSocketOptions::SO_RCVBUF_() { return get_static_field<SCAPIX_META_STRING("SO_RCVBUF"), ref<java::net::SocketOption>>(); }
inline ref<java::net::SocketOption> StandardSocketOptions::SO_REUSEADDR_() { return get_static_field<SCAPIX_META_STRING("SO_REUSEADDR"), ref<java::net::SocketOption>>(); }
inline ref<java::net::SocketOption> StandardSocketOptions::SO_SNDBUF_() { return get_static_field<SCAPIX_META_STRING("SO_SNDBUF"), ref<java::net::SocketOption>>(); }
inline ref<java::net::SocketOption> StandardSocketOptions::TCP_NODELAY_() { return get_static_field<SCAPIX_META_STRING("TCP_NODELAY"), ref<java::net::SocketOption>>(); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_STANDARDSOCKETOPTIONS_H
