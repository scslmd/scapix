// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/widget/BaseExpandableListAdapter.h>
#include <scapix/java_api/android/widget/Filterable.h>

#ifndef SCAPIX_ANDROID_WIDGET_CURSORTREEADAPTER_H
#define SCAPIX_ANDROID_WIDGET_CURSORTREEADAPTER_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::database { class Cursor; }
namespace android::view { class View; }
namespace android::view { class ViewGroup; }
namespace android::widget { class Filter; }
namespace android::widget { class FilterQueryProvider; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::widget {

class CursorTreeAdapter : public object_base<SCAPIX_META_STRING("android/widget/CursorTreeAdapter"),
	android::widget::BaseExpandableListAdapter,
	android::widget::Filterable>
{
public:

	static ref<CursorTreeAdapter> new_object(ref<android::database::Cursor> cursor, ref<android::content::Context> context);
	static ref<CursorTreeAdapter> new_object(ref<android::database::Cursor> cursor, ref<android::content::Context> context, jboolean autoRequery);
	void setGroupCursor(ref<android::database::Cursor> cursor);
	void setChildrenCursor(jint groupPosition, ref<android::database::Cursor> childrenCursor);
	ref<android::database::Cursor> getChild(jint groupPosition, jint childPosition);
	jlong getChildId(jint groupPosition, jint childPosition);
	jint getChildrenCount(jint groupPosition);
	ref<android::database::Cursor> getGroup(jint groupPosition);
	jint getGroupCount();
	jlong getGroupId(jint groupPosition);
	ref<android::view::View> getGroupView(jint groupPosition, jboolean isExpanded, ref<android::view::View> convertView, ref<android::view::ViewGroup> parent);
	ref<android::view::View> getChildView(jint groupPosition, jint childPosition, jboolean isLastChild, ref<android::view::View> convertView, ref<android::view::ViewGroup> parent);
	jboolean isChildSelectable(jint groupPosition, jint childPosition);
	jboolean hasStableIds();
	void notifyDataSetChanged();
	void notifyDataSetChanged(jboolean releaseCursors);
	void notifyDataSetInvalidated();
	void onGroupCollapsed(jint groupPosition);
	ref<java::lang::String> convertToString(ref<android::database::Cursor> cursor);
	ref<android::database::Cursor> runQueryOnBackgroundThread(ref<java::lang::CharSequence> constraint);
	ref<android::widget::Filter> getFilter();
	ref<android::widget::FilterQueryProvider> getFilterQueryProvider();
	void setFilterQueryProvider(ref<android::widget::FilterQueryProvider> filterQueryProvider);
	void changeCursor(ref<android::database::Cursor> cursor);
	ref<android::database::Cursor> getCursor();

protected:

	CursorTreeAdapter(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#include <scapix/java_api/android/widget/Filter.h>
#include <scapix/java_api/android/widget/FilterQueryProvider.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<CursorTreeAdapter> CursorTreeAdapter::new_object(ref<android::database::Cursor> cursor, ref<android::content::Context> context) { return base_::new_object(cursor, context); }
inline ref<CursorTreeAdapter> CursorTreeAdapter::new_object(ref<android::database::Cursor> cursor, ref<android::content::Context> context, jboolean autoRequery) { return base_::new_object(cursor, context, autoRequery); }
inline void CursorTreeAdapter::setGroupCursor(ref<android::database::Cursor> cursor) { return call_method<SCAPIX_META_STRING("setGroupCursor"), void>(cursor); }
inline void CursorTreeAdapter::setChildrenCursor(jint groupPosition, ref<android::database::Cursor> childrenCursor) { return call_method<SCAPIX_META_STRING("setChildrenCursor"), void>(groupPosition, childrenCursor); }
inline ref<android::database::Cursor> CursorTreeAdapter::getChild(jint groupPosition, jint childPosition) { return call_method<SCAPIX_META_STRING("getChild"), ref<android::database::Cursor>>(groupPosition, childPosition); }
inline jlong CursorTreeAdapter::getChildId(jint groupPosition, jint childPosition) { return call_method<SCAPIX_META_STRING("getChildId"), jlong>(groupPosition, childPosition); }
inline jint CursorTreeAdapter::getChildrenCount(jint groupPosition) { return call_method<SCAPIX_META_STRING("getChildrenCount"), jint>(groupPosition); }
inline ref<android::database::Cursor> CursorTreeAdapter::getGroup(jint groupPosition) { return call_method<SCAPIX_META_STRING("getGroup"), ref<android::database::Cursor>>(groupPosition); }
inline jint CursorTreeAdapter::getGroupCount() { return call_method<SCAPIX_META_STRING("getGroupCount"), jint>(); }
inline jlong CursorTreeAdapter::getGroupId(jint groupPosition) { return call_method<SCAPIX_META_STRING("getGroupId"), jlong>(groupPosition); }
inline ref<android::view::View> CursorTreeAdapter::getGroupView(jint groupPosition, jboolean isExpanded, ref<android::view::View> convertView, ref<android::view::ViewGroup> parent) { return call_method<SCAPIX_META_STRING("getGroupView"), ref<android::view::View>>(groupPosition, isExpanded, convertView, parent); }
inline ref<android::view::View> CursorTreeAdapter::getChildView(jint groupPosition, jint childPosition, jboolean isLastChild, ref<android::view::View> convertView, ref<android::view::ViewGroup> parent) { return call_method<SCAPIX_META_STRING("getChildView"), ref<android::view::View>>(groupPosition, childPosition, isLastChild, convertView, parent); }
inline jboolean CursorTreeAdapter::isChildSelectable(jint groupPosition, jint childPosition) { return call_method<SCAPIX_META_STRING("isChildSelectable"), jboolean>(groupPosition, childPosition); }
inline jboolean CursorTreeAdapter::hasStableIds() { return call_method<SCAPIX_META_STRING("hasStableIds"), jboolean>(); }
inline void CursorTreeAdapter::notifyDataSetChanged() { return call_method<SCAPIX_META_STRING("notifyDataSetChanged"), void>(); }
inline void CursorTreeAdapter::notifyDataSetChanged(jboolean releaseCursors) { return call_method<SCAPIX_META_STRING("notifyDataSetChanged"), void>(releaseCursors); }
inline void CursorTreeAdapter::notifyDataSetInvalidated() { return call_method<SCAPIX_META_STRING("notifyDataSetInvalidated"), void>(); }
inline void CursorTreeAdapter::onGroupCollapsed(jint groupPosition) { return call_method<SCAPIX_META_STRING("onGroupCollapsed"), void>(groupPosition); }
inline ref<java::lang::String> CursorTreeAdapter::convertToString(ref<android::database::Cursor> cursor) { return call_method<SCAPIX_META_STRING("convertToString"), ref<java::lang::String>>(cursor); }
inline ref<android::database::Cursor> CursorTreeAdapter::runQueryOnBackgroundThread(ref<java::lang::CharSequence> constraint) { return call_method<SCAPIX_META_STRING("runQueryOnBackgroundThread"), ref<android::database::Cursor>>(constraint); }
inline ref<android::widget::Filter> CursorTreeAdapter::getFilter() { return call_method<SCAPIX_META_STRING("getFilter"), ref<android::widget::Filter>>(); }
inline ref<android::widget::FilterQueryProvider> CursorTreeAdapter::getFilterQueryProvider() { return call_method<SCAPIX_META_STRING("getFilterQueryProvider"), ref<android::widget::FilterQueryProvider>>(); }
inline void CursorTreeAdapter::setFilterQueryProvider(ref<android::widget::FilterQueryProvider> filterQueryProvider) { return call_method<SCAPIX_META_STRING("setFilterQueryProvider"), void>(filterQueryProvider); }
inline void CursorTreeAdapter::changeCursor(ref<android::database::Cursor> cursor) { return call_method<SCAPIX_META_STRING("changeCursor"), void>(cursor); }
inline ref<android::database::Cursor> CursorTreeAdapter::getCursor() { return call_method<SCAPIX_META_STRING("getCursor"), ref<android::database::Cursor>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_CURSORTREEADAPTER_H
