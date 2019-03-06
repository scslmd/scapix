// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR_H
#define SCAPIX_JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class AlgorithmParameters; }
namespace java::security { class Provider; }
namespace java::security { class SecureRandom; }
namespace java::security::spec { class AlgorithmParameterSpec; }

namespace java::security {

class AlgorithmParameterGenerator : public object_base<SCAPIX_META_STRING("java/security/AlgorithmParameterGenerator"),
	java::lang::Object>
{
public:

	ref<java::lang::String> getAlgorithm();
	static ref<java::security::AlgorithmParameterGenerator> getInstance(ref<java::lang::String> algorithm);
	static ref<java::security::AlgorithmParameterGenerator> getInstance(ref<java::lang::String> algorithm, ref<java::lang::String> provider);
	static ref<java::security::AlgorithmParameterGenerator> getInstance(ref<java::lang::String> algorithm, ref<java::security::Provider> provider);
	ref<java::security::Provider> getProvider();
	void init(jint size);
	void init(jint size, ref<java::security::SecureRandom> random);
	void init(ref<java::security::spec::AlgorithmParameterSpec> genParamSpec);
	void init(ref<java::security::spec::AlgorithmParameterSpec> genParamSpec, ref<java::security::SecureRandom> random);
	ref<java::security::AlgorithmParameters> generateParameters();

protected:

	AlgorithmParameterGenerator(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/AlgorithmParameters.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

namespace scapix::java_api {
namespace java::security {

inline ref<java::lang::String> AlgorithmParameterGenerator::getAlgorithm() { return call_method<SCAPIX_META_STRING("getAlgorithm"), ref<java::lang::String>>(); }
inline ref<java::security::AlgorithmParameterGenerator> AlgorithmParameterGenerator::getInstance(ref<java::lang::String> algorithm) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::AlgorithmParameterGenerator>>(algorithm); }
inline ref<java::security::AlgorithmParameterGenerator> AlgorithmParameterGenerator::getInstance(ref<java::lang::String> algorithm, ref<java::lang::String> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::AlgorithmParameterGenerator>>(algorithm, provider); }
inline ref<java::security::AlgorithmParameterGenerator> AlgorithmParameterGenerator::getInstance(ref<java::lang::String> algorithm, ref<java::security::Provider> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::AlgorithmParameterGenerator>>(algorithm, provider); }
inline ref<java::security::Provider> AlgorithmParameterGenerator::getProvider() { return call_method<SCAPIX_META_STRING("getProvider"), ref<java::security::Provider>>(); }
inline void AlgorithmParameterGenerator::init(jint size) { return call_method<SCAPIX_META_STRING("init"), void>(size); }
inline void AlgorithmParameterGenerator::init(jint size, ref<java::security::SecureRandom> random) { return call_method<SCAPIX_META_STRING("init"), void>(size, random); }
inline void AlgorithmParameterGenerator::init(ref<java::security::spec::AlgorithmParameterSpec> genParamSpec) { return call_method<SCAPIX_META_STRING("init"), void>(genParamSpec); }
inline void AlgorithmParameterGenerator::init(ref<java::security::spec::AlgorithmParameterSpec> genParamSpec, ref<java::security::SecureRandom> random) { return call_method<SCAPIX_META_STRING("init"), void>(genParamSpec, random); }
inline ref<java::security::AlgorithmParameters> AlgorithmParameterGenerator::generateParameters() { return call_method<SCAPIX_META_STRING("generateParameters"), ref<java::security::AlgorithmParameters>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR_H
