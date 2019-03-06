// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/channels/Channel.h>

#ifndef SCAPIX_JAVA_NIO_CHANNELS_NETWORKCHANNEL_H
#define SCAPIX_JAVA_NIO_CHANNELS_NETWORKCHANNEL_H

namespace scapix::java_api {

namespace java::net { class SocketAddress; }
namespace java::net { class SocketOption; }
namespace java::util { class Set; }

namespace java::nio::channels {

class NetworkChannel : public object_base<SCAPIX_META_STRING("java/nio/channels/NetworkChannel"),
	java::lang::Object,
	java::nio::channels::Channel>
{
public:

	ref<java::nio::channels::NetworkChannel> bind(ref<java::net::SocketAddress> p1);
	ref<java::net::SocketAddress> getLocalAddress();
	ref<java::nio::channels::NetworkChannel> setOption(ref<java::net::SocketOption> p1, ref<java::lang::Object> p2);
	ref<java::lang::Object> getOption(ref<java::net::SocketOption> p1);
	ref<java::util::Set> supportedOptions();

protected:

	NetworkChannel(handle_type h) : base_(h) {}

};

} // namespace java::nio::channels
} // namespace scapix::java_api

#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/net/SocketOption.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace java::nio::channels {

inline ref<java::nio::channels::NetworkChannel> NetworkChannel::bind(ref<java::net::SocketAddress> p1) { return call_method<SCAPIX_META_STRING("bind"), ref<java::nio::channels::NetworkChannel>>(p1); }
inline ref<java::net::SocketAddress> NetworkChannel::getLocalAddress() { return call_method<SCAPIX_META_STRING("getLocalAddress"), ref<java::net::SocketAddress>>(); }
inline ref<java::nio::channels::NetworkChannel> NetworkChannel::setOption(ref<java::net::SocketOption> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("setOption"), ref<java::nio::channels::NetworkChannel>>(p1, p2); }
inline ref<java::lang::Object> NetworkChannel::getOption(ref<java::net::SocketOption> p1) { return call_method<SCAPIX_META_STRING("getOption"), ref<java::lang::Object>>(p1); }
inline ref<java::util::Set> NetworkChannel::supportedOptions() { return call_method<SCAPIX_META_STRING("supportedOptions"), ref<java::util::Set>>(); }

} // namespace java::nio::channels
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_CHANNELS_NETWORKCHANNEL_H
