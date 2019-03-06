// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/widget/LinearLayout.h>
#include <scapix/java_api/android/view/CollapsibleActionView.h>

#ifndef SCAPIX_ANDROID_WIDGET_SEARCHVIEW_H
#define SCAPIX_ANDROID_WIDGET_SEARCHVIEW_H

namespace scapix::java_api {

namespace android::app { class SearchableInfo; }
namespace android::content { class Context; }
namespace android::graphics { class Rect; }
namespace android::util { class AttributeSet; }
namespace android::view { class KeyEvent; }
namespace android::view { class View_OnClickListener; }
namespace android::view { class View_OnFocusChangeListener; }
namespace android::widget { class CursorAdapter; }
namespace android::widget { class SearchView_OnCloseListener; }
namespace android::widget { class SearchView_OnQueryTextListener; }
namespace android::widget { class SearchView_OnSuggestionListener; }
namespace java::lang { class CharSequence; }

namespace android::widget {

class SearchView : public object_base<SCAPIX_META_STRING("android/widget/SearchView"),
	android::widget::LinearLayout,
	android::view::CollapsibleActionView>
{
public:

	using OnSuggestionListener = SearchView_OnSuggestionListener;
	using OnQueryTextListener = SearchView_OnQueryTextListener;
	using OnCloseListener = SearchView_OnCloseListener;

	static ref<SearchView> new_object(ref<android::content::Context> context);
	static ref<SearchView> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<SearchView> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr);
	static ref<SearchView> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes);
	void setSearchableInfo(ref<android::app::SearchableInfo> searchable);
	void setImeOptions(jint imeOptions);
	jint getImeOptions();
	void setInputType(jint inputType);
	jint getInputType();
	jboolean requestFocus(jint direction, ref<android::graphics::Rect> previouslyFocusedRect);
	void clearFocus();
	void setOnQueryTextListener(ref<android::widget::SearchView_OnQueryTextListener> listener);
	void setOnCloseListener(ref<android::widget::SearchView_OnCloseListener> listener);
	void setOnQueryTextFocusChangeListener(ref<android::view::View_OnFocusChangeListener> listener);
	void setOnSuggestionListener(ref<android::widget::SearchView_OnSuggestionListener> listener);
	void setOnSearchClickListener(ref<android::view::View_OnClickListener> listener);
	ref<java::lang::CharSequence> getQuery();
	void setQuery(ref<java::lang::CharSequence> query, jboolean submit);
	void setQueryHint(ref<java::lang::CharSequence> hint);
	ref<java::lang::CharSequence> getQueryHint();
	void setIconifiedByDefault(jboolean iconified);
	jboolean isIconfiedByDefault();
	void setIconified(jboolean iconify);
	jboolean isIconified();
	void setSubmitButtonEnabled(jboolean enabled);
	jboolean isSubmitButtonEnabled();
	void setQueryRefinementEnabled(jboolean enable);
	jboolean isQueryRefinementEnabled();
	void setSuggestionsAdapter(ref<android::widget::CursorAdapter> adapter);
	ref<android::widget::CursorAdapter> getSuggestionsAdapter();
	void setMaxWidth(jint maxpixels);
	jint getMaxWidth();
	jboolean onKeyDown(jint keyCode, ref<android::view::KeyEvent> event);
	void onWindowFocusChanged(jboolean hasWindowFocus);
	void onActionViewCollapsed();
	void onActionViewExpanded();
	ref<java::lang::CharSequence> getAccessibilityClassName();

protected:

