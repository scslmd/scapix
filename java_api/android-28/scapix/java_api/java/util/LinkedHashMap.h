// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/HashMap.h>
#include <scapix/java_api/java/util/Map.h>

#ifndef SCAPIX_JAVA_UTIL_LINKEDHASHMAP_H
#define SCAPIX_JAVA_UTIL_LINKEDHASHMAP_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::util { class Collection; }
namespace java::util { class Set; }
namespace java::util::function { class BiConsumer; }
namespace java::util::function { class BiFunction; }

namespace java::util {

class LinkedHashMap : public object_base<SCAPIX_META_STRING("java/util/LinkedHashMap"),
	java::util::HashMap,
	java::util::Map>
{
public:

	static ref<LinkedHashMap> new_object(jint initialCapacity, jfloat loadFactor);
	static ref<LinkedHashMap> new_object(jint initialCapacity);
	static ref<LinkedHashMap> new_object();
	static ref<LinkedHashMap> new_object(ref<java::util::Map> m);
	static ref<LinkedHashMap> new_object(jint initialCapacity, jfloat loadFactor, jboolean accessOrder);
	jboolean containsValue(ref<java::lang::Object> value);
	ref<java::lang::Object> get(ref<java::lang::Object> key);
	ref<java::lang::Object> getOrDefault(ref<java::lang::Object> key, ref<java::lang::Object> defaultValue);
	void clear();
	ref<java::util::Set> keySet();
	ref<java::util::Collection> values();
	ref<java::util::Set> entrySet();
	void forEach(ref<java::util::function::BiConsumer> action);
	void replaceAll(ref<java::util::function::BiFunction> function);

protected:

	LinkedHashMap(handle_type h) : base_(h) {}

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

inline ref<LinkedHashMap> LinkedHashMap::new_object(jint initialCapacity, jfloat loadFactor) { return base_::new_object(initialCapacity, loadFactor); }
inline ref<LinkedHashMap> LinkedHashMap::new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
inline ref<LinkedHashMap> LinkedHashMap::new_object() { return base_::new_object(); }
inline ref<LinkedHashMap> LinkedHashMap::new_object(ref<java::util::Map> m) { return base_::new_object(m); }
inline ref<LinkedHashMap> LinkedHashMap::new_object(jint initialCapacity, jfloat loadFactor, jboolean accessOrder) { return base_::new_object(initialCapacity, loadFactor, accessOrder); }
inline jboolean LinkedHashMap::containsValue(ref<java::lang::Object> value) { return call_method<SCAPIX_META_STRING("containsValue"), jboolean>(value); }
inline ref<java::lang::Object> LinkedHashMap::get(ref<java::lang::Object> key) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(key); }
inline ref<java::lang::Object> LinkedHashMap::getOrDefault(ref<java::lang::Object> key, ref<java::lang::Object> defaultValue) { return call_method<SCAPIX_META_STRING("getOrDefault"), ref<java::lang::Object>>(key, defaultValue); }
inline void LinkedHashMap::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline ref<java::util::Set> LinkedHashMap::keySet() { return call_method<SCAPIX_META_STRING("keySet"), ref<java::util::Set>>(); }
inline ref<java::util::Collection> LinkedHashMap::values() { return call_method<SCAPIX_META_STRING("values"), ref<java::util::Collection>>(); }
inline ref<java::util::Set> LinkedHashMap::entrySet() { return call_method<SCAPIX_META_STRING("entrySet"), ref<java::util::Set>>(); }
inline void LinkedHashMap::forEach(ref<java::util::function::BiConsumer> action) { return call_method<SCAPIX_META_STRING("forEach"), void>(action); }
inline void LinkedHashMap::replaceAll(ref<java::util::function::BiFunction> function) { return call_method<SCAPIX_META_STRING("replaceAll"), void>(function); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_LINKEDHASHMAP_H
