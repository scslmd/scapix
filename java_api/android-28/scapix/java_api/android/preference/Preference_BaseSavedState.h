// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/view/AbsSavedState.h>

#ifndef SCAPIX_ANDROID_PREFERENCE_PREFERENCE_BASESAVEDSTATE_H
#define SCAPIX_ANDROID_PREFERENCE_PREFERENCE_BASESAVEDSTATE_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable; }
namespace android::os { class Parcelable_Creator; }

namespace android::preference {

class Preference_BaseSavedState : public object_base<SCAPIX_META_STRING("android/preference/Preference$BaseSavedState"),
	android::view::AbsSavedState>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<Preference_BaseSavedState> new_object(ref<android::os::Parcel> source);
	static ref<Preference_BaseSavedState> new_object(ref<android::os::Parcelable> superState);

protected:

	Preference_BaseSavedState(handle_type h) : base_(h) {}

};

} // namespace android::preference
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>

namespace scapix::java_api {
namespace android::preference {

inline ref<android::os::Parcelable_Creator> Preference_BaseSavedState::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<Preference_BaseSavedState> Preference_BaseSavedState::new_object(ref<android::os::Parcel> source) { return base_::new_object(source); }
inline ref<Preference_BaseSavedState> Preference_BaseSavedState::new_object(ref<android::os::Parcelable> superState) { return base_::new_object(superState); }

} // namespace android::preference
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PREFERENCE_PREFERENCE_BASESAVEDSTATE_H
