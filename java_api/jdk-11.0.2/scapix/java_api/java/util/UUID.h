// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_UTIL_UUID_H
#define SCAPIX_JAVA_UTIL_UUID_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::util {

class UUID : public object_base<SCAPIX_META_STRING("java/util/UUID"),
	java::lang::Object,
	java::io::Serializable,
	java::lang::Comparable>
{
public:

	static ref<UUID> new_object(jlong mostSigBits, jlong p2);
	static ref<java::util::UUID> randomUUID();
	static ref<java::util::UUID> nameUUIDFromBytes(ref<link::java::array<jbyte>> name);
	static ref<java::util::UUID> fromString(ref<java::lang::String> name);
	jlong getLeastSignificantBits();
	jlong getMostSignificantBits();
	jint version();
	jint variant();
	jlong timestamp();
	jint clockSequence();
	jlong node();
	ref<java::lang::String> toString();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);
	jint compareTo(ref<java::util::UUID> val);

protected:

	UUID(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::util {

inline ref<UUID> UUID::new_object(jlong mostSigBits, jlong p2) { return base_::new_object(mostSigBits, p2); }
inline ref<java::util::UUID> UUID::randomUUID() { return call_static_method<SCAPIX_META_STRING("randomUUID"), ref<java::util::UUID>>(); }
inline ref<java::util::UUID> UUID::nameUUIDFromBytes(ref<link::java::array<jbyte>> name) { return call_static_method<SCAPIX_META_STRING("nameUUIDFromBytes"), ref<java::util::UUID>>(name); }
inline ref<java::util::UUID> UUID::fromString(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("fromString"), ref<java::util::UUID>>(name); }
inline jlong UUID::getLeastSignificantBits() { return call_method<SCAPIX_META_STRING("getLeastSignificantBits"), jlong>(); }
inline jlong UUID::getMostSignificantBits() { return call_method<SCAPIX_META_STRING("getMostSignificantBits"), jlong>(); }
inline jint UUID::version() { return call_method<SCAPIX_META_STRING("version"), jint>(); }
inline jint UUID::variant() { return call_method<SCAPIX_META_STRING("variant"), jint>(); }
inline jlong UUID::timestamp() { return call_method<SCAPIX_META_STRING("timestamp"), jlong>(); }
inline jint UUID::clockSequence() { return call_method<SCAPIX_META_STRING("clockSequence"), jint>(); }
inline jlong UUID::node() { return call_method<SCAPIX_META_STRING("node"), jlong>(); }
inline ref<java::lang::String> UUID::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint UUID::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean UUID::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint UUID::compareTo(ref<java::util::UUID> val) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(val); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_UUID_H
