// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/MetricAffectingSpan.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_REPLACEMENTSPAN_H
#define SCAPIX_ANDROID_TEXT_STYLE_REPLACEMENTSPAN_H

namespace scapix::java_api {

namespace android::graphics { class Canvas; }
namespace android::graphics { class Paint; }
namespace android::graphics { class Paint_FontMetricsInt; }
namespace android::text { class TextPaint; }
namespace java::lang { class CharSequence; }

namespace android::text::style {

class ReplacementSpan : public object_base<SCAPIX_META_STRING("android/text/style/ReplacementSpan"),
	android::text::style::MetricAffectingSpan>
{
public:

	static ref<ReplacementSpan> new_object();
	jint getSize(ref<android::graphics::Paint> p1, ref<java::lang::CharSequence> p2, jint p3, jint p4, ref<android::graphics::Paint_FontMetricsInt> p5);
	void draw(ref<android::graphics::Canvas> p1, ref<java::lang::CharSequence> p2, jint p3, jint p4, jfloat p5, jint p6, jint p7, jint p8, ref<android::graphics::Paint> p9);
	void updateMeasureState(ref<android::text::TextPaint> p);
	void updateDrawState(ref<android::text::TextPaint> ds);

protected:

	ReplacementSpan(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/android/graphics/Paint_FontMetricsInt.h>
#include <scapix/java_api/android/text/TextPaint.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<ReplacementSpan> ReplacementSpan::new_object() { return base_::new_object(); }
inline jint ReplacementSpan::getSize(ref<android::graphics::Paint> p1, ref<java::lang::CharSequence> p2, jint p3, jint p4, ref<android::graphics::Paint_FontMetricsInt> p5) { return call_method<SCAPIX_META_STRING("getSize"), jint>(p1, p2, p3, p4, p5); }
inline void ReplacementSpan::draw(ref<android::graphics::Canvas> p1, ref<java::lang::CharSequence> p2, jint p3, jint p4, jfloat p5, jint p6, jint p7, jint p8, ref<android::graphics::Paint> p9) { return call_method<SCAPIX_META_STRING("draw"), void>(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
inline void ReplacementSpan::updateMeasureState(ref<android::text::TextPaint> p) { return call_method<SCAPIX_META_STRING("updateMeasureState"), void>(p); }
inline void ReplacementSpan::updateDrawState(ref<android::text::TextPaint> ds) { return call_method<SCAPIX_META_STRING("updateDrawState"), void>(ds); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_REPLACEMENTSPAN_H
