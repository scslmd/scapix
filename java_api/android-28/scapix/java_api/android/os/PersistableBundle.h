// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/os/BaseBundle.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_OS_PERSISTABLEBUNDLE_H
#define SCAPIX_ANDROID_OS_PERSISTABLEBUNDLE_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class Object; }
namespace java::lang { class String; }

namespace android::os {

class PersistableBundle : public object_base<SCAPIX_META_STRING("android/os/PersistableBundle"),
	android::os::BaseBundle,
	java::lang::Cloneable,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static ref<android::os::PersistableBundle> EMPTY_();

	static ref<PersistableBundle> new_object();
	static ref<PersistableBundle> new_object(jint capacity);
	static ref<PersistableBundle> new_object(ref<android::os::PersistableBundle> b);
	ref<java::lang::Object> clone();
	ref<android::os::PersistableBundle> deepCopy();
	void putPersistableBundle(ref<java::lang::String> key, ref<android::os::PersistableBundle> value);
	ref<android::os::PersistableBundle> getPersistableBundle(ref<java::lang::String> key);
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);
	ref<java::lang::String> toString();

protected:

	PersistableBundle(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::os {

inline ref<android::os::Parcelable_Creator> PersistableBundle::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<android::os::PersistableBundle> PersistableBundle::EMPTY_() { return get_static_field<SCAPIX_META_STRING("EMPTY"), ref<android::os::PersistableBundle>>(); }
inline ref<PersistableBundle> PersistableBundle::new_object() { return base_::new_object(); }
inline ref<PersistableBundle> PersistableBundle::new_object(jint capacity) { return base_::new_object(capacity); }
inline ref<PersistableBundle> PersistableBundle::new_object(ref<android::os::PersistableBundle> b) { return base_::new_object(b); }
inline ref<java::lang::Object> PersistableBundle::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline ref<android::os::PersistableBundle> PersistableBundle::deepCopy() { return call_method<SCAPIX_META_STRING("deepCopy"), ref<android::os::PersistableBundle>>(); }
inline void PersistableBundle::putPersistableBundle(ref<java::lang::String> key, ref<android::os::PersistableBundle> value) { return call_method<SCAPIX_META_STRING("putPersistableBundle"), void>(key, value); }
inline ref<android::os::PersistableBundle> PersistableBundle::getPersistableBundle(ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("getPersistableBundle"), ref<android::os::PersistableBundle>>(key); }
inline jint PersistableBundle::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void PersistableBundle::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }
inline ref<java::lang::String> PersistableBundle::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_PERSISTABLEBUNDLE_H
