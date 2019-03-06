// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/ConcurrentMap.h>
#include <scapix/java_api/java/util/NavigableMap.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_CONCURRENTNAVIGABLEMAP_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_CONCURRENTNAVIGABLEMAP_H

namespace scapix::java_api {

namespace java::util { class NavigableSet; }

namespace java::util::concurrent {

class ConcurrentNavigableMap : public object_base<SCAPIX_META_STRING("java/util/concurrent/ConcurrentNavigableMap"),
	java::lang::Object,
	java::util::concurrent::ConcurrentMap,
	java::util::NavigableMap>
{
public:

	ref<java::util::concurrent::ConcurrentNavigableMap> subMap(ref<java::lang::Object> p1, jboolean p2, ref<java::lang::Object> p3, jboolean p4);
	ref<java::util::concurrent::ConcurrentNavigableMap> headMap(ref<java::lang::Object> p1, jboolean p2);
	ref<java::util::concurrent::ConcurrentNavigableMap> tailMap(ref<java::lang::Object> p1, jboolean p2);
	ref<java::util::concurrent::ConcurrentNavigableMap> subMap(ref<java::lang::Object> p1, ref<java::lang::Object> p2);
	ref<java::util::concurrent::ConcurrentNavigableMap> headMap(ref<java::lang::Object> p1);
	ref<java::util::concurrent::ConcurrentNavigableMap> tailMap(ref<java::lang::Object> p1);
	ref<java::util::concurrent::ConcurrentNavigableMap> descendingMap();
	ref<java::util::NavigableSet> navigableKeySet();
	ref<java::util::NavigableSet> keySet();
	ref<java::util::NavigableSet> descendingKeySet();

protected:

	ConcurrentNavigableMap(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/util/NavigableSet.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<java::util::concurrent::ConcurrentNavigableMap> ConcurrentNavigableMap::subMap(ref<java::lang::Object> p1, jboolean p2, ref<java::lang::Object> p3, jboolean p4) { return call_method<SCAPIX_META_STRING("subMap"), ref<java::util::concurrent::ConcurrentNavigableMap>>(p1, p2, p3, p4); }
inline ref<java::util::concurrent::ConcurrentNavigableMap> ConcurrentNavigableMap::headMap(ref<java::lang::Object> p1, jboolean p2) { return call_method<SCAPIX_META_STRING("headMap"), ref<java::util::concurrent::ConcurrentNavigableMap>>(p1, p2); }
inline ref<java::util::concurrent::ConcurrentNavigableMap> ConcurrentNavigableMap::tailMap(ref<java::lang::Object> p1, jboolean p2) { return call_method<SCAPIX_META_STRING("tailMap"), ref<java::util::concurrent::ConcurrentNavigableMap>>(p1, p2); }
inline ref<java::util::concurrent::ConcurrentNavigableMap> ConcurrentNavigableMap::subMap(ref<java::lang::Object> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("subMap"), ref<java::util::concurrent::ConcurrentNavigableMap>>(p1, p2); }
inline ref<java::util::concurrent::ConcurrentNavigableMap> ConcurrentNavigableMap::headMap(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("headMap"), ref<java::util::concurrent::ConcurrentNavigableMap>>(p1); }
inline ref<java::util::concurrent::ConcurrentNavigableMap> ConcurrentNavigableMap::tailMap(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("tailMap"), ref<java::util::concurrent::ConcurrentNavigableMap>>(p1); }
inline ref<java::util::concurrent::ConcurrentNavigableMap> ConcurrentNavigableMap::descendingMap() { return call_method<SCAPIX_META_STRING("descendingMap"), ref<java::util::concurrent::ConcurrentNavigableMap>>(); }
inline ref<java::util::NavigableSet> ConcurrentNavigableMap::navigableKeySet() { return call_method<SCAPIX_META_STRING("navigableKeySet"), ref<java::util::NavigableSet>>(); }
inline ref<java::util::NavigableSet> ConcurrentNavigableMap::keySet() { return call_method<SCAPIX_META_STRING("keySet"), ref<java::util::NavigableSet>>(); }
inline ref<java::util::NavigableSet> ConcurrentNavigableMap::descendingKeySet() { return call_method<SCAPIX_META_STRING("descendingKeySet"), ref<java::util::NavigableSet>>(); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_CONCURRENTNAVIGABLEMAP_H
