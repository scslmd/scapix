// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/DrawableWrapper.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_DRAWABLE_ROTATEDRAWABLE_H
#define SCAPIX_ANDROID_GRAPHICS_DRAWABLE_ROTATEDRAWABLE_H

namespace scapix::java_api {

namespace android::content::res { class Resources; }
namespace android::content::res { class Resources_Theme; }
namespace android::graphics { class Canvas; }
namespace android::util { class AttributeSet; }
namespace org::xmlpull::v1 { class XmlPullParser; }

namespace android::graphics::drawable {

class RotateDrawable : public object_base<SCAPIX_META_STRING("android/graphics/drawable/RotateDrawable"),
	android::graphics::drawable::DrawableWrapper>
{
public:

	static ref<RotateDrawable> new_object();
	void inflate(ref<android::content::res::Resources> r, ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::util::AttributeSet> attrs, ref<android::content::res::Resources_Theme> theme);
	void applyTheme(ref<android::content::res::Resources_Theme> t);
	void draw(ref<android::graphics::Canvas> canvas);
	void setFromDegrees(jfloat fromDegrees);
	jfloat getFromDegrees();
	void setToDegrees(jfloat toDegrees);
	jfloat getToDegrees();
	void setPivotX(jfloat pivotX);
	jfloat getPivotX();
	void setPivotXRelative(jboolean relative);
	jboolean isPivotXRelative();
	void setPivotY(jfloat pivotY);
	jfloat getPivotY();
	void setPivotYRelative(jboolean relative);
	jboolean isPivotYRelative();

protected:

	RotateDrawable(handle_type h) : base_(h) {}

};

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>

namespace scapix::java_api {
namespace android::graphics::drawable {

inline ref<RotateDrawable> RotateDrawable::new_object() { return base_::new_object(); }
inline void RotateDrawable::inflate(ref<android::content::res::Resources> r, ref<org::xmlpull::v1::XmlPullParser> parser, ref<android::util::AttributeSet> attrs, ref<android::content::res::Resources_Theme> theme) { return call_method<SCAPIX_META_STRING("inflate"), void>(r, parser, attrs, theme); }
inline void RotateDrawable::applyTheme(ref<android::content::res::Resources_Theme> t) { return call_method<SCAPIX_META_STRING("applyTheme"), void>(t); }
inline void RotateDrawable::draw(ref<android::graphics::Canvas> canvas) { return call_method<SCAPIX_META_STRING("draw"), void>(canvas); }
inline void RotateDrawable::setFromDegrees(jfloat fromDegrees) { return call_method<SCAPIX_META_STRING("setFromDegrees"), void>(fromDegrees); }
inline jfloat RotateDrawable::getFromDegrees() { return call_method<SCAPIX_META_STRING("getFromDegrees"), jfloat>(); }
inline void RotateDrawable::setToDegrees(jfloat toDegrees) { return call_method<SCAPIX_META_STRING("setToDegrees"), void>(toDegrees); }
inline jfloat RotateDrawable::getToDegrees() { return call_method<SCAPIX_META_STRING("getToDegrees"), jfloat>(); }
inline void RotateDrawable::setPivotX(jfloat pivotX) { return call_method<SCAPIX_META_STRING("setPivotX"), void>(pivotX); }
inline jfloat RotateDrawable::getPivotX() { return call_method<SCAPIX_META_STRING("getPivotX"), jfloat>(); }
inline void RotateDrawable::setPivotXRelative(jboolean relative) { return call_method<SCAPIX_META_STRING("setPivotXRelative"), void>(relative); }
inline jboolean RotateDrawable::isPivotXRelative() { return call_method<SCAPIX_META_STRING("isPivotXRelative"), jboolean>(); }
inline void RotateDrawable::setPivotY(jfloat pivotY) { return call_method<SCAPIX_META_STRING("setPivotY"), void>(pivotY); }
inline jfloat RotateDrawable::getPivotY() { return call_method<SCAPIX_META_STRING("getPivotY"), jfloat>(); }
inline void RotateDrawable::setPivotYRelative(jboolean relative) { return call_method<SCAPIX_META_STRING("setPivotYRelative"), void>(relative); }
inline jboolean RotateDrawable::isPivotYRelative() { return call_method<SCAPIX_META_STRING("isPivotYRelative"), jboolean>(); }

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_DRAWABLE_ROTATEDRAWABLE_H
