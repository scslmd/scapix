// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_ANDROID_WEBKIT_WEBHISTORYITEM_H
#define SCAPIX_ANDROID_WEBKIT_WEBHISTORYITEM_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace java::lang { class String; }

namespace android::webkit {

class WebHistoryItem : public object_base<SCAPIX_META_STRING("android/webkit/WebHistoryItem"),
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static ref<WebHistoryItem> new_object();
	ref<java::lang::String> getUrl();
	ref<java::lang::String> getOriginalUrl();
	ref<java::lang::String> getTitle();
	ref<android::graphics::Bitmap> getFavicon();

protected:

	WebHistoryItem(handle_type h) : base_(h) {}

};

} // namespace android::webkit
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::webkit {

inline ref<WebHistoryItem> WebHistoryItem::new_object() { return base_::new_object(); }
inline ref<java::lang::String> WebHistoryItem::getUrl() { return call_method<SCAPIX_META_STRING("getUrl"), ref<java::lang::String>>(); }
inline ref<java::lang::String> WebHistoryItem::getOriginalUrl() { return call_method<SCAPIX_META_STRING("getOriginalUrl"), ref<java::lang::String>>(); }
inline ref<java::lang::String> WebHistoryItem::getTitle() { return call_method<SCAPIX_META_STRING("getTitle"), ref<java::lang::String>>(); }
inline ref<android::graphics::Bitmap> WebHistoryItem::getFavicon() { return call_method<SCAPIX_META_STRING("getFavicon"), ref<android::graphics::Bitmap>>(); }

} // namespace android::webkit
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WEBKIT_WEBHISTORYITEM_H
