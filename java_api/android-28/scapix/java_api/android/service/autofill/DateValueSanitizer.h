// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/service/autofill/Sanitizer.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_SERVICE_AUTOFILL_DATEVALUESANITIZER_H
#define SCAPIX_ANDROID_SERVICE_AUTOFILL_DATEVALUESANITIZER_H

namespace scapix::java_api {

namespace android::icu::text { class DateFormat; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::service::autofill {

class DateValueSanitizer : public object_base<SCAPIX_META_STRING("android/service/autofill/DateValueSanitizer"),
	java::lang::Object,
	android::service::autofill::Sanitizer,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<DateValueSanitizer> new_object(ref<android::icu::text::DateFormat> dateFormat);
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);

protected:

	DateValueSanitizer(handle_type h) : base_(h) {}

};

} // namespace android::service::autofill
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/text/DateFormat.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::service::autofill {

inline ref<android::os::Parcelable_Creator> DateValueSanitizer::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<DateValueSanitizer> DateValueSanitizer::new_object(ref<android::icu::text::DateFormat> dateFormat) { return base_::new_object(dateFormat); }
inline ref<java::lang::String> DateValueSanitizer::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint DateValueSanitizer::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void DateValueSanitizer::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }

} // namespace android::service::autofill
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_AUTOFILL_DATEVALUESANITIZER_H
