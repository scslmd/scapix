// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_JSON_JSONSTRINGER_H
#define SCAPIX_ORG_JSON_JSONSTRINGER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace org::json {

class JSONStringer : public object_base<SCAPIX_META_STRING("org/json/JSONStringer"),
	java::lang::Object>
{
public:

	static ref<JSONStringer> new_object();
	ref<org::json::JSONStringer> array();
	ref<org::json::JSONStringer> endArray();
	ref<org::json::JSONStringer> object();
	ref<org::json::JSONStringer> endObject();
	ref<org::json::JSONStringer> value(ref<java::lang::Object> value);
	ref<org::json::JSONStringer> value(jboolean value);
	ref<org::json::JSONStringer> value(jdouble value);
	ref<org::json::JSONStringer> value(jlong value);
	ref<org::json::JSONStringer> key(ref<java::lang::String> name);
	ref<java::lang::String> toString();

protected:

	JSONStringer(handle_type h) : base_(h) {}

};

} // namespace org::json
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace org::json {

inline ref<JSONStringer> JSONStringer::new_object() { return base_::new_object(); }
inline ref<org::json::JSONStringer> JSONStringer::array() { return call_method<SCAPIX_META_STRING("array"), ref<org::json::JSONStringer>>(); }
inline ref<org::json::JSONStringer> JSONStringer::endArray() { return call_method<SCAPIX_META_STRING("endArray"), ref<org::json::JSONStringer>>(); }
inline ref<org::json::JSONStringer> JSONStringer::object() { return call_method<SCAPIX_META_STRING("object"), ref<org::json::JSONStringer>>(); }
inline ref<org::json::JSONStringer> JSONStringer::endObject() { return call_method<SCAPIX_META_STRING("endObject"), ref<org::json::JSONStringer>>(); }
inline ref<org::json::JSONStringer> JSONStringer::value(ref<java::lang::Object> value) { return call_method<SCAPIX_META_STRING("value"), ref<org::json::JSONStringer>>(value); }
inline ref<org::json::JSONStringer> JSONStringer::value(jboolean value) { return call_method<SCAPIX_META_STRING("value"), ref<org::json::JSONStringer>>(value); }
inline ref<org::json::JSONStringer> JSONStringer::value(jdouble value) { return call_method<SCAPIX_META_STRING("value"), ref<org::json::JSONStringer>>(value); }
inline ref<org::json::JSONStringer> JSONStringer::value(jlong value) { return call_method<SCAPIX_META_STRING("value"), ref<org::json::JSONStringer>>(value); }
inline ref<org::json::JSONStringer> JSONStringer::key(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("key"), ref<org::json::JSONStringer>>(name); }
inline ref<java::lang::String> JSONStringer::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace org::json
} // namespace scapix::java_api

#endif // SCAPIX_ORG_JSON_JSONSTRINGER_H
