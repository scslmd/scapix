// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_METHOD_METAKEYKEYLISTENER_H
#define SCAPIX_ANDROID_TEXT_METHOD_METAKEYKEYLISTENER_H

namespace scapix::java_api {

namespace android::text { class Editable; }
namespace android::text { class Spannable; }
namespace android::view { class KeyEvent; }
namespace android::view { class View; }
namespace java::lang { class CharSequence; }

namespace android::text::method {

class MetaKeyKeyListener : public object_base<SCAPIX_META_STRING("android/text/method/MetaKeyKeyListener"),
	java::lang::Object>
{
public:

	static jint META_ALT_LOCKED_();
	static jint META_ALT_ON_();
	static jint META_CAP_LOCKED_();
	static jint META_SHIFT_ON_();
	static jint META_SYM_LOCKED_();
	static jint META_SYM_ON_();

	static ref<MetaKeyKeyListener> new_object();
	static void resetMetaState(ref<android::text::Spannable> text);
	static jint getMetaState(ref<java::lang::CharSequence> text);
	static jint getMetaState(ref<java::lang::CharSequence> text, ref<android::view::KeyEvent> event);
	static jint getMetaState(ref<java::lang::CharSequence> text, jint meta);
	static jint getMetaState(ref<java::lang::CharSequence> text, jint meta, ref<android::view::KeyEvent> event);
	static void adjustMetaAfterKeypress(ref<android::text::Spannable> content);
	static jboolean isMetaTracker(ref<java::lang::CharSequence> text, ref<java::lang::Object> what);
	static jboolean isSelectingMetaTracker(ref<java::lang::CharSequence> text, ref<java::lang::Object> what);
	jboolean onKeyDown(ref<android::view::View> view, ref<android::text::Editable> content, jint keyCode, ref<android::view::KeyEvent> event);
	jboolean onKeyUp(ref<android::view::View> view, ref<android::text::Editable> content, jint keyCode, ref<android::view::KeyEvent> event);
	void clearMetaKeyState(ref<android::view::View> view, ref<android::text::Editable> content, jint states);
	static void clearMetaKeyState(ref<android::text::Editable> content, jint states);
	static jlong resetLockedMeta(jlong state);
	static jint getMetaState(jlong state);
	static jint getMetaState(jlong state, jint p2);
	static jlong adjustMetaAfterKeypress(jlong state);
	static jlong handleKeyDown(jlong state, jint p2, ref<android::view::KeyEvent> keyCode);
	static jlong handleKeyUp(jlong state, jint p2, ref<android::view::KeyEvent> keyCode);
	jlong clearMetaKeyState(jlong state, jint p2);

protected:

	MetaKeyKeyListener(handle_type h) : base_(h) {}

};

} // namespace android::text::method
} // namespace scapix::java_api

#include <scapix/java_api/android/text/Editable.h>
#include <scapix/java_api/android/text/Spannable.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::text::method {

