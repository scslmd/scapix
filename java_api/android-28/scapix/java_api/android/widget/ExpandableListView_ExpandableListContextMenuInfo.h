// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/ContextMenu_ContextMenuInfo.h>

#ifndef SCAPIX_ANDROID_WIDGET_EXPANDABLELISTVIEW_EXPANDABLELISTCONTEXTMENUINFO_H
#define SCAPIX_ANDROID_WIDGET_EXPANDABLELISTVIEW_EXPANDABLELISTCONTEXTMENUINFO_H

namespace scapix::java_api {

namespace android::view { class View; }

namespace android::widget {

class ExpandableListView_ExpandableListContextMenuInfo : public object_base<SCAPIX_META_STRING("android/widget/ExpandableListView$ExpandableListContextMenuInfo"),
	java::lang::Object,
	android::view::ContextMenu_ContextMenuInfo>
{
public:

	jlong id();
	void id(jlong);
	jlong packedPosition();
	void packedPosition(jlong);
	ref<android::view::View> targetView();
	void targetView(ref<android::view::View>);

	static ref<ExpandableListView_ExpandableListContextMenuInfo> new_object(ref<android::view::View> targetView, jlong packedPosition, jlong p3);

protected:

	ExpandableListView_ExpandableListContextMenuInfo(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/view/View.h>

namespace scapix::java_api {
namespace android::widget {

inline jlong ExpandableListView_ExpandableListContextMenuInfo::id() { return get_field<SCAPIX_META_STRING("id"), jlong>(); }
inline void ExpandableListView_ExpandableListContextMenuInfo::id(jlong v) { set_field<SCAPIX_META_STRING("id"), jlong>(v); }
inline jlong ExpandableListView_ExpandableListContextMenuInfo::packedPosition() { return get_field<SCAPIX_META_STRING("packedPosition"), jlong>(); }
inline void ExpandableListView_ExpandableListContextMenuInfo::packedPosition(jlong v) { set_field<SCAPIX_META_STRING("packedPosition"), jlong>(v); }
inline ref<android::view::View> ExpandableListView_ExpandableListContextMenuInfo::targetView() { return get_field<SCAPIX_META_STRING("targetView"), ref<android::view::View>>(); }
inline void ExpandableListView_ExpandableListContextMenuInfo::targetView(ref<android::view::View> v) { set_field<SCAPIX_META_STRING("targetView"), ref<android::view::View>>(v); }
inline ref<ExpandableListView_ExpandableListContextMenuInfo> ExpandableListView_ExpandableListContextMenuInfo::new_object(ref<android::view::View> targetView, jlong packedPosition, jlong p3) { return base_::new_object(targetView, packedPosition, p3); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_EXPANDABLELISTVIEW_EXPANDABLELISTCONTEXTMENUINFO_H
