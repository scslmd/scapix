// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_SLICE_SLICE_BUILDER_H
#define SCAPIX_ANDROID_APP_SLICE_SLICE_BUILDER_H

namespace scapix::java_api {

namespace android::app { class PendingIntent; }
namespace android::app { class RemoteInput; }
namespace android::app::slice { class Slice; }
namespace android::app::slice { class SliceSpec; }
namespace android::graphics::drawable { class Icon; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::app::slice {

class Slice_Builder : public object_base<SCAPIX_META_STRING("android/app/slice/Slice$Builder"),
	java::lang::Object>
{
public:

	static ref<Slice_Builder> new_object(ref<android::net::Uri> uri, ref<android::app::slice::SliceSpec> spec);
	static ref<Slice_Builder> new_object(ref<android::app::slice::Slice_Builder> parent);
	ref<android::app::slice::Slice_Builder> setCallerNeeded(jboolean callerNeeded);
	ref<android::app::slice::Slice_Builder> addHints(ref<java::util::List> hints);
	ref<android::app::slice::Slice_Builder> addSubSlice(ref<android::app::slice::Slice> slice, ref<java::lang::String> subType);
	ref<android::app::slice::Slice_Builder> addAction(ref<android::app::PendingIntent> action, ref<android::app::slice::Slice> s, ref<java::lang::String> subType);
	ref<android::app::slice::Slice_Builder> addText(ref<java::lang::CharSequence> text, ref<java::lang::String> subType, ref<java::util::List> hints);
	ref<android::app::slice::Slice_Builder> addIcon(ref<android::graphics::drawable::Icon> icon, ref<java::lang::String> subType, ref<java::util::List> hints);
	ref<android::app::slice::Slice_Builder> addRemoteInput(ref<android::app::RemoteInput> remoteInput, ref<java::lang::String> subType, ref<java::util::List> hints);
	ref<android::app::slice::Slice_Builder> addInt(jint value, ref<java::lang::String> subType, ref<java::util::List> hints);
	ref<android::app::slice::Slice_Builder> addLong(jlong value, ref<java::lang::String> p2, ref<java::util::List> subType);
	ref<android::app::slice::Slice_Builder> addBundle(ref<android::os::Bundle> bundle, ref<java::lang::String> subType, ref<java::util::List> hints);
	ref<android::app::slice::Slice> build();

protected:

	Slice_Builder(handle_type h) : base_(h) {}

};

} // namespace android::app::slice
} // namespace scapix::java_api

#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/app/RemoteInput.h>
#include <scapix/java_api/android/app/slice/Slice.h>
#include <scapix/java_api/android/app/slice/SliceSpec.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::app::slice {

inline ref<Slice_Builder> Slice_Builder::new_object(ref<android::net::Uri> uri, ref<android::app::slice::SliceSpec> spec) { return base_::new_object(uri, spec); }
inline ref<Slice_Builder> Slice_Builder::new_object(ref<android::app::slice::Slice_Builder> parent) { return base_::new_object(parent); }
inline ref<android::app::slice::Slice_Builder> Slice_Builder::setCallerNeeded(jboolean callerNeeded) { return call_method<SCAPIX_META_STRING("setCallerNeeded"), ref<android::app::slice::Slice_Builder>>(callerNeeded); }
inline ref<android::app::slice::Slice_Builder> Slice_Builder::addHints(ref<java::util::List> hints) { return call_method<SCAPIX_META_STRING("addHints"), ref<android::app::slice::Slice_Builder>>(hints); }
inline ref<android::app::slice::Slice_Builder> Slice_Builder::addSubSlice(ref<android::app::slice::Slice> slice, ref<java::lang::String> subType) { return call_method<SCAPIX_META_STRING("addSubSlice"), ref<android::app::slice::Slice_Builder>>(slice, subType); }
inline ref<android::app::slice::Slice_Builder> Slice_Builder::addAction(ref<android::app::PendingIntent> action, ref<android::app::slice::Slice> s, ref<java::lang::String> subType) { return call_method<SCAPIX_META_STRING("addAction"), ref<android::app::slice::Slice_Builder>>(action, s, subType); }
inline ref<android::app::slice::Slice_Builder> Slice_Builder::addText(ref<java::lang::CharSequence> text, ref<java::lang::String> subType, ref<java::util::List> hints) { return call_method<SCAPIX_META_STRING("addText"), ref<android::app::slice::Slice_Builder>>(text, subType, hints); }
inline ref<android::app::slice::Slice_Builder> Slice_Builder::addIcon(ref<android::graphics::drawable::Icon> icon, ref<java::lang::String> subType, ref<java::util::List> hints) { return call_method<SCAPIX_META_STRING("addIcon"), ref<android::app::slice::Slice_Builder>>(icon, subType, hints); }
inline ref<android::app::slice::Slice_Builder> Slice_Builder::addRemoteInput(ref<android::app::RemoteInput> remoteInput, ref<java::lang::String> subType, ref<java::util::List> hints) { return call_method<SCAPIX_META_STRING("addRemoteInput"), ref<android::app::slice::Slice_Builder>>(remoteInput, subType, hints); }
inline ref<android::app::slice::Slice_Builder> Slice_Builder::addInt(jint value, ref<java::lang::String> subType, ref<java::util::List> hints) { return call_method<SCAPIX_META_STRING("addInt"), ref<android::app::slice::Slice_Builder>>(value, subType, hints); }
inline ref<android::app::slice::Slice_Builder> Slice_Builder::addLong(jlong value, ref<java::lang::String> p2, ref<java::util::List> subType) { return call_method<SCAPIX_META_STRING("addLong"), ref<android::app::slice::Slice_Builder>>(value, p2, subType); }
inline ref<android::app::slice::Slice_Builder> Slice_Builder::addBundle(ref<android::os::Bundle> bundle, ref<java::lang::String> subType, ref<java::util::List> hints) { return call_method<SCAPIX_META_STRING("addBundle"), ref<android::app::slice::Slice_Builder>>(bundle, subType, hints); }
inline ref<android::app::slice::Slice> Slice_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::app::slice::Slice>>(); }

} // namespace android::app::slice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_SLICE_SLICE_BUILDER_H
