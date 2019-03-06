// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/widget/AdapterView.h>
#include <scapix/java_api/android/widget/Advanceable.h>

#ifndef SCAPIX_ANDROID_WIDGET_ADAPTERVIEWANIMATOR_H
#define SCAPIX_ANDROID_WIDGET_ADAPTERVIEWANIMATOR_H

namespace scapix::java_api {

namespace android::animation { class ObjectAnimator; }
namespace android::content { class Context; }
namespace android::content { class Intent; }
namespace android::os { class Parcelable; }
namespace android::util { class AttributeSet; }
namespace android::view { class MotionEvent; }
namespace android::view { class View; }
namespace android::widget { class Adapter; }
namespace java::lang { class CharSequence; }

namespace android::widget {

class AdapterViewAnimator : public object_base<SCAPIX_META_STRING("android/widget/AdapterViewAnimator"),
	android::widget::AdapterView,
	android::widget::Advanceable>
{
public:

	static ref<AdapterViewAnimator> new_object(ref<android::content::Context> context);
	static ref<AdapterViewAnimator> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<AdapterViewAnimator> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr);
	static ref<AdapterViewAnimator> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes);
	void setDisplayedChild(jint whichChild);
	jint getDisplayedChild();
	void showNext();
	void showPrevious();
	jboolean onTouchEvent(ref<android::view::MotionEvent> ev);
	ref<android::os::Parcelable> onSaveInstanceState();
	void onRestoreInstanceState(ref<android::os::Parcelable> state);
	ref<android::view::View> getCurrentView();
	ref<android::animation::ObjectAnimator> getInAnimation();
	void setInAnimation(ref<android::animation::ObjectAnimator> inAnimation);
	ref<android::animation::ObjectAnimator> getOutAnimation();
	void setOutAnimation(ref<android::animation::ObjectAnimator> outAnimation);
	void setInAnimation(ref<android::content::Context> context, jint resourceID);
	void setOutAnimation(ref<android::content::Context> context, jint resourceID);
	void setAnimateFirstView(jboolean animate);
	jint getBaseline();
	ref<android::widget::Adapter> getAdapter();
	void setAdapter(ref<android::widget::Adapter> adapter);
	void setRemoteViewsAdapter(ref<android::content::Intent> intent);
	void setSelection(jint position);
	ref<android::view::View> getSelectedView();
	void deferNotifyDataSetChanged();
	jboolean onRemoteAdapterConnected();
	void onRemoteAdapterDisconnected();
	void advance();
	void fyiWillBeAdvancedByHostKThx();
	ref<java::lang::CharSequence> getAccessibilityClassName();

protected:

