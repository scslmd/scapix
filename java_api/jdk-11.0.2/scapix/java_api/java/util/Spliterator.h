// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_SPLITERATOR_H
#define SCAPIX_JAVA_UTIL_SPLITERATOR_H

namespace scapix::java_api {

namespace java::util { class Comparator; }
namespace java::util::function { class Consumer; }
namespace java::util { class Spliterator_OfDouble; }
namespace java::util { class Spliterator_OfLong; }
namespace java::util { class Spliterator_OfInt; }
namespace java::util { class Spliterator_OfPrimitive; }

namespace java::util {

class Spliterator : public object_base<SCAPIX_META_STRING("java/util/Spliterator"),
	java::lang::Object>
{
public:

	using OfDouble = Spliterator_OfDouble;
	using OfLong = Spliterator_OfLong;
	using OfInt = Spliterator_OfInt;
	using OfPrimitive = Spliterator_OfPrimitive;

	static jint ORDERED_();
	static jint DISTINCT_();
	static jint SORTED_();
	static jint SIZED_();
	static jint NONNULL_();
	static jint IMMUTABLE_();
	static jint CONCURRENT_();
	static jint SUBSIZED_();

	jboolean tryAdvance(ref<java::util::function::Consumer> p1);
	void forEachRemaining(ref<java::util::function::Consumer> action);
	ref<java::util::Spliterator> trySplit();
	jlong estimateSize();
	jlong getExactSizeIfKnown();
	jint characteristics();
	jboolean hasCharacteristics(jint characteristics);
	ref<java::util::Comparator> getComparator();

protected:

	Spliterator(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/function/Consumer.h>

namespace scapix::java_api {
namespace java::util {

inline jint Spliterator::ORDERED_() { return get_static_field<SCAPIX_META_STRING("ORDERED"), jint>(); }
inline jint Spliterator::DISTINCT_() { return get_static_field<SCAPIX_META_STRING("DISTINCT"), jint>(); }
inline jint Spliterator::SORTED_() { return get_static_field<SCAPIX_META_STRING("SORTED"), jint>(); }
inline jint Spliterator::SIZED_() { return get_static_field<SCAPIX_META_STRING("SIZED"), jint>(); }
inline jint Spliterator::NONNULL_() { return get_static_field<SCAPIX_META_STRING("NONNULL"), jint>(); }
inline jint Spliterator::IMMUTABLE_() { return get_static_field<SCAPIX_META_STRING("IMMUTABLE"), jint>(); }
inline jint Spliterator::CONCURRENT_() { return get_static_field<SCAPIX_META_STRING("CONCURRENT"), jint>(); }
inline jint Spliterator::SUBSIZED_() { return get_static_field<SCAPIX_META_STRING("SUBSIZED"), jint>(); }
inline jboolean Spliterator::tryAdvance(ref<java::util::function::Consumer> p1) { return call_method<SCAPIX_META_STRING("tryAdvance"), jboolean>(p1); }
inline void Spliterator::forEachRemaining(ref<java::util::function::Consumer> action) { return call_method<SCAPIX_META_STRING("forEachRemaining"), void>(action); }
inline ref<java::util::Spliterator> Spliterator::trySplit() { return call_method<SCAPIX_META_STRING("trySplit"), ref<java::util::Spliterator>>(); }
inline jlong Spliterator::estimateSize() { return call_method<SCAPIX_META_STRING("estimateSize"), jlong>(); }
inline jlong Spliterator::getExactSizeIfKnown() { return call_method<SCAPIX_META_STRING("getExactSizeIfKnown"), jlong>(); }
inline jint Spliterator::characteristics() { return call_method<SCAPIX_META_STRING("characteristics"), jint>(); }
inline jboolean Spliterator::hasCharacteristics(jint characteristics) { return call_method<SCAPIX_META_STRING("hasCharacteristics"), jboolean>(characteristics); }
inline ref<java::util::Comparator> Spliterator::getComparator() { return call_method<SCAPIX_META_STRING("getComparator"), ref<java::util::Comparator>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_SPLITERATOR_H
