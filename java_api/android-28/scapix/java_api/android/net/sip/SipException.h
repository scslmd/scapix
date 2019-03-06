// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_ANDROID_NET_SIP_SIPEXCEPTION_H
#define SCAPIX_ANDROID_NET_SIP_SIPEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace android::net::sip {

class SipException : public object_base<SCAPIX_META_STRING("android/net/sip/SipException"),
	java::lang::Exception>
{
public:

	static ref<SipException> new_object();
	static ref<SipException> new_object(ref<java::lang::String> message);
	static ref<SipException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);

protected:

	SipException(handle_type h) : base_(h) {}

};

} // namespace android::net::sip
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace android::net::sip {

inline ref<SipException> SipException::new_object() { return base_::new_object(); }
inline ref<SipException> SipException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<SipException> SipException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

} // namespace android::net::sip
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_SIP_SIPEXCEPTION_H
