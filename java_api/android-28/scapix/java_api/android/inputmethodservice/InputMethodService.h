// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService.h>

#ifndef SCAPIX_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_H
#define SCAPIX_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_H

namespace scapix::java_api {

namespace android::app { class Dialog; }
namespace android::content::res { class Configuration; }
namespace android::graphics { class Rect; }
namespace android::inputmethodservice { class AbstractInputMethodService_AbstractInputMethodImpl; }
namespace android::inputmethodservice { class AbstractInputMethodService_AbstractInputMethodSessionImpl; }
namespace android::inputmethodservice { class InputMethodService_Insets; }
namespace android::os { class Bundle; }
namespace android::view { class KeyEvent; }
namespace android::view { class LayoutInflater; }
namespace android::view { class MotionEvent; }
namespace android::view { class View; }
namespace android::view { class Window; }
namespace android::view::inputmethod { class CompletionInfo; }
namespace android::view::inputmethod { class CursorAnchorInfo; }
namespace android::view::inputmethod { class EditorInfo; }
namespace android::view::inputmethod { class ExtractedText; }
namespace android::view::inputmethod { class InputBinding; }
namespace android::view::inputmethod { class InputConnection; }
namespace android::view::inputmethod { class InputMethodSubtype; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace android::inputmethodservice { class InputMethodService_InputMethodSessionImpl; }
namespace android::inputmethodservice { class InputMethodService_InputMethodImpl; }

namespace android::inputmethodservice {

class InputMethodService : public object_base<SCAPIX_META_STRING("android/inputmethodservice/InputMethodService"),
	android::inputmethodservice::AbstractInputMethodService>
{
public:

	using Insets = InputMethodService_Insets;
	using InputMethodSessionImpl = InputMethodService_InputMethodSessionImpl;
	using InputMethodImpl = InputMethodService_InputMethodImpl;

	static jint BACK_DISPOSITION_ADJUST_NOTHING_();
	static jint BACK_DISPOSITION_DEFAULT_();
	static jint BACK_DISPOSITION_WILL_DISMISS_();
	static jint BACK_DISPOSITION_WILL_NOT_DISMISS_();

	static ref<InputMethodService> new_object();
	void setTheme(jint theme);
	jboolean enableHardwareAcceleration();
	void onCreate();
	void onInitializeInterface();
	void onDestroy();
	void onConfigurationChanged(ref<android::content::res::Configuration> newConfig);
	ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl> onCreateInputMethodInterface();
	ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl> onCreateInputMethodSessionInterface();
	ref<android::view::LayoutInflater> getLayoutInflater();
	ref<android::app::Dialog> getWindow();
	void setBackDisposition(jint disposition);
	jint getBackDisposition();
	jint getMaxWidth();
	ref<android::view::inputmethod::InputBinding> getCurrentInputBinding();
	ref<android::view::inputmethod::InputConnection> getCurrentInputConnection();
	jboolean switchToPreviousInputMethod();
	jboolean switchToNextInputMethod(jboolean onlyCurrentIme);
	jboolean shouldOfferSwitchingToNextInputMethod();
	jboolean getCurrentInputStarted();
	ref<android::view::inputmethod::EditorInfo> getCurrentInputEditorInfo();
	void updateFullscreenMode();
	void onConfigureWindow(ref<android::view::Window> win, jboolean isFullscreen, jboolean isCandidatesOnly);
	jboolean isFullscreenMode();
	jboolean onEvaluateFullscreenMode();
	void setExtractViewShown(jboolean shown);
	jboolean isExtractViewShown();
	void onComputeInsets(ref<android::inputmethodservice::InputMethodService_Insets> outInsets);
	void updateInputViewShown();
	jboolean isShowInputRequested();
	jboolean isInputViewShown();
	jboolean onEvaluateInputViewShown();
	void setCandidatesViewShown(jboolean shown);
	jint getCandidatesHiddenVisibility();
	void showStatusIcon(jint iconResId);
	void hideStatusIcon();
	void switchInputMethod(ref<java::lang::String> id);
	void switchInputMethod(ref<java::lang::String> id, ref<android::view::inputmethod::InputMethodSubtype> subtype);
	void setExtractView(ref<android::view::View> view);
	void setCandidatesView(ref<android::view::View> view);
	void setInputView(ref<android::view::View> view);
	ref<android::view::View> onCreateExtractTextView();
	ref<android::view::View> onCreateCandidatesView();
	ref<android::view::View> onCreateInputView();
	void onStartInputView(ref<android::view::inputmethod::EditorInfo> info, jboolean restarting);
	void onFinishInputView(jboolean finishingInput);
	void onStartCandidatesView(ref<android::view::inputmethod::EditorInfo> info, jboolean restarting);
	void onFinishCandidatesView(jboolean finishingInput);
	jboolean onShowInputRequested(jint flags, jboolean configChange);
	void showWindow(jboolean showInput);
	void hideWindow();
	void onWindowShown();
	void onWindowHidden();
	void onBindInput();
	void onUnbindInput();
	void onStartInput(ref<android::view::inputmethod::EditorInfo> attribute, jboolean restarting);
	void onFinishInput();
	void onDisplayCompletions(ref<link::java::array<android::view::inputmethod::CompletionInfo>> completions);
	void onUpdateExtractedText(jint token, ref<android::view::inputmethod::ExtractedText> text);
	void onUpdateSelection(jint oldSelStart, jint oldSelEnd, jint newSelStart, jint newSelEnd, jint candidatesStart, jint candidatesEnd);
	void onViewClicked(jboolean focusChanged);
	void onUpdateCursor(ref<android::graphics::Rect> newCursor);
	void onUpdateCursorAnchorInfo(ref<android::view::inputmethod::CursorAnchorInfo> cursorAnchorInfo);
	void requestHideSelf(jint flags);
	void requestShowSelf(jint flags);
	jboolean onKeyDown(jint keyCode, ref<android::view::KeyEvent> event);
	jboolean onKeyLongPress(jint keyCode, ref<android::view::KeyEvent> event);
	jboolean onKeyMultiple(jint keyCode, jint count, ref<android::view::KeyEvent> event);
	jboolean onKeyUp(jint keyCode, ref<android::view::KeyEvent> event);
	jboolean onTrackballEvent(ref<android::view::MotionEvent> event);
	jboolean onGenericMotionEvent(ref<android::view::MotionEvent> event);
	void onAppPrivateCommand(ref<java::lang::String> action, ref<android::os::Bundle> data);
	void sendDownUpKeyEvents(jint keyEventCode);
	jboolean sendDefaultEditorAction(jboolean fromEnterKey);
	void sendKeyChar(jchar charCode);
	void onExtractedSelectionChanged(jint start, jint end);
	void onExtractedTextClicked();
	void onExtractedCursorMovement(jint dx, jint dy);
	jboolean onExtractTextContextMenuItem(jint id);
	ref<java::lang::CharSequence> getTextForImeAction(jint imeOptions);
	void onUpdateExtractingVisibility(ref<android::view::inputmethod::EditorInfo> ei);
	void onUpdateExtractingViews(ref<android::view::inputmethod::EditorInfo> ei);
	void onExtractingInputChanged(ref<android::view::inputmethod::EditorInfo> ei);
	jint getInputMethodWindowRecommendedHeight();

protected:

	InputMethodService(handle_type h) : base_(h) {}

};

} // namespace android::inputmethodservice
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Dialog.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService_AbstractInputMethodImpl.h>
#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService_AbstractInputMethodSessionImpl.h>
#include <scapix/java_api/android/inputmethodservice/InputMethodService_Insets.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/LayoutInflater.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/Window.h>
#include <scapix/java_api/android/view/inputmethod/CompletionInfo.h>
#include <scapix/java_api/android/view/inputmethod/CursorAnchorInfo.h>
#include <scapix/java_api/android/view/inputmethod/EditorInfo.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedText.h>
#include <scapix/java_api/android/view/inputmethod/InputBinding.h>
#include <scapix/java_api/android/view/inputmethod/InputConnection.h>
#include <scapix/java_api/android/view/inputmethod/InputMethodSubtype.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::inputmethodservice {

inline jint InputMethodService::BACK_DISPOSITION_ADJUST_NOTHING_() { return get_static_field<SCAPIX_META_STRING("BACK_DISPOSITION_ADJUST_NOTHING"), jint>(); }
inline jint InputMethodService::BACK_DISPOSITION_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("BACK_DISPOSITION_DEFAULT"), jint>(); }
inline jint InputMethodService::BACK_DISPOSITION_WILL_DISMISS_() { return get_static_field<SCAPIX_META_STRING("BACK_DISPOSITION_WILL_DISMISS"), jint>(); }
inline jint InputMethodService::BACK_DISPOSITION_WILL_NOT_DISMISS_() { return get_static_field<SCAPIX_META_STRING("BACK_DISPOSITION_WILL_NOT_DISMISS"), jint>(); }
inline ref<InputMethodService> InputMethodService::new_object() { return base_::new_object(); }
inline void InputMethodService::setTheme(jint theme) { return call_method<SCAPIX_META_STRING("setTheme"), void>(theme); }
inline jboolean InputMethodService::enableHardwareAcceleration() { return call_method<SCAPIX_META_STRING("enableHardwareAcceleration"), jboolean>(); }
inline void InputMethodService::onCreate() { return call_method<SCAPIX_META_STRING("onCreate"), void>(); }
inline void InputMethodService::onInitializeInterface() { return call_method<SCAPIX_META_STRING("onInitializeInterface"), void>(); }
inline void InputMethodService::onDestroy() { return call_method<SCAPIX_META_STRING("onDestroy"), void>(); }
inline void InputMethodService::onConfigurationChanged(ref<android::content::res::Configuration> newConfig) { return call_method<SCAPIX_META_STRING("onConfigurationChanged"), void>(newConfig); }
inline ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl> InputMethodService::onCreateInputMethodInterface() { return call_method<SCAPIX_META_STRING("onCreateInputMethodInterface"), ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl>>(); }
inline ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl> InputMethodService::onCreateInputMethodSessionInterface() { return call_method<SCAPIX_META_STRING("onCreateInputMethodSessionInterface"), ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl>>(); }
inline ref<android::view::LayoutInflater> InputMethodService::getLayoutInflater() { return call_method<SCAPIX_META_STRING("getLayoutInflater"), ref<android::view::LayoutInflater>>(); }
inline ref<android::app::Dialog> InputMethodService::getWindow() { return call_method<SCAPIX_META_STRING("getWindow"), ref<android::app::Dialog>>(); }
inline void InputMethodService::setBackDisposition(jint disposition) { return call_method<SCAPIX_META_STRING("setBackDisposition"), void>(disposition); }
inline jint InputMethodService::getBackDisposition() { return call_method<SCAPIX_META_STRING("getBackDisposition"), jint>(); }
inline jint InputMethodService::getMaxWidth() { return call_method<SCAPIX_META_STRING("getMaxWidth"), jint>(); }
inline ref<android::view::inputmethod::InputBinding> InputMethodService::getCurrentInputBinding() { return call_method<SCAPIX_META_STRING("getCurrentInputBinding"), ref<android::view::inputmethod::InputBinding>>(); }
inline ref<android::view::inputmethod::InputConnection> InputMethodService::getCurrentInputConnection() { return call_method<SCAPIX_META_STRING("getCurrentInputConnection"), ref<android::view::inputmethod::InputConnection>>(); }
inline jboolean InputMethodService::switchToPreviousInputMethod() { return call_method<SCAPIX_META_STRING("switchToPreviousInputMethod"), jboolean>(); }
inline jboolean InputMethodService::switchToNextInputMethod(jboolean onlyCurrentIme) { return call_method<SCAPIX_META_STRING("switchToNextInputMethod"), jboolean>(onlyCurrentIme); }
inline jboolean InputMethodService::shouldOfferSwitchingToNextInputMethod() { return call_method<SCAPIX_META_STRING("shouldOfferSwitchingToNextInputMethod"), jboolean>(); }
inline jboolean InputMethodService::getCurrentInputStarted() { return call_method<SCAPIX_META_STRING("getCurrentInputStarted"), jboolean>(); }
inline ref<android::view::inputmethod::EditorInfo> InputMethodService::getCurrentInputEditorInfo() { return call_method<SCAPIX_META_STRING("getCurrentInputEditorInfo"), ref<android::view::inputmethod::EditorInfo>>(); }
inline void InputMethodService::updateFullscreenMode() { return call_method<SCAPIX_META_STRING("updateFullscreenMode"), void>(); }
inline void InputMethodService::onConfigureWindow(ref<android::view::Window> win, jboolean isFullscreen, jboolean isCandidatesOnly) { return call_method<SCAPIX_META_STRING("onConfigureWindow"), void>(win, isFullscreen, isCandidatesOnly); }
inline jboolean InputMethodService::isFullscreenMode() { return call_method<SCAPIX_META_STRING("isFullscreenMode"), jboolean>(); }
inline jboolean InputMethodService::onEvaluateFullscreenMode() { return call_method<SCAPIX_META_STRING("onEvaluateFullscreenMode"), jboolean>(); }
inline void InputMethodService::setExtractViewShown(jboolean shown) { return call_method<SCAPIX_META_STRING("setExtractViewShown"), void>(shown); }
inline jboolean InputMethodService::isExtractViewShown() { return call_method<SCAPIX_META_STRING("isExtractViewShown"), jboolean>(); }
inline void InputMethodService::onComputeInsets(ref<android::inputmethodservice::InputMethodService_Insets> outInsets) { return call_method<SCAPIX_META_STRING("onComputeInsets"), void>(outInsets); }
inline void InputMethodService::updateInputViewShown() { return call_method<SCAPIX_META_STRING("updateInputViewShown"), void>(); }
inline jboolean InputMethodService::isShowInputRequested() { return call_method<SCAPIX_META_STRING("isShowInputRequested"), jboolean>(); }
inline jboolean InputMethodService::isInputViewShown() { return call_method<SCAPIX_META_STRING("isInputViewShown"), jboolean>(); }
inline jboolean InputMethodService::onEvaluateInputViewShown() { return call_method<SCAPIX_META_STRING("onEvaluateInputViewShown"), jboolean>(); }
inline void InputMethodService::setCandidatesViewShown(jboolean shown) { return call_method<SCAPIX_META_STRING("setCandidatesViewShown"), void>(shown); }
inline jint InputMethodService::getCandidatesHiddenVisibility() { return call_method<SCAPIX_META_STRING("getCandidatesHiddenVisibility"), jint>(); }
inline void InputMethodService::showStatusIcon(jint iconResId) { return call_method<SCAPIX_META_STRING("showStatusIcon"), void>(iconResId); }
inline void InputMethodService::hideStatusIcon() { return call_method<SCAPIX_META_STRING("hideStatusIcon"), void>(); }
inline void InputMethodService::switchInputMethod(ref<java::lang::String> id) { return call_method<SCAPIX_META_STRING("switchInputMethod"), void>(id); }
inline void InputMethodService::switchInputMethod(ref<java::lang::String> id, ref<android::view::inputmethod::InputMethodSubtype> subtype) { return call_method<SCAPIX_META_STRING("switchInputMethod"), void>(id, subtype); }
inline void InputMethodService::setExtractView(ref<android::view::View> view) { return call_method<SCAPIX_META_STRING("setExtractView"), void>(view); }
inline void InputMethodService::setCandidatesView(ref<android::view::View> view) { return call_method<SCAPIX_META_STRING("setCandidatesView"), void>(view); }
inline void InputMethodService::setInputView(ref<android::view::View> view) { return call_method<SCAPIX_META_STRING("setInputView"), void>(view); }
inline ref<android::view::View> InputMethodService::onCreateExtractTextView() { return call_method<SCAPIX_META_STRING("onCreateExtractTextView"), ref<android::view::View>>(); }
inline ref<android::view::View> InputMethodService::onCreateCandidatesView() { return call_method<SCAPIX_META_STRING("onCreateCandidatesView"), ref<android::view::View>>(); }
inline ref<android::view::View> InputMethodService::onCreateInputView() { return call_method<SCAPIX_META_STRING("onCreateInputView"), ref<android::view::View>>(); }
inline void InputMethodService::onStartInputView(ref<android::view::inputmethod::EditorInfo> info, jboolean restarting) { return call_method<SCAPIX_META_STRING("onStartInputView"), void>(info, restarting); }
inline void InputMethodService::onFinishInputView(jboolean finishingInput) { return call_method<SCAPIX_META_STRING("onFinishInputView"), void>(finishingInput); }
inline void InputMethodService::onStartCandidatesView(ref<android::view::inputmethod::EditorInfo> info, jboolean restarting) { return call_method<SCAPIX_META_STRING("onStartCandidatesView"), void>(info, restarting); }
inline void InputMethodService::onFinishCandidatesView(jboolean finishingInput) { return call_method<SCAPIX_META_STRING("onFinishCandidatesView"), void>(finishingInput); }
inline jboolean InputMethodService::onShowInputRequested(jint flags, jboolean configChange) { return call_method<SCAPIX_META_STRING("onShowInputRequested"), jboolean>(flags, configChange); }
inline void InputMethodService::showWindow(jboolean showInput) { return call_method<SCAPIX_META_STRING("showWindow"), void>(showInput); }
inline void InputMethodService::hideWindow() { return call_method<SCAPIX_META_STRING("hideWindow"), void>(); }
inline void InputMethodService::onWindowShown() { return call_method<SCAPIX_META_STRING("onWindowShown"), void>(); }
inline void InputMethodService::onWindowHidden() { return call_method<SCAPIX_META_STRING("onWindowHidden"), void>(); }
inline void InputMethodService::onBindInput() { return call_method<SCAPIX_META_STRING("onBindInput"), void>(); }
inline void InputMethodService::onUnbindInput() { return call_method<SCAPIX_META_STRING("onUnbindInput"), void>(); }
inline void InputMethodService::onStartInput(ref<android::view::inputmethod::EditorInfo> attribute, jboolean restarting) { return call_method<SCAPIX_META_STRING("onStartInput"), void>(attribute, restarting); }
inline void InputMethodService::onFinishInput() { return call_method<SCAPIX_META_STRING("onFinishInput"), void>(); }
inline void InputMethodService::onDisplayCompletions(ref<link::java::array<android::view::inputmethod::CompletionInfo>> completions) { return call_method<SCAPIX_META_STRING("onDisplayCompletions"), void>(completions); }
inline void InputMethodService::onUpdateExtractedText(jint token, ref<android::view::inputmethod::ExtractedText> text) { return call_method<SCAPIX_META_STRING("onUpdateExtractedText"), void>(token, text); }
inline void InputMethodService::onUpdateSelection(jint oldSelStart, jint oldSelEnd, jint newSelStart, jint newSelEnd, jint candidatesStart, jint candidatesEnd) { return call_method<SCAPIX_META_STRING("onUpdateSelection"), void>(oldSelStart, oldSelEnd, newSelStart, newSelEnd, candidatesStart, candidatesEnd); }
inline void InputMethodService::onViewClicked(jboolean focusChanged) { return call_method<SCAPIX_META_STRING("onViewClicked"), void>(focusChanged); }
inline void InputMethodService::onUpdateCursor(ref<android::graphics::Rect> newCursor) { return call_method<SCAPIX_META_STRING("onUpdateCursor"), void>(newCursor); }
inline void InputMethodService::onUpdateCursorAnchorInfo(ref<android::view::inputmethod::CursorAnchorInfo> cursorAnchorInfo) { return call_method<SCAPIX_META_STRING("onUpdateCursorAnchorInfo"), void>(cursorAnchorInfo); }
inline void InputMethodService::requestHideSelf(jint flags) { return call_method<SCAPIX_META_STRING("requestHideSelf"), void>(flags); }
inline void InputMethodService::requestShowSelf(jint flags) { return call_method<SCAPIX_META_STRING("requestShowSelf"), void>(flags); }
inline jboolean InputMethodService::onKeyDown(jint keyCode, ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("onKeyDown"), jboolean>(keyCode, event); }
inline jboolean InputMethodService::onKeyLongPress(jint keyCode, ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("onKeyLongPress"), jboolean>(keyCode, event); }
inline jboolean InputMethodService::onKeyMultiple(jint keyCode, jint count, ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("onKeyMultiple"), jboolean>(keyCode, count, event); }
inline jboolean InputMethodService::onKeyUp(jint keyCode, ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("onKeyUp"), jboolean>(keyCode, event); }
inline jboolean InputMethodService::onTrackballEvent(ref<android::view::MotionEvent> event) { return call_method<SCAPIX_META_STRING("onTrackballEvent"), jboolean>(event); }
inline jboolean InputMethodService::onGenericMotionEvent(ref<android::view::MotionEvent> event) { return call_method<SCAPIX_META_STRING("onGenericMotionEvent"), jboolean>(event); }
inline void InputMethodService::onAppPrivateCommand(ref<java::lang::String> action, ref<android::os::Bundle> data) { return call_method<SCAPIX_META_STRING("onAppPrivateCommand"), void>(action, data); }
inline void InputMethodService::sendDownUpKeyEvents(jint keyEventCode) { return call_method<SCAPIX_META_STRING("sendDownUpKeyEvents"), void>(keyEventCode); }
inline jboolean InputMethodService::sendDefaultEditorAction(jboolean fromEnterKey) { return call_method<SCAPIX_META_STRING("sendDefaultEditorAction"), jboolean>(fromEnterKey); }
inline void InputMethodService::sendKeyChar(jchar charCode) { return call_method<SCAPIX_META_STRING("sendKeyChar"), void>(charCode); }
inline void InputMethodService::onExtractedSelectionChanged(jint start, jint end) { return call_method<SCAPIX_META_STRING("onExtractedSelectionChanged"), void>(start, end); }
inline void InputMethodService::onExtractedTextClicked() { return call_method<SCAPIX_META_STRING("onExtractedTextClicked"), void>(); }
inline void InputMethodService::onExtractedCursorMovement(jint dx, jint dy) { return call_method<SCAPIX_META_STRING("onExtractedCursorMovement"), void>(dx, dy); }
inline jboolean InputMethodService::onExtractTextContextMenuItem(jint id) { return call_method<SCAPIX_META_STRING("onExtractTextContextMenuItem"), jboolean>(id); }
inline ref<java::lang::CharSequence> InputMethodService::getTextForImeAction(jint imeOptions) { return call_method<SCAPIX_META_STRING("getTextForImeAction"), ref<java::lang::CharSequence>>(imeOptions); }
inline void InputMethodService::onUpdateExtractingVisibility(ref<android::view::inputmethod::EditorInfo> ei) { return call_method<SCAPIX_META_STRING("onUpdateExtractingVisibility"), void>(ei); }
inline void InputMethodService::onUpdateExtractingViews(ref<android::view::inputmethod::EditorInfo> ei) { return call_method<SCAPIX_META_STRING("onUpdateExtractingViews"), void>(ei); }
inline void InputMethodService::onExtractingInputChanged(ref<android::view::inputmethod::EditorInfo> ei) { return call_method<SCAPIX_META_STRING("onExtractingInputChanged"), void>(ei); }
inline jint InputMethodService::getInputMethodWindowRecommendedHeight() { return call_method<SCAPIX_META_STRING("getInputMethodWindowRecommendedHeight"), jint>(); }

} // namespace android::inputmethodservice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_H
