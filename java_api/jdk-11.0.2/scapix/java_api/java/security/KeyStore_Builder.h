// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SECURITY_KEYSTORE_BUILDER_H
#define SCAPIX_JAVA_SECURITY_KEYSTORE_BUILDER_H

namespace scapix::java_api {

namespace java::io { class File; }
namespace java::lang { class String; }
namespace java::security { class KeyStore; }
namespace java::security { class KeyStore_ProtectionParameter; }
namespace java::security { class Provider; }

namespace java::security {

class KeyStore_Builder : public object_base<SCAPIX_META_STRING("java/security/KeyStore$Builder"),
	java::lang::Object>
{
public:

	ref<java::security::KeyStore> getKeyStore();
	ref<java::security::KeyStore_ProtectionParameter> getProtectionParameter(ref<java::lang::String> p1);
	static ref<java::security::KeyStore_Builder> newInstance(ref<java::security::KeyStore> keyStore, ref<java::security::KeyStore_ProtectionParameter> protectionParameter);
	static ref<java::security::KeyStore_Builder> newInstance(ref<java::lang::String> type, ref<java::security::Provider> provider, ref<java::io::File> file, ref<java::security::KeyStore_ProtectionParameter> protection);
	static ref<java::security::KeyStore_Builder> newInstance(ref<java::io::File> file, ref<java::security::KeyStore_ProtectionParameter> protection);
	static ref<java::security::KeyStore_Builder> newInstance(ref<java::lang::String> type, ref<java::security::Provider> provider, ref<java::security::KeyStore_ProtectionParameter> protection);

protected:

	KeyStore_Builder(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/KeyStore.h>
#include <scapix/java_api/java/security/KeyStore_ProtectionParameter.h>
#include <scapix/java_api/java/security/Provider.h>

namespace scapix::java_api {
namespace java::security {

inline ref<java::security::KeyStore> KeyStore_Builder::getKeyStore() { return call_method<SCAPIX_META_STRING("getKeyStore"), ref<java::security::KeyStore>>(); }
inline ref<java::security::KeyStore_ProtectionParameter> KeyStore_Builder::getProtectionParameter(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getProtectionParameter"), ref<java::security::KeyStore_ProtectionParameter>>(p1); }
inline ref<java::security::KeyStore_Builder> KeyStore_Builder::newInstance(ref<java::security::KeyStore> keyStore, ref<java::security::KeyStore_ProtectionParameter> protectionParameter) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<java::security::KeyStore_Builder>>(keyStore, protectionParameter); }
inline ref<java::security::KeyStore_Builder> KeyStore_Builder::newInstance(ref<java::lang::String> type, ref<java::security::Provider> provider, ref<java::io::File> file, ref<java::security::KeyStore_ProtectionParameter> protection) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<java::security::KeyStore_Builder>>(type, provider, file, protection); }
inline ref<java::security::KeyStore_Builder> KeyStore_Builder::newInstance(ref<java::io::File> file, ref<java::security::KeyStore_ProtectionParameter> protection) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<java::security::KeyStore_Builder>>(file, protection); }
inline ref<java::security::KeyStore_Builder> KeyStore_Builder::newInstance(ref<java::lang::String> type, ref<java::security::Provider> provider, ref<java::security::KeyStore_ProtectionParameter> protection) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<java::security::KeyStore_Builder>>(type, provider, protection); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_KEYSTORE_BUILDER_H
