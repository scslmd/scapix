// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WEBKIT_PLUGINSTUB_H
#define SCAPIX_ANDROID_WEBKIT_PLUGINSTUB_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::view { class View; }

namespace android::webkit {

class PluginStub : public object_base<SCAPIX_META_STRING("android/webkit/PluginStub"),
	java::lang::Object>
{
public:

	ref<android::view::View> getEmbeddedView(jint p1, ref<android::content::Context> p2);
	ref<android::view::View> getFullScreenView(jint p1, ref<android::content::Context> p2);

protected:

	PluginStub(handle_type h) : base_(h) {}

};

} // namespace android::webkit
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/view/View.h>

namespace scapix::java_api {
namespace android::webkit {

inline ref<android::view::View> PluginStub::getEmbeddedView(jint p1, ref<android::content::Context> p2) { return call_method<SCAPIX_META_STRING("getEmbeddedView"), ref<android::view::View>>(p1, p2); }
inline ref<android::view::View> PluginStub::getFullScreenView(jint p1, ref<android::content::Context> p2) { return call_method<SCAPIX_META_STRING("getFullScreenView"), ref<android::view::View>>(p1, p2); }

} // namespace android::webkit
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WEBKIT_PLUGINSTUB_H