	AdapterViewAnimator(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/animation/ObjectAnimator.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/widget/Adapter.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<AdapterViewAnimator> AdapterViewAnimator::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<AdapterViewAnimator> AdapterViewAnimator::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<AdapterViewAnimator> AdapterViewAnimator::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
inline ref<AdapterViewAnimator> AdapterViewAnimator::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
inline void AdapterViewAnimator::setDisplayedChild(jint whichChild) { return call_method<SCAPIX_META_STRING("setDisplayedChild"), void>(whichChild); }
inline jint AdapterViewAnimator::getDisplayedChild() { return call_method<SCAPIX_META_STRING("getDisplayedChild"), jint>(); }
inline void AdapterViewAnimator::showNext() { return call_method<SCAPIX_META_STRING("showNext"), void>(); }
inline void AdapterViewAnimator::showPrevious() { return call_method<SCAPIX_META_STRING("showPrevious"), void>(); }
inline jboolean AdapterViewAnimator::onTouchEvent(ref<android::view::MotionEvent> ev) { return call_method<SCAPIX_META_STRING("onTouchEvent"), jboolean>(ev); }
inline ref<android::os::Parcelable> AdapterViewAnimator::onSaveInstanceState() { return call_method<SCAPIX_META_STRING("onSaveInstanceState"), ref<android::os::Parcelable>>(); }
inline void AdapterViewAnimator::onRestoreInstanceState(ref<android::os::Parcelable> state) { return call_method<SCAPIX_META_STRING("onRestoreInstanceState"), void>(state); }
inline ref<android::view::View> AdapterViewAnimator::getCurrentView() { return call_method<SCAPIX_META_STRING("getCurrentView"), ref<android::view::View>>(); }
inline ref<android::animation::ObjectAnimator> AdapterViewAnimator::getInAnimation() { return call_method<SCAPIX_META_STRING("getInAnimation"), ref<android::animation::ObjectAnimator>>(); }
inline void AdapterViewAnimator::setInAnimation(ref<android::animation::ObjectAnimator> inAnimation) { return call_method<SCAPIX_META_STRING("setInAnimation"), void>(inAnimation); }
inline ref<android::animation::ObjectAnimator> AdapterViewAnimator::getOutAnimation() { return call_method<SCAPIX_META_STRING("getOutAnimation"), ref<android::animation::ObjectAnimator>>(); }
inline void AdapterViewAnimator::setOutAnimation(ref<android::animation::ObjectAnimator> outAnimation) { return call_method<SCAPIX_META_STRING("setOutAnimation"), void>(outAnimation); }
inline void AdapterViewAnimator::setInAnimation(ref<android::content::Context> context, jint resourceID) { return call_method<SCAPIX_META_STRING("setInAnimation"), void>(context, resourceID); }
inline void AdapterViewAnimator::setOutAnimation(ref<android::content::Context> context, jint resourceID) { return call_method<SCAPIX_META_STRING("setOutAnimation"), void>(context, resourceID); }
inline void AdapterViewAnimator::setAnimateFirstView(jboolean animate) { return call_method<SCAPIX_META_STRING("setAnimateFirstView"), void>(animate); }
inline jint AdapterViewAnimator::getBaseline() { return call_method<SCAPIX_META_STRING("getBaseline"), jint>(); }
inline ref<android::widget::Adapter> AdapterViewAnimator::getAdapter() { return call_method<SCAPIX_META_STRING("getAdapter"), ref<android::widget::Adapter>>(); }
inline void AdapterViewAnimator::setAdapter(ref<android::widget::Adapter> adapter) { return call_method<SCAPIX_META_STRING("setAdapter"), void>(adapter); }
inline void AdapterViewAnimator::setRemoteViewsAdapter(ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("setRemoteViewsAdapter"), void>(intent); }
inline void AdapterViewAnimator::setSelection(jint position) { return call_method<SCAPIX_META_STRING("setSelection"), void>(position); }
inline ref<android::view::View> AdapterViewAnimator::getSelectedView() { return call_method<SCAPIX_META_STRING("getSelectedView"), ref<android::view::View>>(); }
inline void AdapterViewAnimator::deferNotifyDataSetChanged() { return call_method<SCAPIX_META_STRING("deferNotifyDataSetChanged"), void>(); }
inline jboolean AdapterViewAnimator::onRemoteAdapterConnected() { return call_method<SCAPIX_META_STRING("onRemoteAdapterConnected"), jboolean>(); }
inline void AdapterViewAnimator::onRemoteAdapterDisconnected() { return call_method<SCAPIX_META_STRING("onRemoteAdapterDisconnected"), void>(); }
inline void AdapterViewAnimator::advance() { return call_method<SCAPIX_META_STRING("advance"), void>(); }
inline void AdapterViewAnimator::fyiWillBeAdvancedByHostKThx() { return call_method<SCAPIX_META_STRING("fyiWillBeAdvancedByHostKThx"), void>(); }
inline ref<java::lang::CharSequence> AdapterViewAnimator::getAccessibilityClassName() { return call_method<SCAPIX_META_STRING("getAccessibilityClassName"), ref<java::lang::CharSequence>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_ADAPTERVIEWANIMATOR_H
