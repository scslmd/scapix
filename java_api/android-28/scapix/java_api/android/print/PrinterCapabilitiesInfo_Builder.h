// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PRINT_PRINTERCAPABILITIESINFO_BUILDER_H
#define SCAPIX_ANDROID_PRINT_PRINTERCAPABILITIESINFO_BUILDER_H

namespace scapix::java_api {

namespace android::print { class PrintAttributes_Margins; }
namespace android::print { class PrintAttributes_MediaSize; }
namespace android::print { class PrintAttributes_Resolution; }
namespace android::print { class PrinterCapabilitiesInfo; }
namespace android::print { class PrinterId; }

namespace android::print {

class PrinterCapabilitiesInfo_Builder : public object_base<SCAPIX_META_STRING("android/print/PrinterCapabilitiesInfo$Builder"),
	java::lang::Object>
{
public:

	static ref<PrinterCapabilitiesInfo_Builder> new_object(ref<android::print::PrinterId> printerId);
	ref<android::print::PrinterCapabilitiesInfo_Builder> addMediaSize(ref<android::print::PrintAttributes_MediaSize> mediaSize, jboolean isDefault);
	ref<android::print::PrinterCapabilitiesInfo_Builder> addResolution(ref<android::print::PrintAttributes_Resolution> resolution, jboolean isDefault);
	ref<android::print::PrinterCapabilitiesInfo_Builder> setMinMargins(ref<android::print::PrintAttributes_Margins> margins);
	ref<android::print::PrinterCapabilitiesInfo_Builder> setColorModes(jint colorModes, jint defaultColorMode);
	ref<android::print::PrinterCapabilitiesInfo_Builder> setDuplexModes(jint duplexModes, jint defaultDuplexMode);
	ref<android::print::PrinterCapabilitiesInfo> build();

protected:

	PrinterCapabilitiesInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace android::print
} // namespace scapix::java_api

#include <scapix/java_api/android/print/PrintAttributes_Margins.h>
#include <scapix/java_api/android/print/PrintAttributes_MediaSize.h>
#include <scapix/java_api/android/print/PrintAttributes_Resolution.h>
#include <scapix/java_api/android/print/PrinterCapabilitiesInfo.h>
#include <scapix/java_api/android/print/PrinterId.h>

namespace scapix::java_api {
namespace android::print {

inline ref<PrinterCapabilitiesInfo_Builder> PrinterCapabilitiesInfo_Builder::new_object(ref<android::print::PrinterId> printerId) { return base_::new_object(printerId); }
inline ref<android::print::PrinterCapabilitiesInfo_Builder> PrinterCapabilitiesInfo_Builder::addMediaSize(ref<android::print::PrintAttributes_MediaSize> mediaSize, jboolean isDefault) { return call_method<SCAPIX_META_STRING("addMediaSize"), ref<android::print::PrinterCapabilitiesInfo_Builder>>(mediaSize, isDefault); }
inline ref<android::print::PrinterCapabilitiesInfo_Builder> PrinterCapabilitiesInfo_Builder::addResolution(ref<android::print::PrintAttributes_Resolution> resolution, jboolean isDefault) { return call_method<SCAPIX_META_STRING("addResolution"), ref<android::print::PrinterCapabilitiesInfo_Builder>>(resolution, isDefault); }
inline ref<android::print::PrinterCapabilitiesInfo_Builder> PrinterCapabilitiesInfo_Builder::setMinMargins(ref<android::print::PrintAttributes_Margins> margins) { return call_method<SCAPIX_META_STRING("setMinMargins"), ref<android::print::PrinterCapabilitiesInfo_Builder>>(margins); }
inline ref<android::print::PrinterCapabilitiesInfo_Builder> PrinterCapabilitiesInfo_Builder::setColorModes(jint colorModes, jint defaultColorMode) { return call_method<SCAPIX_META_STRING("setColorModes"), ref<android::print::PrinterCapabilitiesInfo_Builder>>(colorModes, defaultColorMode); }
inline ref<android::print::PrinterCapabilitiesInfo_Builder> PrinterCapabilitiesInfo_Builder::setDuplexModes(jint duplexModes, jint defaultDuplexMode) { return call_method<SCAPIX_META_STRING("setDuplexModes"), ref<android::print::PrinterCapabilitiesInfo_Builder>>(duplexModes, defaultDuplexMode); }
inline ref<android::print::PrinterCapabilitiesInfo> PrinterCapabilitiesInfo_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::print::PrinterCapabilitiesInfo>>(); }

} // namespace android::print
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PRINT_PRINTERCAPABILITIESINFO_BUILDER_H
