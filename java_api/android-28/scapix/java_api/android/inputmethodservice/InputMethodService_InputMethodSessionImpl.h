// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService_AbstractInputMethodSessionImpl.h>

#ifndef SCAPIX_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL_H
#define SCAPIX_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL_H

namespace scapix::java_api {

namespace android::graphics { class Rect; }
namespace android::inputmethodservice { class InputMethodService; }
namespace android::os { class Bundle; }
namespace android::view::inputmethod { class CompletionInfo; }
namespace android::view::inputmethod { class CursorAnchorInfo; }
namespace android::view::inputmethod { class ExtractedText; }
namespace java::lang { class String; }

namespace android::inputmethodservice {

class InputMethodService_InputMethodSessionImpl : public object_base<SCAPIX_META_STRING("android/inputmethodservice/InputMethodService$InputMethodSessionImpl"),
	android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl>
{
public:

	static ref<InputMethodService_InputMethodSessionImpl> new_object(ref<android::inputmethodservice::InputMethodService> this_0);
	void finishInput();
	void displayCompletions(ref<link::java::array<android::view::inputmethod::CompletionInfo>> completions);
	void updateExtractedText(jint token, ref<android::view::inputmethod::ExtractedText> text);
	void updateSelection(jint oldSelStart, jint oldSelEnd, jint newSelStart, jint newSelEnd, jint candidatesStart, jint candidatesEnd);
	void viewClicked(jboolean focusChanged);
	void updateCursor(ref<android::graphics::Rect> newCursor);
	void appPrivateCommand(ref<java::lang::String> action, ref<android::os::Bundle> data);
	void toggleSoftInput(jint showFlags, jint hideFlags);
	void updateCursorAnchorInfo(ref<android::view::inputmethod::CursorAnchorInfo> info);

protected:

	InputMethodService_InputMethodSessionImpl(handle_type h) : base_(h) {}

};

} // namespace android::inputmethodservice
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/inputmethodservice/InputMethodService.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/inputmethod/CompletionInfo.h>
#include <scapix/java_api/android/view/inputmethod/CursorAnchorInfo.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedText.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::inputmethodservice {

inline ref<InputMethodService_InputMethodSessionImpl> InputMethodService_InputMethodSessionImpl::new_object(ref<android::inputmethodservice::InputMethodService> this_0) { return base_::new_object(this_0); }
inline void InputMethodService_InputMethodSessionImpl::finishInput() { return call_method<SCAPIX_META_STRING("finishInput"), void>(); }
inline void InputMethodService_InputMethodSessionImpl::displayCompletions(ref<link::java::array<android::view::inputmethod::CompletionInfo>> completions) { return call_method<SCAPIX_META_STRING("displayCompletions"), void>(completions); }
inline void InputMethodService_InputMethodSessionImpl::updateExtractedText(jint token, ref<android::view::inputmethod::ExtractedText> text) { return call_method<SCAPIX_META_STRING("updateExtractedText"), void>(token, text); }
inline void InputMethodService_InputMethodSessionImpl::updateSelection(jint oldSelStart, jint oldSelEnd, jint newSelStart, jint newSelEnd, jint candidatesStart, jint candidatesEnd) { return call_method<SCAPIX_META_STRING("updateSelection"), void>(oldSelStart, oldSelEnd, newSelStart, newSelEnd, candidatesStart, candidatesEnd); }
inline void InputMethodService_InputMethodSessionImpl::viewClicked(jboolean focusChanged) { return call_method<SCAPIX_META_STRING("viewClicked"), void>(focusChanged); }
inline void InputMethodService_InputMethodSessionImpl::updateCursor(ref<android::graphics::Rect> newCursor) { return call_method<SCAPIX_META_STRING("updateCursor"), void>(newCursor); }
inline void InputMethodService_InputMethodSessionImpl::appPrivateCommand(ref<java::lang::String> action, ref<android::os::Bundle> data) { return call_method<SCAPIX_META_STRING("appPrivateCommand"), void>(action, data); }
inline void InputMethodService_InputMethodSessionImpl::toggleSoftInput(jint showFlags, jint hideFlags) { return call_method<SCAPIX_META_STRING("toggleSoftInput"), void>(showFlags, hideFlags); }
inline void InputMethodService_InputMethodSessionImpl::updateCursorAnchorInfo(ref<android::view::inputmethod::CursorAnchorInfo> info) { return call_method<SCAPIX_META_STRING("updateCursorAnchorInfo"), void>(info); }

} // namespace android::inputmethodservice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL_H
