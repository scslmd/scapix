// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_VIEW_WINDOWID_H
#define SCAPIX_ANDROID_VIEW_WINDOWID_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::view { class WindowId_FocusObserver; }
namespace java::lang { class String; }

namespace android::view {

class WindowId : public object_base<SCAPIX_META_STRING("android/view/WindowId"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using FocusObserver = WindowId_FocusObserver;

	static ref<android::os::Parcelable_Creator> CREATOR_();

	jboolean isFocused();
	void registerFocusObserver(ref<android::view::WindowId_FocusObserver> observer);
	void unregisterFocusObserver(ref<android::view::WindowId_FocusObserver> observer);
	jboolean equals(ref<java::lang::Object> otherObj);
	jint hashCode();
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> out, jint flags);

protected:

	WindowId(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/WindowId_FocusObserver.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::view {

inline ref<android::os::Parcelable_Creator> WindowId::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jboolean WindowId::isFocused() { return call_method<SCAPIX_META_STRING("isFocused"), jboolean>(); }
inline void WindowId::registerFocusObserver(ref<android::view::WindowId_FocusObserver> observer) { return call_method<SCAPIX_META_STRING("registerFocusObserver"), void>(observer); }
inline void WindowId::unregisterFocusObserver(ref<android::view::WindowId_FocusObserver> observer) { return call_method<SCAPIX_META_STRING("unregisterFocusObserver"), void>(observer); }
inline jboolean WindowId::equals(ref<java::lang::Object> otherObj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(otherObj); }
inline jint WindowId::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> WindowId::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint WindowId::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void WindowId::writeToParcel(ref<android::os::Parcel> out, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(out, flags); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_WINDOWID_H
