// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO_BUILDER_H
#define SCAPIX_ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO_BUILDER_H

namespace scapix::java_api {

namespace android::graphics { class Matrix; }
namespace android::view::inputmethod { class CursorAnchorInfo; }
namespace java::lang { class CharSequence; }

namespace android::view::inputmethod {

class CursorAnchorInfo_Builder : public object_base<SCAPIX_META_STRING("android/view/inputmethod/CursorAnchorInfo$Builder"),
	java::lang::Object>
{
public:

	static ref<CursorAnchorInfo_Builder> new_object();
	ref<android::view::inputmethod::CursorAnchorInfo_Builder> setSelectionRange(jint newStart, jint newEnd);
	ref<android::view::inputmethod::CursorAnchorInfo_Builder> setComposingText(jint composingTextStart, ref<java::lang::CharSequence> composingText);
	ref<android::view::inputmethod::CursorAnchorInfo_Builder> setInsertionMarkerLocation(jfloat horizontalPosition, jfloat lineTop, jfloat lineBaseline, jfloat lineBottom, jint flags);
	ref<android::view::inputmethod::CursorAnchorInfo_Builder> addCharacterBounds(jint index, jfloat left, jfloat top, jfloat right, jfloat bottom, jint flags);
	ref<android::view::inputmethod::CursorAnchorInfo_Builder> setMatrix(ref<android::graphics::Matrix> matrix);
	ref<android::view::inputmethod::CursorAnchorInfo> build();
	void reset();

protected:

	CursorAnchorInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace android::view::inputmethod
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Matrix.h>
#include <scapix/java_api/android/view/inputmethod/CursorAnchorInfo.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::view::inputmethod {

inline ref<CursorAnchorInfo_Builder> CursorAnchorInfo_Builder::new_object() { return base_::new_object(); }
inline ref<android::view::inputmethod::CursorAnchorInfo_Builder> CursorAnchorInfo_Builder::setSelectionRange(jint newStart, jint newEnd) { return call_method<SCAPIX_META_STRING("setSelectionRange"), ref<android::view::inputmethod::CursorAnchorInfo_Builder>>(newStart, newEnd); }
inline ref<android::view::inputmethod::CursorAnchorInfo_Builder> CursorAnchorInfo_Builder::setComposingText(jint composingTextStart, ref<java::lang::CharSequence> composingText) { return call_method<SCAPIX_META_STRING("setComposingText"), ref<android::view::inputmethod::CursorAnchorInfo_Builder>>(composingTextStart, composingText); }
inline ref<android::view::inputmethod::CursorAnchorInfo_Builder> CursorAnchorInfo_Builder::setInsertionMarkerLocation(jfloat horizontalPosition, jfloat lineTop, jfloat lineBaseline, jfloat lineBottom, jint flags) { return call_method<SCAPIX_META_STRING("setInsertionMarkerLocation"), ref<android::view::inputmethod::CursorAnchorInfo_Builder>>(horizontalPosition, lineTop, lineBaseline, lineBottom, flags); }
inline ref<android::view::inputmethod::CursorAnchorInfo_Builder> CursorAnchorInfo_Builder::addCharacterBounds(jint index, jfloat left, jfloat top, jfloat right, jfloat bottom, jint flags) { return call_method<SCAPIX_META_STRING("addCharacterBounds"), ref<android::view::inputmethod::CursorAnchorInfo_Builder>>(index, left, top, right, bottom, flags); }
inline ref<android::view::inputmethod::CursorAnchorInfo_Builder> CursorAnchorInfo_Builder::setMatrix(ref<android::graphics::Matrix> matrix) { return call_method<SCAPIX_META_STRING("setMatrix"), ref<android::view::inputmethod::CursorAnchorInfo_Builder>>(matrix); }
inline ref<android::view::inputmethod::CursorAnchorInfo> CursorAnchorInfo_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::view::inputmethod::CursorAnchorInfo>>(); }
inline void CursorAnchorInfo_Builder::reset() { return call_method<SCAPIX_META_STRING("reset"), void>(); }

} // namespace android::view::inputmethod
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO_BUILDER_H