inline jint MetaKeyKeyListener::META_ALT_LOCKED_() { return get_static_field<SCAPIX_META_STRING("META_ALT_LOCKED"), jint>(); }
inline jint MetaKeyKeyListener::META_ALT_ON_() { return get_static_field<SCAPIX_META_STRING("META_ALT_ON"), jint>(); }
inline jint MetaKeyKeyListener::META_CAP_LOCKED_() { return get_static_field<SCAPIX_META_STRING("META_CAP_LOCKED"), jint>(); }
inline jint MetaKeyKeyListener::META_SHIFT_ON_() { return get_static_field<SCAPIX_META_STRING("META_SHIFT_ON"), jint>(); }
inline jint MetaKeyKeyListener::META_SYM_LOCKED_() { return get_static_field<SCAPIX_META_STRING("META_SYM_LOCKED"), jint>(); }
inline jint MetaKeyKeyListener::META_SYM_ON_() { return get_static_field<SCAPIX_META_STRING("META_SYM_ON"), jint>(); }
inline ref<MetaKeyKeyListener> MetaKeyKeyListener::new_object() { return base_::new_object(); }
inline void MetaKeyKeyListener::resetMetaState(ref<android::text::Spannable> text) { return call_static_method<SCAPIX_META_STRING("resetMetaState"), void>(text); }
inline jint MetaKeyKeyListener::getMetaState(ref<java::lang::CharSequence> text) { return call_static_method<SCAPIX_META_STRING("getMetaState"), jint>(text); }
inline jint MetaKeyKeyListener::getMetaState(ref<java::lang::CharSequence> text, ref<android::view::KeyEvent> event) { return call_static_method<SCAPIX_META_STRING("getMetaState"), jint>(text, event); }
inline jint MetaKeyKeyListener::getMetaState(ref<java::lang::CharSequence> text, jint meta) { return call_static_method<SCAPIX_META_STRING("getMetaState"), jint>(text, meta); }
inline jint MetaKeyKeyListener::getMetaState(ref<java::lang::CharSequence> text, jint meta, ref<android::view::KeyEvent> event) { return call_static_method<SCAPIX_META_STRING("getMetaState"), jint>(text, meta, event); }
inline void MetaKeyKeyListener::adjustMetaAfterKeypress(ref<android::text::Spannable> content) { return call_static_method<SCAPIX_META_STRING("adjustMetaAfterKeypress"), void>(content); }
inline jboolean MetaKeyKeyListener::isMetaTracker(ref<java::lang::CharSequence> text, ref<java::lang::Object> what) { return call_static_method<SCAPIX_META_STRING("isMetaTracker"), jboolean>(text, what); }
inline jboolean MetaKeyKeyListener::isSelectingMetaTracker(ref<java::lang::CharSequence> text, ref<java::lang::Object> what) { return call_static_method<SCAPIX_META_STRING("isSelectingMetaTracker"), jboolean>(text, what); }
inline jboolean MetaKeyKeyListener::onKeyDown(ref<android::view::View> view, ref<android::text::Editable> content, jint keyCode, ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("onKeyDown"), jboolean>(view, content, keyCode, event); }
inline jboolean MetaKeyKeyListener::onKeyUp(ref<android::view::View> view, ref<android::text::Editable> content, jint keyCode, ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("onKeyUp"), jboolean>(view, content, keyCode, event); }
inline void MetaKeyKeyListener::clearMetaKeyState(ref<android::view::View> view, ref<android::text::Editable> content, jint states) { return call_method<SCAPIX_META_STRING("clearMetaKeyState"), void>(view, content, states); }
inline void MetaKeyKeyListener::clearMetaKeyState(ref<android::text::Editable> content, jint states) { return call_static_method<SCAPIX_META_STRING("clearMetaKeyState"), void>(content, states); }
inline jlong MetaKeyKeyListener::resetLockedMeta(jlong state) { return call_static_method<SCAPIX_META_STRING("resetLockedMeta"), jlong>(state); }
inline jint MetaKeyKeyListener::getMetaState(jlong state) { return call_static_method<SCAPIX_META_STRING("getMetaState"), jint>(state); }
inline jint MetaKeyKeyListener::getMetaState(jlong state, jint p2) { return call_static_method<SCAPIX_META_STRING("getMetaState"), jint>(state, p2); }
inline jlong MetaKeyKeyListener::adjustMetaAfterKeypress(jlong state) { return call_static_method<SCAPIX_META_STRING("adjustMetaAfterKeypress"), jlong>(state); }
inline jlong MetaKeyKeyListener::handleKeyDown(jlong state, jint p2, ref<android::view::KeyEvent> keyCode) { return call_static_method<SCAPIX_META_STRING("handleKeyDown"), jlong>(state, p2, keyCode); }
inline jlong MetaKeyKeyListener::handleKeyUp(jlong state, jint p2, ref<android::view::KeyEvent> keyCode) { return call_static_method<SCAPIX_META_STRING("handleKeyUp"), jlong>(state, p2, keyCode); }
inline jlong MetaKeyKeyListener::clearMetaKeyState(jlong state, jint p2) { return call_method<SCAPIX_META_STRING("clearMetaKeyState"), jlong>(state, p2); }

} // namespace android::text::method
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_METHOD_METAKEYKEYLISTENER_H
