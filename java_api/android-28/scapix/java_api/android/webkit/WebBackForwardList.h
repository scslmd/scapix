// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_ANDROID_WEBKIT_WEBBACKFORWARDLIST_H
#define SCAPIX_ANDROID_WEBKIT_WEBBACKFORWARDLIST_H

namespace scapix::java_api {

namespace android::webkit { class WebHistoryItem; }

namespace android::webkit {

class WebBackForwardList : public object_base<SCAPIX_META_STRING("android/webkit/WebBackForwardList"),
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static ref<WebBackForwardList> new_object();
	ref<android::webkit::WebHistoryItem> getCurrentItem();
	jint getCurrentIndex();
	ref<android::webkit::WebHistoryItem> getItemAtIndex(jint p1);
	jint getSize();

protected:

	WebBackForwardList(handle_type h) : base_(h) {}

};

} // namespace android::webkit
} // namespace scapix::java_api

#include <scapix/java_api/android/webkit/WebHistoryItem.h>

namespace scapix::java_api {
namespace android::webkit {

inline ref<WebBackForwardList> WebBackForwardList::new_object() { return base_::new_object(); }
inline ref<android::webkit::WebHistoryItem> WebBackForwardList::getCurrentItem() { return call_method<SCAPIX_META_STRING("getCurrentItem"), ref<android::webkit::WebHistoryItem>>(); }
inline jint WebBackForwardList::getCurrentIndex() { return call_method<SCAPIX_META_STRING("getCurrentIndex"), jint>(); }
inline ref<android::webkit::WebHistoryItem> WebBackForwardList::getItemAtIndex(jint p1) { return call_method<SCAPIX_META_STRING("getItemAtIndex"), ref<android::webkit::WebHistoryItem>>(p1); }
inline jint WebBackForwardList::getSize() { return call_method<SCAPIX_META_STRING("getSize"), jint>(); }

} // namespace android::webkit
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WEBKIT_WEBBACKFORWARDLIST_H
