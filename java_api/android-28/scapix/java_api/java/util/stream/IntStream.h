// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/BaseStream.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_INTSTREAM_H
#define SCAPIX_JAVA_UTIL_STREAM_INTSTREAM_H

namespace scapix::java_api {

namespace java::util { class IntSummaryStatistics; }
namespace java::util { class OptionalDouble; }
namespace java::util { class OptionalInt; }
namespace java::util { class PrimitiveIterator_OfInt; }
namespace java::util { class Spliterator_OfInt; }
namespace java::util::function { class BiConsumer; }
namespace java::util::function { class IntBinaryOperator; }
namespace java::util::function { class IntConsumer; }
namespace java::util::function { class IntFunction; }
namespace java::util::function { class IntPredicate; }
namespace java::util::function { class IntSupplier; }
namespace java::util::function { class IntToDoubleFunction; }
namespace java::util::function { class IntToLongFunction; }
namespace java::util::function { class IntUnaryOperator; }
namespace java::util::function { class ObjIntConsumer; }
namespace java::util::function { class Supplier; }
namespace java::util::stream { class DoubleStream; }
namespace java::util::stream { class IntStream_Builder; }
namespace java::util::stream { class LongStream; }
namespace java::util::stream { class Stream; }

namespace java::util::stream {

class IntStream : public object_base<SCAPIX_META_STRING("java/util/stream/IntStream"),
	java::lang::Object,
	java::util::stream::BaseStream>
{
public:

	using Builder = IntStream_Builder;

	ref<java::util::stream::IntStream> filter(ref<java::util::function::IntPredicate> p1);
	ref<java::util::stream::IntStream> map(ref<java::util::function::IntUnaryOperator> p1);
	ref<java::util::stream::Stream> mapToObj(ref<java::util::function::IntFunction> p1);
	ref<java::util::stream::LongStream> mapToLong(ref<java::util::function::IntToLongFunction> p1);
	ref<java::util::stream::DoubleStream> mapToDouble(ref<java::util::function::IntToDoubleFunction> p1);
	ref<java::util::stream::IntStream> flatMap(ref<java::util::function::IntFunction> p1);
	ref<java::util::stream::IntStream> distinct();
	ref<java::util::stream::IntStream> sorted();
	ref<java::util::stream::IntStream> peek(ref<java::util::function::IntConsumer> p1);
	ref<java::util::stream::IntStream> limit(jlong p1);
	ref<java::util::stream::IntStream> skip(jlong p1);
	void forEach(ref<java::util::function::IntConsumer> p1);
	void forEachOrdered(ref<java::util::function::IntConsumer> p1);
	ref<link::java::array<jint>> toArray();
	jint reduce(jint p1, ref<java::util::function::IntBinaryOperator> p2);
	ref<java::util::OptionalInt> reduce(ref<java::util::function::IntBinaryOperator> p1);
	ref<java::lang::Object> collect(ref<java::util::function::Supplier> p1, ref<java::util::function::ObjIntConsumer> p2, ref<java::util::function::BiConsumer> p3);
	jint sum();
	ref<java::util::OptionalInt> min();
	ref<java::util::OptionalInt> max();
	jlong count();
	ref<java::util::OptionalDouble> average();
	ref<java::util::IntSummaryStatistics> summaryStatistics();
	jboolean anyMatch(ref<java::util::function::IntPredicate> p1);
	jboolean allMatch(ref<java::util::function::IntPredicate> p1);
	jboolean noneMatch(ref<java::util::function::IntPredicate> p1);
	ref<java::util::OptionalInt> findFirst();
	ref<java::util::OptionalInt> findAny();
	ref<java::util::stream::LongStream> asLongStream();
	ref<java::util::stream::DoubleStream> asDoubleStream();
	ref<java::util::stream::Stream> boxed();
	ref<java::util::stream::IntStream> sequential();
	ref<java::util::stream::IntStream> parallel();
	ref<java::util::PrimitiveIterator_OfInt> iterator();
	ref<java::util::Spliterator_OfInt> spliterator();
	static ref<java::util::stream::IntStream_Builder> builder();
	static ref<java::util::stream::IntStream> empty();
	static ref<java::util::stream::IntStream> of(jint t);
	static ref<java::util::stream::IntStream> of(ref<link::java::array<jint>> values);
	static ref<java::util::stream::IntStream> iterate(jint seed, ref<java::util::function::IntUnaryOperator> f);
	static ref<java::util::stream::IntStream> generate(ref<java::util::function::IntSupplier> s);
	static ref<java::util::stream::IntStream> range(jint startInclusive, jint endExclusive);
	static ref<java::util::stream::IntStream> rangeClosed(jint startInclusive, jint endInclusive);
	static ref<java::util::stream::IntStream> concat(ref<java::util::stream::IntStream> a, ref<java::util::stream::IntStream> b);

protected:

	IntStream(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api

#include <scapix/java_api/java/util/IntSummaryStatistics.h>
#include <scapix/java_api/java/util/OptionalDouble.h>
#include <scapix/java_api/java/util/OptionalInt.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfInt.h>
#include <scapix/java_api/java/util/Spliterator_OfInt.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/IntBinaryOperator.h>
#include <scapix/java_api/java/util/function/IntConsumer.h>
#include <scapix/java_api/java/util/function/IntFunction.h>
#include <scapix/java_api/java/util/function/IntPredicate.h>
#include <scapix/java_api/java/util/function/IntSupplier.h>
#include <scapix/java_api/java/util/function/IntToDoubleFunction.h>
#include <scapix/java_api/java/util/function/IntToLongFunction.h>
#include <scapix/java_api/java/util/function/IntUnaryOperator.h>
#include <scapix/java_api/java/util/function/ObjIntConsumer.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/stream/DoubleStream.h>
#include <scapix/java_api/java/util/stream/IntStream_Builder.h>
#include <scapix/java_api/java/util/stream/LongStream.h>
#include <scapix/java_api/java/util/stream/Stream.h>

namespace scapix::java_api {
namespace java::util::stream {

inline ref<java::util::stream::IntStream> IntStream::filter(ref<java::util::function::IntPredicate> p1) { return call_method<SCAPIX_META_STRING("filter"), ref<java::util::stream::IntStream>>(p1); }
inline ref<java::util::stream::IntStream> IntStream::map(ref<java::util::function::IntUnaryOperator> p1) { return call_method<SCAPIX_META_STRING("map"), ref<java::util::stream::IntStream>>(p1); }
inline ref<java::util::stream::Stream> IntStream::mapToObj(ref<java::util::function::IntFunction> p1) { return call_method<SCAPIX_META_STRING("mapToObj"), ref<java::util::stream::Stream>>(p1); }
inline ref<java::util::stream::LongStream> IntStream::mapToLong(ref<java::util::function::IntToLongFunction> p1) { return call_method<SCAPIX_META_STRING("mapToLong"), ref<java::util::stream::LongStream>>(p1); }
inline ref<java::util::stream::DoubleStream> IntStream::mapToDouble(ref<java::util::function::IntToDoubleFunction> p1) { return call_method<SCAPIX_META_STRING("mapToDouble"), ref<java::util::stream::DoubleStream>>(p1); }
inline ref<java::util::stream::IntStream> IntStream::flatMap(ref<java::util::function::IntFunction> p1) { return call_method<SCAPIX_META_STRING("flatMap"), ref<java::util::stream::IntStream>>(p1); }
inline ref<java::util::stream::IntStream> IntStream::distinct() { return call_method<SCAPIX_META_STRING("distinct"), ref<java::util::stream::IntStream>>(); }
inline ref<java::util::stream::IntStream> IntStream::sorted() { return call_method<SCAPIX_META_STRING("sorted"), ref<java::util::stream::IntStream>>(); }
inline ref<java::util::stream::IntStream> IntStream::peek(ref<java::util::function::IntConsumer> p1) { return call_method<SCAPIX_META_STRING("peek"), ref<java::util::stream::IntStream>>(p1); }
inline ref<java::util::stream::IntStream> IntStream::limit(jlong p1) { return call_method<SCAPIX_META_STRING("limit"), ref<java::util::stream::IntStream>>(p1); }
inline ref<java::util::stream::IntStream> IntStream::skip(jlong p1) { return call_method<SCAPIX_META_STRING("skip"), ref<java::util::stream::IntStream>>(p1); }
inline void IntStream::forEach(ref<java::util::function::IntConsumer> p1) { return call_method<SCAPIX_META_STRING("forEach"), void>(p1); }
inline void IntStream::forEachOrdered(ref<java::util::function::IntConsumer> p1) { return call_method<SCAPIX_META_STRING("forEachOrdered"), void>(p1); }
inline ref<link::java::array<jint>> IntStream::toArray() { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<jint>>>(); }
inline jint IntStream::reduce(jint p1, ref<java::util::function::IntBinaryOperator> p2) { return call_method<SCAPIX_META_STRING("reduce"), jint>(p1, p2); }
inline ref<java::util::OptionalInt> IntStream::reduce(ref<java::util::function::IntBinaryOperator> p1) { return call_method<SCAPIX_META_STRING("reduce"), ref<java::util::OptionalInt>>(p1); }
inline ref<java::lang::Object> IntStream::collect(ref<java::util::function::Supplier> p1, ref<java::util::function::ObjIntConsumer> p2, ref<java::util::function::BiConsumer> p3) { return call_method<SCAPIX_META_STRING("collect"), ref<java::lang::Object>>(p1, p2, p3); }
inline jint IntStream::sum() { return call_method<SCAPIX_META_STRING("sum"), jint>(); }
inline ref<java::util::OptionalInt> IntStream::min() { return call_method<SCAPIX_META_STRING("min"), ref<java::util::OptionalInt>>(); }
inline ref<java::util::OptionalInt> IntStream::max() { return call_method<SCAPIX_META_STRING("max"), ref<java::util::OptionalInt>>(); }
inline jlong IntStream::count() { return call_method<SCAPIX_META_STRING("count"), jlong>(); }
inline ref<java::util::OptionalDouble> IntStream::average() { return call_method<SCAPIX_META_STRING("average"), ref<java::util::OptionalDouble>>(); }
inline ref<java::util::IntSummaryStatistics> IntStream::summaryStatistics() { return call_method<SCAPIX_META_STRING("summaryStatistics"), ref<java::util::IntSummaryStatistics>>(); }
inline jboolean IntStream::anyMatch(ref<java::util::function::IntPredicate> p1) { return call_method<SCAPIX_META_STRING("anyMatch"), jboolean>(p1); }
inline jboolean IntStream::allMatch(ref<java::util::function::IntPredicate> p1) { return call_method<SCAPIX_META_STRING("allMatch"), jboolean>(p1); }
inline jboolean IntStream::noneMatch(ref<java::util::function::IntPredicate> p1) { return call_method<SCAPIX_META_STRING("noneMatch"), jboolean>(p1); }
inline ref<java::util::OptionalInt> IntStream::findFirst() { return call_method<SCAPIX_META_STRING("findFirst"), ref<java::util::OptionalInt>>(); }
inline ref<java::util::OptionalInt> IntStream::findAny() { return call_method<SCAPIX_META_STRING("findAny"), ref<java::util::OptionalInt>>(); }
inline ref<java::util::stream::LongStream> IntStream::asLongStream() { return call_method<SCAPIX_META_STRING("asLongStream"), ref<java::util::stream::LongStream>>(); }
inline ref<java::util::stream::DoubleStream> IntStream::asDoubleStream() { return call_method<SCAPIX_META_STRING("asDoubleStream"), ref<java::util::stream::DoubleStream>>(); }
inline ref<java::util::stream::Stream> IntStream::boxed() { return call_method<SCAPIX_META_STRING("boxed"), ref<java::util::stream::Stream>>(); }
inline ref<java::util::stream::IntStream> IntStream::sequential() { return call_method<SCAPIX_META_STRING("sequential"), ref<java::util::stream::IntStream>>(); }
inline ref<java::util::stream::IntStream> IntStream::parallel() { return call_method<SCAPIX_META_STRING("parallel"), ref<java::util::stream::IntStream>>(); }
inline ref<java::util::PrimitiveIterator_OfInt> IntStream::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::PrimitiveIterator_OfInt>>(); }
inline ref<java::util::Spliterator_OfInt> IntStream::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfInt>>(); }
inline ref<java::util::stream::IntStream_Builder> IntStream::builder() { return call_static_method<SCAPIX_META_STRING("builder"), ref<java::util::stream::IntStream_Builder>>(); }
inline ref<java::util::stream::IntStream> IntStream::empty() { return call_static_method<SCAPIX_META_STRING("empty"), ref<java::util::stream::IntStream>>(); }
inline ref<java::util::stream::IntStream> IntStream::of(jint t) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::stream::IntStream>>(t); }
inline ref<java::util::stream::IntStream> IntStream::of(ref<link::java::array<jint>> values) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::stream::IntStream>>(values); }
inline ref<java::util::stream::IntStream> IntStream::iterate(jint seed, ref<java::util::function::IntUnaryOperator> f) { return call_static_method<SCAPIX_META_STRING("iterate"), ref<java::util::stream::IntStream>>(seed, f); }
inline ref<java::util::stream::IntStream> IntStream::generate(ref<java::util::function::IntSupplier> s) { return call_static_method<SCAPIX_META_STRING("generate"), ref<java::util::stream::IntStream>>(s); }
inline ref<java::util::stream::IntStream> IntStream::range(jint startInclusive, jint endExclusive) { return call_static_method<SCAPIX_META_STRING("range"), ref<java::util::stream::IntStream>>(startInclusive, endExclusive); }
inline ref<java::util::stream::IntStream> IntStream::rangeClosed(jint startInclusive, jint endInclusive) { return call_static_method<SCAPIX_META_STRING("rangeClosed"), ref<java::util::stream::IntStream>>(startInclusive, endInclusive); }
inline ref<java::util::stream::IntStream> IntStream::concat(ref<java::util::stream::IntStream> a, ref<java::util::stream::IntStream> b) { return call_static_method<SCAPIX_META_STRING("concat"), ref<java::util::stream::IntStream>>(a, b); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_INTSTREAM_H
