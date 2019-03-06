// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/WeakPairMap_Pair.h>

#ifndef SCAPIX_JAVA_LANG_WEAKPAIRMAP_PAIR_LOOKUP_H
#define SCAPIX_JAVA_LANG_WEAKPAIRMAP_PAIR_LOOKUP_H

namespace scapix::java_api {


namespace java::lang {

class WeakPairMap_Pair_Lookup : public object_base<SCAPIX_META_STRING("java/lang/WeakPairMap$Pair$Lookup"),
	java::lang::Object,
	java::lang::WeakPairMap_Pair>
{
public:

	ref<java::lang::Object> first();
	ref<java::lang::Object> second();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);

protected:

	WeakPairMap_Pair_Lookup(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::lang {

inline ref<java::lang::Object> WeakPairMap_Pair_Lookup::first() { return call_method<SCAPIX_META_STRING("first"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> WeakPairMap_Pair_Lookup::second() { return call_method<SCAPIX_META_STRING("second"), ref<java::lang::Object>>(); }
inline jint WeakPairMap_Pair_Lookup::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean WeakPairMap_Pair_Lookup::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_WEAKPAIRMAP_PAIR_LOOKUP_H
