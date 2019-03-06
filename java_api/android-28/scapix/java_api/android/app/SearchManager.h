// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/content/DialogInterface_OnDismissListener.h>
#include <scapix/java_api/android/content/DialogInterface_OnCancelListener.h>

#ifndef SCAPIX_ANDROID_APP_SEARCHMANAGER_H
#define SCAPIX_ANDROID_APP_SEARCHMANAGER_H

namespace scapix::java_api {

namespace android::app { class SearchManager_OnCancelListener; }
namespace android::app { class SearchManager_OnDismissListener; }
namespace android::app { class SearchableInfo; }
namespace android::content { class ComponentName; }
namespace android::content { class DialogInterface; }
namespace android::os { class Bundle; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::app {

class SearchManager : public object_base<SCAPIX_META_STRING("android/app/SearchManager"),
	java::lang::Object,
	android::content::DialogInterface_OnDismissListener,
	android::content::DialogInterface_OnCancelListener>
{
public:

	using OnDismissListener = SearchManager_OnDismissListener;
	using OnCancelListener = SearchManager_OnCancelListener;

	static ref<java::lang::String> ACTION_KEY_();
	static ref<java::lang::String> ACTION_MSG_();
	static ref<java::lang::String> APP_DATA_();
	static ref<java::lang::String> CURSOR_EXTRA_KEY_IN_PROGRESS_();
	static ref<java::lang::String> EXTRA_DATA_KEY_();
	static ref<java::lang::String> EXTRA_NEW_SEARCH_();
	static ref<java::lang::String> EXTRA_SELECT_QUERY_();
	static ref<java::lang::String> EXTRA_WEB_SEARCH_PENDINGINTENT_();
	static jint FLAG_QUERY_REFINEMENT_();
	static ref<java::lang::String> INTENT_ACTION_GLOBAL_SEARCH_();
	static ref<java::lang::String> INTENT_ACTION_SEARCHABLES_CHANGED_();
	static ref<java::lang::String> INTENT_ACTION_SEARCH_SETTINGS_();
	static ref<java::lang::String> INTENT_ACTION_SEARCH_SETTINGS_CHANGED_();
	static ref<java::lang::String> INTENT_ACTION_WEB_SEARCH_SETTINGS_();
	static ref<java::lang::String> INTENT_GLOBAL_SEARCH_ACTIVITY_CHANGED_();
	static jchar MENU_KEY_();
	static jint MENU_KEYCODE_();
	static ref<java::lang::String> QUERY_();
	static ref<java::lang::String> SHORTCUT_MIME_TYPE_();
	static ref<java::lang::String> SUGGEST_COLUMN_AUDIO_CHANNEL_CONFIG_();
	static ref<java::lang::String> SUGGEST_COLUMN_CONTENT_TYPE_();
	static ref<java::lang::String> SUGGEST_COLUMN_DURATION_();
	static ref<java::lang::String> SUGGEST_COLUMN_FLAGS_();
	static ref<java::lang::String> SUGGEST_COLUMN_FORMAT_();
	static ref<java::lang::String> SUGGEST_COLUMN_ICON_1_();
	static ref<java::lang::String> SUGGEST_COLUMN_ICON_2_();
	static ref<java::lang::String> SUGGEST_COLUMN_INTENT_ACTION_();
	static ref<java::lang::String> SUGGEST_COLUMN_INTENT_DATA_();
	static ref<java::lang::String> SUGGEST_COLUMN_INTENT_DATA_ID_();
	static ref<java::lang::String> SUGGEST_COLUMN_INTENT_EXTRA_DATA_();
	static ref<java::lang::String> SUGGEST_COLUMN_IS_LIVE_();
	static ref<java::lang::String> SUGGEST_COLUMN_LAST_ACCESS_HINT_();
	static ref<java::lang::String> SUGGEST_COLUMN_PRODUCTION_YEAR_();
	static ref<java::lang::String> SUGGEST_COLUMN_PURCHASE_PRICE_();
	static ref<java::lang::String> SUGGEST_COLUMN_QUERY_();
	static ref<java::lang::String> SUGGEST_COLUMN_RATING_SCORE_();
	static ref<java::lang::String> SUGGEST_COLUMN_RATING_STYLE_();
	static ref<java::lang::String> SUGGEST_COLUMN_RENTAL_PRICE_();
	static ref<java::lang::String> SUGGEST_COLUMN_RESULT_CARD_IMAGE_();
	static ref<java::lang::String> SUGGEST_COLUMN_SHORTCUT_ID_();
	static ref<java::lang::String> SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING_();
	static ref<java::lang::String> SUGGEST_COLUMN_TEXT_1_();
	static ref<java::lang::String> SUGGEST_COLUMN_TEXT_2_();
	static ref<java::lang::String> SUGGEST_COLUMN_TEXT_2_URL_();
	static ref<java::lang::String> SUGGEST_COLUMN_VIDEO_HEIGHT_();
	static ref<java::lang::String> SUGGEST_COLUMN_VIDEO_WIDTH_();
	static ref<java::lang::String> SUGGEST_MIME_TYPE_();
	static ref<java::lang::String> SUGGEST_NEVER_MAKE_SHORTCUT_();
	static ref<java::lang::String> SUGGEST_PARAMETER_LIMIT_();
	static ref<java::lang::String> SUGGEST_URI_PATH_QUERY_();
	static ref<java::lang::String> SUGGEST_URI_PATH_SHORTCUT_();
	static ref<java::lang::String> USER_QUERY_();

	void startSearch(ref<java::lang::String> initialQuery, jboolean selectInitialQuery, ref<android::content::ComponentName> launchActivity, ref<android::os::Bundle> appSearchData, jboolean globalSearch);
	ref<android::content::ComponentName> getGlobalSearchActivity();
	void triggerSearch(ref<java::lang::String> query, ref<android::content::ComponentName> launchActivity, ref<android::os::Bundle> appSearchData);
	void stopSearch();
	void setOnDismissListener(ref<android::app::SearchManager_OnDismissListener> listener);
	void setOnCancelListener(ref<android::app::SearchManager_OnCancelListener> listener);
	void onCancel(ref<android::content::DialogInterface> dialog);
	void onDismiss(ref<android::content::DialogInterface> dialog);
	ref<android::app::SearchableInfo> getSearchableInfo(ref<android::content::ComponentName> componentName);
	ref<java::util::List> getSearchablesInGlobalSearch();

protected:

	SearchManager(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/SearchManager_OnCancelListener.h>
#include <scapix/java_api/android/app/SearchManager_OnDismissListener.h>
#include <scapix/java_api/android/app/SearchableInfo.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/DialogInterface.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::app {

inline ref<java::lang::String> SearchManager::ACTION_KEY_() { return get_static_field<SCAPIX_META_STRING("ACTION_KEY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::ACTION_MSG_() { return get_static_field<SCAPIX_META_STRING("ACTION_MSG"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::APP_DATA_() { return get_static_field<SCAPIX_META_STRING("APP_DATA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::CURSOR_EXTRA_KEY_IN_PROGRESS_() { return get_static_field<SCAPIX_META_STRING("CURSOR_EXTRA_KEY_IN_PROGRESS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::EXTRA_DATA_KEY_() { return get_static_field<SCAPIX_META_STRING("EXTRA_DATA_KEY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::EXTRA_NEW_SEARCH_() { return get_static_field<SCAPIX_META_STRING("EXTRA_NEW_SEARCH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::EXTRA_SELECT_QUERY_() { return get_static_field<SCAPIX_META_STRING("EXTRA_SELECT_QUERY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::EXTRA_WEB_SEARCH_PENDINGINTENT_() { return get_static_field<SCAPIX_META_STRING("EXTRA_WEB_SEARCH_PENDINGINTENT"), ref<java::lang::String>>(); }
inline jint SearchManager::FLAG_QUERY_REFINEMENT_() { return get_static_field<SCAPIX_META_STRING("FLAG_QUERY_REFINEMENT"), jint>(); }
inline ref<java::lang::String> SearchManager::INTENT_ACTION_GLOBAL_SEARCH_() { return get_static_field<SCAPIX_META_STRING("INTENT_ACTION_GLOBAL_SEARCH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::INTENT_ACTION_SEARCHABLES_CHANGED_() { return get_static_field<SCAPIX_META_STRING("INTENT_ACTION_SEARCHABLES_CHANGED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::INTENT_ACTION_SEARCH_SETTINGS_() { return get_static_field<SCAPIX_META_STRING("INTENT_ACTION_SEARCH_SETTINGS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::INTENT_ACTION_SEARCH_SETTINGS_CHANGED_() { return get_static_field<SCAPIX_META_STRING("INTENT_ACTION_SEARCH_SETTINGS_CHANGED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::INTENT_ACTION_WEB_SEARCH_SETTINGS_() { return get_static_field<SCAPIX_META_STRING("INTENT_ACTION_WEB_SEARCH_SETTINGS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::INTENT_GLOBAL_SEARCH_ACTIVITY_CHANGED_() { return get_static_field<SCAPIX_META_STRING("INTENT_GLOBAL_SEARCH_ACTIVITY_CHANGED"), ref<java::lang::String>>(); }
inline jchar SearchManager::MENU_KEY_() { return get_static_field<SCAPIX_META_STRING("MENU_KEY"), jchar>(); }
inline jint SearchManager::MENU_KEYCODE_() { return get_static_field<SCAPIX_META_STRING("MENU_KEYCODE"), jint>(); }
inline ref<java::lang::String> SearchManager::QUERY_() { return get_static_field<SCAPIX_META_STRING("QUERY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SHORTCUT_MIME_TYPE_() { return get_static_field<SCAPIX_META_STRING("SHORTCUT_MIME_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_AUDIO_CHANNEL_CONFIG_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_AUDIO_CHANNEL_CONFIG"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_CONTENT_TYPE_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_CONTENT_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_DURATION_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_DURATION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_FLAGS_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_FLAGS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_FORMAT_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_FORMAT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_ICON_1_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_ICON_1"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_ICON_2_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_ICON_2"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_INTENT_ACTION_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_INTENT_ACTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_INTENT_DATA_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_INTENT_DATA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_INTENT_DATA_ID_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_INTENT_DATA_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_INTENT_EXTRA_DATA_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_INTENT_EXTRA_DATA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_IS_LIVE_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_IS_LIVE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_LAST_ACCESS_HINT_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_LAST_ACCESS_HINT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_PRODUCTION_YEAR_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_PRODUCTION_YEAR"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_PURCHASE_PRICE_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_PURCHASE_PRICE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_QUERY_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_QUERY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_RATING_SCORE_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_RATING_SCORE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_RATING_STYLE_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_RATING_STYLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_RENTAL_PRICE_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_RENTAL_PRICE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_RESULT_CARD_IMAGE_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_RESULT_CARD_IMAGE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_SHORTCUT_ID_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_SHORTCUT_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_TEXT_1_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_TEXT_1"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_TEXT_2_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_TEXT_2"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_TEXT_2_URL_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_TEXT_2_URL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_VIDEO_HEIGHT_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_VIDEO_HEIGHT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_COLUMN_VIDEO_WIDTH_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_COLUMN_VIDEO_WIDTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_MIME_TYPE_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_MIME_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_NEVER_MAKE_SHORTCUT_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_NEVER_MAKE_SHORTCUT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_PARAMETER_LIMIT_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_PARAMETER_LIMIT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_URI_PATH_QUERY_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_URI_PATH_QUERY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::SUGGEST_URI_PATH_SHORTCUT_() { return get_static_field<SCAPIX_META_STRING("SUGGEST_URI_PATH_SHORTCUT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SearchManager::USER_QUERY_() { return get_static_field<SCAPIX_META_STRING("USER_QUERY"), ref<java::lang::String>>(); }
inline void SearchManager::startSearch(ref<java::lang::String> initialQuery, jboolean selectInitialQuery, ref<android::content::ComponentName> launchActivity, ref<android::os::Bundle> appSearchData, jboolean globalSearch) { return call_method<SCAPIX_META_STRING("startSearch"), void>(initialQuery, selectInitialQuery, launchActivity, appSearchData, globalSearch); }
inline ref<android::content::ComponentName> SearchManager::getGlobalSearchActivity() { return call_method<SCAPIX_META_STRING("getGlobalSearchActivity"), ref<android::content::ComponentName>>(); }
inline void SearchManager::triggerSearch(ref<java::lang::String> query, ref<android::content::ComponentName> launchActivity, ref<android::os::Bundle> appSearchData) { return call_method<SCAPIX_META_STRING("triggerSearch"), void>(query, launchActivity, appSearchData); }
inline void SearchManager::stopSearch() { return call_method<SCAPIX_META_STRING("stopSearch"), void>(); }
inline void SearchManager::setOnDismissListener(ref<android::app::SearchManager_OnDismissListener> listener) { return call_method<SCAPIX_META_STRING("setOnDismissListener"), void>(listener); }
inline void SearchManager::setOnCancelListener(ref<android::app::SearchManager_OnCancelListener> listener) { return call_method<SCAPIX_META_STRING("setOnCancelListener"), void>(listener); }
inline void SearchManager::onCancel(ref<android::content::DialogInterface> dialog) { return call_method<SCAPIX_META_STRING("onCancel"), void>(dialog); }
inline void SearchManager::onDismiss(ref<android::content::DialogInterface> dialog) { return call_method<SCAPIX_META_STRING("onDismiss"), void>(dialog); }
inline ref<android::app::SearchableInfo> SearchManager::getSearchableInfo(ref<android::content::ComponentName> componentName) { return call_method<SCAPIX_META_STRING("getSearchableInfo"), ref<android::app::SearchableInfo>>(componentName); }
inline ref<java::util::List> SearchManager::getSearchablesInGlobalSearch() { return call_method<SCAPIX_META_STRING("getSearchablesInGlobalSearch"), ref<java::util::List>>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_SEARCHMANAGER_H
