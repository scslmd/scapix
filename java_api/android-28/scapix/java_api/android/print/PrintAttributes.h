// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_PRINT_PRINTATTRIBUTES_H
#define SCAPIX_ANDROID_PRINT_PRINTATTRIBUTES_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::print { class PrintAttributes_Margins; }
namespace android::print { class PrintAttributes_MediaSize; }
namespace android::print { class PrintAttributes_Resolution; }
namespace java::lang { class String; }
namespace android::print { class PrintAttributes_Builder; }

namespace android::print {

class PrintAttributes : public object_base<SCAPIX_META_STRING("android/print/PrintAttributes"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Resolution = PrintAttributes_Resolution;
	using MediaSize = PrintAttributes_MediaSize;
	using Margins = PrintAttributes_Margins;
	using Builder = PrintAttributes_Builder;

	static jint COLOR_MODE_COLOR_();
	static jint COLOR_MODE_MONOCHROME_();
	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint DUPLEX_MODE_LONG_EDGE_();
	static jint DUPLEX_MODE_NONE_();
	static jint DUPLEX_MODE_SHORT_EDGE_();

	ref<android::print::PrintAttributes_MediaSize> getMediaSize();
	ref<android::print::PrintAttributes_Resolution> getResolution();
	ref<android::print::PrintAttributes_Margins> getMinMargins();
	jint getColorMode();
	jint getDuplexMode();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);
	jint describeContents();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::String> toString();

protected:

	PrintAttributes(handle_type h) : base_(h) {}

};

} // namespace android::print
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/print/PrintAttributes_Margins.h>
#include <scapix/java_api/android/print/PrintAttributes_MediaSize.h>
#include <scapix/java_api/android/print/PrintAttributes_Resolution.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::print {

inline jint PrintAttributes::COLOR_MODE_COLOR_() { return get_static_field<SCAPIX_META_STRING("COLOR_MODE_COLOR"), jint>(); }
inline jint PrintAttributes::COLOR_MODE_MONOCHROME_() { return get_static_field<SCAPIX_META_STRING("COLOR_MODE_MONOCHROME"), jint>(); }
inline ref<android::os::Parcelable_Creator> PrintAttributes::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint PrintAttributes::DUPLEX_MODE_LONG_EDGE_() { return get_static_field<SCAPIX_META_STRING("DUPLEX_MODE_LONG_EDGE"), jint>(); }
inline jint PrintAttributes::DUPLEX_MODE_NONE_() { return get_static_field<SCAPIX_META_STRING("DUPLEX_MODE_NONE"), jint>(); }
inline jint PrintAttributes::DUPLEX_MODE_SHORT_EDGE_() { return get_static_field<SCAPIX_META_STRING("DUPLEX_MODE_SHORT_EDGE"), jint>(); }
inline ref<android::print::PrintAttributes_MediaSize> PrintAttributes::getMediaSize() { return call_method<SCAPIX_META_STRING("getMediaSize"), ref<android::print::PrintAttributes_MediaSize>>(); }
inline ref<android::print::PrintAttributes_Resolution> PrintAttributes::getResolution() { return call_method<SCAPIX_META_STRING("getResolution"), ref<android::print::PrintAttributes_Resolution>>(); }
inline ref<android::print::PrintAttributes_Margins> PrintAttributes::getMinMargins() { return call_method<SCAPIX_META_STRING("getMinMargins"), ref<android::print::PrintAttributes_Margins>>(); }
inline jint PrintAttributes::getColorMode() { return call_method<SCAPIX_META_STRING("getColorMode"), jint>(); }
inline jint PrintAttributes::getDuplexMode() { return call_method<SCAPIX_META_STRING("getDuplexMode"), jint>(); }
inline void PrintAttributes::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }
inline jint PrintAttributes::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline jint PrintAttributes::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean PrintAttributes::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::String> PrintAttributes::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::print
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PRINT_PRINTATTRIBUTES_H
