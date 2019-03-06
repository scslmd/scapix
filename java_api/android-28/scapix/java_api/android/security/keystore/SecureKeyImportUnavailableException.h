// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/ProviderException.h>

#ifndef SCAPIX_ANDROID_SECURITY_KEYSTORE_SECUREKEYIMPORTUNAVAILABLEEXCEPTION_H
#define SCAPIX_ANDROID_SECURITY_KEYSTORE_SECUREKEYIMPORTUNAVAILABLEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace android::security::keystore {

class SecureKeyImportUnavailableException : public object_base<SCAPIX_META_STRING("android/security/keystore/SecureKeyImportUnavailableException"),
	java::security::ProviderException>
{
public:

	static ref<SecureKeyImportUnavailableException> new_object();
	static ref<SecureKeyImportUnavailableException> new_object(ref<java::lang::String> message);
	static ref<SecureKeyImportUnavailableException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<SecureKeyImportUnavailableException> new_object(ref<java::lang::Throwable> cause);

protected:

	SecureKeyImportUnavailableException(handle_type h) : base_(h) {}

};

} // namespace android::security::keystore
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace android::security::keystore {

inline ref<SecureKeyImportUnavailableException> SecureKeyImportUnavailableException::new_object() { return base_::new_object(); }
inline ref<SecureKeyImportUnavailableException> SecureKeyImportUnavailableException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<SecureKeyImportUnavailableException> SecureKeyImportUnavailableException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<SecureKeyImportUnavailableException> SecureKeyImportUnavailableException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace android::security::keystore
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SECURITY_KEYSTORE_SECUREKEYIMPORTUNAVAILABLEEXCEPTION_H
