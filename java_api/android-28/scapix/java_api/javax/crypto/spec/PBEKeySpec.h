// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>

#ifndef SCAPIX_JAVAX_CRYPTO_SPEC_PBEKEYSPEC_H
#define SCAPIX_JAVAX_CRYPTO_SPEC_PBEKEYSPEC_H

namespace scapix::java_api {
namespace javax::crypto::spec {

class PBEKeySpec : public object_base<SCAPIX_META_STRING("javax/crypto/spec/PBEKeySpec"),
	java::lang::Object,
	java::security::spec::KeySpec>
{
public:

	static ref<PBEKeySpec> new_object(ref<link::java::array<jchar>> password);
	static ref<PBEKeySpec> new_object(ref<link::java::array<jchar>> password, ref<link::java::array<jbyte>> salt, jint iterationCount, jint keyLength);
	static ref<PBEKeySpec> new_object(ref<link::java::array<jchar>> password, ref<link::java::array<jbyte>> salt, jint iterationCount);
	void clearPassword();
	ref<link::java::array<jchar>> getPassword();
	ref<link::java::array<jbyte>> getSalt();
	jint getIterationCount();
	jint getKeyLength();

protected:

	PBEKeySpec(handle_type h) : base_(h) {}

};

} // namespace javax::crypto::spec
} // namespace scapix::java_api


namespace scapix::java_api {
namespace javax::crypto::spec {

inline ref<PBEKeySpec> PBEKeySpec::new_object(ref<link::java::array<jchar>> password) { return base_::new_object(password); }
inline ref<PBEKeySpec> PBEKeySpec::new_object(ref<link::java::array<jchar>> password, ref<link::java::array<jbyte>> salt, jint iterationCount, jint keyLength) { return base_::new_object(password, salt, iterationCount, keyLength); }
inline ref<PBEKeySpec> PBEKeySpec::new_object(ref<link::java::array<jchar>> password, ref<link::java::array<jbyte>> salt, jint iterationCount) { return base_::new_object(password, salt, iterationCount); }
inline void PBEKeySpec::clearPassword() { return call_method<SCAPIX_META_STRING("clearPassword"), void>(); }
inline ref<link::java::array<jchar>> PBEKeySpec::getPassword() { return call_method<SCAPIX_META_STRING("getPassword"), ref<link::java::array<jchar>>>(); }
inline ref<link::java::array<jbyte>> PBEKeySpec::getSalt() { return call_method<SCAPIX_META_STRING("getSalt"), ref<link::java::array<jbyte>>>(); }
inline jint PBEKeySpec::getIterationCount() { return call_method<SCAPIX_META_STRING("getIterationCount"), jint>(); }
inline jint PBEKeySpec::getKeyLength() { return call_method<SCAPIX_META_STRING("getKeyLength"), jint>(); }

} // namespace javax::crypto::spec
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_CRYPTO_SPEC_PBEKEYSPEC_H
