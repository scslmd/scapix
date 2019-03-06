// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVAX_CRYPTO_SEALEDOBJECT_H
#define SCAPIX_JAVAX_CRYPTO_SEALEDOBJECT_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class Key; }
namespace javax::crypto { class Cipher; }

namespace javax::crypto {

class SealedObject : public object_base<SCAPIX_META_STRING("javax/crypto/SealedObject"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static ref<SealedObject> new_object(ref<java::io::Serializable> object, ref<javax::crypto::Cipher> c);
	ref<java::lang::String> getAlgorithm();
	ref<java::lang::Object> getObject(ref<java::security::Key> key);
	ref<java::lang::Object> getObject(ref<javax::crypto::Cipher> c);
	ref<java::lang::Object> getObject(ref<java::security::Key> key, ref<java::lang::String> provider);

protected:

	SealedObject(handle_type h) : base_(h) {}

};

} // namespace javax::crypto
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/javax/crypto/Cipher.h>

namespace scapix::java_api {
namespace javax::crypto {

inline ref<SealedObject> SealedObject::new_object(ref<java::io::Serializable> object, ref<javax::crypto::Cipher> c) { return base_::new_object(object, c); }
inline ref<java::lang::String> SealedObject::getAlgorithm() { return call_method<SCAPIX_META_STRING("getAlgorithm"), ref<java::lang::String>>(); }
inline ref<java::lang::Object> SealedObject::getObject(ref<java::security::Key> key) { return call_method<SCAPIX_META_STRING("getObject"), ref<java::lang::Object>>(key); }
inline ref<java::lang::Object> SealedObject::getObject(ref<javax::crypto::Cipher> c) { return call_method<SCAPIX_META_STRING("getObject"), ref<java::lang::Object>>(c); }
inline ref<java::lang::Object> SealedObject::getObject(ref<java::security::Key> key, ref<java::lang::String> provider) { return call_method<SCAPIX_META_STRING("getObject"), ref<java::lang::Object>>(key, provider); }

} // namespace javax::crypto
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_CRYPTO_SEALEDOBJECT_H
