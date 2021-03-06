// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_COMPONENTCALLBACKS_H
#define SCAPIX_ANDROID_CONTENT_COMPONENTCALLBACKS_H

namespace scapix::java_api {

namespace android::content::res { class Configuration; }

namespace android::content {

class ComponentCallbacks : public object_base<SCAPIX_META_STRING("android/content/ComponentCallbacks"),
	java::lang::Object>
{
public:

	void onConfigurationChanged(ref<android::content::res::Configuration> p1);
	void onLowMemory();

protected:

	ComponentCallbacks(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/res/Configuration.h>

namespace scapix::java_api {
namespace android::content {

inline void ComponentCallbacks::onConfigurationChanged(ref<android::content::res::Configuration> p1) { return call_method<SCAPIX_META_STRING("onConfigurationChanged"), void>(p1); }
inline void ComponentCallbacks::onLowMemory() { return call_method<SCAPIX_META_STRING("onLowMemory"), void>(); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_COMPONENTCALLBACKS_H
