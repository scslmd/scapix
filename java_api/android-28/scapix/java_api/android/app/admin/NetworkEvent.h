// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_APP_ADMIN_NETWORKEVENT_H
#define SCAPIX_ANDROID_APP_ADMIN_NETWORKEVENT_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::app::admin {

class NetworkEvent : public object_base<SCAPIX_META_STRING("android/app/admin/NetworkEvent"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	ref<java::lang::String> getPackageName();
	jlong getTimestamp();
	jlong getId();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> p1, jint p2);

protected:

	NetworkEvent(handle_type h) : base_(h) {}

};

} // namespace android::app::admin
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::app::admin {

inline ref<android::os::Parcelable_Creator> NetworkEvent::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<java::lang::String> NetworkEvent::getPackageName() { return call_method<SCAPIX_META_STRING("getPackageName"), ref<java::lang::String>>(); }
inline jlong NetworkEvent::getTimestamp() { return call_method<SCAPIX_META_STRING("getTimestamp"), jlong>(); }
inline jlong NetworkEvent::getId() { return call_method<SCAPIX_META_STRING("getId"), jlong>(); }
inline jint NetworkEvent::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void NetworkEvent::writeToParcel(ref<android::os::Parcel> p1, jint p2) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(p1, p2); }

} // namespace android::app::admin
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_ADMIN_NETWORKEVENT_H
