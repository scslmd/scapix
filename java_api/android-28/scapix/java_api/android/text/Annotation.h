// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_ANDROID_TEXT_ANNOTATION_H
#define SCAPIX_ANDROID_TEXT_ANNOTATION_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace java::lang { class String; }

namespace android::text {

class Annotation : public object_base<SCAPIX_META_STRING("android/text/Annotation"),
	java::lang::Object,
	android::text::ParcelableSpan>
{
public:

	static ref<Annotation> new_object(ref<java::lang::String> key, ref<java::lang::String> value);
	static ref<Annotation> new_object(ref<android::os::Parcel> src);
	jint getSpanTypeId();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	ref<java::lang::String> getKey();
	ref<java::lang::String> getValue();

protected:

	Annotation(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::text {

inline ref<Annotation> Annotation::new_object(ref<java::lang::String> key, ref<java::lang::String> value) { return base_::new_object(key, value); }
inline ref<Annotation> Annotation::new_object(ref<android::os::Parcel> src) { return base_::new_object(src); }
inline jint Annotation::getSpanTypeId() { return call_method<SCAPIX_META_STRING("getSpanTypeId"), jint>(); }
inline jint Annotation::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void Annotation::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline ref<java::lang::String> Annotation::getKey() { return call_method<SCAPIX_META_STRING("getKey"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Annotation::getValue() { return call_method<SCAPIX_META_STRING("getValue"), ref<java::lang::String>>(); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_ANNOTATION_H
