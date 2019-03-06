// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractQueue.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_PRIORITYQUEUE_H
#define SCAPIX_JAVA_UTIL_PRIORITYQUEUE_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::util { class Collection; }
namespace java::util { class Comparator; }
namespace java::util { class Iterator; }
namespace java::util { class SortedSet; }
namespace java::util { class Spliterator; }

namespace java::util {

class PriorityQueue : public object_base<SCAPIX_META_STRING("java/util/PriorityQueue"),
	java::util::AbstractQueue,
	java::io::Serializable>
{
public:

	static ref<PriorityQueue> new_object();
	static ref<PriorityQueue> new_object(jint initialCapacity);
	static ref<PriorityQueue> new_object(ref<java::util::Comparator> comparator);
	static ref<PriorityQueue> new_object(jint initialCapacity, ref<java::util::Comparator> comparator);
	static ref<PriorityQueue> new_object(ref<java::util::Collection> c);
	static ref<PriorityQueue> new_object(ref<java::util::PriorityQueue> c);
	static ref<PriorityQueue> new_object(ref<java::util::SortedSet> c);
	jboolean add(ref<java::lang::Object> e);
	jboolean offer(ref<java::lang::Object> e);
	ref<java::lang::Object> peek();
	jboolean remove(ref<java::lang::Object> o);
	jboolean contains(ref<java::lang::Object> o);
	ref<link::java::array<java::lang::Object>> toArray();
	ref<link::java::array<java::lang::Object>> toArray(ref<link::java::array<java::lang::Object>> a);
	ref<java::util::Iterator> iterator();
	jint size();
	void clear();
	ref<java::lang::Object> poll();
	ref<java::util::Comparator> comparator();
	ref<java::util::Spliterator> spliterator();

protected:

	PriorityQueue(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/SortedSet.h>
#include <scapix/java_api/java/util/Spliterator.h>

namespace scapix::java_api {
namespace java::util {

inline ref<PriorityQueue> PriorityQueue::new_object() { return base_::new_object(); }
inline ref<PriorityQueue> PriorityQueue::new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
inline ref<PriorityQueue> PriorityQueue::new_object(ref<java::util::Comparator> comparator) { return base_::new_object(comparator); }
inline ref<PriorityQueue> PriorityQueue::new_object(jint initialCapacity, ref<java::util::Comparator> comparator) { return base_::new_object(initialCapacity, comparator); }
inline ref<PriorityQueue> PriorityQueue::new_object(ref<java::util::Collection> c) { return base_::new_object(c); }
inline ref<PriorityQueue> PriorityQueue::new_object(ref<java::util::PriorityQueue> c) { return base_::new_object(c); }
inline ref<PriorityQueue> PriorityQueue::new_object(ref<java::util::SortedSet> c) { return base_::new_object(c); }
inline jboolean PriorityQueue::add(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("add"), jboolean>(e); }
inline jboolean PriorityQueue::offer(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("offer"), jboolean>(e); }
inline ref<java::lang::Object> PriorityQueue::peek() { return call_method<SCAPIX_META_STRING("peek"), ref<java::lang::Object>>(); }
inline jboolean PriorityQueue::remove(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("remove"), jboolean>(o); }
inline jboolean PriorityQueue::contains(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(o); }
inline ref<link::java::array<java::lang::Object>> PriorityQueue::toArray() { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(); }
inline ref<link::java::array<java::lang::Object>> PriorityQueue::toArray(ref<link::java::array<java::lang::Object>> a) { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(a); }
inline ref<java::util::Iterator> PriorityQueue::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline jint PriorityQueue::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline void PriorityQueue::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline ref<java::lang::Object> PriorityQueue::poll() { return call_method<SCAPIX_META_STRING("poll"), ref<java::lang::Object>>(); }
inline ref<java::util::Comparator> PriorityQueue::comparator() { return call_method<SCAPIX_META_STRING("comparator"), ref<java::util::Comparator>>(); }
inline ref<java::util::Spliterator> PriorityQueue::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_PRIORITYQUEUE_H
