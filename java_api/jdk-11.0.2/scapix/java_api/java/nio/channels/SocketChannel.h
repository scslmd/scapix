// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/spi/AbstractSelectableChannel.h>
#include <scapix/java_api/java/nio/channels/ByteChannel.h>
#include <scapix/java_api/java/nio/channels/ScatteringByteChannel.h>
#include <scapix/java_api/java/nio/channels/GatheringByteChannel.h>
#include <scapix/java_api/java/nio/channels/NetworkChannel.h>

#ifndef SCAPIX_JAVA_NIO_CHANNELS_SOCKETCHANNEL_H
#define SCAPIX_JAVA_NIO_CHANNELS_SOCKETCHANNEL_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::net { class Socket; }
namespace java::net { class SocketAddress; }
namespace java::net { class SocketOption; }
namespace java::nio { class ByteBuffer; }

namespace java::nio::channels {

class SocketChannel : public object_base<SCAPIX_META_STRING("java/nio/channels/SocketChannel"),
	java::nio::channels::spi::AbstractSelectableChannel,
	java::nio::channels::ByteChannel,
	java::nio::channels::ScatteringByteChannel,
	java::nio::channels::GatheringByteChannel,
	java::nio::channels::NetworkChannel>
{
public:

	static ref<java::nio::channels::SocketChannel> open();
	static ref<java::nio::channels::SocketChannel> open(ref<java::net::SocketAddress> remote);
	jint validOps();
	ref<java::nio::channels::SocketChannel> bind(ref<java::net::SocketAddress> p1);
	ref<java::nio::channels::SocketChannel> setOption(ref<java::net::SocketOption> p1, ref<java::lang::Object> p2);
	ref<java::nio::channels::SocketChannel> shutdownInput();
	ref<java::nio::channels::SocketChannel> shutdownOutput();
	ref<java::net::Socket> socket();
	jboolean isConnected();
	jboolean isConnectionPending();
	jboolean connect(ref<java::net::SocketAddress> p1);
	jboolean finishConnect();
	ref<java::net::SocketAddress> getRemoteAddress();
	jint read(ref<java::nio::ByteBuffer> p1);
	jlong read(ref<link::java::array<java::nio::ByteBuffer>> p1, jint p2, jint p3);
	jlong read(ref<link::java::array<java::nio::ByteBuffer>> dsts);
	jint write(ref<java::nio::ByteBuffer> p1);
	jlong write(ref<link::java::array<java::nio::ByteBuffer>> p1, jint p2, jint p3);
	jlong write(ref<link::java::array<java::nio::ByteBuffer>> srcs);
	ref<java::net::SocketAddress> getLocalAddress();

protected:

	SocketChannel(handle_type h) : base_(h) {}

};

} // namespace java::nio::channels
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/net/SocketOption.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>

namespace scapix::java_api {
namespace java::nio::channels {

inline ref<java::nio::channels::SocketChannel> SocketChannel::open() { return call_static_method<SCAPIX_META_STRING("open"), ref<java::nio::channels::SocketChannel>>(); }
inline ref<java::nio::channels::SocketChannel> SocketChannel::open(ref<java::net::SocketAddress> remote) { return call_static_method<SCAPIX_META_STRING("open"), ref<java::nio::channels::SocketChannel>>(remote); }
inline jint SocketChannel::validOps() { return call_method<SCAPIX_META_STRING("validOps"), jint>(); }
inline ref<java::nio::channels::SocketChannel> SocketChannel::bind(ref<java::net::SocketAddress> p1) { return call_method<SCAPIX_META_STRING("bind"), ref<java::nio::channels::SocketChannel>>(p1); }
inline ref<java::nio::channels::SocketChannel> SocketChannel::setOption(ref<java::net::SocketOption> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("setOption"), ref<java::nio::channels::SocketChannel>>(p1, p2); }
inline ref<java::nio::channels::SocketChannel> SocketChannel::shutdownInput() { return call_method<SCAPIX_META_STRING("shutdownInput"), ref<java::nio::channels::SocketChannel>>(); }
inline ref<java::nio::channels::SocketChannel> SocketChannel::shutdownOutput() { return call_method<SCAPIX_META_STRING("shutdownOutput"), ref<java::nio::channels::SocketChannel>>(); }
inline ref<java::net::Socket> SocketChannel::socket() { return call_method<SCAPIX_META_STRING("socket"), ref<java::net::Socket>>(); }
inline jboolean SocketChannel::isConnected() { return call_method<SCAPIX_META_STRING("isConnected"), jboolean>(); }
inline jboolean SocketChannel::isConnectionPending() { return call_method<SCAPIX_META_STRING("isConnectionPending"), jboolean>(); }
inline jboolean SocketChannel::connect(ref<java::net::SocketAddress> p1) { return call_method<SCAPIX_META_STRING("connect"), jboolean>(p1); }
inline jboolean SocketChannel::finishConnect() { return call_method<SCAPIX_META_STRING("finishConnect"), jboolean>(); }
inline ref<java::net::SocketAddress> SocketChannel::getRemoteAddress() { return call_method<SCAPIX_META_STRING("getRemoteAddress"), ref<java::net::SocketAddress>>(); }
inline jint SocketChannel::read(ref<java::nio::ByteBuffer> p1) { return call_method<SCAPIX_META_STRING("read"), jint>(p1); }
inline jlong SocketChannel::read(ref<link::java::array<java::nio::ByteBuffer>> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("read"), jlong>(p1, p2, p3); }
inline jlong SocketChannel::read(ref<link::java::array<java::nio::ByteBuffer>> dsts) { return call_method<SCAPIX_META_STRING("read"), jlong>(dsts); }
inline jint SocketChannel::write(ref<java::nio::ByteBuffer> p1) { return call_method<SCAPIX_META_STRING("write"), jint>(p1); }
inline jlong SocketChannel::write(ref<link::java::array<java::nio::ByteBuffer>> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("write"), jlong>(p1, p2, p3); }
inline jlong SocketChannel::write(ref<link::java::array<java::nio::ByteBuffer>> srcs) { return call_method<SCAPIX_META_STRING("write"), jlong>(srcs); }
inline ref<java::net::SocketAddress> SocketChannel::getLocalAddress() { return call_method<SCAPIX_META_STRING("getLocalAddress"), ref<java::net::SocketAddress>>(); }

} // namespace java::nio::channels
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_CHANNELS_SOCKETCHANNEL_H
