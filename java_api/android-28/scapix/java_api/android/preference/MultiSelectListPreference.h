// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/preference/DialogPreference.h>

#ifndef SCAPIX_ANDROID_PREFERENCE_MULTISELECTLISTPREFERENCE_H
#define SCAPIX_ANDROID_PREFERENCE_MULTISELECTLISTPREFERENCE_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::util { class Set; }

namespace android::preference {

class MultiSelectListPreference : public object_base<SCAPIX_META_STRING("android/preference/MultiSelectListPreference"),
	android::preference::DialogPreference>
{
public:

	static ref<MultiSelectListPreference> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes);
	static ref<MultiSelectListPreference> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr);
	static ref<MultiSelectListPreference> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<MultiSelectListPreference> new_object(ref<android::content::Context> context);
	void setEntries(ref<link::java::array<java::lang::CharSequence>> entries);
	void setEntries(jint entriesResId);
	ref<link::java::array<java::lang::CharSequence>> getEntries();
	void setEntryValues(ref<link::java::array<java::lang::CharSequence>> entryValues);
	void setEntryValues(jint entryValuesResId);
	ref<link::java::array<java::lang::CharSequence>> getEntryValues();
	void setValues(ref<java::util::Set> values);
	ref<java::util::Set> getValues();
	jint findIndexOfValue(ref<java::lang::String> value);

protected:

	MultiSelectListPreference(handle_type h) : base_(h) {}

};

} // namespace android::preference
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace android::preference {

inline ref<MultiSelectListPreference> MultiSelectListPreference::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
inline ref<MultiSelectListPreference> MultiSelectListPreference::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
inline ref<MultiSelectListPreference> MultiSelectListPreference::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<MultiSelectListPreference> MultiSelectListPreference::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline void MultiSelectListPreference::setEntries(ref<link::java::array<java::lang::CharSequence>> entries) { return call_method<SCAPIX_META_STRING("setEntries"), void>(entries); }
inline void MultiSelectListPreference::setEntries(jint entriesResId) { return call_method<SCAPIX_META_STRING("setEntries"), void>(entriesResId); }
inline ref<link::java::array<java::lang::CharSequence>> MultiSelectListPreference::getEntries() { return call_method<SCAPIX_META_STRING("getEntries"), ref<link::java::array<java::lang::CharSequence>>>(); }
inline void MultiSelectListPreference::setEntryValues(ref<link::java::array<java::lang::CharSequence>> entryValues) { return call_method<SCAPIX_META_STRING("setEntryValues"), void>(entryValues); }
inline void MultiSelectListPreference::setEntryValues(jint entryValuesResId) { return call_method<SCAPIX_META_STRING("setEntryValues"), void>(entryValuesResId); }
inline ref<link::java::array<java::lang::CharSequence>> MultiSelectListPreference::getEntryValues() { return call_method<SCAPIX_META_STRING("getEntryValues"), ref<link::java::array<java::lang::CharSequence>>>(); }
inline void MultiSelectListPreference::setValues(ref<java::util::Set> values) { return call_method<SCAPIX_META_STRING("setValues"), void>(values); }
inline ref<java::util::Set> MultiSelectListPreference::getValues() { return call_method<SCAPIX_META_STRING("getValues"), ref<java::util::Set>>(); }
inline jint MultiSelectListPreference::findIndexOfValue(ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("findIndexOfValue"), jint>(value); }

} // namespace android::preference
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PREFERENCE_MULTISELECTLISTPREFERENCE_H
