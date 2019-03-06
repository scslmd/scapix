// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_FUNCTION_SUPPLIER_H
#define SCAPIX_JAVA_UTIL_FUNCTION_SUPPLIER_H

namespace scapix::java_api {
namespace java::util::function {

class Supplier : public object_base<SCAPIX_META_STRING("java/util/function/Supplier"),
	java::lang::Object>
{
public:

	ref<java::lang::Object> get();

protected:

	Supplier(handle_type h) : base_(h) {}

};

} // namespace java::util::function
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util::function {

inline ref<java::lang::Object> Supplier::get() { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(); }

} // namespace java::util::function
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_FUNCTION_SUPPLIER_H
