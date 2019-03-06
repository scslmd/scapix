// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/GeneralSecurityException.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_H
#define SCAPIX_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }
namespace java::security::cert { class CertPath; }
namespace java::security::cert { class CertPathValidatorException_Reason; }
namespace java::security::cert { class CertPathValidatorException_BasicReason; }

namespace java::security::cert {

class CertPathValidatorException : public object_base<SCAPIX_META_STRING("java/security/cert/CertPathValidatorException"),
	java::security::GeneralSecurityException>
{
public:

	using BasicReason = CertPathValidatorException_BasicReason;
	using Reason = CertPathValidatorException_Reason;

	static ref<CertPathValidatorException> new_object();
	static ref<CertPathValidatorException> new_object(ref<java::lang::String> msg);
	static ref<CertPathValidatorException> new_object(ref<java::lang::Throwable> cause);
	static ref<CertPathValidatorException> new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause);
	static ref<CertPathValidatorException> new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause, ref<java::security::cert::CertPath> certPath, jint index);
	static ref<CertPathValidatorException> new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause, ref<java::security::cert::CertPath> certPath, jint index, ref<java::security::cert::CertPathValidatorException_Reason> reason);
	ref<java::security::cert::CertPath> getCertPath();
	jint getIndex();
	ref<java::security::cert::CertPathValidatorException_Reason> getReason();

protected:

	CertPathValidatorException(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/security/cert/CertPath.h>
#include <scapix/java_api/java/security/cert/CertPathValidatorException_Reason.h>

namespace scapix::java_api {
namespace java::security::cert {

inline ref<CertPathValidatorException> CertPathValidatorException::new_object() { return base_::new_object(); }
inline ref<CertPathValidatorException> CertPathValidatorException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }
inline ref<CertPathValidatorException> CertPathValidatorException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
inline ref<CertPathValidatorException> CertPathValidatorException::new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause) { return base_::new_object(msg, cause); }
inline ref<CertPathValidatorException> CertPathValidatorException::new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause, ref<java::security::cert::CertPath> certPath, jint index) { return base_::new_object(msg, cause, certPath, index); }
inline ref<CertPathValidatorException> CertPathValidatorException::new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause, ref<java::security::cert::CertPath> certPath, jint index, ref<java::security::cert::CertPathValidatorException_Reason> reason) { return base_::new_object(msg, cause, certPath, index, reason); }
inline ref<java::security::cert::CertPath> CertPathValidatorException::getCertPath() { return call_method<SCAPIX_META_STRING("getCertPath"), ref<java::security::cert::CertPath>>(); }
inline jint CertPathValidatorException::getIndex() { return call_method<SCAPIX_META_STRING("getIndex"), jint>(); }
inline ref<java::security::cert::CertPathValidatorException_Reason> CertPathValidatorException::getReason() { return call_method<SCAPIX_META_STRING("getReason"), ref<java::security::cert::CertPathValidatorException_Reason>>(); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_H
