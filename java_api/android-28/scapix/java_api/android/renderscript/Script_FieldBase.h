// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_RENDERSCRIPT_SCRIPT_FIELDBASE_H
#define SCAPIX_ANDROID_RENDERSCRIPT_SCRIPT_FIELDBASE_H

namespace scapix::java_api {

namespace android::renderscript { class Allocation; }
namespace android::renderscript { class Element; }
namespace android::renderscript { class Type; }

namespace android::renderscript {

class Script_FieldBase : public object_base<SCAPIX_META_STRING("android/renderscript/Script$FieldBase"),
	java::lang::Object>
{
public:

	ref<android::renderscript::Element> getElement();
	ref<android::renderscript::Type> getType();
	ref<android::renderscript::Allocation> getAllocation();
	void updateAllocation();

protected:

	Script_FieldBase(handle_type h) : base_(h) {}

};

} // namespace android::renderscript
} // namespace scapix::java_api

#include <scapix/java_api/android/renderscript/Allocation.h>
#include <scapix/java_api/android/renderscript/Element.h>
#include <scapix/java_api/android/renderscript/Type.h>

namespace scapix::java_api {
namespace android::renderscript {

inline ref<android::renderscript::Element> Script_FieldBase::getElement() { return call_method<SCAPIX_META_STRING("getElement"), ref<android::renderscript::Element>>(); }
inline ref<android::renderscript::Type> Script_FieldBase::getType() { return call_method<SCAPIX_META_STRING("getType"), ref<android::renderscript::Type>>(); }
inline ref<android::renderscript::Allocation> Script_FieldBase::getAllocation() { return call_method<SCAPIX_META_STRING("getAllocation"), ref<android::renderscript::Allocation>>(); }
inline void Script_FieldBase::updateAllocation() { return call_method<SCAPIX_META_STRING("updateAllocation"), void>(); }

} // namespace android::renderscript
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_RENDERSCRIPT_SCRIPT_FIELDBASE_H
