// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/SecurityException.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_APP_AUTHENTICATIONREQUIREDEXCEPTION_H
#define SCAPIX_ANDROID_APP_AUTHENTICATIONREQUIREDEXCEPTION_H

namespace scapix::java_api {

namespace android::app { class PendingIntent; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class Throwable; }

namespace android::app {

class AuthenticationRequiredException : public object_base<SCAPIX_META_STRING("android/app/AuthenticationRequiredException"),
	java::lang::SecurityException,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<AuthenticationRequiredException> new_object(ref<java::lang::Throwable> cause, ref<android::app::PendingIntent> userAction);
	ref<android::app::PendingIntent> getUserAction();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	AuthenticationRequiredException(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace android::app {

inline ref<android::os::Parcelable_Creator> AuthenticationRequiredException::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<AuthenticationRequiredException> AuthenticationRequiredException::new_object(ref<java::lang::Throwable> cause, ref<android::app::PendingIntent> userAction) { return base_::new_object(cause, userAction); }
inline ref<android::app::PendingIntent> AuthenticationRequiredException::getUserAction() { return call_method<SCAPIX_META_STRING("getUserAction"), ref<android::app::PendingIntent>>(); }
inline jint AuthenticationRequiredException::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void AuthenticationRequiredException::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_AUTHENTICATIONREQUIREDEXCEPTION_H
