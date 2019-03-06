// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_DALVIK_ANNOTATION_TESTTARGETCLASS_H
#define SCAPIX_DALVIK_ANNOTATION_TESTTARGETCLASS_H

namespace scapix::java_api {

namespace java::lang { class Class; }

namespace dalvik::annotation {

class TestTargetClass : public object_base<SCAPIX_META_STRING("dalvik/annotation/TestTargetClass"),
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	ref<java::lang::Class> value();

protected:

	TestTargetClass(handle_type h) : base_(h) {}

};

} // namespace dalvik::annotation
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>

namespace scapix::java_api {
namespace dalvik::annotation {

inline ref<java::lang::Class> TestTargetClass::value() { return call_method<SCAPIX_META_STRING("value"), ref<java::lang::Class>>(); }

} // namespace dalvik::annotation
} // namespace scapix::java_api

#endif // SCAPIX_DALVIK_ANNOTATION_TESTTARGETCLASS_H
