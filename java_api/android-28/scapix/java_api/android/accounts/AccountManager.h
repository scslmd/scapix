// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ACCOUNTS_ACCOUNTMANAGER_H
#define SCAPIX_ANDROID_ACCOUNTS_ACCOUNTMANAGER_H

namespace scapix::java_api {

namespace android::accounts { class Account; }
namespace android::accounts { class AccountManagerCallback; }
namespace android::accounts { class AccountManagerFuture; }
namespace android::accounts { class AuthenticatorDescription; }
namespace android::accounts { class OnAccountsUpdateListener; }
namespace android::app { class Activity; }
namespace android::content { class Context; }
namespace android::content { class Intent; }
namespace android::os { class Bundle; }
namespace android::os { class Handler; }
namespace java::lang { class String; }
namespace java::util { class ArrayList; }
namespace java::util { class List; }
namespace java::util { class Map; }

namespace android::accounts {

class AccountManager : public object_base<SCAPIX_META_STRING("android/accounts/AccountManager"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> ACTION_ACCOUNT_REMOVED_();
	static ref<java::lang::String> ACTION_AUTHENTICATOR_INTENT_();
	static ref<java::lang::String> AUTHENTICATOR_ATTRIBUTES_NAME_();
	static ref<java::lang::String> AUTHENTICATOR_META_DATA_NAME_();
	static jint ERROR_CODE_BAD_ARGUMENTS_();
	static jint ERROR_CODE_BAD_AUTHENTICATION_();
	static jint ERROR_CODE_BAD_REQUEST_();
	static jint ERROR_CODE_CANCELED_();
	static jint ERROR_CODE_INVALID_RESPONSE_();
	static jint ERROR_CODE_NETWORK_ERROR_();
	static jint ERROR_CODE_REMOTE_EXCEPTION_();
	static jint ERROR_CODE_UNSUPPORTED_OPERATION_();
	static ref<java::lang::String> KEY_ACCOUNTS_();
	static ref<java::lang::String> KEY_ACCOUNT_AUTHENTICATOR_RESPONSE_();
	static ref<java::lang::String> KEY_ACCOUNT_MANAGER_RESPONSE_();
	static ref<java::lang::String> KEY_ACCOUNT_NAME_();
	static ref<java::lang::String> KEY_ACCOUNT_SESSION_BUNDLE_();
	static ref<java::lang::String> KEY_ACCOUNT_STATUS_TOKEN_();
	static ref<java::lang::String> KEY_ACCOUNT_TYPE_();
	static ref<java::lang::String> KEY_ANDROID_PACKAGE_NAME_();
	static ref<java::lang::String> KEY_AUTHENTICATOR_TYPES_();
	static ref<java::lang::String> KEY_AUTHTOKEN_();
	static ref<java::lang::String> KEY_AUTH_FAILED_MESSAGE_();
	static ref<java::lang::String> KEY_AUTH_TOKEN_LABEL_();
	static ref<java::lang::String> KEY_BOOLEAN_RESULT_();
	static ref<java::lang::String> KEY_CALLER_PID_();
	static ref<java::lang::String> KEY_CALLER_UID_();
	static ref<java::lang::String> KEY_ERROR_CODE_();
	static ref<java::lang::String> KEY_ERROR_MESSAGE_();
	static ref<java::lang::String> KEY_INTENT_();
	static ref<java::lang::String> KEY_LAST_AUTHENTICATED_TIME_();
	static ref<java::lang::String> KEY_PASSWORD_();
	static ref<java::lang::String> KEY_USERDATA_();
	static ref<java::lang::String> LOGIN_ACCOUNTS_CHANGED_ACTION_();
	static ref<java::lang::String> PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE_();
	static ref<java::lang::String> PACKAGE_NAME_KEY_LEGACY_VISIBLE_();
	static jint VISIBILITY_NOT_VISIBLE_();
	static jint VISIBILITY_UNDEFINED_();
	static jint VISIBILITY_USER_MANAGED_NOT_VISIBLE_();
	static jint VISIBILITY_USER_MANAGED_VISIBLE_();
	static jint VISIBILITY_VISIBLE_();

	static ref<android::accounts::AccountManager> get(ref<android::content::Context> context);
	ref<java::lang::String> getPassword(ref<android::accounts::Account> account);
	ref<java::lang::String> getUserData(ref<android::accounts::Account> account, ref<java::lang::String> key);
	ref<link::java::array<android::accounts::AuthenticatorDescription>> getAuthenticatorTypes();
	ref<link::java::array<android::accounts::Account>> getAccounts();
	ref<link::java::array<android::accounts::Account>> getAccountsByTypeForPackage(ref<java::lang::String> type, ref<java::lang::String> packageName);
	ref<link::java::array<android::accounts::Account>> getAccountsByType(ref<java::lang::String> type);
	ref<android::accounts::AccountManagerFuture> hasFeatures(ref<android::accounts::Account> account, ref<link::java::array<java::lang::String>> features, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> getAccountsByTypeAndFeatures(ref<java::lang::String> type, ref<link::java::array<java::lang::String>> features, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	jboolean addAccountExplicitly(ref<android::accounts::Account> account, ref<java::lang::String> password, ref<android::os::Bundle> userdata);
	jboolean addAccountExplicitly(ref<android::accounts::Account> account, ref<java::lang::String> password, ref<android::os::Bundle> extras, ref<java::util::Map> visibility);
	ref<java::util::Map> getPackagesAndVisibilityForAccount(ref<android::accounts::Account> account);
	ref<java::util::Map> getAccountsAndVisibilityForPackage(ref<java::lang::String> packageName, ref<java::lang::String> accountType);
	jboolean setAccountVisibility(ref<android::accounts::Account> account, ref<java::lang::String> packageName, jint visibility);
	jint getAccountVisibility(ref<android::accounts::Account> account, ref<java::lang::String> packageName);
	jboolean notifyAccountAuthenticated(ref<android::accounts::Account> account);
	ref<android::accounts::AccountManagerFuture> renameAccount(ref<android::accounts::Account> account, ref<java::lang::String> newName, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<java::lang::String> getPreviousName(ref<android::accounts::Account> account);
	ref<android::accounts::AccountManagerFuture> removeAccount(ref<android::accounts::Account> account, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> removeAccount(ref<android::accounts::Account> account, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	jboolean removeAccountExplicitly(ref<android::accounts::Account> account);
	void invalidateAuthToken(ref<java::lang::String> accountType, ref<java::lang::String> authToken);
	ref<java::lang::String> peekAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType);
	void setPassword(ref<android::accounts::Account> account, ref<java::lang::String> password);
	void clearPassword(ref<android::accounts::Account> account);
	void setUserData(ref<android::accounts::Account> account, ref<java::lang::String> key, ref<java::lang::String> value);
	void setAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, ref<java::lang::String> authToken);
	ref<java::lang::String> blockingGetAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, jboolean notifyAuthFailure);
	ref<android::accounts::AccountManagerFuture> getAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, ref<android::os::Bundle> options, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> getAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, jboolean notifyAuthFailure, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> getAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, ref<android::os::Bundle> options, jboolean notifyAuthFailure, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> addAccount(ref<java::lang::String> accountType, ref<java::lang::String> authTokenType, ref<link::java::array<java::lang::String>> requiredFeatures, ref<android::os::Bundle> addAccountOptions, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> confirmCredentials(ref<android::accounts::Account> account, ref<android::os::Bundle> options, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> updateCredentials(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, ref<android::os::Bundle> options, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> editProperties(ref<java::lang::String> accountType, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> getAuthTokenByFeatures(ref<java::lang::String> accountType, ref<java::lang::String> authTokenType, ref<link::java::array<java::lang::String>> features, ref<android::app::Activity> activity, ref<android::os::Bundle> addAccountOptions, ref<android::os::Bundle> getAuthTokenOptions, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	static ref<android::content::Intent> newChooseAccountIntent(ref<android::accounts::Account> selectedAccount, ref<java::util::ArrayList> allowableAccounts, ref<link::java::array<java::lang::String>> allowableAccountTypes, jboolean alwaysPromptForAccount, ref<java::lang::String> descriptionOverrideText, ref<java::lang::String> addAccountAuthTokenType, ref<link::java::array<java::lang::String>> addAccountRequiredFeatures, ref<android::os::Bundle> addAccountOptions);
	static ref<android::content::Intent> newChooseAccountIntent(ref<android::accounts::Account> selectedAccount, ref<java::util::List> allowableAccounts, ref<link::java::array<java::lang::String>> allowableAccountTypes, ref<java::lang::String> descriptionOverrideText, ref<java::lang::String> addAccountAuthTokenType, ref<link::java::array<java::lang::String>> addAccountRequiredFeatures, ref<android::os::Bundle> addAccountOptions);
	void addOnAccountsUpdatedListener(ref<android::accounts::OnAccountsUpdateListener> listener, ref<android::os::Handler> handler, jboolean updateImmediately);
	void addOnAccountsUpdatedListener(ref<android::accounts::OnAccountsUpdateListener> listener, ref<android::os::Handler> handler, jboolean updateImmediately, ref<link::java::array<java::lang::String>> accountTypes);
	void removeOnAccountsUpdatedListener(ref<android::accounts::OnAccountsUpdateListener> listener);
	ref<android::accounts::AccountManagerFuture> startAddAccountSession(ref<java::lang::String> accountType, ref<java::lang::String> authTokenType, ref<link::java::array<java::lang::String>> requiredFeatures, ref<android::os::Bundle> options, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> startUpdateCredentialsSession(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, ref<android::os::Bundle> options, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> finishSession(ref<android::os::Bundle> sessionBundle, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);
	ref<android::accounts::AccountManagerFuture> isCredentialsUpdateSuggested(ref<android::accounts::Account> account, ref<java::lang::String> statusToken, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler);

protected:

	AccountManager(handle_type h) : base_(h) {}

};

} // namespace android::accounts
} // namespace scapix::java_api

#include <scapix/java_api/android/accounts/Account.h>
#include <scapix/java_api/android/accounts/AccountManagerCallback.h>
#include <scapix/java_api/android/accounts/AccountManagerFuture.h>
#include <scapix/java_api/android/accounts/AuthenticatorDescription.h>
#include <scapix/java_api/android/accounts/OnAccountsUpdateListener.h>
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>

namespace scapix::java_api {
namespace android::accounts {

inline ref<java::lang::String> AccountManager::ACTION_ACCOUNT_REMOVED_() { return get_static_field<SCAPIX_META_STRING("ACTION_ACCOUNT_REMOVED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::ACTION_AUTHENTICATOR_INTENT_() { return get_static_field<SCAPIX_META_STRING("ACTION_AUTHENTICATOR_INTENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::AUTHENTICATOR_ATTRIBUTES_NAME_() { return get_static_field<SCAPIX_META_STRING("AUTHENTICATOR_ATTRIBUTES_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::AUTHENTICATOR_META_DATA_NAME_() { return get_static_field<SCAPIX_META_STRING("AUTHENTICATOR_META_DATA_NAME"), ref<java::lang::String>>(); }
inline jint AccountManager::ERROR_CODE_BAD_ARGUMENTS_() { return get_static_field<SCAPIX_META_STRING("ERROR_CODE_BAD_ARGUMENTS"), jint>(); }
inline jint AccountManager::ERROR_CODE_BAD_AUTHENTICATION_() { return get_static_field<SCAPIX_META_STRING("ERROR_CODE_BAD_AUTHENTICATION"), jint>(); }
inline jint AccountManager::ERROR_CODE_BAD_REQUEST_() { return get_static_field<SCAPIX_META_STRING("ERROR_CODE_BAD_REQUEST"), jint>(); }
inline jint AccountManager::ERROR_CODE_CANCELED_() { return get_static_field<SCAPIX_META_STRING("ERROR_CODE_CANCELED"), jint>(); }
inline jint AccountManager::ERROR_CODE_INVALID_RESPONSE_() { return get_static_field<SCAPIX_META_STRING("ERROR_CODE_INVALID_RESPONSE"), jint>(); }
inline jint AccountManager::ERROR_CODE_NETWORK_ERROR_() { return get_static_field<SCAPIX_META_STRING("ERROR_CODE_NETWORK_ERROR"), jint>(); }
inline jint AccountManager::ERROR_CODE_REMOTE_EXCEPTION_() { return get_static_field<SCAPIX_META_STRING("ERROR_CODE_REMOTE_EXCEPTION"), jint>(); }
inline jint AccountManager::ERROR_CODE_UNSUPPORTED_OPERATION_() { return get_static_field<SCAPIX_META_STRING("ERROR_CODE_UNSUPPORTED_OPERATION"), jint>(); }
inline ref<java::lang::String> AccountManager::KEY_ACCOUNTS_() { return get_static_field<SCAPIX_META_STRING("KEY_ACCOUNTS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_ACCOUNT_AUTHENTICATOR_RESPONSE_() { return get_static_field<SCAPIX_META_STRING("KEY_ACCOUNT_AUTHENTICATOR_RESPONSE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_ACCOUNT_MANAGER_RESPONSE_() { return get_static_field<SCAPIX_META_STRING("KEY_ACCOUNT_MANAGER_RESPONSE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_ACCOUNT_NAME_() { return get_static_field<SCAPIX_META_STRING("KEY_ACCOUNT_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_ACCOUNT_SESSION_BUNDLE_() { return get_static_field<SCAPIX_META_STRING("KEY_ACCOUNT_SESSION_BUNDLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_ACCOUNT_STATUS_TOKEN_() { return get_static_field<SCAPIX_META_STRING("KEY_ACCOUNT_STATUS_TOKEN"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_ACCOUNT_TYPE_() { return get_static_field<SCAPIX_META_STRING("KEY_ACCOUNT_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_ANDROID_PACKAGE_NAME_() { return get_static_field<SCAPIX_META_STRING("KEY_ANDROID_PACKAGE_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_AUTHENTICATOR_TYPES_() { return get_static_field<SCAPIX_META_STRING("KEY_AUTHENTICATOR_TYPES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_AUTHTOKEN_() { return get_static_field<SCAPIX_META_STRING("KEY_AUTHTOKEN"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_AUTH_FAILED_MESSAGE_() { return get_static_field<SCAPIX_META_STRING("KEY_AUTH_FAILED_MESSAGE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_AUTH_TOKEN_LABEL_() { return get_static_field<SCAPIX_META_STRING("KEY_AUTH_TOKEN_LABEL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_BOOLEAN_RESULT_() { return get_static_field<SCAPIX_META_STRING("KEY_BOOLEAN_RESULT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_CALLER_PID_() { return get_static_field<SCAPIX_META_STRING("KEY_CALLER_PID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_CALLER_UID_() { return get_static_field<SCAPIX_META_STRING("KEY_CALLER_UID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_ERROR_CODE_() { return get_static_field<SCAPIX_META_STRING("KEY_ERROR_CODE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_ERROR_MESSAGE_() { return get_static_field<SCAPIX_META_STRING("KEY_ERROR_MESSAGE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_INTENT_() { return get_static_field<SCAPIX_META_STRING("KEY_INTENT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_LAST_AUTHENTICATED_TIME_() { return get_static_field<SCAPIX_META_STRING("KEY_LAST_AUTHENTICATED_TIME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_PASSWORD_() { return get_static_field<SCAPIX_META_STRING("KEY_PASSWORD"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::KEY_USERDATA_() { return get_static_field<SCAPIX_META_STRING("KEY_USERDATA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::LOGIN_ACCOUNTS_CHANGED_ACTION_() { return get_static_field<SCAPIX_META_STRING("LOGIN_ACCOUNTS_CHANGED_ACTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE_() { return get_static_field<SCAPIX_META_STRING("PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> AccountManager::PACKAGE_NAME_KEY_LEGACY_VISIBLE_() { return get_static_field<SCAPIX_META_STRING("PACKAGE_NAME_KEY_LEGACY_VISIBLE"), ref<java::lang::String>>(); }
inline jint AccountManager::VISIBILITY_NOT_VISIBLE_() { return get_static_field<SCAPIX_META_STRING("VISIBILITY_NOT_VISIBLE"), jint>(); }
inline jint AccountManager::VISIBILITY_UNDEFINED_() { return get_static_field<SCAPIX_META_STRING("VISIBILITY_UNDEFINED"), jint>(); }
inline jint AccountManager::VISIBILITY_USER_MANAGED_NOT_VISIBLE_() { return get_static_field<SCAPIX_META_STRING("VISIBILITY_USER_MANAGED_NOT_VISIBLE"), jint>(); }
inline jint AccountManager::VISIBILITY_USER_MANAGED_VISIBLE_() { return get_static_field<SCAPIX_META_STRING("VISIBILITY_USER_MANAGED_VISIBLE"), jint>(); }
inline jint AccountManager::VISIBILITY_VISIBLE_() { return get_static_field<SCAPIX_META_STRING("VISIBILITY_VISIBLE"), jint>(); }
inline ref<android::accounts::AccountManager> AccountManager::get(ref<android::content::Context> context) { return call_static_method<SCAPIX_META_STRING("get"), ref<android::accounts::AccountManager>>(context); }
inline ref<java::lang::String> AccountManager::getPassword(ref<android::accounts::Account> account) { return call_method<SCAPIX_META_STRING("getPassword"), ref<java::lang::String>>(account); }
inline ref<java::lang::String> AccountManager::getUserData(ref<android::accounts::Account> account, ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("getUserData"), ref<java::lang::String>>(account, key); }
inline ref<link::java::array<android::accounts::AuthenticatorDescription>> AccountManager::getAuthenticatorTypes() { return call_method<SCAPIX_META_STRING("getAuthenticatorTypes"), ref<link::java::array<android::accounts::AuthenticatorDescription>>>(); }
inline ref<link::java::array<android::accounts::Account>> AccountManager::getAccounts() { return call_method<SCAPIX_META_STRING("getAccounts"), ref<link::java::array<android::accounts::Account>>>(); }
inline ref<link::java::array<android::accounts::Account>> AccountManager::getAccountsByTypeForPackage(ref<java::lang::String> type, ref<java::lang::String> packageName) { return call_method<SCAPIX_META_STRING("getAccountsByTypeForPackage"), ref<link::java::array<android::accounts::Account>>>(type, packageName); }
inline ref<link::java::array<android::accounts::Account>> AccountManager::getAccountsByType(ref<java::lang::String> type) { return call_method<SCAPIX_META_STRING("getAccountsByType"), ref<link::java::array<android::accounts::Account>>>(type); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::hasFeatures(ref<android::accounts::Account> account, ref<link::java::array<java::lang::String>> features, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("hasFeatures"), ref<android::accounts::AccountManagerFuture>>(account, features, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::getAccountsByTypeAndFeatures(ref<java::lang::String> type, ref<link::java::array<java::lang::String>> features, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("getAccountsByTypeAndFeatures"), ref<android::accounts::AccountManagerFuture>>(type, features, callback, handler); }
inline jboolean AccountManager::addAccountExplicitly(ref<android::accounts::Account> account, ref<java::lang::String> password, ref<android::os::Bundle> userdata) { return call_method<SCAPIX_META_STRING("addAccountExplicitly"), jboolean>(account, password, userdata); }
inline jboolean AccountManager::addAccountExplicitly(ref<android::accounts::Account> account, ref<java::lang::String> password, ref<android::os::Bundle> extras, ref<java::util::Map> visibility) { return call_method<SCAPIX_META_STRING("addAccountExplicitly"), jboolean>(account, password, extras, visibility); }
inline ref<java::util::Map> AccountManager::getPackagesAndVisibilityForAccount(ref<android::accounts::Account> account) { return call_method<SCAPIX_META_STRING("getPackagesAndVisibilityForAccount"), ref<java::util::Map>>(account); }
inline ref<java::util::Map> AccountManager::getAccountsAndVisibilityForPackage(ref<java::lang::String> packageName, ref<java::lang::String> accountType) { return call_method<SCAPIX_META_STRING("getAccountsAndVisibilityForPackage"), ref<java::util::Map>>(packageName, accountType); }
inline jboolean AccountManager::setAccountVisibility(ref<android::accounts::Account> account, ref<java::lang::String> packageName, jint visibility) { return call_method<SCAPIX_META_STRING("setAccountVisibility"), jboolean>(account, packageName, visibility); }
inline jint AccountManager::getAccountVisibility(ref<android::accounts::Account> account, ref<java::lang::String> packageName) { return call_method<SCAPIX_META_STRING("getAccountVisibility"), jint>(account, packageName); }
inline jboolean AccountManager::notifyAccountAuthenticated(ref<android::accounts::Account> account) { return call_method<SCAPIX_META_STRING("notifyAccountAuthenticated"), jboolean>(account); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::renameAccount(ref<android::accounts::Account> account, ref<java::lang::String> newName, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("renameAccount"), ref<android::accounts::AccountManagerFuture>>(account, newName, callback, handler); }
inline ref<java::lang::String> AccountManager::getPreviousName(ref<android::accounts::Account> account) { return call_method<SCAPIX_META_STRING("getPreviousName"), ref<java::lang::String>>(account); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::removeAccount(ref<android::accounts::Account> account, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("removeAccount"), ref<android::accounts::AccountManagerFuture>>(account, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::removeAccount(ref<android::accounts::Account> account, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("removeAccount"), ref<android::accounts::AccountManagerFuture>>(account, activity, callback, handler); }
inline jboolean AccountManager::removeAccountExplicitly(ref<android::accounts::Account> account) { return call_method<SCAPIX_META_STRING("removeAccountExplicitly"), jboolean>(account); }
inline void AccountManager::invalidateAuthToken(ref<java::lang::String> accountType, ref<java::lang::String> authToken) { return call_method<SCAPIX_META_STRING("invalidateAuthToken"), void>(accountType, authToken); }
inline ref<java::lang::String> AccountManager::peekAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType) { return call_method<SCAPIX_META_STRING("peekAuthToken"), ref<java::lang::String>>(account, authTokenType); }
inline void AccountManager::setPassword(ref<android::accounts::Account> account, ref<java::lang::String> password) { return call_method<SCAPIX_META_STRING("setPassword"), void>(account, password); }
inline void AccountManager::clearPassword(ref<android::accounts::Account> account) { return call_method<SCAPIX_META_STRING("clearPassword"), void>(account); }
inline void AccountManager::setUserData(ref<android::accounts::Account> account, ref<java::lang::String> key, ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("setUserData"), void>(account, key, value); }
inline void AccountManager::setAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, ref<java::lang::String> authToken) { return call_method<SCAPIX_META_STRING("setAuthToken"), void>(account, authTokenType, authToken); }
inline ref<java::lang::String> AccountManager::blockingGetAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, jboolean notifyAuthFailure) { return call_method<SCAPIX_META_STRING("blockingGetAuthToken"), ref<java::lang::String>>(account, authTokenType, notifyAuthFailure); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::getAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, ref<android::os::Bundle> options, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("getAuthToken"), ref<android::accounts::AccountManagerFuture>>(account, authTokenType, options, activity, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::getAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, jboolean notifyAuthFailure, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("getAuthToken"), ref<android::accounts::AccountManagerFuture>>(account, authTokenType, notifyAuthFailure, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::getAuthToken(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, ref<android::os::Bundle> options, jboolean notifyAuthFailure, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("getAuthToken"), ref<android::accounts::AccountManagerFuture>>(account, authTokenType, options, notifyAuthFailure, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::addAccount(ref<java::lang::String> accountType, ref<java::lang::String> authTokenType, ref<link::java::array<java::lang::String>> requiredFeatures, ref<android::os::Bundle> addAccountOptions, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("addAccount"), ref<android::accounts::AccountManagerFuture>>(accountType, authTokenType, requiredFeatures, addAccountOptions, activity, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::confirmCredentials(ref<android::accounts::Account> account, ref<android::os::Bundle> options, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("confirmCredentials"), ref<android::accounts::AccountManagerFuture>>(account, options, activity, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::updateCredentials(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, ref<android::os::Bundle> options, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("updateCredentials"), ref<android::accounts::AccountManagerFuture>>(account, authTokenType, options, activity, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::editProperties(ref<java::lang::String> accountType, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("editProperties"), ref<android::accounts::AccountManagerFuture>>(accountType, activity, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::getAuthTokenByFeatures(ref<java::lang::String> accountType, ref<java::lang::String> authTokenType, ref<link::java::array<java::lang::String>> features, ref<android::app::Activity> activity, ref<android::os::Bundle> addAccountOptions, ref<android::os::Bundle> getAuthTokenOptions, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("getAuthTokenByFeatures"), ref<android::accounts::AccountManagerFuture>>(accountType, authTokenType, features, activity, addAccountOptions, getAuthTokenOptions, callback, handler); }
inline ref<android::content::Intent> AccountManager::newChooseAccountIntent(ref<android::accounts::Account> selectedAccount, ref<java::util::ArrayList> allowableAccounts, ref<link::java::array<java::lang::String>> allowableAccountTypes, jboolean alwaysPromptForAccount, ref<java::lang::String> descriptionOverrideText, ref<java::lang::String> addAccountAuthTokenType, ref<link::java::array<java::lang::String>> addAccountRequiredFeatures, ref<android::os::Bundle> addAccountOptions) { return call_static_method<SCAPIX_META_STRING("newChooseAccountIntent"), ref<android::content::Intent>>(selectedAccount, allowableAccounts, allowableAccountTypes, alwaysPromptForAccount, descriptionOverrideText, addAccountAuthTokenType, addAccountRequiredFeatures, addAccountOptions); }
inline ref<android::content::Intent> AccountManager::newChooseAccountIntent(ref<android::accounts::Account> selectedAccount, ref<java::util::List> allowableAccounts, ref<link::java::array<java::lang::String>> allowableAccountTypes, ref<java::lang::String> descriptionOverrideText, ref<java::lang::String> addAccountAuthTokenType, ref<link::java::array<java::lang::String>> addAccountRequiredFeatures, ref<android::os::Bundle> addAccountOptions) { return call_static_method<SCAPIX_META_STRING("newChooseAccountIntent"), ref<android::content::Intent>>(selectedAccount, allowableAccounts, allowableAccountTypes, descriptionOverrideText, addAccountAuthTokenType, addAccountRequiredFeatures, addAccountOptions); }
inline void AccountManager::addOnAccountsUpdatedListener(ref<android::accounts::OnAccountsUpdateListener> listener, ref<android::os::Handler> handler, jboolean updateImmediately) { return call_method<SCAPIX_META_STRING("addOnAccountsUpdatedListener"), void>(listener, handler, updateImmediately); }
inline void AccountManager::addOnAccountsUpdatedListener(ref<android::accounts::OnAccountsUpdateListener> listener, ref<android::os::Handler> handler, jboolean updateImmediately, ref<link::java::array<java::lang::String>> accountTypes) { return call_method<SCAPIX_META_STRING("addOnAccountsUpdatedListener"), void>(listener, handler, updateImmediately, accountTypes); }
inline void AccountManager::removeOnAccountsUpdatedListener(ref<android::accounts::OnAccountsUpdateListener> listener) { return call_method<SCAPIX_META_STRING("removeOnAccountsUpdatedListener"), void>(listener); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::startAddAccountSession(ref<java::lang::String> accountType, ref<java::lang::String> authTokenType, ref<link::java::array<java::lang::String>> requiredFeatures, ref<android::os::Bundle> options, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("startAddAccountSession"), ref<android::accounts::AccountManagerFuture>>(accountType, authTokenType, requiredFeatures, options, activity, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::startUpdateCredentialsSession(ref<android::accounts::Account> account, ref<java::lang::String> authTokenType, ref<android::os::Bundle> options, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("startUpdateCredentialsSession"), ref<android::accounts::AccountManagerFuture>>(account, authTokenType, options, activity, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::finishSession(ref<android::os::Bundle> sessionBundle, ref<android::app::Activity> activity, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("finishSession"), ref<android::accounts::AccountManagerFuture>>(sessionBundle, activity, callback, handler); }
inline ref<android::accounts::AccountManagerFuture> AccountManager::isCredentialsUpdateSuggested(ref<android::accounts::Account> account, ref<java::lang::String> statusToken, ref<android::accounts::AccountManagerCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("isCredentialsUpdateSuggested"), ref<android::accounts::AccountManagerFuture>>(account, statusToken, callback, handler); }

} // namespace android::accounts
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ACCOUNTS_ACCOUNTMANAGER_H
