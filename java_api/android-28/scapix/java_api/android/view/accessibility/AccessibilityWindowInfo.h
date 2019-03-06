// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO_H
#define SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO_H

namespace scapix::java_api {

namespace android::graphics { class Rect; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::view::accessibility { class AccessibilityNodeInfo; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::view::accessibility {

class AccessibilityWindowInfo : public object_base<SCAPIX_META_STRING("android/view/accessibility/AccessibilityWindowInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint TYPE_ACCESSIBILITY_OVERLAY_();
	static jint TYPE_APPLICATION_();
	static jint TYPE_INPUT_METHOD_();
	static jint TYPE_SPLIT_SCREEN_DIVIDER_();
	static jint TYPE_SYSTEM_();

	ref<java::lang::CharSequence> getTitle();
	jint getType();
	jint getLayer();
	ref<android::view::accessibility::AccessibilityNodeInfo> getRoot();
	ref<android::view::accessibility::AccessibilityNodeInfo> getAnchor();
	jboolean isInPictureInPictureMode();
	ref<android::view::accessibility::AccessibilityWindowInfo> getParent();
	jint getId();
	void getBoundsInScreen(ref<android::graphics::Rect> outBounds);
	jboolean isActive();
	jboolean isFocused();
	jboolean isAccessibilityFocused();
	jint getChildCount();
	ref<android::view::accessibility::AccessibilityWindowInfo> getChild(jint index);
	static ref<android::view::accessibility::AccessibilityWindowInfo> obtain();
	static ref<android::view::accessibility::AccessibilityWindowInfo> obtain(ref<android::view::accessibility::AccessibilityWindowInfo> info);
	void recycle();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::String> toString();

protected:

	AccessibilityWindowInfo(handle_type h) : base_(h) {}

};

} // namespace android::view::accessibility
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::view::accessibility {

inline ref<android::os::Parcelable_Creator> AccessibilityWindowInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint AccessibilityWindowInfo::TYPE_ACCESSIBILITY_OVERLAY_() { return get_static_field<SCAPIX_META_STRING("TYPE_ACCESSIBILITY_OVERLAY"), jint>(); }
inline jint AccessibilityWindowInfo::TYPE_APPLICATION_() { return get_static_field<SCAPIX_META_STRING("TYPE_APPLICATION"), jint>(); }
inline jint AccessibilityWindowInfo::TYPE_INPUT_METHOD_() { return get_static_field<SCAPIX_META_STRING("TYPE_INPUT_METHOD"), jint>(); }
inline jint AccessibilityWindowInfo::TYPE_SPLIT_SCREEN_DIVIDER_() { return get_static_field<SCAPIX_META_STRING("TYPE_SPLIT_SCREEN_DIVIDER"), jint>(); }
inline jint AccessibilityWindowInfo::TYPE_SYSTEM_() { return get_static_field<SCAPIX_META_STRING("TYPE_SYSTEM"), jint>(); }
inline ref<java::lang::CharSequence> AccessibilityWindowInfo::getTitle() { return call_method<SCAPIX_META_STRING("getTitle"), ref<java::lang::CharSequence>>(); }
inline jint AccessibilityWindowInfo::getType() { return call_method<SCAPIX_META_STRING("getType"), jint>(); }
inline jint AccessibilityWindowInfo::getLayer() { return call_method<SCAPIX_META_STRING("getLayer"), jint>(); }
inline ref<android::view::accessibility::AccessibilityNodeInfo> AccessibilityWindowInfo::getRoot() { return call_method<SCAPIX_META_STRING("getRoot"), ref<android::view::accessibility::AccessibilityNodeInfo>>(); }
inline ref<android::view::accessibility::AccessibilityNodeInfo> AccessibilityWindowInfo::getAnchor() { return call_method<SCAPIX_META_STRING("getAnchor"), ref<android::view::accessibility::AccessibilityNodeInfo>>(); }
inline jboolean AccessibilityWindowInfo::isInPictureInPictureMode() { return call_method<SCAPIX_META_STRING("isInPictureInPictureMode"), jboolean>(); }
inline ref<android::view::accessibility::AccessibilityWindowInfo> AccessibilityWindowInfo::getParent() { return call_method<SCAPIX_META_STRING("getParent"), ref<android::view::accessibility::AccessibilityWindowInfo>>(); }
inline jint AccessibilityWindowInfo::getId() { return call_method<SCAPIX_META_STRING("getId"), jint>(); }
inline void AccessibilityWindowInfo::getBoundsInScreen(ref<android::graphics::Rect> outBounds) { return call_method<SCAPIX_META_STRING("getBoundsInScreen"), void>(outBounds); }
inline jboolean AccessibilityWindowInfo::isActive() { return call_method<SCAPIX_META_STRING("isActive"), jboolean>(); }
inline jboolean AccessibilityWindowInfo::isFocused() { return call_method<SCAPIX_META_STRING("isFocused"), jboolean>(); }
inline jboolean AccessibilityWindowInfo::isAccessibilityFocused() { return call_method<SCAPIX_META_STRING("isAccessibilityFocused"), jboolean>(); }
inline jint AccessibilityWindowInfo::getChildCount() { return call_method<SCAPIX_META_STRING("getChildCount"), jint>(); }
inline ref<android::view::accessibility::AccessibilityWindowInfo> AccessibilityWindowInfo::getChild(jint index) { return call_method<SCAPIX_META_STRING("getChild"), ref<android::view::accessibility::AccessibilityWindowInfo>>(index); }
inline ref<android::view::accessibility::AccessibilityWindowInfo> AccessibilityWindowInfo::obtain() { return call_static_method<SCAPIX_META_STRING("obtain"), ref<android::view::accessibility::AccessibilityWindowInfo>>(); }
inline ref<android::view::accessibility::AccessibilityWindowInfo> AccessibilityWindowInfo::obtain(ref<android::view::accessibility::AccessibilityWindowInfo> info) { return call_static_method<SCAPIX_META_STRING("obtain"), ref<android::view::accessibility::AccessibilityWindowInfo>>(info); }
inline void AccessibilityWindowInfo::recycle() { return call_method<SCAPIX_META_STRING("recycle"), void>(); }
inline jint AccessibilityWindowInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void AccessibilityWindowInfo::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }
inline jint AccessibilityWindowInfo::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean AccessibilityWindowInfo::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::String> AccessibilityWindowInfo::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::view::accessibility
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO_H
