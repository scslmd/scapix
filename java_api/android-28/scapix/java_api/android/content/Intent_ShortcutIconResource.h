// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_CONTENT_INTENT_SHORTCUTICONRESOURCE_H
#define SCAPIX_ANDROID_CONTENT_INTENT_SHORTCUTICONRESOURCE_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::content {

class Intent_ShortcutIconResource : public object_base<SCAPIX_META_STRING("android/content/Intent$ShortcutIconResource"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	ref<java::lang::String> packageName();
	void packageName(ref<java::lang::String>);
	ref<java::lang::String> resourceName();
	void resourceName(ref<java::lang::String>);

	static ref<Intent_ShortcutIconResource> new_object();
	static ref<android::content::Intent_ShortcutIconResource> fromContext(ref<android::content::Context> context, jint resourceId);
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	ref<java::lang::String> toString();

protected:

	Intent_ShortcutIconResource(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content {

inline ref<android::os::Parcelable_Creator> Intent_ShortcutIconResource::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<java::lang::String> Intent_ShortcutIconResource::packageName() { return get_field<SCAPIX_META_STRING("packageName"), ref<java::lang::String>>(); }
inline void Intent_ShortcutIconResource::packageName(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("packageName"), ref<java::lang::String>>(v); }
inline ref<java::lang::String> Intent_ShortcutIconResource::resourceName() { return get_field<SCAPIX_META_STRING("resourceName"), ref<java::lang::String>>(); }
inline void Intent_ShortcutIconResource::resourceName(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("resourceName"), ref<java::lang::String>>(v); }
inline ref<Intent_ShortcutIconResource> Intent_ShortcutIconResource::new_object() { return base_::new_object(); }
inline ref<android::content::Intent_ShortcutIconResource> Intent_ShortcutIconResource::fromContext(ref<android::content::Context> context, jint resourceId) { return call_static_method<SCAPIX_META_STRING("fromContext"), ref<android::content::Intent_ShortcutIconResource>>(context, resourceId); }
inline jint Intent_ShortcutIconResource::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void Intent_ShortcutIconResource::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline ref<java::lang::String> Intent_ShortcutIconResource::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_INTENT_SHORTCUTICONRESOURCE_H
