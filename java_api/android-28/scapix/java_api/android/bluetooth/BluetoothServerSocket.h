// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHSERVERSOCKET_H
#define SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHSERVERSOCKET_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothSocket; }
namespace java::lang { class String; }

namespace android::bluetooth {

class BluetoothServerSocket : public object_base<SCAPIX_META_STRING("android/bluetooth/BluetoothServerSocket"),
	java::lang::Object,
	java::io::Closeable>
{
public:

	ref<android::bluetooth::BluetoothSocket> accept();
	ref<android::bluetooth::BluetoothSocket> accept(jint timeout);
	void close();
	ref<java::lang::String> toString();

protected:

	BluetoothServerSocket(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothSocket.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::bluetooth {

inline ref<android::bluetooth::BluetoothSocket> BluetoothServerSocket::accept() { return call_method<SCAPIX_META_STRING("accept"), ref<android::bluetooth::BluetoothSocket>>(); }
inline ref<android::bluetooth::BluetoothSocket> BluetoothServerSocket::accept(jint timeout) { return call_method<SCAPIX_META_STRING("accept"), ref<android::bluetooth::BluetoothSocket>>(timeout); }
inline void BluetoothServerSocket::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline ref<java::lang::String> BluetoothServerSocket::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::bluetooth
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHSERVERSOCKET_H
