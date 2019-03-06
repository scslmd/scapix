// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>
#include <scapix/java_api/java/util/Map.h>

#ifndef SCAPIX_JAVA_UTIL_WEAKHASHMAP_H
#define SCAPIX_JAVA_UTIL_WEAKHASHMAP_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::util { class Collection; }
namespace java::util { class Set; }
namespace java::util::function { class BiConsumer; }
namespace java::util::function { class BiFunction; }

namespace java::util {

class WeakHashMap : public object_base<SCAPIX_META_STRING("java/util/WeakHashMap"),
	java::util::AbstractMap,
	java::util::Map>
{
public:

	static ref<WeakHashMap> new_object(jint initialCapacity, jfloat loadFactor);
	static ref<WeakHashMap> new_object(jint initialCapacity);
	static ref<WeakHashMap> new_object();
	static ref<WeakHashMap> new_object(ref<java::util::Map> m);
	jint size();
	jboolean isEmpty();
	ref<java::lang::Object> get(ref<java::lang::Object> key);
	jboolean containsKey(ref<java::lang::Object> key);
	ref<java::lang::Object> put(ref<java::lang::Object> key, ref<java::lang::Object> value);
	void putAll(ref<java::util::Map> m);
	ref<java::lang::Object> remove(ref<java::lang::Object> key);
	void clear();
	jboolean containsValue(ref<java::lang::Object> value);
	ref<java::util::Set> keySet();
	ref<java::util::Collection> values();
	ref<java::util::Set> entrySet();
	void forEach(ref<java::util::function::BiConsumer> action);
	void replaceAll(ref<java::util::function::BiFunction> function);

protected:

	WeakHashMap(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>

namespace scapix::java_api {
namespace java::util {

inline ref<WeakHashMap> WeakHashMap::new_object(jint initialCapacity, jfloat loadFactor) { return base_::new_object(initialCapacity, loadFactor); }
inline ref<WeakHashMap> WeakHashMap::new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
inline ref<WeakHashMap> WeakHashMap::new_object() { return base_::new_object(); }
inline ref<WeakHashMap> WeakHashMap::new_object(ref<java::util::Map> m) { return base_::new_object(m); }
inline jint WeakHashMap::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jboolean WeakHashMap::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline ref<java::lang::Object> WeakHashMap::get(ref<java::lang::Object> key) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(key); }
inline jboolean WeakHashMap::containsKey(ref<java::lang::Object> key) { return call_method<SCAPIX_META_STRING("containsKey"), jboolean>(key); }
inline ref<java::lang::Object> WeakHashMap::put(ref<java::lang::Object> key, ref<java::lang::Object> value) { return call_method<SCAPIX_META_STRING("put"), ref<java::lang::Object>>(key, value); }
inline void WeakHashMap::putAll(ref<java::util::Map> m) { return call_method<SCAPIX_META_STRING("putAll"), void>(m); }
inline ref<java::lang::Object> WeakHashMap::remove(ref<java::lang::Object> key) { return call_method<SCAPIX_META_STRING("remove"), ref<java::lang::Object>>(key); }
inline void WeakHashMap::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline jboolean WeakHashMap::containsValue(ref<java::lang::Object> value) { return call_method<SCAPIX_META_STRING("containsValue"), jboolean>(value); }
inline ref<java::util::Set> WeakHashMap::keySet() { return call_method<SCAPIX_META_STRING("keySet"), ref<java::util::Set>>(); }
inline ref<java::util::Collection> WeakHashMap::values() { return call_method<SCAPIX_META_STRING("values"), ref<java::util::Collection>>(); }
inline ref<java::util::Set> WeakHashMap::entrySet() { return call_method<SCAPIX_META_STRING("entrySet"), ref<java::util::Set>>(); }
inline void WeakHashMap::forEach(ref<java::util::function::BiConsumer> action) { return call_method<SCAPIX_META_STRING("forEach"), void>(action); }
inline void WeakHashMap::replaceAll(ref<java::util::function::BiFunction> function) { return call_method<SCAPIX_META_STRING("replaceAll"), void>(function); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_WEAKHASHMAP_H
