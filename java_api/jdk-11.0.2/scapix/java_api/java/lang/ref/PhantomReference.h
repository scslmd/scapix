// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/Reference.h>

#ifndef SCAPIX_JAVA_LANG_REF_PHANTOMREFERENCE_H
#define SCAPIX_JAVA_LANG_REF_PHANTOMREFERENCE_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang::ref { class ReferenceQueue; }

namespace java::lang::ref {

class PhantomReference : public object_base<SCAPIX_META_STRING("java/lang/ref/PhantomReference"),
	java::lang::ref::Reference>
{
public:

	ref<java::lang::Object> get();
	static ref<PhantomReference> new_object(ref<java::lang::Object> referent, ref<java::lang::ref::ReferenceQueue> q);

protected:

	PhantomReference(handle_type h) : base_(h) {}

};

} // namespace java::lang::ref
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/ref/ReferenceQueue.h>

namespace scapix::java_api {
namespace java::lang::ref {

inline ref<java::lang::Object> PhantomReference::get() { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(); }
inline ref<PhantomReference> PhantomReference::new_object(ref<java::lang::Object> referent, ref<java::lang::ref::ReferenceQueue> q) { return base_::new_object(referent, q); }

} // namespace java::lang::ref
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_REF_PHANTOMREFERENCE_H
