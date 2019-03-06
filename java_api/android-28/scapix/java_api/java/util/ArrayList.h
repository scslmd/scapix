// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractList.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/RandomAccess.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_ARRAYLIST_H
#define SCAPIX_JAVA_UTIL_ARRAYLIST_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::util { class Collection; }
namespace java::util { class Comparator; }
namespace java::util { class Iterator; }
namespace java::util { class ListIterator; }
namespace java::util { class Spliterator; }
namespace java::util::function { class Consumer; }
namespace java::util::function { class Predicate; }
namespace java::util::function { class UnaryOperator; }

namespace java::util {

class ArrayList : public object_base<SCAPIX_META_STRING("java/util/ArrayList"),
	java::util::AbstractList,
	java::util::List,
	java::util::RandomAccess,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static ref<ArrayList> new_object(jint initialCapacity);
	static ref<ArrayList> new_object();
	static ref<ArrayList> new_object(ref<java::util::Collection> c);
	void trimToSize();
	void ensureCapacity(jint minCapacity);
	jint size();
	jboolean isEmpty();
	jboolean contains(ref<java::lang::Object> o);
	jint indexOf(ref<java::lang::Object> o);
	jint lastIndexOf(ref<java::lang::Object> o);
	ref<java::lang::Object> clone();
	ref<link::java::array<java::lang::Object>> toArray();
	ref<link::java::array<java::lang::Object>> toArray(ref<link::java::array<java::lang::Object>> a);
	ref<java::lang::Object> get(jint index);
	ref<java::lang::Object> set(jint index, ref<java::lang::Object> element);
	jboolean add(ref<java::lang::Object> e);
	void add(jint index, ref<java::lang::Object> element);
	ref<java::lang::Object> remove(jint index);
	jboolean remove(ref<java::lang::Object> o);
	void clear();
	jboolean addAll(ref<java::util::Collection> c);
	jboolean addAll(jint index, ref<java::util::Collection> c);
	jboolean removeAll(ref<java::util::Collection> c);
	jboolean retainAll(ref<java::util::Collection> c);
	ref<java::util::ListIterator> listIterator(jint index);
	ref<java::util::ListIterator> listIterator();
	ref<java::util::Iterator> iterator();
	ref<java::util::List> subList(jint fromIndex, jint toIndex);
	void forEach(ref<java::util::function::Consumer> action);
	ref<java::util::Spliterator> spliterator();
	jboolean removeIf(ref<java::util::function::Predicate> filter);
	void replaceAll(ref<java::util::function::UnaryOperator> operator_);
	void sort(ref<java::util::Comparator> c);

protected:

	ArrayList(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/ListIterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>

namespace scapix::java_api {
namespace java::util {

inline ref<ArrayList> ArrayList::new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
inline ref<ArrayList> ArrayList::new_object() { return base_::new_object(); }
inline ref<ArrayList> ArrayList::new_object(ref<java::util::Collection> c) { return base_::new_object(c); }
inline void ArrayList::trimToSize() { return call_method<SCAPIX_META_STRING("trimToSize"), void>(); }
inline void ArrayList::ensureCapacity(jint minCapacity) { return call_method<SCAPIX_META_STRING("ensureCapacity"), void>(minCapacity); }
inline jint ArrayList::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jboolean ArrayList::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline jboolean ArrayList::contains(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(o); }
inline jint ArrayList::indexOf(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("indexOf"), jint>(o); }
inline jint ArrayList::lastIndexOf(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("lastIndexOf"), jint>(o); }
inline ref<java::lang::Object> ArrayList::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline ref<link::java::array<java::lang::Object>> ArrayList::toArray() { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(); }
inline ref<link::java::array<java::lang::Object>> ArrayList::toArray(ref<link::java::array<java::lang::Object>> a) { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(a); }
inline ref<java::lang::Object> ArrayList::get(jint index) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(index); }
inline ref<java::lang::Object> ArrayList::set(jint index, ref<java::lang::Object> element) { return call_method<SCAPIX_META_STRING("set"), ref<java::lang::Object>>(index, element); }
inline jboolean ArrayList::add(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("add"), jboolean>(e); }
inline void ArrayList::add(jint index, ref<java::lang::Object> element) { return call_method<SCAPIX_META_STRING("add"), void>(index, element); }
inline ref<java::lang::Object> ArrayList::remove(jint index) { return call_method<SCAPIX_META_STRING("remove"), ref<java::lang::Object>>(index); }
inline jboolean ArrayList::remove(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("remove"), jboolean>(o); }
inline void ArrayList::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline jboolean ArrayList::addAll(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("addAll"), jboolean>(c); }
inline jboolean ArrayList::addAll(jint index, ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("addAll"), jboolean>(index, c); }
inline jboolean ArrayList::removeAll(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("removeAll"), jboolean>(c); }
inline jboolean ArrayList::retainAll(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("retainAll"), jboolean>(c); }
inline ref<java::util::ListIterator> ArrayList::listIterator(jint index) { return call_method<SCAPIX_META_STRING("listIterator"), ref<java::util::ListIterator>>(index); }
inline ref<java::util::ListIterator> ArrayList::listIterator() { return call_method<SCAPIX_META_STRING("listIterator"), ref<java::util::ListIterator>>(); }
inline ref<java::util::Iterator> ArrayList::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline ref<java::util::List> ArrayList::subList(jint fromIndex, jint toIndex) { return call_method<SCAPIX_META_STRING("subList"), ref<java::util::List>>(fromIndex, toIndex); }
inline void ArrayList::forEach(ref<java::util::function::Consumer> action) { return call_method<SCAPIX_META_STRING("forEach"), void>(action); }
inline ref<java::util::Spliterator> ArrayList::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(); }
inline jboolean ArrayList::removeIf(ref<java::util::function::Predicate> filter) { return call_method<SCAPIX_META_STRING("removeIf"), jboolean>(filter); }
inline void ArrayList::replaceAll(ref<java::util::function::UnaryOperator> operator_) { return call_method<SCAPIX_META_STRING("replaceAll"), void>(operator_); }
inline void ArrayList::sort(ref<java::util::Comparator> c) { return call_method<SCAPIX_META_STRING("sort"), void>(c); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_ARRAYLIST_H
