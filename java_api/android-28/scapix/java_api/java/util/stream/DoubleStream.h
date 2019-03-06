// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/BaseStream.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_DOUBLESTREAM_H
#define SCAPIX_JAVA_UTIL_STREAM_DOUBLESTREAM_H

namespace scapix::java_api {

namespace java::util { class DoubleSummaryStatistics; }
namespace java::util { class OptionalDouble; }
namespace java::util { class PrimitiveIterator_OfDouble; }
namespace java::util { class Spliterator_OfDouble; }
namespace java::util::function { class BiConsumer; }
namespace java::util::function { class DoubleBinaryOperator; }
namespace java::util::function { class DoubleConsumer; }
namespace java::util::function { class DoubleFunction; }
namespace java::util::function { class DoublePredicate; }
namespace java::util::function { class DoubleSupplier; }
namespace java::util::function { class DoubleToIntFunction; }
namespace java::util::function { class DoubleToLongFunction; }
namespace java::util::function { class DoubleUnaryOperator; }
namespace java::util::function { class ObjDoubleConsumer; }
namespace java::util::function { class Supplier; }
namespace java::util::stream { class DoubleStream_Builder; }
namespace java::util::stream { class IntStream; }
namespace java::util::stream { class LongStream; }
namespace java::util::stream { class Stream; }

namespace java::util::stream {

class DoubleStream : public object_base<SCAPIX_META_STRING("java/util/stream/DoubleStream"),
	java::lang::Object,
	java::util::stream::BaseStream>
{
public:

	using Builder = DoubleStream_Builder;

	ref<java::util::stream::DoubleStream> filter(ref<java::util::function::DoublePredicate> p1);
	ref<java::util::stream::DoubleStream> map(ref<java::util::function::DoubleUnaryOperator> p1);
	ref<java::util::stream::Stream> mapToObj(ref<java::util::function::DoubleFunction> p1);
	ref<java::util::stream::IntStream> mapToInt(ref<java::util::function::DoubleToIntFunction> p1);
	ref<java::util::stream::LongStream> mapToLong(ref<java::util::function::DoubleToLongFunction> p1);
	ref<java::util::stream::DoubleStream> flatMap(ref<java::util::function::DoubleFunction> p1);
	ref<java::util::stream::DoubleStream> distinct();
	ref<java::util::stream::DoubleStream> sorted();
	ref<java::util::stream::DoubleStream> peek(ref<java::util::function::DoubleConsumer> p1);
	ref<java::util::stream::DoubleStream> limit(jlong p1);
	ref<java::util::stream::DoubleStream> skip(jlong p1);
	void forEach(ref<java::util::function::DoubleConsumer> p1);
	void forEachOrdered(ref<java::util::function::DoubleConsumer> p1);
	ref<link::java::array<jdouble>> toArray();
	jdouble reduce(jdouble p1, ref<java::util::function::DoubleBinaryOperator> p2);
	ref<java::util::OptionalDouble> reduce(ref<java::util::function::DoubleBinaryOperator> p1);
	ref<java::lang::Object> collect(ref<java::util::function::Supplier> p1, ref<java::util::function::ObjDoubleConsumer> p2, ref<java::util::function::BiConsumer> p3);
	jdouble sum();
	ref<java::util::OptionalDouble> min();
	ref<java::util::OptionalDouble> max();
	jlong count();
	ref<java::util::OptionalDouble> average();
	ref<java::util::DoubleSummaryStatistics> summaryStatistics();
	jboolean anyMatch(ref<java::util::function::DoublePredicate> p1);
	jboolean allMatch(ref<java::util::function::DoublePredicate> p1);
	jboolean noneMatch(ref<java::util::function::DoublePredicate> p1);
	ref<java::util::OptionalDouble> findFirst();
	ref<java::util::OptionalDouble> findAny();
	ref<java::util::stream::Stream> boxed();
	ref<java::util::stream::DoubleStream> sequential();
	ref<java::util::stream::DoubleStream> parallel();
	ref<java::util::PrimitiveIterator_OfDouble> iterator();
	ref<java::util::Spliterator_OfDouble> spliterator();
	static ref<java::util::stream::DoubleStream_Builder> builder();
	static ref<java::util::stream::DoubleStream> empty();
	static ref<java::util::stream::DoubleStream> of(jdouble t);
	static ref<java::util::stream::DoubleStream> of(ref<link::java::array<jdouble>> values);
	static ref<java::util::stream::DoubleStream> iterate(jdouble seed, ref<java::util::function::DoubleUnaryOperator> p2);
	static ref<java::util::stream::DoubleStream> generate(ref<java::util::function::DoubleSupplier> s);
	static ref<java::util::stream::DoubleStream> concat(ref<java::util::stream::DoubleStream> a, ref<java::util::stream::DoubleStream> b);

protected:

	DoubleStream(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api

#include <scapix/java_api/java/util/DoubleSummaryStatistics.h>
#include <scapix/java_api/java/util/OptionalDouble.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfDouble.h>
#include <scapix/java_api/java/util/Spliterator_OfDouble.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/DoubleBinaryOperator.h>
#include <scapix/java_api/java/util/function/DoubleConsumer.h>
#include <scapix/java_api/java/util/function/DoubleFunction.h>
#include <scapix/java_api/java/util/function/DoublePredicate.h>
#include <scapix/java_api/java/util/function/DoubleSupplier.h>
#include <scapix/java_api/java/util/function/DoubleToIntFunction.h>
#include <scapix/java_api/java/util/function/DoubleToLongFunction.h>
#include <scapix/java_api/java/util/function/DoubleUnaryOperator.h>
#include <scapix/java_api/java/util/function/ObjDoubleConsumer.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/stream/DoubleStream_Builder.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#include <scapix/java_api/java/util/stream/LongStream.h>
#include <scapix/java_api/java/util/stream/Stream.h>

namespace scapix::java_api {
namespace java::util::stream {

inline ref<java::util::stream::DoubleStream> DoubleStream::filter(ref<java::util::function::DoublePredicate> p1) { return call_method<SCAPIX_META_STRING("filter"), ref<java::util::stream::DoubleStream>>(p1); }
inline ref<java::util::stream::DoubleStream> DoubleStream::map(ref<java::util::function::DoubleUnaryOperator> p1) { return call_method<SCAPIX_META_STRING("map"), ref<java::util::stream::DoubleStream>>(p1); }
inline ref<java::util::stream::Stream> DoubleStream::mapToObj(ref<java::util::function::DoubleFunction> p1) { return call_method<SCAPIX_META_STRING("mapToObj"), ref<java::util::stream::Stream>>(p1); }
inline ref<java::util::stream::IntStream> DoubleStream::mapToInt(ref<java::util::function::DoubleToIntFunction> p1) { return call_method<SCAPIX_META_STRING("mapToInt"), ref<java::util::stream::IntStream>>(p1); }
inline ref<java::util::stream::LongStream> DoubleStream::mapToLong(ref<java::util::function::DoubleToLongFunction> p1) { return call_method<SCAPIX_META_STRING("mapToLong"), ref<java::util::stream::LongStream>>(p1); }
inline ref<java::util::stream::DoubleStream> DoubleStream::flatMap(ref<java::util::function::DoubleFunction> p1) { return call_method<SCAPIX_META_STRING("flatMap"), ref<java::util::stream::DoubleStream>>(p1); }
inline ref<java::util::stream::DoubleStream> DoubleStream::distinct() { return call_method<SCAPIX_META_STRING("distinct"), ref<java::util::stream::DoubleStream>>(); }
inline ref<java::util::stream::DoubleStream> DoubleStream::sorted() { return call_method<SCAPIX_META_STRING("sorted"), ref<java::util::stream::DoubleStream>>(); }
inline ref<java::util::stream::DoubleStream> DoubleStream::peek(ref<java::util::function::DoubleConsumer> p1) { return call_method<SCAPIX_META_STRING("peek"), ref<java::util::stream::DoubleStream>>(p1); }
inline ref<java::util::stream::DoubleStream> DoubleStream::limit(jlong p1) { return call_method<SCAPIX_META_STRING("limit"), ref<java::util::stream::DoubleStream>>(p1); }
inline ref<java::util::stream::DoubleStream> DoubleStream::skip(jlong p1) { return call_method<SCAPIX_META_STRING("skip"), ref<java::util::stream::DoubleStream>>(p1); }
inline void DoubleStream::forEach(ref<java::util::function::DoubleConsumer> p1) { return call_method<SCAPIX_META_STRING("forEach"), void>(p1); }
inline void DoubleStream::forEachOrdered(ref<java::util::function::DoubleConsumer> p1) { return call_method<SCAPIX_META_STRING("forEachOrdered"), void>(p1); }
inline ref<link::java::array<jdouble>> DoubleStream::toArray() { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<jdouble>>>(); }
inline jdouble DoubleStream::reduce(jdouble p1, ref<java::util::function::DoubleBinaryOperator> p2) { return call_method<SCAPIX_META_STRING("reduce"), jdouble>(p1, p2); }
inline ref<java::util::OptionalDouble> DoubleStream::reduce(ref<java::util::function::DoubleBinaryOperator> p1) { return call_method<SCAPIX_META_STRING("reduce"), ref<java::util::OptionalDouble>>(p1); }
inline ref<java::lang::Object> DoubleStream::collect(ref<java::util::function::Supplier> p1, ref<java::util::function::ObjDoubleConsumer> p2, ref<java::util::function::BiConsumer> p3) { return call_method<SCAPIX_META_STRING("collect"), ref<java::lang::Object>>(p1, p2, p3); }
inline jdouble DoubleStream::sum() { return call_method<SCAPIX_META_STRING("sum"), jdouble>(); }
inline ref<java::util::OptionalDouble> DoubleStream::min() { return call_method<SCAPIX_META_STRING("min"), ref<java::util::OptionalDouble>>(); }
inline ref<java::util::OptionalDouble> DoubleStream::max() { return call_method<SCAPIX_META_STRING("max"), ref<java::util::OptionalDouble>>(); }
inline jlong DoubleStream::count() { return call_method<SCAPIX_META_STRING("count"), jlong>(); }
inline ref<java::util::OptionalDouble> DoubleStream::average() { return call_method<SCAPIX_META_STRING("average"), ref<java::util::OptionalDouble>>(); }
inline ref<java::util::DoubleSummaryStatistics> DoubleStream::summaryStatistics() { return call_method<SCAPIX_META_STRING("summaryStatistics"), ref<java::util::DoubleSummaryStatistics>>(); }
inline jboolean DoubleStream::anyMatch(ref<java::util::function::DoublePredicate> p1) { return call_method<SCAPIX_META_STRING("anyMatch"), jboolean>(p1); }
inline jboolean DoubleStream::allMatch(ref<java::util::function::DoublePredicate> p1) { return call_method<SCAPIX_META_STRING("allMatch"), jboolean>(p1); }
inline jboolean DoubleStream::noneMatch(ref<java::util::function::DoublePredicate> p1) { return call_method<SCAPIX_META_STRING("noneMatch"), jboolean>(p1); }
inline ref<java::util::OptionalDouble> DoubleStream::findFirst() { return call_method<SCAPIX_META_STRING("findFirst"), ref<java::util::OptionalDouble>>(); }
inline ref<java::util::OptionalDouble> DoubleStream::findAny() { return call_method<SCAPIX_META_STRING("findAny"), ref<java::util::OptionalDouble>>(); }
inline ref<java::util::stream::Stream> DoubleStream::boxed() { return call_method<SCAPIX_META_STRING("boxed"), ref<java::util::stream::Stream>>(); }
inline ref<java::util::stream::DoubleStream> DoubleStream::sequential() { return call_method<SCAPIX_META_STRING("sequential"), ref<java::util::stream::DoubleStream>>(); }
inline ref<java::util::stream::DoubleStream> DoubleStream::parallel() { return call_method<SCAPIX_META_STRING("parallel"), ref<java::util::stream::DoubleStream>>(); }
inline ref<java::util::PrimitiveIterator_OfDouble> DoubleStream::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::PrimitiveIterator_OfDouble>>(); }
inline ref<java::util::Spliterator_OfDouble> DoubleStream::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfDouble>>(); }
inline ref<java::util::stream::DoubleStream_Builder> DoubleStream::builder() { return call_static_method<SCAPIX_META_STRING("builder"), ref<java::util::stream::DoubleStream_Builder>>(); }
inline ref<java::util::stream::DoubleStream> DoubleStream::empty() { return call_static_method<SCAPIX_META_STRING("empty"), ref<java::util::stream::DoubleStream>>(); }
inline ref<java::util::stream::DoubleStream> DoubleStream::of(jdouble t) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::stream::DoubleStream>>(t); }
inline ref<java::util::stream::DoubleStream> DoubleStream::of(ref<link::java::array<jdouble>> values) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::stream::DoubleStream>>(values); }
inline ref<java::util::stream::DoubleStream> DoubleStream::iterate(jdouble seed, ref<java::util::function::DoubleUnaryOperator> p2) { return call_static_method<SCAPIX_META_STRING("iterate"), ref<java::util::stream::DoubleStream>>(seed, p2); }
inline ref<java::util::stream::DoubleStream> DoubleStream::generate(ref<java::util::function::DoubleSupplier> s) { return call_static_method<SCAPIX_META_STRING("generate"), ref<java::util::stream::DoubleStream>>(s); }
inline ref<java::util::stream::DoubleStream> DoubleStream::concat(ref<java::util::stream::DoubleStream> a, ref<java::util::stream::DoubleStream> b) { return call_static_method<SCAPIX_META_STRING("concat"), ref<java::util::stream::DoubleStream>>(a, b); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_DOUBLESTREAM_H
