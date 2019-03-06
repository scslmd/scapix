// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PREFERENCE_PREFERENCE_ONPREFERENCECHANGELISTENER_H
#define SCAPIX_ANDROID_PREFERENCE_PREFERENCE_ONPREFERENCECHANGELISTENER_H

namespace scapix::java_api {

namespace android::preference { class Preference; }

namespace android::preference {

class Preference_OnPreferenceChangeListener : public object_base<SCAPIX_META_STRING("android/preference/Preference$OnPreferenceChangeListener"),
	java::lang::Object>
{
public:

	jboolean onPreferenceChange(ref<android::preference::Preference> p1, ref<java::lang::Object> p2);

protected:

	Preference_OnPreferenceChangeListener(handle_type h) : base_(h) {}

};

} // namespace android::preference
} // namespace scapix::java_api

#include <scapix/java_api/android/preference/Preference.h>

namespace scapix::java_api {
namespace android::preference {

inline jboolean Preference_OnPreferenceChangeListener::onPreferenceChange(ref<android::preference::Preference> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("onPreferenceChange"), jboolean>(p1, p2); }

} // namespace android::preference
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PREFERENCE_PREFERENCE_ONPREFERENCECHANGELISTENER_H
