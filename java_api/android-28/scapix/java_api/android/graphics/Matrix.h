// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_MATRIX_H
#define SCAPIX_ANDROID_GRAPHICS_MATRIX_H

namespace scapix::java_api {

namespace android::graphics { class Matrix_ScaleToFit; }
namespace android::graphics { class RectF; }
namespace java::lang { class String; }

namespace android::graphics {

class Matrix : public object_base<SCAPIX_META_STRING("android/graphics/Matrix"),
	java::lang::Object>
{
public:

	using ScaleToFit = Matrix_ScaleToFit;

	static jint MPERSP_0_();
	static jint MPERSP_1_();
	static jint MPERSP_2_();
	static jint MSCALE_X_();
	static jint MSCALE_Y_();
	static jint MSKEW_X_();
	static jint MSKEW_Y_();
	static jint MTRANS_X_();
	static jint MTRANS_Y_();

	static ref<Matrix> new_object();
	static ref<Matrix> new_object(ref<android::graphics::Matrix> src);
	jboolean isIdentity();
	jboolean isAffine();
	jboolean rectStaysRect();
	void set(ref<android::graphics::Matrix> src);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	void reset();
	void setTranslate(jfloat dx, jfloat dy);
	void setScale(jfloat sx, jfloat sy, jfloat px, jfloat py);
	void setScale(jfloat sx, jfloat sy);
	void setRotate(jfloat degrees, jfloat px, jfloat py);
	void setRotate(jfloat degrees);
	void setSinCos(jfloat sinValue, jfloat cosValue, jfloat px, jfloat py);
	void setSinCos(jfloat sinValue, jfloat cosValue);
	void setSkew(jfloat kx, jfloat ky, jfloat px, jfloat py);
	void setSkew(jfloat kx, jfloat ky);
	jboolean setConcat(ref<android::graphics::Matrix> a, ref<android::graphics::Matrix> b);
	jboolean preTranslate(jfloat dx, jfloat dy);
	jboolean preScale(jfloat sx, jfloat sy, jfloat px, jfloat py);
	jboolean preScale(jfloat sx, jfloat sy);
	jboolean preRotate(jfloat degrees, jfloat px, jfloat py);
	jboolean preRotate(jfloat degrees);
	jboolean preSkew(jfloat kx, jfloat ky, jfloat px, jfloat py);
	jboolean preSkew(jfloat kx, jfloat ky);
	jboolean preConcat(ref<android::graphics::Matrix> other);
	jboolean postTranslate(jfloat dx, jfloat dy);
	jboolean postScale(jfloat sx, jfloat sy, jfloat px, jfloat py);
	jboolean postScale(jfloat sx, jfloat sy);
	jboolean postRotate(jfloat degrees, jfloat px, jfloat py);
	jboolean postRotate(jfloat degrees);
	jboolean postSkew(jfloat kx, jfloat ky, jfloat px, jfloat py);
	jboolean postSkew(jfloat kx, jfloat ky);
	jboolean postConcat(ref<android::graphics::Matrix> other);
	jboolean setRectToRect(ref<android::graphics::RectF> src, ref<android::graphics::RectF> dst, ref<android::graphics::Matrix_ScaleToFit> stf);
	jboolean setPolyToPoly(ref<link::java::array<jfloat>> src, jint srcIndex, ref<link::java::array<jfloat>> dst, jint dstIndex, jint pointCount);
	jboolean invert(ref<android::graphics::Matrix> inverse);
	void mapPoints(ref<link::java::array<jfloat>> dst, jint dstIndex, ref<link::java::array<jfloat>> src, jint srcIndex, jint pointCount);
	void mapVectors(ref<link::java::array<jfloat>> dst, jint dstIndex, ref<link::java::array<jfloat>> src, jint srcIndex, jint vectorCount);
	void mapPoints(ref<link::java::array<jfloat>> dst, ref<link::java::array<jfloat>> src);
	void mapVectors(ref<link::java::array<jfloat>> dst, ref<link::java::array<jfloat>> src);
	void mapPoints(ref<link::java::array<jfloat>> pts);
	void mapVectors(ref<link::java::array<jfloat>> vecs);
	jboolean mapRect(ref<android::graphics::RectF> dst, ref<android::graphics::RectF> src);
	jboolean mapRect(ref<android::graphics::RectF> rect);
	jfloat mapRadius(jfloat radius);
	void getValues(ref<link::java::array<jfloat>> values);
	void setValues(ref<link::java::array<jfloat>> values);
	ref<java::lang::String> toString();
	ref<java::lang::String> toShortString();

protected:

	Matrix(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Matrix_ScaleToFit.h>
#include <scapix/java_api/android/graphics/RectF.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline jint Matrix::MPERSP_0_() { return get_static_field<SCAPIX_META_STRING("MPERSP_0"), jint>(); }
inline jint Matrix::MPERSP_1_() { return get_static_field<SCAPIX_META_STRING("MPERSP_1"), jint>(); }
inline jint Matrix::MPERSP_2_() { return get_static_field<SCAPIX_META_STRING("MPERSP_2"), jint>(); }
inline jint Matrix::MSCALE_X_() { return get_static_field<SCAPIX_META_STRING("MSCALE_X"), jint>(); }
inline jint Matrix::MSCALE_Y_() { return get_static_field<SCAPIX_META_STRING("MSCALE_Y"), jint>(); }
inline jint Matrix::MSKEW_X_() { return get_static_field<SCAPIX_META_STRING("MSKEW_X"), jint>(); }
inline jint Matrix::MSKEW_Y_() { return get_static_field<SCAPIX_META_STRING("MSKEW_Y"), jint>(); }
inline jint Matrix::MTRANS_X_() { return get_static_field<SCAPIX_META_STRING("MTRANS_X"), jint>(); }
inline jint Matrix::MTRANS_Y_() { return get_static_field<SCAPIX_META_STRING("MTRANS_Y"), jint>(); }
inline ref<Matrix> Matrix::new_object() { return base_::new_object(); }
inline ref<Matrix> Matrix::new_object(ref<android::graphics::Matrix> src) { return base_::new_object(src); }
inline jboolean Matrix::isIdentity() { return call_method<SCAPIX_META_STRING("isIdentity"), jboolean>(); }
inline jboolean Matrix::isAffine() { return call_method<SCAPIX_META_STRING("isAffine"), jboolean>(); }
inline jboolean Matrix::rectStaysRect() { return call_method<SCAPIX_META_STRING("rectStaysRect"), jboolean>(); }
inline void Matrix::set(ref<android::graphics::Matrix> src) { return call_method<SCAPIX_META_STRING("set"), void>(src); }
inline jboolean Matrix::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint Matrix::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline void Matrix::reset() { return call_method<SCAPIX_META_STRING("reset"), void>(); }
inline void Matrix::setTranslate(jfloat dx, jfloat dy) { return call_method<SCAPIX_META_STRING("setTranslate"), void>(dx, dy); }
inline void Matrix::setScale(jfloat sx, jfloat sy, jfloat px, jfloat py) { return call_method<SCAPIX_META_STRING("setScale"), void>(sx, sy, px, py); }
inline void Matrix::setScale(jfloat sx, jfloat sy) { return call_method<SCAPIX_META_STRING("setScale"), void>(sx, sy); }
inline void Matrix::setRotate(jfloat degrees, jfloat px, jfloat py) { return call_method<SCAPIX_META_STRING("setRotate"), void>(degrees, px, py); }
inline void Matrix::setRotate(jfloat degrees) { return call_method<SCAPIX_META_STRING("setRotate"), void>(degrees); }
inline void Matrix::setSinCos(jfloat sinValue, jfloat cosValue, jfloat px, jfloat py) { return call_method<SCAPIX_META_STRING("setSinCos"), void>(sinValue, cosValue, px, py); }
inline void Matrix::setSinCos(jfloat sinValue, jfloat cosValue) { return call_method<SCAPIX_META_STRING("setSinCos"), void>(sinValue, cosValue); }
inline void Matrix::setSkew(jfloat kx, jfloat ky, jfloat px, jfloat py) { return call_method<SCAPIX_META_STRING("setSkew"), void>(kx, ky, px, py); }
inline void Matrix::setSkew(jfloat kx, jfloat ky) { return call_method<SCAPIX_META_STRING("setSkew"), void>(kx, ky); }
inline jboolean Matrix::setConcat(ref<android::graphics::Matrix> a, ref<android::graphics::Matrix> b) { return call_method<SCAPIX_META_STRING("setConcat"), jboolean>(a, b); }
inline jboolean Matrix::preTranslate(jfloat dx, jfloat dy) { return call_method<SCAPIX_META_STRING("preTranslate"), jboolean>(dx, dy); }
inline jboolean Matrix::preScale(jfloat sx, jfloat sy, jfloat px, jfloat py) { return call_method<SCAPIX_META_STRING("preScale"), jboolean>(sx, sy, px, py); }
inline jboolean Matrix::preScale(jfloat sx, jfloat sy) { return call_method<SCAPIX_META_STRING("preScale"), jboolean>(sx, sy); }
inline jboolean Matrix::preRotate(jfloat degrees, jfloat px, jfloat py) { return call_method<SCAPIX_META_STRING("preRotate"), jboolean>(degrees, px, py); }
inline jboolean Matrix::preRotate(jfloat degrees) { return call_method<SCAPIX_META_STRING("preRotate"), jboolean>(degrees); }
inline jboolean Matrix::preSkew(jfloat kx, jfloat ky, jfloat px, jfloat py) { return call_method<SCAPIX_META_STRING("preSkew"), jboolean>(kx, ky, px, py); }
inline jboolean Matrix::preSkew(jfloat kx, jfloat ky) { return call_method<SCAPIX_META_STRING("preSkew"), jboolean>(kx, ky); }
inline jboolean Matrix::preConcat(ref<android::graphics::Matrix> other) { return call_method<SCAPIX_META_STRING("preConcat"), jboolean>(other); }
inline jboolean Matrix::postTranslate(jfloat dx, jfloat dy) { return call_method<SCAPIX_META_STRING("postTranslate"), jboolean>(dx, dy); }
inline jboolean Matrix::postScale(jfloat sx, jfloat sy, jfloat px, jfloat py) { return call_method<SCAPIX_META_STRING("postScale"), jboolean>(sx, sy, px, py); }
inline jboolean Matrix::postScale(jfloat sx, jfloat sy) { return call_method<SCAPIX_META_STRING("postScale"), jboolean>(sx, sy); }
inline jboolean Matrix::postRotate(jfloat degrees, jfloat px, jfloat py) { return call_method<SCAPIX_META_STRING("postRotate"), jboolean>(degrees, px, py); }
inline jboolean Matrix::postRotate(jfloat degrees) { return call_method<SCAPIX_META_STRING("postRotate"), jboolean>(degrees); }
inline jboolean Matrix::postSkew(jfloat kx, jfloat ky, jfloat px, jfloat py) { return call_method<SCAPIX_META_STRING("postSkew"), jboolean>(kx, ky, px, py); }
inline jboolean Matrix::postSkew(jfloat kx, jfloat ky) { return call_method<SCAPIX_META_STRING("postSkew"), jboolean>(kx, ky); }
inline jboolean Matrix::postConcat(ref<android::graphics::Matrix> other) { return call_method<SCAPIX_META_STRING("postConcat"), jboolean>(other); }
inline jboolean Matrix::setRectToRect(ref<android::graphics::RectF> src, ref<android::graphics::RectF> dst, ref<android::graphics::Matrix_ScaleToFit> stf) { return call_method<SCAPIX_META_STRING("setRectToRect"), jboolean>(src, dst, stf); }
inline jboolean Matrix::setPolyToPoly(ref<link::java::array<jfloat>> src, jint srcIndex, ref<link::java::array<jfloat>> dst, jint dstIndex, jint pointCount) { return call_method<SCAPIX_META_STRING("setPolyToPoly"), jboolean>(src, srcIndex, dst, dstIndex, pointCount); }
inline jboolean Matrix::invert(ref<android::graphics::Matrix> inverse) { return call_method<SCAPIX_META_STRING("invert"), jboolean>(inverse); }
inline void Matrix::mapPoints(ref<link::java::array<jfloat>> dst, jint dstIndex, ref<link::java::array<jfloat>> src, jint srcIndex, jint pointCount) { return call_method<SCAPIX_META_STRING("mapPoints"), void>(dst, dstIndex, src, srcIndex, pointCount); }
inline void Matrix::mapVectors(ref<link::java::array<jfloat>> dst, jint dstIndex, ref<link::java::array<jfloat>> src, jint srcIndex, jint vectorCount) { return call_method<SCAPIX_META_STRING("mapVectors"), void>(dst, dstIndex, src, srcIndex, vectorCount); }
inline void Matrix::mapPoints(ref<link::java::array<jfloat>> dst, ref<link::java::array<jfloat>> src) { return call_method<SCAPIX_META_STRING("mapPoints"), void>(dst, src); }
inline void Matrix::mapVectors(ref<link::java::array<jfloat>> dst, ref<link::java::array<jfloat>> src) { return call_method<SCAPIX_META_STRING("mapVectors"), void>(dst, src); }
inline void Matrix::mapPoints(ref<link::java::array<jfloat>> pts) { return call_method<SCAPIX_META_STRING("mapPoints"), void>(pts); }
inline void Matrix::mapVectors(ref<link::java::array<jfloat>> vecs) { return call_method<SCAPIX_META_STRING("mapVectors"), void>(vecs); }
inline jboolean Matrix::mapRect(ref<android::graphics::RectF> dst, ref<android::graphics::RectF> src) { return call_method<SCAPIX_META_STRING("mapRect"), jboolean>(dst, src); }
inline jboolean Matrix::mapRect(ref<android::graphics::RectF> rect) { return call_method<SCAPIX_META_STRING("mapRect"), jboolean>(rect); }
inline jfloat Matrix::mapRadius(jfloat radius) { return call_method<SCAPIX_META_STRING("mapRadius"), jfloat>(radius); }
inline void Matrix::getValues(ref<link::java::array<jfloat>> values) { return call_method<SCAPIX_META_STRING("getValues"), void>(values); }
inline void Matrix::setValues(ref<link::java::array<jfloat>> values) { return call_method<SCAPIX_META_STRING("setValues"), void>(values); }
inline ref<java::lang::String> Matrix::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Matrix::toShortString() { return call_method<SCAPIX_META_STRING("toShortString"), ref<java::lang::String>>(); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_MATRIX_H
