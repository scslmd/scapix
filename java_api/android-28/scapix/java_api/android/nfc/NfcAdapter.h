// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NFC_NFCADAPTER_H
#define SCAPIX_ANDROID_NFC_NFCADAPTER_H

namespace scapix::java_api {

namespace android::app { class Activity; }
namespace android::app { class PendingIntent; }
namespace android::content { class Context; }
namespace android::content { class IntentFilter; }
namespace android::net { class Uri; }
namespace android::nfc { class NdefMessage; }
namespace android::nfc { class NfcAdapter_CreateBeamUrisCallback; }
namespace android::nfc { class NfcAdapter_CreateNdefMessageCallback; }
namespace android::nfc { class NfcAdapter_OnNdefPushCompleteCallback; }
namespace android::nfc { class NfcAdapter_OnTagRemovedListener; }
namespace android::nfc { class NfcAdapter_ReaderCallback; }
namespace android::nfc { class Tag; }
namespace android::os { class Bundle; }
namespace android::os { class Handler; }
namespace java::lang { class String; }

namespace android::nfc {

class NfcAdapter : public object_base<SCAPIX_META_STRING("android/nfc/NfcAdapter"),
	java::lang::Object>
{
public:

	using ReaderCallback = NfcAdapter_ReaderCallback;
	using OnTagRemovedListener = NfcAdapter_OnTagRemovedListener;
	using OnNdefPushCompleteCallback = NfcAdapter_OnNdefPushCompleteCallback;
	using CreateNdefMessageCallback = NfcAdapter_CreateNdefMessageCallback;
	using CreateBeamUrisCallback = NfcAdapter_CreateBeamUrisCallback;

	static ref<java::lang::String> ACTION_ADAPTER_STATE_CHANGED_();
	static ref<java::lang::String> ACTION_NDEF_DISCOVERED_();
	static ref<java::lang::String> ACTION_TAG_DISCOVERED_();
	static ref<java::lang::String> ACTION_TECH_DISCOVERED_();
	static ref<java::lang::String> ACTION_TRANSACTION_DETECTED_();
	static ref<java::lang::String> EXTRA_ADAPTER_STATE_();
	static ref<java::lang::String> EXTRA_AID_();
	static ref<java::lang::String> EXTRA_DATA_();
	static ref<java::lang::String> EXTRA_ID_();
	static ref<java::lang::String> EXTRA_NDEF_MESSAGES_();
	static ref<java::lang::String> EXTRA_READER_PRESENCE_CHECK_DELAY_();
	static ref<java::lang::String> EXTRA_SECURE_ELEMENT_NAME_();
	static ref<java::lang::String> EXTRA_TAG_();
	static jint FLAG_READER_NFC_A_();
	static jint FLAG_READER_NFC_B_();
	static jint FLAG_READER_NFC_BARCODE_();
	static jint FLAG_READER_NFC_F_();
	static jint FLAG_READER_NFC_V_();
	static jint FLAG_READER_NO_PLATFORM_SOUNDS_();
	static jint FLAG_READER_SKIP_NDEF_CHECK_();
	static jint STATE_OFF_();
	static jint STATE_ON_();
	static jint STATE_TURNING_OFF_();
	static jint STATE_TURNING_ON_();

	static ref<android::nfc::NfcAdapter> getDefaultAdapter(ref<android::content::Context> context);
	jboolean isEnabled();
	void setBeamPushUris(ref<link::java::array<android::net::Uri>> uris, ref<android::app::Activity> activity);
	void setBeamPushUrisCallback(ref<android::nfc::NfcAdapter_CreateBeamUrisCallback> callback, ref<android::app::Activity> activity);
	void setNdefPushMessage(ref<android::nfc::NdefMessage> message, ref<android::app::Activity> activity, ref<link::java::array<android::app::Activity>> activities);
	void setNdefPushMessageCallback(ref<android::nfc::NfcAdapter_CreateNdefMessageCallback> callback, ref<android::app::Activity> activity, ref<link::java::array<android::app::Activity>> activities);
	void setOnNdefPushCompleteCallback(ref<android::nfc::NfcAdapter_OnNdefPushCompleteCallback> callback, ref<android::app::Activity> activity, ref<link::java::array<android::app::Activity>> activities);
	void enableForegroundDispatch(ref<android::app::Activity> activity, ref<android::app::PendingIntent> intent, ref<link::java::array<android::content::IntentFilter>> filters, ref<link::java::array<link::java::array<java::lang::String>>> techLists);
	void disableForegroundDispatch(ref<android::app::Activity> activity);
	void enableReaderMode(ref<android::app::Activity> activity, ref<android::nfc::NfcAdapter_ReaderCallback> callback, jint flags, ref<android::os::Bundle> extras);
	void disableReaderMode(ref<android::app::Activity> activity);
	jboolean invokeBeam(ref<android::app::Activity> activity);
	void enableForegroundNdefPush(ref<android::app::Activity> activity, ref<android::nfc::NdefMessage> message);
	void disableForegroundNdefPush(ref<android::app::Activity> activity);
	jboolean isNdefPushEnabled();
	jboolean ignore(ref<android::nfc::Tag> tag, jint debounceMs, ref<android::nfc::NfcAdapter_OnTagRemovedListener> tagRemovedListener, ref<android::os::Handler> handler);

protected:

	NfcAdapter(handle_type h) : base_(h) {}

};

} // namespace android::nfc
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/IntentFilter.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/nfc/NdefMessage.h>
#include <scapix/java_api/android/nfc/NfcAdapter_CreateBeamUrisCallback.h>
#include <scapix/java_api/android/nfc/NfcAdapter_CreateNdefMessageCallback.h>
#include <scapix/java_api/android/nfc/NfcAdapter_OnNdefPushCompleteCallback.h>
#include <scapix/java_api/android/nfc/NfcAdapter_OnTagRemovedListener.h>
#include <scapix/java_api/android/nfc/NfcAdapter_ReaderCallback.h>
#include <scapix/java_api/android/nfc/Tag.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::nfc {

inline ref<java::lang::String> NfcAdapter::ACTION_ADAPTER_STATE_CHANGED_() { return get_static_field<SCAPIX_META_STRING("ACTION_ADAPTER_STATE_CHANGED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::ACTION_NDEF_DISCOVERED_() { return get_static_field<SCAPIX_META_STRING("ACTION_NDEF_DISCOVERED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::ACTION_TAG_DISCOVERED_() { return get_static_field<SCAPIX_META_STRING("ACTION_TAG_DISCOVERED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::ACTION_TECH_DISCOVERED_() { return get_static_field<SCAPIX_META_STRING("ACTION_TECH_DISCOVERED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::ACTION_TRANSACTION_DETECTED_() { return get_static_field<SCAPIX_META_STRING("ACTION_TRANSACTION_DETECTED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::EXTRA_ADAPTER_STATE_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ADAPTER_STATE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::EXTRA_AID_() { return get_static_field<SCAPIX_META_STRING("EXTRA_AID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::EXTRA_DATA_() { return get_static_field<SCAPIX_META_STRING("EXTRA_DATA"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::EXTRA_ID_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::EXTRA_NDEF_MESSAGES_() { return get_static_field<SCAPIX_META_STRING("EXTRA_NDEF_MESSAGES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::EXTRA_READER_PRESENCE_CHECK_DELAY_() { return get_static_field<SCAPIX_META_STRING("EXTRA_READER_PRESENCE_CHECK_DELAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::EXTRA_SECURE_ELEMENT_NAME_() { return get_static_field<SCAPIX_META_STRING("EXTRA_SECURE_ELEMENT_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> NfcAdapter::EXTRA_TAG_() { return get_static_field<SCAPIX_META_STRING("EXTRA_TAG"), ref<java::lang::String>>(); }
inline jint NfcAdapter::FLAG_READER_NFC_A_() { return get_static_field<SCAPIX_META_STRING("FLAG_READER_NFC_A"), jint>(); }
inline jint NfcAdapter::FLAG_READER_NFC_B_() { return get_static_field<SCAPIX_META_STRING("FLAG_READER_NFC_B"), jint>(); }
inline jint NfcAdapter::FLAG_READER_NFC_BARCODE_() { return get_static_field<SCAPIX_META_STRING("FLAG_READER_NFC_BARCODE"), jint>(); }
inline jint NfcAdapter::FLAG_READER_NFC_F_() { return get_static_field<SCAPIX_META_STRING("FLAG_READER_NFC_F"), jint>(); }
inline jint NfcAdapter::FLAG_READER_NFC_V_() { return get_static_field<SCAPIX_META_STRING("FLAG_READER_NFC_V"), jint>(); }
inline jint NfcAdapter::FLAG_READER_NO_PLATFORM_SOUNDS_() { return get_static_field<SCAPIX_META_STRING("FLAG_READER_NO_PLATFORM_SOUNDS"), jint>(); }
inline jint NfcAdapter::FLAG_READER_SKIP_NDEF_CHECK_() { return get_static_field<SCAPIX_META_STRING("FLAG_READER_SKIP_NDEF_CHECK"), jint>(); }
inline jint NfcAdapter::STATE_OFF_() { return get_static_field<SCAPIX_META_STRING("STATE_OFF"), jint>(); }
inline jint NfcAdapter::STATE_ON_() { return get_static_field<SCAPIX_META_STRING("STATE_ON"), jint>(); }
inline jint NfcAdapter::STATE_TURNING_OFF_() { return get_static_field<SCAPIX_META_STRING("STATE_TURNING_OFF"), jint>(); }
inline jint NfcAdapter::STATE_TURNING_ON_() { return get_static_field<SCAPIX_META_STRING("STATE_TURNING_ON"), jint>(); }
inline ref<android::nfc::NfcAdapter> NfcAdapter::getDefaultAdapter(ref<android::content::Context> context) { return call_static_method<SCAPIX_META_STRING("getDefaultAdapter"), ref<android::nfc::NfcAdapter>>(context); }
inline jboolean NfcAdapter::isEnabled() { return call_method<SCAPIX_META_STRING("isEnabled"), jboolean>(); }
inline void NfcAdapter::setBeamPushUris(ref<link::java::array<android::net::Uri>> uris, ref<android::app::Activity> activity) { return call_method<SCAPIX_META_STRING("setBeamPushUris"), void>(uris, activity); }
inline void NfcAdapter::setBeamPushUrisCallback(ref<android::nfc::NfcAdapter_CreateBeamUrisCallback> callback, ref<android::app::Activity> activity) { return call_method<SCAPIX_META_STRING("setBeamPushUrisCallback"), void>(callback, activity); }
inline void NfcAdapter::setNdefPushMessage(ref<android::nfc::NdefMessage> message, ref<android::app::Activity> activity, ref<link::java::array<android::app::Activity>> activities) { return call_method<SCAPIX_META_STRING("setNdefPushMessage"), void>(message, activity, activities); }
inline void NfcAdapter::setNdefPushMessageCallback(ref<android::nfc::NfcAdapter_CreateNdefMessageCallback> callback, ref<android::app::Activity> activity, ref<link::java::array<android::app::Activity>> activities) { return call_method<SCAPIX_META_STRING("setNdefPushMessageCallback"), void>(callback, activity, activities); }
inline void NfcAdapter::setOnNdefPushCompleteCallback(ref<android::nfc::NfcAdapter_OnNdefPushCompleteCallback> callback, ref<android::app::Activity> activity, ref<link::java::array<android::app::Activity>> activities) { return call_method<SCAPIX_META_STRING("setOnNdefPushCompleteCallback"), void>(callback, activity, activities); }
inline void NfcAdapter::enableForegroundDispatch(ref<android::app::Activity> activity, ref<android::app::PendingIntent> intent, ref<link::java::array<android::content::IntentFilter>> filters, ref<link::java::array<link::java::array<java::lang::String>>> techLists) { return call_method<SCAPIX_META_STRING("enableForegroundDispatch"), void>(activity, intent, filters, techLists); }
inline void NfcAdapter::disableForegroundDispatch(ref<android::app::Activity> activity) { return call_method<SCAPIX_META_STRING("disableForegroundDispatch"), void>(activity); }
inline void NfcAdapter::enableReaderMode(ref<android::app::Activity> activity, ref<android::nfc::NfcAdapter_ReaderCallback> callback, jint flags, ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("enableReaderMode"), void>(activity, callback, flags, extras); }
inline void NfcAdapter::disableReaderMode(ref<android::app::Activity> activity) { return call_method<SCAPIX_META_STRING("disableReaderMode"), void>(activity); }
inline jboolean NfcAdapter::invokeBeam(ref<android::app::Activity> activity) { return call_method<SCAPIX_META_STRING("invokeBeam"), jboolean>(activity); }
inline void NfcAdapter::enableForegroundNdefPush(ref<android::app::Activity> activity, ref<android::nfc::NdefMessage> message) { return call_method<SCAPIX_META_STRING("enableForegroundNdefPush"), void>(activity, message); }
inline void NfcAdapter::disableForegroundNdefPush(ref<android::app::Activity> activity) { return call_method<SCAPIX_META_STRING("disableForegroundNdefPush"), void>(activity); }
inline jboolean NfcAdapter::isNdefPushEnabled() { return call_method<SCAPIX_META_STRING("isNdefPushEnabled"), jboolean>(); }
inline jboolean NfcAdapter::ignore(ref<android::nfc::Tag> tag, jint debounceMs, ref<android::nfc::NfcAdapter_OnTagRemovedListener> tagRemovedListener, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("ignore"), jboolean>(tag, debounceMs, tagRemovedListener, handler); }

} // namespace android::nfc
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NFC_NFCADAPTER_H
