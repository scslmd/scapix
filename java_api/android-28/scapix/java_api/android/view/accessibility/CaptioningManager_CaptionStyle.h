// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE_H
#define SCAPIX_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE_H

namespace scapix::java_api {

namespace android::graphics { class Typeface; }

namespace android::view::accessibility {

class CaptioningManager_CaptionStyle : public object_base<SCAPIX_META_STRING("android/view/accessibility/CaptioningManager$CaptionStyle"),
	java::lang::Object>
{
public:

	static jint EDGE_TYPE_DEPRESSED_();
	static jint EDGE_TYPE_DROP_SHADOW_();
	static jint EDGE_TYPE_NONE_();
	static jint EDGE_TYPE_OUTLINE_();
	static jint EDGE_TYPE_RAISED_();
	static jint EDGE_TYPE_UNSPECIFIED_();
	jint backgroundColor();
	jint edgeColor();
	jint edgeType();
	jint foregroundColor();
	jint windowColor();

	jboolean hasBackgroundColor();
	jboolean hasForegroundColor();
	jboolean hasEdgeType();
	jboolean hasEdgeColor();
	jboolean hasWindowColor();
	ref<android::graphics::Typeface> getTypeface();

protected:

	CaptioningManager_CaptionStyle(handle_type h) : base_(h) {}

};

} // namespace android::view::accessibility
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Typeface.h>

namespace scapix::java_api {
namespace android::view::accessibility {

inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_DEPRESSED_() { return get_static_field<SCAPIX_META_STRING("EDGE_TYPE_DEPRESSED"), jint>(); }
inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_DROP_SHADOW_() { return get_static_field<SCAPIX_META_STRING("EDGE_TYPE_DROP_SHADOW"), jint>(); }
inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_NONE_() { return get_static_field<SCAPIX_META_STRING("EDGE_TYPE_NONE"), jint>(); }
inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_OUTLINE_() { return get_static_field<SCAPIX_META_STRING("EDGE_TYPE_OUTLINE"), jint>(); }
inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_RAISED_() { return get_static_field<SCAPIX_META_STRING("EDGE_TYPE_RAISED"), jint>(); }
inline jint CaptioningManager_CaptionStyle::EDGE_TYPE_UNSPECIFIED_() { return get_static_field<SCAPIX_META_STRING("EDGE_TYPE_UNSPECIFIED"), jint>(); }
inline jint CaptioningManager_CaptionStyle::backgroundColor() { return get_field<SCAPIX_META_STRING("backgroundColor"), jint>(); }
inline jint CaptioningManager_CaptionStyle::edgeColor() { return get_field<SCAPIX_META_STRING("edgeColor"), jint>(); }
inline jint CaptioningManager_CaptionStyle::edgeType() { return get_field<SCAPIX_META_STRING("edgeType"), jint>(); }
inline jint CaptioningManager_CaptionStyle::foregroundColor() { return get_field<SCAPIX_META_STRING("foregroundColor"), jint>(); }
inline jint CaptioningManager_CaptionStyle::windowColor() { return get_field<SCAPIX_META_STRING("windowColor"), jint>(); }
inline jboolean CaptioningManager_CaptionStyle::hasBackgroundColor() { return call_method<SCAPIX_META_STRING("hasBackgroundColor"), jboolean>(); }
inline jboolean CaptioningManager_CaptionStyle::hasForegroundColor() { return call_method<SCAPIX_META_STRING("hasForegroundColor"), jboolean>(); }
inline jboolean CaptioningManager_CaptionStyle::hasEdgeType() { return call_method<SCAPIX_META_STRING("hasEdgeType"), jboolean>(); }
inline jboolean CaptioningManager_CaptionStyle::hasEdgeColor() { return call_method<SCAPIX_META_STRING("hasEdgeColor"), jboolean>(); }
inline jboolean CaptioningManager_CaptionStyle::hasWindowColor() { return call_method<SCAPIX_META_STRING("hasWindowColor"), jboolean>(); }
inline ref<android::graphics::Typeface> CaptioningManager_CaptionStyle::getTypeface() { return call_method<SCAPIX_META_STRING("getTypeface"), ref<android::graphics::Typeface>>(); }

} // namespace android::view::accessibility
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_ACCESSIBILITY_CAPTIONINGMANAGER_CAPTIONSTYLE_H
