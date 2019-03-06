// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO_H
#define SCAPIX_ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO_H

namespace scapix::java_api {

namespace android::graphics { class Matrix; }
namespace android::graphics { class RectF; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace android::view::inputmethod { class CursorAnchorInfo_Builder; }

namespace android::view::inputmethod {

class CursorAnchorInfo : public object_base<SCAPIX_META_STRING("android/view/inputmethod/CursorAnchorInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = CursorAnchorInfo_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint FLAG_HAS_INVISIBLE_REGION_();
	static jint FLAG_HAS_VISIBLE_REGION_();
	static jint FLAG_IS_RTL_();

	static ref<CursorAnchorInfo> new_object(ref<android::os::Parcel> source);
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::String> toString();
	jint getSelectionStart();
	jint getSelectionEnd();
	jint getComposingTextStart();
	ref<java::lang::CharSequence> getComposingText();
	jint getInsertionMarkerFlags();
	jfloat getInsertionMarkerHorizontal();
	jfloat getInsertionMarkerTop();
	jfloat getInsertionMarkerBaseline();
	jfloat getInsertionMarkerBottom();
	ref<android::graphics::RectF> getCharacterBounds(jint index);
	jint getCharacterBoundsFlags(jint index);
	ref<android::graphics::Matrix> getMatrix();
	jint describeContents();

protected:

	CursorAnchorInfo(handle_type h) : base_(h) {}

};

} // namespace android::view::inputmethod
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Matrix.h>
#include <scapix/java_api/android/graphics/RectF.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::view::inputmethod {

inline ref<android::os::Parcelable_Creator> CursorAnchorInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint CursorAnchorInfo::FLAG_HAS_INVISIBLE_REGION_() { return get_static_field<SCAPIX_META_STRING("FLAG_HAS_INVISIBLE_REGION"), jint>(); }
inline jint CursorAnchorInfo::FLAG_HAS_VISIBLE_REGION_() { return get_static_field<SCAPIX_META_STRING("FLAG_HAS_VISIBLE_REGION"), jint>(); }
inline jint CursorAnchorInfo::FLAG_IS_RTL_() { return get_static_field<SCAPIX_META_STRING("FLAG_IS_RTL"), jint>(); }
inline ref<CursorAnchorInfo> CursorAnchorInfo::new_object(ref<android::os::Parcel> source) { return base_::new_object(source); }
inline void CursorAnchorInfo::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jint CursorAnchorInfo::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean CursorAnchorInfo::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::String> CursorAnchorInfo::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint CursorAnchorInfo::getSelectionStart() { return call_method<SCAPIX_META_STRING("getSelectionStart"), jint>(); }
inline jint CursorAnchorInfo::getSelectionEnd() { return call_method<SCAPIX_META_STRING("getSelectionEnd"), jint>(); }
inline jint CursorAnchorInfo::getComposingTextStart() { return call_method<SCAPIX_META_STRING("getComposingTextStart"), jint>(); }
inline ref<java::lang::CharSequence> CursorAnchorInfo::getComposingText() { return call_method<SCAPIX_META_STRING("getComposingText"), ref<java::lang::CharSequence>>(); }
inline jint CursorAnchorInfo::getInsertionMarkerFlags() { return call_method<SCAPIX_META_STRING("getInsertionMarkerFlags"), jint>(); }
inline jfloat CursorAnchorInfo::getInsertionMarkerHorizontal() { return call_method<SCAPIX_META_STRING("getInsertionMarkerHorizontal"), jfloat>(); }
inline jfloat CursorAnchorInfo::getInsertionMarkerTop() { return call_method<SCAPIX_META_STRING("getInsertionMarkerTop"), jfloat>(); }
inline jfloat CursorAnchorInfo::getInsertionMarkerBaseline() { return call_method<SCAPIX_META_STRING("getInsertionMarkerBaseline"), jfloat>(); }
inline jfloat CursorAnchorInfo::getInsertionMarkerBottom() { return call_method<SCAPIX_META_STRING("getInsertionMarkerBottom"), jfloat>(); }
inline ref<android::graphics::RectF> CursorAnchorInfo::getCharacterBounds(jint index) { return call_method<SCAPIX_META_STRING("getCharacterBounds"), ref<android::graphics::RectF>>(index); }
inline jint CursorAnchorInfo::getCharacterBoundsFlags(jint index) { return call_method<SCAPIX_META_STRING("getCharacterBoundsFlags"), jint>(index); }
inline ref<android::graphics::Matrix> CursorAnchorInfo::getMatrix() { return call_method<SCAPIX_META_STRING("getMatrix"), ref<android::graphics::Matrix>>(); }
inline jint CursorAnchorInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }

} // namespace android::view::inputmethod
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO_H
