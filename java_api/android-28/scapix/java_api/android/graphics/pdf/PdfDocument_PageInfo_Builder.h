// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO_BUILDER_H
#define SCAPIX_ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO_BUILDER_H

namespace scapix::java_api {

namespace android::graphics { class Rect; }
namespace android::graphics::pdf { class PdfDocument_PageInfo; }

namespace android::graphics::pdf {

class PdfDocument_PageInfo_Builder : public object_base<SCAPIX_META_STRING("android/graphics/pdf/PdfDocument$PageInfo$Builder"),
	java::lang::Object>
{
public:

	static ref<PdfDocument_PageInfo_Builder> new_object(jint pageWidth, jint pageHeight, jint pageNumber);
	ref<android::graphics::pdf::PdfDocument_PageInfo_Builder> setContentRect(ref<android::graphics::Rect> contentRect);
	ref<android::graphics::pdf::PdfDocument_PageInfo> create();

protected:

	PdfDocument_PageInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace android::graphics::pdf
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/pdf/PdfDocument_PageInfo.h>

namespace scapix::java_api {
namespace android::graphics::pdf {

inline ref<PdfDocument_PageInfo_Builder> PdfDocument_PageInfo_Builder::new_object(jint pageWidth, jint pageHeight, jint pageNumber) { return base_::new_object(pageWidth, pageHeight, pageNumber); }
inline ref<android::graphics::pdf::PdfDocument_PageInfo_Builder> PdfDocument_PageInfo_Builder::setContentRect(ref<android::graphics::Rect> contentRect) { return call_method<SCAPIX_META_STRING("setContentRect"), ref<android::graphics::pdf::PdfDocument_PageInfo_Builder>>(contentRect); }
inline ref<android::graphics::pdf::PdfDocument_PageInfo> PdfDocument_PageInfo_Builder::create() { return call_method<SCAPIX_META_STRING("create"), ref<android::graphics::pdf::PdfDocument_PageInfo>>(); }

} // namespace android::graphics::pdf
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO_BUILDER_H
