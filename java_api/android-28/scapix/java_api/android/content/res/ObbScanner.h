// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_RES_OBBSCANNER_H
#define SCAPIX_ANDROID_CONTENT_RES_OBBSCANNER_H

namespace scapix::java_api {

namespace android::content::res { class ObbInfo; }
namespace java::lang { class String; }

namespace android::content::res {

class ObbScanner : public object_base<SCAPIX_META_STRING("android/content/res/ObbScanner"),
	java::lang::Object>
{
public:

	static ref<android::content::res::ObbInfo> getObbInfo(ref<java::lang::String> filePath);

protected:

	ObbScanner(handle_type h) : base_(h) {}

};

} // namespace android::content::res
} // namespace scapix::java_api

#include <scapix/java_api/android/content/res/ObbInfo.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content::res {

inline ref<android::content::res::ObbInfo> ObbScanner::getObbInfo(ref<java::lang::String> filePath) { return call_static_method<SCAPIX_META_STRING("getObbInfo"), ref<android::content::res::ObbInfo>>(filePath); }

} // namespace android::content::res
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_RES_OBBSCANNER_H
