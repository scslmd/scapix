// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_SPLITTABLERANDOM_H
#define SCAPIX_JAVA_UTIL_SPLITTABLERANDOM_H

namespace scapix::java_api {

namespace java::util::stream { class DoubleStream; }
namespace java::util::stream { class IntStream; }
namespace java::util::stream { class LongStream; }

namespace java::util {

class SplittableRandom : public object_base<SCAPIX_META_STRING("java/util/SplittableRandom"),
	java::lang::Object>
{
public:

	static ref<SplittableRandom> new_object(jlong seed);
	static ref<SplittableRandom> new_object();
	ref<java::util::SplittableRandom> split();
	jint nextInt();
	jint nextInt(jint bound);
	jint nextInt(jint origin, jint bound);
	jlong nextLong();
	jlong nextLong(jlong bound);
	jlong nextLong(jlong origin, jlong p2);
	jdouble nextDouble();
	jdouble nextDouble(jdouble bound);
	jdouble nextDouble(jdouble origin, jdouble p2);
	jboolean nextBoolean();
	ref<java::util::stream::IntStream> ints(jlong streamSize);
	ref<java::util::stream::IntStream> ints();
	ref<java::util::stream::IntStream> ints(jlong streamSize, jint p2, jint randomNumberOrigin);
	ref<java::util::stream::IntStream> ints(jint randomNumberOrigin, jint randomNumberBound);
	ref<java::util::stream::LongStream> longs(jlong streamSize);
	ref<java::util::stream::LongStream> longs();
	ref<java::util::stream::LongStream> longs(jlong streamSize, jlong p2, jlong randomNumberOrigin);
	ref<java::util::stream::LongStream> longs(jlong randomNumberOrigin, jlong p2);
	ref<java::util::stream::DoubleStream> doubles(jlong streamSize);
	ref<java::util::stream::DoubleStream> doubles();
	ref<java::util::stream::DoubleStream> doubles(jlong streamSize, jdouble p2, jdouble randomNumberOrigin);
	ref<java::util::stream::DoubleStream> doubles(jdouble randomNumberOrigin, jdouble p2);

protected:

	SplittableRandom(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/stream/DoubleStream.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#include <scapix/java_api/java/util/stream/LongStream.h>

namespace scapix::java_api {
namespace java::util {

inline ref<SplittableRandom> SplittableRandom::new_object(jlong seed) { return base_::new_object(seed); }
inline ref<SplittableRandom> SplittableRandom::new_object() { return base_::new_object(); }
inline ref<java::util::SplittableRandom> SplittableRandom::split() { return call_method<SCAPIX_META_STRING("split"), ref<java::util::SplittableRandom>>(); }
inline jint SplittableRandom::nextInt() { return call_method<SCAPIX_META_STRING("nextInt"), jint>(); }
inline jint SplittableRandom::nextInt(jint bound) { return call_method<SCAPIX_META_STRING("nextInt"), jint>(bound); }
inline jint SplittableRandom::nextInt(jint origin, jint bound) { return call_method<SCAPIX_META_STRING("nextInt"), jint>(origin, bound); }
inline jlong SplittableRandom::nextLong() { return call_method<SCAPIX_META_STRING("nextLong"), jlong>(); }
inline jlong SplittableRandom::nextLong(jlong bound) { return call_method<SCAPIX_META_STRING("nextLong"), jlong>(bound); }
inline jlong SplittableRandom::nextLong(jlong origin, jlong p2) { return call_method<SCAPIX_META_STRING("nextLong"), jlong>(origin, p2); }
inline jdouble SplittableRandom::nextDouble() { return call_method<SCAPIX_META_STRING("nextDouble"), jdouble>(); }
inline jdouble SplittableRandom::nextDouble(jdouble bound) { return call_method<SCAPIX_META_STRING("nextDouble"), jdouble>(bound); }
inline jdouble SplittableRandom::nextDouble(jdouble origin, jdouble p2) { return call_method<SCAPIX_META_STRING("nextDouble"), jdouble>(origin, p2); }
inline jboolean SplittableRandom::nextBoolean() { return call_method<SCAPIX_META_STRING("nextBoolean"), jboolean>(); }
inline ref<java::util::stream::IntStream> SplittableRandom::ints(jlong streamSize) { return call_method<SCAPIX_META_STRING("ints"), ref<java::util::stream::IntStream>>(streamSize); }
inline ref<java::util::stream::IntStream> SplittableRandom::ints() { return call_method<SCAPIX_META_STRING("ints"), ref<java::util::stream::IntStream>>(); }
inline ref<java::util::stream::IntStream> SplittableRandom::ints(jlong streamSize, jint p2, jint randomNumberOrigin) { return call_method<SCAPIX_META_STRING("ints"), ref<java::util::stream::IntStream>>(streamSize, p2, randomNumberOrigin); }
inline ref<java::util::stream::IntStream> SplittableRandom::ints(jint randomNumberOrigin, jint randomNumberBound) { return call_method<SCAPIX_META_STRING("ints"), ref<java::util::stream::IntStream>>(randomNumberOrigin, randomNumberBound); }
inline ref<java::util::stream::LongStream> SplittableRandom::longs(jlong streamSize) { return call_method<SCAPIX_META_STRING("longs"), ref<java::util::stream::LongStream>>(streamSize); }
inline ref<java::util::stream::LongStream> SplittableRandom::longs() { return call_method<SCAPIX_META_STRING("longs"), ref<java::util::stream::LongStream>>(); }
inline ref<java::util::stream::LongStream> SplittableRandom::longs(jlong streamSize, jlong p2, jlong randomNumberOrigin) { return call_method<SCAPIX_META_STRING("longs"), ref<java::util::stream::LongStream>>(streamSize, p2, randomNumberOrigin); }
inline ref<java::util::stream::LongStream> SplittableRandom::longs(jlong randomNumberOrigin, jlong p2) { return call_method<SCAPIX_META_STRING("longs"), ref<java::util::stream::LongStream>>(randomNumberOrigin, p2); }
inline ref<java::util::stream::DoubleStream> SplittableRandom::doubles(jlong streamSize) { return call_method<SCAPIX_META_STRING("doubles"), ref<java::util::stream::DoubleStream>>(streamSize); }
inline ref<java::util::stream::DoubleStream> SplittableRandom::doubles() { return call_method<SCAPIX_META_STRING("doubles"), ref<java::util::stream::DoubleStream>>(); }
inline ref<java::util::stream::DoubleStream> SplittableRandom::doubles(jlong streamSize, jdouble p2, jdouble randomNumberOrigin) { return call_method<SCAPIX_META_STRING("doubles"), ref<java::util::stream::DoubleStream>>(streamSize, p2, randomNumberOrigin); }
inline ref<java::util::stream::DoubleStream> SplittableRandom::doubles(jdouble randomNumberOrigin, jdouble p2) { return call_method<SCAPIX_META_STRING("doubles"), ref<java::util::stream::DoubleStream>>(randomNumberOrigin, p2); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_SPLITTABLERANDOM_H
