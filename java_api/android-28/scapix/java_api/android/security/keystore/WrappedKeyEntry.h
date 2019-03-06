// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/KeyStore_Entry.h>

#ifndef SCAPIX_ANDROID_SECURITY_KEYSTORE_WRAPPEDKEYENTRY_H
#define SCAPIX_ANDROID_SECURITY_KEYSTORE_WRAPPEDKEYENTRY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security::spec { class AlgorithmParameterSpec; }

namespace android::security::keystore {

class WrappedKeyEntry : public object_base<SCAPIX_META_STRING("android/security/keystore/WrappedKeyEntry"),
	java::lang::Object,
	java::security::KeyStore_Entry>
{
public:

	static ref<WrappedKeyEntry> new_object(ref<link::java::array<jbyte>> wrappedKeyBytes, ref<java::lang::String> wrappingKeyAlias, ref<java::lang::String> transformation, ref<java::security::spec::AlgorithmParameterSpec> algorithmParameterSpec);
	ref<link::java::array<jbyte>> getWrappedKeyBytes();
	ref<java::lang::String> getWrappingKeyAlias();
	ref<java::lang::String> getTransformation();
	ref<java::security::spec::AlgorithmParameterSpec> getAlgorithmParameterSpec();

protected:

	WrappedKeyEntry(handle_type h) : base_(h) {}

};

} // namespace android::security::keystore
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

namespace scapix::java_api {
namespace android::security::keystore {

inline ref<WrappedKeyEntry> WrappedKeyEntry::new_object(ref<link::java::array<jbyte>> wrappedKeyBytes, ref<java::lang::String> wrappingKeyAlias, ref<java::lang::String> transformation, ref<java::security::spec::AlgorithmParameterSpec> algorithmParameterSpec) { return base_::new_object(wrappedKeyBytes, wrappingKeyAlias, transformation, algorithmParameterSpec); }
inline ref<link::java::array<jbyte>> WrappedKeyEntry::getWrappedKeyBytes() { return call_method<SCAPIX_META_STRING("getWrappedKeyBytes"), ref<link::java::array<jbyte>>>(); }
inline ref<java::lang::String> WrappedKeyEntry::getWrappingKeyAlias() { return call_method<SCAPIX_META_STRING("getWrappingKeyAlias"), ref<java::lang::String>>(); }
inline ref<java::lang::String> WrappedKeyEntry::getTransformation() { return call_method<SCAPIX_META_STRING("getTransformation"), ref<java::lang::String>>(); }
inline ref<java::security::spec::AlgorithmParameterSpec> WrappedKeyEntry::getAlgorithmParameterSpec() { return call_method<SCAPIX_META_STRING("getAlgorithmParameterSpec"), ref<java::security::spec::AlgorithmParameterSpec>>(); }

} // namespace android::security::keystore
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SECURITY_KEYSTORE_WRAPPEDKEYENTRY_H
