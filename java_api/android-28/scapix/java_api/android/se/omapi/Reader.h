// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SE_OMAPI_READER_H
#define SCAPIX_ANDROID_SE_OMAPI_READER_H

namespace scapix::java_api {

namespace android::se::omapi { class SEService; }
namespace android::se::omapi { class Session; }
namespace java::lang { class String; }

namespace android::se::omapi {

class Reader : public object_base<SCAPIX_META_STRING("android/se/omapi/Reader"),
	java::lang::Object>
{
public:

	ref<java::lang::String> getName();
	ref<android::se::omapi::Session> openSession();
	jboolean isSecureElementPresent();
	ref<android::se::omapi::SEService> getSEService();
	void closeSessions();

protected:

	Reader(handle_type h) : base_(h) {}

};

} // namespace android::se::omapi
} // namespace scapix::java_api

#include <scapix/java_api/android/se/omapi/SEService.h>
#include <scapix/java_api/android/se/omapi/Session.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::se::omapi {

inline ref<java::lang::String> Reader::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline ref<android::se::omapi::Session> Reader::openSession() { return call_method<SCAPIX_META_STRING("openSession"), ref<android::se::omapi::Session>>(); }
inline jboolean Reader::isSecureElementPresent() { return call_method<SCAPIX_META_STRING("isSecureElementPresent"), jboolean>(); }
inline ref<android::se::omapi::SEService> Reader::getSEService() { return call_method<SCAPIX_META_STRING("getSEService"), ref<android::se::omapi::SEService>>(); }
inline void Reader::closeSessions() { return call_method<SCAPIX_META_STRING("closeSessions"), void>(); }

} // namespace android::se::omapi
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SE_OMAPI_READER_H
