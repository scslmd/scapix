// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS_H
#define SCAPIX_ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace android::graphics { class Bitmap_Config; }
namespace android::graphics { class ColorSpace; }
namespace java::lang { class String; }

namespace android::graphics {

class BitmapFactory_Options : public object_base<SCAPIX_META_STRING("android/graphics/BitmapFactory$Options"),
	java::lang::Object>
{
public:

	ref<android::graphics::Bitmap> inBitmap();
	void inBitmap(ref<android::graphics::Bitmap>);
	jint inDensity();
	void inDensity(jint);
	jboolean inDither();
	void inDither(jboolean);
	jboolean inInputShareable();
	void inInputShareable(jboolean);
	jboolean inJustDecodeBounds();
	void inJustDecodeBounds(jboolean);
	jboolean inMutable();
	void inMutable(jboolean);
	jboolean inPreferQualityOverSpeed();
	void inPreferQualityOverSpeed(jboolean);
	ref<android::graphics::ColorSpace> inPreferredColorSpace();
	void inPreferredColorSpace(ref<android::graphics::ColorSpace>);
	ref<android::graphics::Bitmap_Config> inPreferredConfig();
	void inPreferredConfig(ref<android::graphics::Bitmap_Config>);
	jboolean inPremultiplied();
	void inPremultiplied(jboolean);
	jboolean inPurgeable();
	void inPurgeable(jboolean);
	jint inSampleSize();
	void inSampleSize(jint);
	jboolean inScaled();
	void inScaled(jboolean);
	jint inScreenDensity();
	void inScreenDensity(jint);
	jint inTargetDensity();
	void inTargetDensity(jint);
	ref<link::java::array<jbyte>> inTempStorage();
	void inTempStorage(ref<link::java::array<jbyte>>);
	jboolean mCancel();
	void mCancel(jboolean);
	ref<android::graphics::ColorSpace> outColorSpace();
	void outColorSpace(ref<android::graphics::ColorSpace>);
	ref<android::graphics::Bitmap_Config> outConfig();
	void outConfig(ref<android::graphics::Bitmap_Config>);
	jint outHeight();
	void outHeight(jint);
	ref<java::lang::String> outMimeType();
	void outMimeType(ref<java::lang::String>);
	jint outWidth();
	void outWidth(jint);

	static ref<BitmapFactory_Options> new_object();
	void requestCancelDecode();

protected:

	BitmapFactory_Options(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Bitmap_Config.h>
#include <scapix/java_api/android/graphics/ColorSpace.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<android::graphics::Bitmap> BitmapFactory_Options::inBitmap() { return get_field<SCAPIX_META_STRING("inBitmap"), ref<android::graphics::Bitmap>>(); }
inline void BitmapFactory_Options::inBitmap(ref<android::graphics::Bitmap> v) { set_field<SCAPIX_META_STRING("inBitmap"), ref<android::graphics::Bitmap>>(v); }
inline jint BitmapFactory_Options::inDensity() { return get_field<SCAPIX_META_STRING("inDensity"), jint>(); }
inline void BitmapFactory_Options::inDensity(jint v) { set_field<SCAPIX_META_STRING("inDensity"), jint>(v); }
inline jboolean BitmapFactory_Options::inDither() { return get_field<SCAPIX_META_STRING("inDither"), jboolean>(); }
inline void BitmapFactory_Options::inDither(jboolean v) { set_field<SCAPIX_META_STRING("inDither"), jboolean>(v); }
inline jboolean BitmapFactory_Options::inInputShareable() { return get_field<SCAPIX_META_STRING("inInputShareable"), jboolean>(); }
inline void BitmapFactory_Options::inInputShareable(jboolean v) { set_field<SCAPIX_META_STRING("inInputShareable"), jboolean>(v); }
inline jboolean BitmapFactory_Options::inJustDecodeBounds() { return get_field<SCAPIX_META_STRING("inJustDecodeBounds"), jboolean>(); }
inline void BitmapFactory_Options::inJustDecodeBounds(jboolean v) { set_field<SCAPIX_META_STRING("inJustDecodeBounds"), jboolean>(v); }
inline jboolean BitmapFactory_Options::inMutable() { return get_field<SCAPIX_META_STRING("inMutable"), jboolean>(); }
inline void BitmapFactory_Options::inMutable(jboolean v) { set_field<SCAPIX_META_STRING("inMutable"), jboolean>(v); }
inline jboolean BitmapFactory_Options::inPreferQualityOverSpeed() { return get_field<SCAPIX_META_STRING("inPreferQualityOverSpeed"), jboolean>(); }
inline void BitmapFactory_Options::inPreferQualityOverSpeed(jboolean v) { set_field<SCAPIX_META_STRING("inPreferQualityOverSpeed"), jboolean>(v); }
inline ref<android::graphics::ColorSpace> BitmapFactory_Options::inPreferredColorSpace() { return get_field<SCAPIX_META_STRING("inPreferredColorSpace"), ref<android::graphics::ColorSpace>>(); }
inline void BitmapFactory_Options::inPreferredColorSpace(ref<android::graphics::ColorSpace> v) { set_field<SCAPIX_META_STRING("inPreferredColorSpace"), ref<android::graphics::ColorSpace>>(v); }
inline ref<android::graphics::Bitmap_Config> BitmapFactory_Options::inPreferredConfig() { return get_field<SCAPIX_META_STRING("inPreferredConfig"), ref<android::graphics::Bitmap_Config>>(); }
inline void BitmapFactory_Options::inPreferredConfig(ref<android::graphics::Bitmap_Config> v) { set_field<SCAPIX_META_STRING("inPreferredConfig"), ref<android::graphics::Bitmap_Config>>(v); }
inline jboolean BitmapFactory_Options::inPremultiplied() { return get_field<SCAPIX_META_STRING("inPremultiplied"), jboolean>(); }
inline void BitmapFactory_Options::inPremultiplied(jboolean v) { set_field<SCAPIX_META_STRING("inPremultiplied"), jboolean>(v); }
inline jboolean BitmapFactory_Options::inPurgeable() { return get_field<SCAPIX_META_STRING("inPurgeable"), jboolean>(); }
inline void BitmapFactory_Options::inPurgeable(jboolean v) { set_field<SCAPIX_META_STRING("inPurgeable"), jboolean>(v); }
inline jint BitmapFactory_Options::inSampleSize() { return get_field<SCAPIX_META_STRING("inSampleSize"), jint>(); }
inline void BitmapFactory_Options::inSampleSize(jint v) { set_field<SCAPIX_META_STRING("inSampleSize"), jint>(v); }
inline jboolean BitmapFactory_Options::inScaled() { return get_field<SCAPIX_META_STRING("inScaled"), jboolean>(); }
inline void BitmapFactory_Options::inScaled(jboolean v) { set_field<SCAPIX_META_STRING("inScaled"), jboolean>(v); }
inline jint BitmapFactory_Options::inScreenDensity() { return get_field<SCAPIX_META_STRING("inScreenDensity"), jint>(); }
inline void BitmapFactory_Options::inScreenDensity(jint v) { set_field<SCAPIX_META_STRING("inScreenDensity"), jint>(v); }
inline jint BitmapFactory_Options::inTargetDensity() { return get_field<SCAPIX_META_STRING("inTargetDensity"), jint>(); }
inline void BitmapFactory_Options::inTargetDensity(jint v) { set_field<SCAPIX_META_STRING("inTargetDensity"), jint>(v); }
inline ref<link::java::array<jbyte>> BitmapFactory_Options::inTempStorage() { return get_field<SCAPIX_META_STRING("inTempStorage"), ref<link::java::array<jbyte>>>(); }
inline void BitmapFactory_Options::inTempStorage(ref<link::java::array<jbyte>> v) { set_field<SCAPIX_META_STRING("inTempStorage"), ref<link::java::array<jbyte>>>(v); }
inline jboolean BitmapFactory_Options::mCancel() { return get_field<SCAPIX_META_STRING("mCancel"), jboolean>(); }
inline void BitmapFactory_Options::mCancel(jboolean v) { set_field<SCAPIX_META_STRING("mCancel"), jboolean>(v); }
inline ref<android::graphics::ColorSpace> BitmapFactory_Options::outColorSpace() { return get_field<SCAPIX_META_STRING("outColorSpace"), ref<android::graphics::ColorSpace>>(); }
inline void BitmapFactory_Options::outColorSpace(ref<android::graphics::ColorSpace> v) { set_field<SCAPIX_META_STRING("outColorSpace"), ref<android::graphics::ColorSpace>>(v); }
inline ref<android::graphics::Bitmap_Config> BitmapFactory_Options::outConfig() { return get_field<SCAPIX_META_STRING("outConfig"), ref<android::graphics::Bitmap_Config>>(); }
inline void BitmapFactory_Options::outConfig(ref<android::graphics::Bitmap_Config> v) { set_field<SCAPIX_META_STRING("outConfig"), ref<android::graphics::Bitmap_Config>>(v); }
inline jint BitmapFactory_Options::outHeight() { return get_field<SCAPIX_META_STRING("outHeight"), jint>(); }
inline void BitmapFactory_Options::outHeight(jint v) { set_field<SCAPIX_META_STRING("outHeight"), jint>(v); }
inline ref<java::lang::String> BitmapFactory_Options::outMimeType() { return get_field<SCAPIX_META_STRING("outMimeType"), ref<java::lang::String>>(); }
inline void BitmapFactory_Options::outMimeType(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("outMimeType"), ref<java::lang::String>>(v); }
inline jint BitmapFactory_Options::outWidth() { return get_field<SCAPIX_META_STRING("outWidth"), jint>(); }
inline void BitmapFactory_Options::outWidth(jint v) { set_field<SCAPIX_META_STRING("outWidth"), jint>(v); }
inline ref<BitmapFactory_Options> BitmapFactory_Options::new_object() { return base_::new_object(); }
inline void BitmapFactory_Options::requestCancelDecode() { return call_method<SCAPIX_META_STRING("requestCancelDecode"), void>(); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS_H
