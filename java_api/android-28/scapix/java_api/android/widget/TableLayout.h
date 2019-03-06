// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/widget/LinearLayout.h>

#ifndef SCAPIX_ANDROID_WIDGET_TABLELAYOUT_H
#define SCAPIX_ANDROID_WIDGET_TABLELAYOUT_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace android::view { class View; }
namespace android::view { class ViewGroup_LayoutParams; }
namespace android::view { class ViewGroup_OnHierarchyChangeListener; }
namespace android::widget { class TableLayout_LayoutParams; }
namespace java::lang { class CharSequence; }

namespace android::widget {

class TableLayout : public object_base<SCAPIX_META_STRING("android/widget/TableLayout"),
	android::widget::LinearLayout>
{
public:

	using LayoutParams = TableLayout_LayoutParams;

	static ref<TableLayout> new_object(ref<android::content::Context> context);
	static ref<TableLayout> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	void setOnHierarchyChangeListener(ref<android::view::ViewGroup_OnHierarchyChangeListener> listener);
	void requestLayout();
	jboolean isShrinkAllColumns();
	void setShrinkAllColumns(jboolean shrinkAllColumns);
	jboolean isStretchAllColumns();
	void setStretchAllColumns(jboolean stretchAllColumns);
	void setColumnCollapsed(jint columnIndex, jboolean isCollapsed);
	jboolean isColumnCollapsed(jint columnIndex);
	void setColumnStretchable(jint columnIndex, jboolean isStretchable);
	jboolean isColumnStretchable(jint columnIndex);
	void setColumnShrinkable(jint columnIndex, jboolean isShrinkable);
	jboolean isColumnShrinkable(jint columnIndex);
	void addView(ref<android::view::View> child);
	void addView(ref<android::view::View> child, jint index);
	void addView(ref<android::view::View> child, ref<android::view::ViewGroup_LayoutParams> params);
	void addView(ref<android::view::View> child, jint index, ref<android::view::ViewGroup_LayoutParams> params);
	ref<android::widget::TableLayout_LayoutParams> generateLayoutParams(ref<android::util::AttributeSet> attrs);
	ref<java::lang::CharSequence> getAccessibilityClassName();

protected:

	TableLayout(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/android/view/ViewGroup_OnHierarchyChangeListener.h>
#include <scapix/java_api/android/widget/TableLayout_LayoutParams.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<TableLayout> TableLayout::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<TableLayout> TableLayout::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline void TableLayout::setOnHierarchyChangeListener(ref<android::view::ViewGroup_OnHierarchyChangeListener> listener) { return call_method<SCAPIX_META_STRING("setOnHierarchyChangeListener"), void>(listener); }
inline void TableLayout::requestLayout() { return call_method<SCAPIX_META_STRING("requestLayout"), void>(); }
inline jboolean TableLayout::isShrinkAllColumns() { return call_method<SCAPIX_META_STRING("isShrinkAllColumns"), jboolean>(); }
inline void TableLayout::setShrinkAllColumns(jboolean shrinkAllColumns) { return call_method<SCAPIX_META_STRING("setShrinkAllColumns"), void>(shrinkAllColumns); }
inline jboolean TableLayout::isStretchAllColumns() { return call_method<SCAPIX_META_STRING("isStretchAllColumns"), jboolean>(); }
inline void TableLayout::setStretchAllColumns(jboolean stretchAllColumns) { return call_method<SCAPIX_META_STRING("setStretchAllColumns"), void>(stretchAllColumns); }
inline void TableLayout::setColumnCollapsed(jint columnIndex, jboolean isCollapsed) { return call_method<SCAPIX_META_STRING("setColumnCollapsed"), void>(columnIndex, isCollapsed); }
inline jboolean TableLayout::isColumnCollapsed(jint columnIndex) { return call_method<SCAPIX_META_STRING("isColumnCollapsed"), jboolean>(columnIndex); }
inline void TableLayout::setColumnStretchable(jint columnIndex, jboolean isStretchable) { return call_method<SCAPIX_META_STRING("setColumnStretchable"), void>(columnIndex, isStretchable); }
inline jboolean TableLayout::isColumnStretchable(jint columnIndex) { return call_method<SCAPIX_META_STRING("isColumnStretchable"), jboolean>(columnIndex); }
inline void TableLayout::setColumnShrinkable(jint columnIndex, jboolean isShrinkable) { return call_method<SCAPIX_META_STRING("setColumnShrinkable"), void>(columnIndex, isShrinkable); }
inline jboolean TableLayout::isColumnShrinkable(jint columnIndex) { return call_method<SCAPIX_META_STRING("isColumnShrinkable"), jboolean>(columnIndex); }
inline void TableLayout::addView(ref<android::view::View> child) { return call_method<SCAPIX_META_STRING("addView"), void>(child); }
inline void TableLayout::addView(ref<android::view::View> child, jint index) { return call_method<SCAPIX_META_STRING("addView"), void>(child, index); }
inline void TableLayout::addView(ref<android::view::View> child, ref<android::view::ViewGroup_LayoutParams> params) { return call_method<SCAPIX_META_STRING("addView"), void>(child, params); }
inline void TableLayout::addView(ref<android::view::View> child, jint index, ref<android::view::ViewGroup_LayoutParams> params) { return call_method<SCAPIX_META_STRING("addView"), void>(child, index, params); }
inline ref<android::widget::TableLayout_LayoutParams> TableLayout::generateLayoutParams(ref<android::util::AttributeSet> attrs) { return call_method<SCAPIX_META_STRING("generateLayoutParams"), ref<android::widget::TableLayout_LayoutParams>>(attrs); }
inline ref<java::lang::CharSequence> TableLayout::getAccessibilityClassName() { return call_method<SCAPIX_META_STRING("getAccessibilityClassName"), ref<java::lang::CharSequence>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_TABLELAYOUT_H
