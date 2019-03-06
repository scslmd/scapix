// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_OPTIONALINT_H
#define SCAPIX_JAVA_UTIL_OPTIONALINT_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util::function { class IntConsumer; }
namespace java::util::function { class IntSupplier; }
namespace java::util::function { class Supplier; }

namespace java::util {

class OptionalInt : public object_base<SCAPIX_META_STRING("java/util/OptionalInt"),
	java::lang::Object>
{
public:

	static ref<java::util::OptionalInt> empty();
	static ref<java::util::OptionalInt> of(jint value);
	jint getAsInt();
	jboolean isPresent();
	void ifPresent(ref<java::util::function::IntConsumer> consumer);
	jint orElse(jint other);
	jint orElseGet(ref<java::util::function::IntSupplier> other);
	jint orElseThrow(ref<java::util::function::Supplier> exceptionSupplier);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	OptionalInt(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/IntConsumer.h>
#include <scapix/java_api/java/util/function/IntSupplier.h>
#include <scapix/java_api/java/util/function/Supplier.h>

namespace scapix::java_api {
namespace java::util {

inline ref<java::util::OptionalInt> OptionalInt::empty() { return call_static_method<SCAPIX_META_STRING("empty"), ref<java::util::OptionalInt>>(); }
inline ref<java::util::OptionalInt> OptionalInt::of(jint value) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::OptionalInt>>(value); }
inline jint OptionalInt::getAsInt() { return call_method<SCAPIX_META_STRING("getAsInt"), jint>(); }
inline jboolean OptionalInt::isPresent() { return call_method<SCAPIX_META_STRING("isPresent"), jboolean>(); }
inline void OptionalInt::ifPresent(ref<java::util::function::IntConsumer> consumer) { return call_method<SCAPIX_META_STRING("ifPresent"), void>(consumer); }
inline jint OptionalInt::orElse(jint other) { return call_method<SCAPIX_META_STRING("orElse"), jint>(other); }
inline jint OptionalInt::orElseGet(ref<java::util::function::IntSupplier> other) { return call_method<SCAPIX_META_STRING("orElseGet"), jint>(other); }
inline jint OptionalInt::orElseThrow(ref<java::util::function::Supplier> exceptionSupplier) { return call_method<SCAPIX_META_STRING("orElseThrow"), jint>(exceptionSupplier); }
inline jboolean OptionalInt::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint OptionalInt::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> OptionalInt::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_OPTIONALINT_H
