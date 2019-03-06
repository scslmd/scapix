// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_COMPARATOR_H
#define SCAPIX_JAVA_UTIL_COMPARATOR_H

namespace scapix::java_api {

namespace java::util::function { class Function; }
namespace java::util::function { class ToDoubleFunction; }
namespace java::util::function { class ToIntFunction; }
namespace java::util::function { class ToLongFunction; }

namespace java::util {

class Comparator : public object_base<SCAPIX_META_STRING("java/util/Comparator"),
	java::lang::Object>
{
public:

	jint compare(ref<java::lang::Object> p1, ref<java::lang::Object> p2);
	jboolean equals(ref<java::lang::Object> p1);
	ref<java::util::Comparator> reversed();
	ref<java::util::Comparator> thenComparing(ref<java::util::Comparator> other);
	ref<java::util::Comparator> thenComparing(ref<java::util::function::Function> keyExtractor, ref<java::util::Comparator> keyComparator);
	ref<java::util::Comparator> thenComparing(ref<java::util::function::Function> keyExtractor);
	ref<java::util::Comparator> thenComparingInt(ref<java::util::function::ToIntFunction> keyExtractor);
	ref<java::util::Comparator> thenComparingLong(ref<java::util::function::ToLongFunction> keyExtractor);
	ref<java::util::Comparator> thenComparingDouble(ref<java::util::function::ToDoubleFunction> keyExtractor);
	static ref<java::util::Comparator> reverseOrder();
	static ref<java::util::Comparator> naturalOrder();
	static ref<java::util::Comparator> nullsFirst(ref<java::util::Comparator> comparator);
	static ref<java::util::Comparator> nullsLast(ref<java::util::Comparator> comparator);
	static ref<java::util::Comparator> comparing(ref<java::util::function::Function> keyExtractor, ref<java::util::Comparator> keyComparator);
	static ref<java::util::Comparator> comparing(ref<java::util::function::Function> keyExtractor);
	static ref<java::util::Comparator> comparingInt(ref<java::util::function::ToIntFunction> keyExtractor);
	static ref<java::util::Comparator> comparingLong(ref<java::util::function::ToLongFunction> keyExtractor);
	static ref<java::util::Comparator> comparingDouble(ref<java::util::function::ToDoubleFunction> keyExtractor);

protected:

	Comparator(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/java/util/function/ToDoubleFunction.h>
#include <scapix/java_api/java/util/function/ToIntFunction.h>
#include <scapix/java_api/java/util/function/ToLongFunction.h>

namespace scapix::java_api {
namespace java::util {

inline jint Comparator::compare(ref<java::lang::Object> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("compare"), jint>(p1, p2); }
inline jboolean Comparator::equals(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(p1); }
inline ref<java::util::Comparator> Comparator::reversed() { return call_method<SCAPIX_META_STRING("reversed"), ref<java::util::Comparator>>(); }
inline ref<java::util::Comparator> Comparator::thenComparing(ref<java::util::Comparator> other) { return call_method<SCAPIX_META_STRING("thenComparing"), ref<java::util::Comparator>>(other); }
inline ref<java::util::Comparator> Comparator::thenComparing(ref<java::util::function::Function> keyExtractor, ref<java::util::Comparator> keyComparator) { return call_method<SCAPIX_META_STRING("thenComparing"), ref<java::util::Comparator>>(keyExtractor, keyComparator); }
inline ref<java::util::Comparator> Comparator::thenComparing(ref<java::util::function::Function> keyExtractor) { return call_method<SCAPIX_META_STRING("thenComparing"), ref<java::util::Comparator>>(keyExtractor); }
inline ref<java::util::Comparator> Comparator::thenComparingInt(ref<java::util::function::ToIntFunction> keyExtractor) { return call_method<SCAPIX_META_STRING("thenComparingInt"), ref<java::util::Comparator>>(keyExtractor); }
inline ref<java::util::Comparator> Comparator::thenComparingLong(ref<java::util::function::ToLongFunction> keyExtractor) { return call_method<SCAPIX_META_STRING("thenComparingLong"), ref<java::util::Comparator>>(keyExtractor); }
inline ref<java::util::Comparator> Comparator::thenComparingDouble(ref<java::util::function::ToDoubleFunction> keyExtractor) { return call_method<SCAPIX_META_STRING("thenComparingDouble"), ref<java::util::Comparator>>(keyExtractor); }
inline ref<java::util::Comparator> Comparator::reverseOrder() { return call_static_method<SCAPIX_META_STRING("reverseOrder"), ref<java::util::Comparator>>(); }
inline ref<java::util::Comparator> Comparator::naturalOrder() { return call_static_method<SCAPIX_META_STRING("naturalOrder"), ref<java::util::Comparator>>(); }
inline ref<java::util::Comparator> Comparator::nullsFirst(ref<java::util::Comparator> comparator) { return call_static_method<SCAPIX_META_STRING("nullsFirst"), ref<java::util::Comparator>>(comparator); }
inline ref<java::util::Comparator> Comparator::nullsLast(ref<java::util::Comparator> comparator) { return call_static_method<SCAPIX_META_STRING("nullsLast"), ref<java::util::Comparator>>(comparator); }
inline ref<java::util::Comparator> Comparator::comparing(ref<java::util::function::Function> keyExtractor, ref<java::util::Comparator> keyComparator) { return call_static_method<SCAPIX_META_STRING("comparing"), ref<java::util::Comparator>>(keyExtractor, keyComparator); }
inline ref<java::util::Comparator> Comparator::comparing(ref<java::util::function::Function> keyExtractor) { return call_static_method<SCAPIX_META_STRING("comparing"), ref<java::util::Comparator>>(keyExtractor); }
inline ref<java::util::Comparator> Comparator::comparingInt(ref<java::util::function::ToIntFunction> keyExtractor) { return call_static_method<SCAPIX_META_STRING("comparingInt"), ref<java::util::Comparator>>(keyExtractor); }
inline ref<java::util::Comparator> Comparator::comparingLong(ref<java::util::function::ToLongFunction> keyExtractor) { return call_static_method<SCAPIX_META_STRING("comparingLong"), ref<java::util::Comparator>>(keyExtractor); }
inline ref<java::util::Comparator> Comparator::comparingDouble(ref<java::util::function::ToDoubleFunction> keyExtractor) { return call_static_method<SCAPIX_META_STRING("comparingDouble"), ref<java::util::Comparator>>(keyExtractor); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_COMPARATOR_H
