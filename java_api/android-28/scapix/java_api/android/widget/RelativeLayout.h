// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup.h>

#ifndef SCAPIX_ANDROID_WIDGET_RELATIVELAYOUT_H
#define SCAPIX_ANDROID_WIDGET_RELATIVELAYOUT_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace android::widget { class RelativeLayout_LayoutParams; }
namespace java::lang { class CharSequence; }

namespace android::widget {

class RelativeLayout : public object_base<SCAPIX_META_STRING("android/widget/RelativeLayout"),
	android::view::ViewGroup>
{
public:

	using LayoutParams = RelativeLayout_LayoutParams;

	static jint ABOVE_();
	static jint ALIGN_BASELINE_();
	static jint ALIGN_BOTTOM_();
	static jint ALIGN_END_();
	static jint ALIGN_LEFT_();
	static jint ALIGN_PARENT_BOTTOM_();
	static jint ALIGN_PARENT_END_();
	static jint ALIGN_PARENT_LEFT_();
	static jint ALIGN_PARENT_RIGHT_();
	static jint ALIGN_PARENT_START_();
	static jint ALIGN_PARENT_TOP_();
	static jint ALIGN_RIGHT_();
	static jint ALIGN_START_();
	static jint ALIGN_TOP_();
	static jint BELOW_();
	static jint CENTER_HORIZONTAL_();
	static jint CENTER_IN_PARENT_();
	static jint CENTER_VERTICAL_();
	static jint END_OF_();
	static jint LEFT_OF_();
	static jint RIGHT_OF_();
	static jint START_OF_();
	static jint TRUE_();

	static ref<RelativeLayout> new_object(ref<android::content::Context> context);
	static ref<RelativeLayout> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<RelativeLayout> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr);
	static ref<RelativeLayout> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes);
	jboolean shouldDelayChildPressedState();
	void setIgnoreGravity(jint viewId);
	jint getGravity();
	void setGravity(jint gravity);
	void setHorizontalGravity(jint horizontalGravity);
	void setVerticalGravity(jint verticalGravity);
	jint getBaseline();
	void requestLayout();
	ref<android::widget::RelativeLayout_LayoutParams> generateLayoutParams(ref<android::util::AttributeSet> attrs);
	ref<java::lang::CharSequence> getAccessibilityClassName();

