// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/os/RemoteException.h>

#ifndef SCAPIX_ANDROID_OS_TRANSACTIONTOOLARGEEXCEPTION_H
#define SCAPIX_ANDROID_OS_TRANSACTIONTOOLARGEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::os {

class TransactionTooLargeException : public object_base<SCAPIX_META_STRING("android/os/TransactionTooLargeException"),
	android::os::RemoteException>
{
public:

	static ref<TransactionTooLargeException> new_object();
	static ref<TransactionTooLargeException> new_object(ref<java::lang::String> msg);

protected:

	TransactionTooLargeException(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::os {

inline ref<TransactionTooLargeException> TransactionTooLargeException::new_object() { return base_::new_object(); }
inline ref<TransactionTooLargeException> TransactionTooLargeException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_TRANSACTIONTOOLARGEEXCEPTION_H
