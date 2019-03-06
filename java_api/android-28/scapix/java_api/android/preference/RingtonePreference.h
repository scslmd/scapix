// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/preference/Preference.h>
#include <scapix/java_api/android/preference/PreferenceManager_OnActivityResultListener.h>

#ifndef SCAPIX_ANDROID_PREFERENCE_RINGTONEPREFERENCE_H
#define SCAPIX_ANDROID_PREFERENCE_RINGTONEPREFERENCE_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::content { class Intent; }
namespace android::util { class AttributeSet; }

namespace android::preference {

class RingtonePreference : public object_base<SCAPIX_META_STRING("android/preference/RingtonePreference"),
	android::preference::Preference,
	android::preference::PreferenceManager_OnActivityResultListener>
{
public:

	static ref<RingtonePreference> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes);
	static ref<RingtonePreference> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr);
	static ref<RingtonePreference> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<RingtonePreference> new_object(ref<android::content::Context> context);
	jint getRingtoneType();
	void setRingtoneType(jint type);
	jboolean getShowDefault();
	void setShowDefault(jboolean showDefault);
	jboolean getShowSilent();
	void setShowSilent(jboolean showSilent);
	jboolean onActivityResult(jint requestCode, jint resultCode, ref<android::content::Intent> data);

protected:

	RingtonePreference(handle_type h) : base_(h) {}

};

} // namespace android::preference
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/util/AttributeSet.h>

namespace scapix::java_api {
namespace android::preference {

inline ref<RingtonePreference> RingtonePreference::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
inline ref<RingtonePreference> RingtonePreference::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
inline ref<RingtonePreference> RingtonePreference::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<RingtonePreference> RingtonePreference::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline jint RingtonePreference::getRingtoneType() { return call_method<SCAPIX_META_STRING("getRingtoneType"), jint>(); }
inline void RingtonePreference::setRingtoneType(jint type) { return call_method<SCAPIX_META_STRING("setRingtoneType"), void>(type); }
inline jboolean RingtonePreference::getShowDefault() { return call_method<SCAPIX_META_STRING("getShowDefault"), jboolean>(); }
inline void RingtonePreference::setShowDefault(jboolean showDefault) { return call_method<SCAPIX_META_STRING("setShowDefault"), void>(showDefault); }
inline jboolean RingtonePreference::getShowSilent() { return call_method<SCAPIX_META_STRING("getShowSilent"), jboolean>(); }
inline void RingtonePreference::setShowSilent(jboolean showSilent) { return call_method<SCAPIX_META_STRING("setShowSilent"), void>(showSilent); }
inline jboolean RingtonePreference::onActivityResult(jint requestCode, jint resultCode, ref<android::content::Intent> data) { return call_method<SCAPIX_META_STRING("onActivityResult"), jboolean>(requestCode, resultCode, data); }

} // namespace android::preference
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PREFERENCE_RINGTONEPREFERENCE_H
