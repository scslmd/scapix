// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/ScriptIntrinsic.h>

#ifndef SCAPIX_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICRESIZE_H
#define SCAPIX_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICRESIZE_H

namespace scapix::java_api {

namespace android::renderscript { class Allocation; }
namespace android::renderscript { class RenderScript; }
namespace android::renderscript { class Script_FieldID; }
namespace android::renderscript { class Script_KernelID; }
namespace android::renderscript { class Script_LaunchOptions; }

namespace android::renderscript {

class ScriptIntrinsicResize : public object_base<SCAPIX_META_STRING("android/renderscript/ScriptIntrinsicResize"),
	android::renderscript::ScriptIntrinsic>
{
public:

	static ref<android::renderscript::ScriptIntrinsicResize> create(ref<android::renderscript::RenderScript> rs);
	void setInput(ref<android::renderscript::Allocation> ain);
	ref<android::renderscript::Script_FieldID> getFieldID_Input();
	void forEach_bicubic(ref<android::renderscript::Allocation> aout);
	void forEach_bicubic(ref<android::renderscript::Allocation> aout, ref<android::renderscript::Script_LaunchOptions> opt);
	ref<android::renderscript::Script_KernelID> getKernelID_bicubic();

protected:

	ScriptIntrinsicResize(handle_type h) : base_(h) {}

};

} // namespace android::renderscript
} // namespace scapix::java_api

#include <scapix/java_api/android/renderscript/Allocation.h>
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/android/renderscript/Script_FieldID.h>
#include <scapix/java_api/android/renderscript/Script_KernelID.h>
#include <scapix/java_api/android/renderscript/Script_LaunchOptions.h>

namespace scapix::java_api {
namespace android::renderscript {

inline ref<android::renderscript::ScriptIntrinsicResize> ScriptIntrinsicResize::create(ref<android::renderscript::RenderScript> rs) { return call_static_method<SCAPIX_META_STRING("create"), ref<android::renderscript::ScriptIntrinsicResize>>(rs); }
inline void ScriptIntrinsicResize::setInput(ref<android::renderscript::Allocation> ain) { return call_method<SCAPIX_META_STRING("setInput"), void>(ain); }
inline ref<android::renderscript::Script_FieldID> ScriptIntrinsicResize::getFieldID_Input() { return call_method<SCAPIX_META_STRING("getFieldID_Input"), ref<android::renderscript::Script_FieldID>>(); }
inline void ScriptIntrinsicResize::forEach_bicubic(ref<android::renderscript::Allocation> aout) { return call_method<SCAPIX_META_STRING("forEach_bicubic"), void>(aout); }
inline void ScriptIntrinsicResize::forEach_bicubic(ref<android::renderscript::Allocation> aout, ref<android::renderscript::Script_LaunchOptions> opt) { return call_method<SCAPIX_META_STRING("forEach_bicubic"), void>(aout, opt); }
inline ref<android::renderscript::Script_KernelID> ScriptIntrinsicResize::getKernelID_bicubic() { return call_method<SCAPIX_META_STRING("getKernelID_bicubic"), ref<android::renderscript::Script_KernelID>>(); }

} // namespace android::renderscript
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICRESIZE_H
