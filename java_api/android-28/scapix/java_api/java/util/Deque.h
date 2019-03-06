// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Queue.h>

#ifndef SCAPIX_JAVA_UTIL_DEQUE_H
#define SCAPIX_JAVA_UTIL_DEQUE_H

namespace scapix::java_api {

namespace java::util { class Iterator; }

namespace java::util {

class Deque : public object_base<SCAPIX_META_STRING("java/util/Deque"),
	java::lang::Object,
	java::util::Queue>
{
public:

	void addFirst(ref<java::lang::Object> p1);
	void addLast(ref<java::lang::Object> p1);
	jboolean offerFirst(ref<java::lang::Object> p1);
	jboolean offerLast(ref<java::lang::Object> p1);
	ref<java::lang::Object> removeFirst();
	ref<java::lang::Object> removeLast();
	ref<java::lang::Object> pollFirst();
	ref<java::lang::Object> pollLast();
	ref<java::lang::Object> getFirst();
	ref<java::lang::Object> getLast();
	ref<java::lang::Object> peekFirst();
	ref<java::lang::Object> peekLast();
	jboolean removeFirstOccurrence(ref<java::lang::Object> p1);
	jboolean removeLastOccurrence(ref<java::lang::Object> p1);
	jboolean add(ref<java::lang::Object> p1);
	jboolean offer(ref<java::lang::Object> p1);
	ref<java::lang::Object> remove();
	ref<java::lang::Object> poll();
	ref<java::lang::Object> element();
	ref<java::lang::Object> peek();
	void push(ref<java::lang::Object> p1);
	ref<java::lang::Object> pop();
	jboolean remove(ref<java::lang::Object> p1);
	jboolean contains(ref<java::lang::Object> p1);
	jint size();
	ref<java::util::Iterator> iterator();
	ref<java::util::Iterator> descendingIterator();

protected:

	Deque(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Iterator.h>

namespace scapix::java_api {
namespace java::util {

inline void Deque::addFirst(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("addFirst"), void>(p1); }
inline void Deque::addLast(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("addLast"), void>(p1); }
inline jboolean Deque::offerFirst(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("offerFirst"), jboolean>(p1); }
inline jboolean Deque::offerLast(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("offerLast"), jboolean>(p1); }
inline ref<java::lang::Object> Deque::removeFirst() { return call_method<SCAPIX_META_STRING("removeFirst"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Deque::removeLast() { return call_method<SCAPIX_META_STRING("removeLast"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Deque::pollFirst() { return call_method<SCAPIX_META_STRING("pollFirst"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Deque::pollLast() { return call_method<SCAPIX_META_STRING("pollLast"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Deque::getFirst() { return call_method<SCAPIX_META_STRING("getFirst"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Deque::getLast() { return call_method<SCAPIX_META_STRING("getLast"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Deque::peekFirst() { return call_method<SCAPIX_META_STRING("peekFirst"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Deque::peekLast() { return call_method<SCAPIX_META_STRING("peekLast"), ref<java::lang::Object>>(); }
inline jboolean Deque::removeFirstOccurrence(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("removeFirstOccurrence"), jboolean>(p1); }
inline jboolean Deque::removeLastOccurrence(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("removeLastOccurrence"), jboolean>(p1); }
inline jboolean Deque::add(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("add"), jboolean>(p1); }
inline jboolean Deque::offer(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("offer"), jboolean>(p1); }
inline ref<java::lang::Object> Deque::remove() { return call_method<SCAPIX_META_STRING("remove"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Deque::poll() { return call_method<SCAPIX_META_STRING("poll"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Deque::element() { return call_method<SCAPIX_META_STRING("element"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Deque::peek() { return call_method<SCAPIX_META_STRING("peek"), ref<java::lang::Object>>(); }
inline void Deque::push(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("push"), void>(p1); }
inline ref<java::lang::Object> Deque::pop() { return call_method<SCAPIX_META_STRING("pop"), ref<java::lang::Object>>(); }
inline jboolean Deque::remove(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("remove"), jboolean>(p1); }
inline jboolean Deque::contains(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(p1); }
inline jint Deque::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline ref<java::util::Iterator> Deque::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline ref<java::util::Iterator> Deque::descendingIterator() { return call_method<SCAPIX_META_STRING("descendingIterator"), ref<java::util::Iterator>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_DEQUE_H