	SearchView(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/app/SearchableInfo.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/View_OnClickListener.h>
#include <scapix/java_api/android/view/View_OnFocusChangeListener.h>
#include <scapix/java_api/android/widget/CursorAdapter.h>
#include <scapix/java_api/android/widget/SearchView_OnCloseListener.h>
#include <scapix/java_api/android/widget/SearchView_OnQueryTextListener.h>
#include <scapix/java_api/android/widget/SearchView_OnSuggestionListener.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<SearchView> SearchView::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<SearchView> SearchView::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<SearchView> SearchView::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
inline ref<SearchView> SearchView::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
inline void SearchView::setSearchableInfo(ref<android::app::SearchableInfo> searchable) { return call_method<SCAPIX_META_STRING("setSearchableInfo"), void>(searchable); }
inline void SearchView::setImeOptions(jint imeOptions) { return call_method<SCAPIX_META_STRING("setImeOptions"), void>(imeOptions); }
inline jint SearchView::getImeOptions() { return call_method<SCAPIX_META_STRING("getImeOptions"), jint>(); }
inline void SearchView::setInputType(jint inputType) { return call_method<SCAPIX_META_STRING("setInputType"), void>(inputType); }
inline jint SearchView::getInputType() { return call_method<SCAPIX_META_STRING("getInputType"), jint>(); }
inline jboolean SearchView::requestFocus(jint direction, ref<android::graphics::Rect> previouslyFocusedRect) { return call_method<SCAPIX_META_STRING("requestFocus"), jboolean>(direction, previouslyFocusedRect); }
inline void SearchView::clearFocus() { return call_method<SCAPIX_META_STRING("clearFocus"), void>(); }
inline void SearchView::setOnQueryTextListener(ref<android::widget::SearchView_OnQueryTextListener> listener) { return call_method<SCAPIX_META_STRING("setOnQueryTextListener"), void>(listener); }
inline void SearchView::setOnCloseListener(ref<android::widget::SearchView_OnCloseListener> listener) { return call_method<SCAPIX_META_STRING("setOnCloseListener"), void>(listener); }
inline void SearchView::setOnQueryTextFocusChangeListener(ref<android::view::View_OnFocusChangeListener> listener) { return call_method<SCAPIX_META_STRING("setOnQueryTextFocusChangeListener"), void>(listener); }
inline void SearchView::setOnSuggestionListener(ref<android::widget::SearchView_OnSuggestionListener> listener) { return call_method<SCAPIX_META_STRING("setOnSuggestionListener"), void>(listener); }
inline void SearchView::setOnSearchClickListener(ref<android::view::View_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setOnSearchClickListener"), void>(listener); }
inline ref<java::lang::CharSequence> SearchView::getQuery() { return call_method<SCAPIX_META_STRING("getQuery"), ref<java::lang::CharSequence>>(); }
inline void SearchView::setQuery(ref<java::lang::CharSequence> query, jboolean submit) { return call_method<SCAPIX_META_STRING("setQuery"), void>(query, submit); }
inline void SearchView::setQueryHint(ref<java::lang::CharSequence> hint) { return call_method<SCAPIX_META_STRING("setQueryHint"), void>(hint); }
inline ref<java::lang::CharSequence> SearchView::getQueryHint() { return call_method<SCAPIX_META_STRING("getQueryHint"), ref<java::lang::CharSequence>>(); }
inline void SearchView::setIconifiedByDefault(jboolean iconified) { return call_method<SCAPIX_META_STRING("setIconifiedByDefault"), void>(iconified); }
inline jboolean SearchView::isIconfiedByDefault() { return call_method<SCAPIX_META_STRING("isIconfiedByDefault"), jboolean>(); }
inline void SearchView::setIconified(jboolean iconify) { return call_method<SCAPIX_META_STRING("setIconified"), void>(iconify); }
inline jboolean SearchView::isIconified() { return call_method<SCAPIX_META_STRING("isIconified"), jboolean>(); }
inline void SearchView::setSubmitButtonEnabled(jboolean enabled) { return call_method<SCAPIX_META_STRING("setSubmitButtonEnabled"), void>(enabled); }
inline jboolean SearchView::isSubmitButtonEnabled() { return call_method<SCAPIX_META_STRING("isSubmitButtonEnabled"), jboolean>(); }
inline void SearchView::setQueryRefinementEnabled(jboolean enable) { return call_method<SCAPIX_META_STRING("setQueryRefinementEnabled"), void>(enable); }
inline jboolean SearchView::isQueryRefinementEnabled() { return call_method<SCAPIX_META_STRING("isQueryRefinementEnabled"), jboolean>(); }
inline void SearchView::setSuggestionsAdapter(ref<android::widget::CursorAdapter> adapter) { return call_method<SCAPIX_META_STRING("setSuggestionsAdapter"), void>(adapter); }
inline ref<android::widget::CursorAdapter> SearchView::getSuggestionsAdapter() { return call_method<SCAPIX_META_STRING("getSuggestionsAdapter"), ref<android::widget::CursorAdapter>>(); }
inline void SearchView::setMaxWidth(jint maxpixels) { return call_method<SCAPIX_META_STRING("setMaxWidth"), void>(maxpixels); }
inline jint SearchView::getMaxWidth() { return call_method<SCAPIX_META_STRING("getMaxWidth"), jint>(); }
inline jboolean SearchView::onKeyDown(jint keyCode, ref<android::view::KeyEvent> event) { return call_method<SCAPIX_META_STRING("onKeyDown"), jboolean>(keyCode, event); }
inline void SearchView::onWindowFocusChanged(jboolean hasWindowFocus) { return call_method<SCAPIX_META_STRING("onWindowFocusChanged"), void>(hasWindowFocus); }
inline void SearchView::onActionViewCollapsed() { return call_method<SCAPIX_META_STRING("onActionViewCollapsed"), void>(); }
inline void SearchView::onActionViewExpanded() { return call_method<SCAPIX_META_STRING("onActionViewExpanded"), void>(); }
inline ref<java::lang::CharSequence> SearchView::getAccessibilityClassName() { return call_method<SCAPIX_META_STRING("getAccessibilityClassName"), ref<java::lang::CharSequence>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_SEARCHVIEW_H
