// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_ANDROID_CONTENT_PM_RESOLVEINFO_DISPLAYNAMECOMPARATOR_H
#define SCAPIX_ANDROID_CONTENT_PM_RESOLVEINFO_DISPLAYNAMECOMPARATOR_H

namespace scapix::java_api {

namespace android::content::pm { class PackageManager; }
namespace android::content::pm { class ResolveInfo; }

namespace android::content::pm {

class ResolveInfo_DisplayNameComparator : public object_base<SCAPIX_META_STRING("android/content/pm/ResolveInfo$DisplayNameComparator"),
	java::lang::Object,
	java::util::Comparator>
{
public:

	static ref<ResolveInfo_DisplayNameComparator> new_object(ref<android::content::pm::PackageManager> pm);
	jint compare(ref<android::content::pm::ResolveInfo> a, ref<android::content::pm::ResolveInfo> b);

protected:

	ResolveInfo_DisplayNameComparator(handle_type h) : base_(h) {}

};

} // namespace android::content::pm
} // namespace scapix::java_api

#include <scapix/java_api/android/content/pm/PackageManager.h>
#include <scapix/java_api/android/content/pm/ResolveInfo.h>

namespace scapix::java_api {
namespace android::content::pm {

inline ref<ResolveInfo_DisplayNameComparator> ResolveInfo_DisplayNameComparator::new_object(ref<android::content::pm::PackageManager> pm) { return base_::new_object(pm); }
inline jint ResolveInfo_DisplayNameComparator::compare(ref<android::content::pm::ResolveInfo> a, ref<android::content::pm::ResolveInfo> b) { return call_method<SCAPIX_META_STRING("compare"), jint>(a, b); }

} // namespace android::content::pm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_PM_RESOLVEINFO_DISPLAYNAMECOMPARATOR_H
