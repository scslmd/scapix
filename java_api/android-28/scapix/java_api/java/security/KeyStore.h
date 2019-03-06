// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SECURITY_KEYSTORE_H
#define SCAPIX_JAVA_SECURITY_KEYSTORE_H

namespace scapix::java_api {

namespace java::io { class InputStream; }
namespace java::io { class OutputStream; }
namespace java::lang { class Class; }
namespace java::lang { class String; }
namespace java::security { class Key; }
namespace java::security { class KeyStore_Entry; }
namespace java::security { class KeyStore_LoadStoreParameter; }
namespace java::security { class KeyStore_ProtectionParameter; }
namespace java::security { class Provider; }
namespace java::security::cert { class Certificate; }
namespace java::util { class Date; }
namespace java::util { class Enumeration; }
namespace java::security { class KeyStore_TrustedCertificateEntry; }
namespace java::security { class KeyStore_SecretKeyEntry; }
namespace java::security { class KeyStore_PrivateKeyEntry; }
namespace java::security { class KeyStore_PasswordProtection; }
namespace java::security { class KeyStore_CallbackHandlerProtection; }
namespace java::security { class KeyStore_Builder; }

namespace java::security {

class KeyStore : public object_base<SCAPIX_META_STRING("java/security/KeyStore"),
	java::lang::Object>
{
public:

	using TrustedCertificateEntry = KeyStore_TrustedCertificateEntry;
	using SecretKeyEntry = KeyStore_SecretKeyEntry;
	using ProtectionParameter = KeyStore_ProtectionParameter;
	using PrivateKeyEntry = KeyStore_PrivateKeyEntry;
	using PasswordProtection = KeyStore_PasswordProtection;
	using LoadStoreParameter = KeyStore_LoadStoreParameter;
	using Entry = KeyStore_Entry;
	using CallbackHandlerProtection = KeyStore_CallbackHandlerProtection;
	using Builder = KeyStore_Builder;

	static ref<java::security::KeyStore> getInstance(ref<java::lang::String> type);
	static ref<java::security::KeyStore> getInstance(ref<java::lang::String> type, ref<java::lang::String> provider);
	static ref<java::security::KeyStore> getInstance(ref<java::lang::String> type, ref<java::security::Provider> provider);
	static ref<java::lang::String> getDefaultType();
	ref<java::security::Provider> getProvider();
	ref<java::lang::String> getType();
	ref<java::security::Key> getKey(ref<java::lang::String> alias, ref<link::java::array<jchar>> password);
	ref<link::java::array<java::security::cert::Certificate>> getCertificateChain(ref<java::lang::String> alias);
	ref<java::security::cert::Certificate> getCertificate(ref<java::lang::String> alias);
	ref<java::util::Date> getCreationDate(ref<java::lang::String> alias);
	void setKeyEntry(ref<java::lang::String> alias, ref<java::security::Key> key, ref<link::java::array<jchar>> password, ref<link::java::array<java::security::cert::Certificate>> chain);
	void setKeyEntry(ref<java::lang::String> alias, ref<link::java::array<jbyte>> key, ref<link::java::array<java::security::cert::Certificate>> chain);
	void setCertificateEntry(ref<java::lang::String> alias, ref<java::security::cert::Certificate> cert);
	void deleteEntry(ref<java::lang::String> alias);
	ref<java::util::Enumeration> aliases();
	jboolean containsAlias(ref<java::lang::String> alias);
	jint size();
	jboolean isKeyEntry(ref<java::lang::String> alias);
	jboolean isCertificateEntry(ref<java::lang::String> alias);
	ref<java::lang::String> getCertificateAlias(ref<java::security::cert::Certificate> cert);
	void store(ref<java::io::OutputStream> stream, ref<link::java::array<jchar>> password);
	void store(ref<java::security::KeyStore_LoadStoreParameter> param);
	void load(ref<java::io::InputStream> stream, ref<link::java::array<jchar>> password);
	void load(ref<java::security::KeyStore_LoadStoreParameter> param);
	ref<java::security::KeyStore_Entry> getEntry(ref<java::lang::String> alias, ref<java::security::KeyStore_ProtectionParameter> protParam);
	void setEntry(ref<java::lang::String> alias, ref<java::security::KeyStore_Entry> entry, ref<java::security::KeyStore_ProtectionParameter> protParam);
	jboolean entryInstanceOf(ref<java::lang::String> alias, ref<java::lang::Class> entryClass);

protected:

	KeyStore(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/KeyStore_Entry.h>
#include <scapix/java_api/java/security/KeyStore_LoadStoreParameter.h>
#include <scapix/java_api/java/security/KeyStore_ProtectionParameter.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Enumeration.h>

namespace scapix::java_api {
namespace java::security {

inline ref<java::security::KeyStore> KeyStore::getInstance(ref<java::lang::String> type) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::KeyStore>>(type); }
inline ref<java::security::KeyStore> KeyStore::getInstance(ref<java::lang::String> type, ref<java::lang::String> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::KeyStore>>(type, provider); }
inline ref<java::security::KeyStore> KeyStore::getInstance(ref<java::lang::String> type, ref<java::security::Provider> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<java::security::KeyStore>>(type, provider); }
inline ref<java::lang::String> KeyStore::getDefaultType() { return call_static_method<SCAPIX_META_STRING("getDefaultType"), ref<java::lang::String>>(); }
inline ref<java::security::Provider> KeyStore::getProvider() { return call_method<SCAPIX_META_STRING("getProvider"), ref<java::security::Provider>>(); }
inline ref<java::lang::String> KeyStore::getType() { return call_method<SCAPIX_META_STRING("getType"), ref<java::lang::String>>(); }
inline ref<java::security::Key> KeyStore::getKey(ref<java::lang::String> alias, ref<link::java::array<jchar>> password) { return call_method<SCAPIX_META_STRING("getKey"), ref<java::security::Key>>(alias, password); }
inline ref<link::java::array<java::security::cert::Certificate>> KeyStore::getCertificateChain(ref<java::lang::String> alias) { return call_method<SCAPIX_META_STRING("getCertificateChain"), ref<link::java::array<java::security::cert::Certificate>>>(alias); }
inline ref<java::security::cert::Certificate> KeyStore::getCertificate(ref<java::lang::String> alias) { return call_method<SCAPIX_META_STRING("getCertificate"), ref<java::security::cert::Certificate>>(alias); }
inline ref<java::util::Date> KeyStore::getCreationDate(ref<java::lang::String> alias) { return call_method<SCAPIX_META_STRING("getCreationDate"), ref<java::util::Date>>(alias); }
inline void KeyStore::setKeyEntry(ref<java::lang::String> alias, ref<java::security::Key> key, ref<link::java::array<jchar>> password, ref<link::java::array<java::security::cert::Certificate>> chain) { return call_method<SCAPIX_META_STRING("setKeyEntry"), void>(alias, key, password, chain); }
inline void KeyStore::setKeyEntry(ref<java::lang::String> alias, ref<link::java::array<jbyte>> key, ref<link::java::array<java::security::cert::Certificate>> chain) { return call_method<SCAPIX_META_STRING("setKeyEntry"), void>(alias, key, chain); }
inline void KeyStore::setCertificateEntry(ref<java::lang::String> alias, ref<java::security::cert::Certificate> cert) { return call_method<SCAPIX_META_STRING("setCertificateEntry"), void>(alias, cert); }
inline void KeyStore::deleteEntry(ref<java::lang::String> alias) { return call_method<SCAPIX_META_STRING("deleteEntry"), void>(alias); }
inline ref<java::util::Enumeration> KeyStore::aliases() { return call_method<SCAPIX_META_STRING("aliases"), ref<java::util::Enumeration>>(); }
inline jboolean KeyStore::containsAlias(ref<java::lang::String> alias) { return call_method<SCAPIX_META_STRING("containsAlias"), jboolean>(alias); }
inline jint KeyStore::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jboolean KeyStore::isKeyEntry(ref<java::lang::String> alias) { return call_method<SCAPIX_META_STRING("isKeyEntry"), jboolean>(alias); }
inline jboolean KeyStore::isCertificateEntry(ref<java::lang::String> alias) { return call_method<SCAPIX_META_STRING("isCertificateEntry"), jboolean>(alias); }
inline ref<java::lang::String> KeyStore::getCertificateAlias(ref<java::security::cert::Certificate> cert) { return call_method<SCAPIX_META_STRING("getCertificateAlias"), ref<java::lang::String>>(cert); }
inline void KeyStore::store(ref<java::io::OutputStream> stream, ref<link::java::array<jchar>> password) { return call_method<SCAPIX_META_STRING("store"), void>(stream, password); }
inline void KeyStore::store(ref<java::security::KeyStore_LoadStoreParameter> param) { return call_method<SCAPIX_META_STRING("store"), void>(param); }
inline void KeyStore::load(ref<java::io::InputStream> stream, ref<link::java::array<jchar>> password) { return call_method<SCAPIX_META_STRING("load"), void>(stream, password); }
inline void KeyStore::load(ref<java::security::KeyStore_LoadStoreParameter> param) { return call_method<SCAPIX_META_STRING("load"), void>(param); }
inline ref<java::security::KeyStore_Entry> KeyStore::getEntry(ref<java::lang::String> alias, ref<java::security::KeyStore_ProtectionParameter> protParam) { return call_method<SCAPIX_META_STRING("getEntry"), ref<java::security::KeyStore_Entry>>(alias, protParam); }
inline void KeyStore::setEntry(ref<java::lang::String> alias, ref<java::security::KeyStore_Entry> entry, ref<java::security::KeyStore_ProtectionParameter> protParam) { return call_method<SCAPIX_META_STRING("setEntry"), void>(alias, entry, protParam); }
inline jboolean KeyStore::entryInstanceOf(ref<java::lang::String> alias, ref<java::lang::Class> entryClass) { return call_method<SCAPIX_META_STRING("entryInstanceOf"), jboolean>(alias, entryClass); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_KEYSTORE_H