protected:

	RelativeLayout(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/widget/RelativeLayout_LayoutParams.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::widget {

inline jint RelativeLayout::ABOVE_() { return get_static_field<SCAPIX_META_STRING("ABOVE"), jint>(); }
inline jint RelativeLayout::ALIGN_BASELINE_() { return get_static_field<SCAPIX_META_STRING("ALIGN_BASELINE"), jint>(); }
inline jint RelativeLayout::ALIGN_BOTTOM_() { return get_static_field<SCAPIX_META_STRING("ALIGN_BOTTOM"), jint>(); }
inline jint RelativeLayout::ALIGN_END_() { return get_static_field<SCAPIX_META_STRING("ALIGN_END"), jint>(); }
inline jint RelativeLayout::ALIGN_LEFT_() { return get_static_field<SCAPIX_META_STRING("ALIGN_LEFT"), jint>(); }
inline jint RelativeLayout::ALIGN_PARENT_BOTTOM_() { return get_static_field<SCAPIX_META_STRING("ALIGN_PARENT_BOTTOM"), jint>(); }
inline jint RelativeLayout::ALIGN_PARENT_END_() { return get_static_field<SCAPIX_META_STRING("ALIGN_PARENT_END"), jint>(); }
inline jint RelativeLayout::ALIGN_PARENT_LEFT_() { return get_static_field<SCAPIX_META_STRING("ALIGN_PARENT_LEFT"), jint>(); }
inline jint RelativeLayout::ALIGN_PARENT_RIGHT_() { return get_static_field<SCAPIX_META_STRING("ALIGN_PARENT_RIGHT"), jint>(); }
inline jint RelativeLayout::ALIGN_PARENT_START_() { return get_static_field<SCAPIX_META_STRING("ALIGN_PARENT_START"), jint>(); }
inline jint RelativeLayout::ALIGN_PARENT_TOP_() { return get_static_field<SCAPIX_META_STRING("ALIGN_PARENT_TOP"), jint>(); }
inline jint RelativeLayout::ALIGN_RIGHT_() { return get_static_field<SCAPIX_META_STRING("ALIGN_RIGHT"), jint>(); }
inline jint RelativeLayout::ALIGN_START_() { return get_static_field<SCAPIX_META_STRING("ALIGN_START"), jint>(); }
inline jint RelativeLayout::ALIGN_TOP_() { return get_static_field<SCAPIX_META_STRING("ALIGN_TOP"), jint>(); }
inline jint RelativeLayout::BELOW_() { return get_static_field<SCAPIX_META_STRING("BELOW"), jint>(); }
inline jint RelativeLayout::CENTER_HORIZONTAL_() { return get_static_field<SCAPIX_META_STRING("CENTER_HORIZONTAL"), jint>(); }
inline jint RelativeLayout::CENTER_IN_PARENT_() { return get_static_field<SCAPIX_META_STRING("CENTER_IN_PARENT"), jint>(); }
inline jint RelativeLayout::CENTER_VERTICAL_() { return get_static_field<SCAPIX_META_STRING("CENTER_VERTICAL"), jint>(); }
inline jint RelativeLayout::END_OF_() { return get_static_field<SCAPIX_META_STRING("END_OF"), jint>(); }
inline jint RelativeLayout::LEFT_OF_() { return get_static_field<SCAPIX_META_STRING("LEFT_OF"), jint>(); }
inline jint RelativeLayout::RIGHT_OF_() { return get_static_field<SCAPIX_META_STRING("RIGHT_OF"), jint>(); }
inline jint RelativeLayout::START_OF_() { return get_static_field<SCAPIX_META_STRING("START_OF"), jint>(); }
inline jint RelativeLayout::TRUE_() { return get_static_field<SCAPIX_META_STRING("TRUE"), jint>(); }
inline ref<RelativeLayout> RelativeLayout::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<RelativeLayout> RelativeLayout::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<RelativeLayout> RelativeLayout::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
inline ref<RelativeLayout> RelativeLayout::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
inline jboolean RelativeLayout::shouldDelayChildPressedState() { return call_method<SCAPIX_META_STRING("shouldDelayChildPressedState"), jboolean>(); }
inline void RelativeLayout::setIgnoreGravity(jint viewId) { return call_method<SCAPIX_META_STRING("setIgnoreGravity"), void>(viewId); }
inline jint RelativeLayout::getGravity() { return call_method<SCAPIX_META_STRING("getGravity"), jint>(); }
inline void RelativeLayout::setGravity(jint gravity) { return call_method<SCAPIX_META_STRING("setGravity"), void>(gravity); }
inline void RelativeLayout::setHorizontalGravity(jint horizontalGravity) { return call_method<SCAPIX_META_STRING("setHorizontalGravity"), void>(horizontalGravity); }
inline void RelativeLayout::setVerticalGravity(jint verticalGravity) { return call_method<SCAPIX_META_STRING("setVerticalGravity"), void>(verticalGravity); }
inline jint RelativeLayout::getBaseline() { return call_method<SCAPIX_META_STRING("getBaseline"), jint>(); }
inline void RelativeLayout::requestLayout() { return call_method<SCAPIX_META_STRING("requestLayout"), void>(); }
inline ref<android::widget::RelativeLayout_LayoutParams> RelativeLayout::generateLayoutParams(ref<android::util::AttributeSet> attrs) { return call_method<SCAPIX_META_STRING("generateLayoutParams"), ref<android::widget::RelativeLayout_LayoutParams>>(attrs); }
inline ref<java::lang::CharSequence> RelativeLayout::getAccessibilityClassName() { return call_method<SCAPIX_META_STRING("getAccessibilityClassName"), ref<java::lang::CharSequence>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_RELATIVELAYOUT_H
