// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/view/View_BaseSavedState.h>

#ifndef SCAPIX_ANDROID_WIDGET_TEXTVIEW_SAVEDSTATE_H
#define SCAPIX_ANDROID_WIDGET_TEXTVIEW_SAVEDSTATE_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::widget {

class TextView_SavedState : public object_base<SCAPIX_META_STRING("android/widget/TextView$SavedState"),
	android::view::View_BaseSavedState>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	void writeToParcel(ref<android::os::Parcel> out, jint flags);
	ref<java::lang::String> toString();

protected:

	TextView_SavedState(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<android::os::Parcelable_Creator> TextView_SavedState::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline void TextView_SavedState::writeToParcel(ref<android::os::Parcel> out, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(out, flags); }
inline ref<java::lang::String> TextView_SavedState::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_TEXTVIEW_SAVEDSTATE_H
