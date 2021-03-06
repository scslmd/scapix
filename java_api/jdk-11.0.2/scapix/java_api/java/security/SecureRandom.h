// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/Random.h>

#ifndef SCAPIX_JAVA_SECURITY_SECURERANDOM_H
#define SCAPIX_JAVA_SECURITY_SECURERANDOM_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class Provider; }
namespace java::security { class SecureRandomParameters; }

namespace java::security {

class SecureRandom : public object_base<SCAPIX_META_STRING("java/security/SecureRandom"),
	java::util::Random>
{
public:

	static ref<SecureRandom> new_object();
	static ref<SecureRandom> new_object(ref<link::java::array<jbyte>> seed);
	static ref<java::security::SecureRandom> getInstance(ref<java::lang::String> algorithm);
	static ref<java::security::SecureRandom> getInstance(ref<java::lang::String> algorithm, ref<java::lang::String> provider);
	static ref<java::security::SecureRandom> getInstance(ref<java::lang::String> algorithm, ref<java::security::Provider> provider);
	static ref<java::security::SecureRandom> getInstance(ref<java::lang::String> algorithm, ref<java::security::SecureRandomParameters> params);
	static ref<java::security::SecureRandom> getInstance(ref<java::lang::String> algorithm, ref<java::security::SecureRandomParameters> params, ref<java::lang::String> provider);
	static ref<java::security::SecureRandom> getInstance(ref<java::lang::String> algorithm, ref<java::security::SecureRandomParameters> params, ref<java::security::Provider> provider);
	ref<java::security::Provider> getProvider();
	ref<java::lang::String> getAlgorithm();
	ref<java::lang::String> toString();
	ref<java::security::SecureRandomParameters> getParameters();
	void setSeed(ref<link::java::array<jbyte>> seed);
	void setSeed(jlong seed);
	void nextBytes(ref<link::java::array<jbyte>> bytes);
	void nextBytes(ref<link::java::array<jbyte>> bytes, ref<java::security::SecureRandomParameters> params);
	static ref<link::java::array<jbyte>> getSeed(jint numBytes);
	ref<link::java::array<jbyte>> generateSeed(jint numBytes);
	static ref<java::security::SecureRandom> getInstanceStrong();
	void reseed();
	void reseed(ref<java::security::SecureRandomParameters> params);

protected:

	SecureRandom(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/SecureRandomParameters.h>

namespace scapix::java_api {
namespace java::security {

inline ref<SecureRandom> SecureRandom::new_object() { return base_::new_object(); }
inline ref<SecureRandom> SecureRandom::new_object(ref<link::java::array<jbyte>> seed) { return base_::new_object(seed); }
inline ref<java::security::SecureRandom> SecureRandom::getInstance(ref<java::lang::String> algorithm) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::SecureRandom>>(algorithm); }
inline ref<java::security::SecureRandom> SecureRandom::getInstance(ref<java::lang::String> algorithm, ref<java::lang::String> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::SecureRandom>>(algorithm, provider); }
inline ref<java::security::SecureRandom> SecureRandom::getInstance(ref<java::lang::String> algorithm, ref<java::security::Provider> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::SecureRandom>>(algorithm, provider); }
inline ref<java::security::SecureRandom> SecureRandom::getInstance(ref<java::lang::String> algorithm, ref<java::security::SecureRandomParameters> params) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::SecureRandom>>(algorithm, params); }
inline ref<java::security::SecureRandom> SecureRandom::getInstance(ref<java::lang::String> algorithm, ref<java::security::SecureRandomParameters> params, ref<java::lang::String> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::SecureRandom>>(algorithm, params, provider); }
inline ref<java::security::SecureRandom> SecureRandom::getInstance(ref<java::lang::String> algorithm, ref<java::security::SecureRandomParameters> params, ref<java::security::Provider> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::SecureRandom>>(algorithm, params, provider); }
inline ref<java::security::Provider> SecureRandom::getProvider() { return call_method<SCAPIX_META_STRING("getProvider"), ref<java::security::Provider>>(); }
inline ref<java::lang::String> SecureRandom::getAlgorithm() { return call_method<SCAPIX_META_STRING("getAlgorithm"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SecureRandom::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::security::SecureRandomParameters> SecureRandom::getParameters() { return call_method<SCAPIX_META_STRING("getParameters"), ref<java::security::SecureRandomParameters>>(); }
inline void SecureRandom::setSeed(ref<link::java::array<jbyte>> seed) { return call_method<SCAPIX_META_STRING("setSeed"), void>(seed); }
inline void SecureRandom::setSeed(jlong seed) { return call_method<SCAPIX_META_STRING("setSeed"), void>(seed); }
inline void SecureRandom::nextBytes(ref<link::java::array<jbyte>> bytes) { return call_method<SCAPIX_META_STRING("nextBytes"), void>(bytes); }
inline void SecureRandom::nextBytes(ref<link::java::array<jbyte>> bytes, ref<java::security::SecureRandomParameters> params) { return call_method<SCAPIX_META_STRING("nextBytes"), void>(bytes, params); }
inline ref<link::java::array<jbyte>> SecureRandom::getSeed(jint numBytes) { return call_static_method<SCAPIX_META_STRING("getSeed"), ref<link::java::array<jbyte>>>(numBytes); }
inline ref<link::java::array<jbyte>> SecureRandom::generateSeed(jint numBytes) { return call_method<SCAPIX_META_STRING("generateSeed"), ref<link::java::array<jbyte>>>(numBytes); }
inline ref<java::security::SecureRandom> SecureRandom::getInstanceStrong() { return call_static_method<SCAPIX_META_STRING("getInstanceStrong"), ref<java::security::SecureRandom>>(); }
inline void SecureRandom::reseed() { return call_method<SCAPIX_META_STRING("reseed"), void>(); }
inline void SecureRandom::reseed(ref<java::security::SecureRandomParameters> params) { return call_method<SCAPIX_META_STRING("reseed"), void>(params); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_SECURERANDOM_H
