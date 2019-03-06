// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/service/autofill/Sanitizer.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_SERVICE_AUTOFILL_TEXTVALUESANITIZER_H
#define SCAPIX_ANDROID_SERVICE_AUTOFILL_TEXTVALUESANITIZER_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }
namespace java::util::regex { class Pattern; }

namespace android::service::autofill {

class TextValueSanitizer : public object_base<SCAPIX_META_STRING("android/service/autofill/TextValueSanitizer"),
	java::lang::Object,
	android::service::autofill::Sanitizer,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<TextValueSanitizer> new_object(ref<java::util::regex::Pattern> regex, ref<java::lang::String> subst);
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);

protected:

	TextValueSanitizer(handle_type h) : base_(h) {}

};

} // namespace android::service::autofill
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/regex/Pattern.h>

namespace scapix::java_api {
namespace android::service::autofill {

inline ref<android::os::Parcelable_Creator> TextValueSanitizer::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<TextValueSanitizer> TextValueSanitizer::new_object(ref<java::util::regex::Pattern> regex, ref<java::lang::String> subst) { return base_::new_object(regex, subst); }
inline ref<java::lang::String> TextValueSanitizer::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint TextValueSanitizer::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void TextValueSanitizer::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }

} // namespace android::service::autofill
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_AUTOFILL_TEXTVALUESANITIZER_H
