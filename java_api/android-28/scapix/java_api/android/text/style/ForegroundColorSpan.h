// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/CharacterStyle.h>
#include <scapix/java_api/android/text/style/UpdateAppearance.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN_H
#define SCAPIX_ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::text { class TextPaint; }

namespace android::text::style {

class ForegroundColorSpan : public object_base<SCAPIX_META_STRING("android/text/style/ForegroundColorSpan"),
	android::text::style::CharacterStyle,
	android::text::style::UpdateAppearance,
	android::text::ParcelableSpan>
{
public:

	static ref<ForegroundColorSpan> new_object(jint color);
	static ref<ForegroundColorSpan> new_object(ref<android::os::Parcel> src);
	jint getSpanTypeId();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jint getForegroundColor();
	void updateDrawState(ref<android::text::TextPaint> textPaint);

protected:

	ForegroundColorSpan(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/text/TextPaint.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<ForegroundColorSpan> ForegroundColorSpan::new_object(jint color) { return base_::new_object(color); }
inline ref<ForegroundColorSpan> ForegroundColorSpan::new_object(ref<android::os::Parcel> src) { return base_::new_object(src); }
inline jint ForegroundColorSpan::getSpanTypeId() { return call_method<SCAPIX_META_STRING("getSpanTypeId"), jint>(); }
inline jint ForegroundColorSpan::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void ForegroundColorSpan::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jint ForegroundColorSpan::getForegroundColor() { return call_method<SCAPIX_META_STRING("getForegroundColor"), jint>(); }
inline void ForegroundColorSpan::updateDrawState(ref<android::text::TextPaint> textPaint) { return call_method<SCAPIX_META_STRING("updateDrawState"), void>(textPaint); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN_H
