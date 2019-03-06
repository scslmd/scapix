// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PREFERENCE_PREFERENCEMANAGER_ONACTIVITYSTOPLISTENER_H
#define SCAPIX_ANDROID_PREFERENCE_PREFERENCEMANAGER_ONACTIVITYSTOPLISTENER_H

namespace scapix::java_api {


namespace android::preference {

class PreferenceManager_OnActivityStopListener : public object_base<SCAPIX_META_STRING("android/preference/PreferenceManager$OnActivityStopListener"),
	java::lang::Object>
{
public:

	void onActivityStop();

protected:

	PreferenceManager_OnActivityStopListener(handle_type h) : base_(h) {}

};

} // namespace android::preference
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::preference {

inline void PreferenceManager_OnActivityStopListener::onActivityStop() { return call_method<SCAPIX_META_STRING("onActivityStop"), void>(); }

} // namespace android::preference
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PREFERENCE_PREFERENCEMANAGER_ONACTIVITYSTOPLISTENER_H
