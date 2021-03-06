// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_SERVICE_AUTOFILL_BATCHUPDATES_H
#define SCAPIX_ANDROID_SERVICE_AUTOFILL_BATCHUPDATES_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }
namespace android::service::autofill { class BatchUpdates_Builder; }

namespace android::service::autofill {

class BatchUpdates : public object_base<SCAPIX_META_STRING("android/service/autofill/BatchUpdates"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = BatchUpdates_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();

	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	BatchUpdates(handle_type h) : base_(h) {}

};

} // namespace android::service::autofill
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::service::autofill {

inline ref<android::os::Parcelable_Creator> BatchUpdates::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<java::lang::String> BatchUpdates::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint BatchUpdates::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void BatchUpdates::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::service::autofill
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_AUTOFILL_BATCHUPDATES_H
