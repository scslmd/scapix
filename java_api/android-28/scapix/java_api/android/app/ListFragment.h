// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/app/Fragment.h>

#ifndef SCAPIX_ANDROID_APP_LISTFRAGMENT_H
#define SCAPIX_ANDROID_APP_LISTFRAGMENT_H

namespace scapix::java_api {

namespace android::os { class Bundle; }
namespace android::view { class LayoutInflater; }
namespace android::view { class View; }
namespace android::view { class ViewGroup; }
namespace android::widget { class ListAdapter; }
namespace android::widget { class ListView; }
namespace java::lang { class CharSequence; }

namespace android::app {

class ListFragment : public object_base<SCAPIX_META_STRING("android/app/ListFragment"),
	android::app::Fragment>
{
public:

	static ref<ListFragment> new_object();
	ref<android::view::View> onCreateView(ref<android::view::LayoutInflater> inflater, ref<android::view::ViewGroup> container, ref<android::os::Bundle> savedInstanceState);
	void onViewCreated(ref<android::view::View> view, ref<android::os::Bundle> savedInstanceState);
	void onDestroyView();
	void onListItemClick(ref<android::widget::ListView> l, ref<android::view::View> v, jint position, jlong id);
	void setListAdapter(ref<android::widget::ListAdapter> adapter);
	void setSelection(jint position);
	jint getSelectedItemPosition();
	jlong getSelectedItemId();
	ref<android::widget::ListView> getListView();
	void setEmptyText(ref<java::lang::CharSequence> text);
	void setListShown(jboolean shown);
	void setListShownNoAnimation(jboolean shown);
	ref<android::widget::ListAdapter> getListAdapter();

protected:

	ListFragment(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/LayoutInflater.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#include <scapix/java_api/android/widget/ListAdapter.h>
#include <scapix/java_api/android/widget/ListView.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::app {

inline ref<ListFragment> ListFragment::new_object() { return base_::new_object(); }
inline ref<android::view::View> ListFragment::onCreateView(ref<android::view::LayoutInflater> inflater, ref<android::view::ViewGroup> container, ref<android::os::Bundle> savedInstanceState) { return call_method<SCAPIX_META_STRING("onCreateView"), ref<android::view::View>>(inflater, container, savedInstanceState); }
inline void ListFragment::onViewCreated(ref<android::view::View> view, ref<android::os::Bundle> savedInstanceState) { return call_method<SCAPIX_META_STRING("onViewCreated"), void>(view, savedInstanceState); }
inline void ListFragment::onDestroyView() { return call_method<SCAPIX_META_STRING("onDestroyView"), void>(); }
inline void ListFragment::onListItemClick(ref<android::widget::ListView> l, ref<android::view::View> v, jint position, jlong id) { return call_method<SCAPIX_META_STRING("onListItemClick"), void>(l, v, position, id); }
inline void ListFragment::setListAdapter(ref<android::widget::ListAdapter> adapter) { return call_method<SCAPIX_META_STRING("setListAdapter"), void>(adapter); }
inline void ListFragment::setSelection(jint position) { return call_method<SCAPIX_META_STRING("setSelection"), void>(position); }
inline jint ListFragment::getSelectedItemPosition() { return call_method<SCAPIX_META_STRING("getSelectedItemPosition"), jint>(); }
inline jlong ListFragment::getSelectedItemId() { return call_method<SCAPIX_META_STRING("getSelectedItemId"), jlong>(); }
inline ref<android::widget::ListView> ListFragment::getListView() { return call_method<SCAPIX_META_STRING("getListView"), ref<android::widget::ListView>>(); }
inline void ListFragment::setEmptyText(ref<java::lang::CharSequence> text) { return call_method<SCAPIX_META_STRING("setEmptyText"), void>(text); }
inline void ListFragment::setListShown(jboolean shown) { return call_method<SCAPIX_META_STRING("setListShown"), void>(shown); }
inline void ListFragment::setListShownNoAnimation(jboolean shown) { return call_method<SCAPIX_META_STRING("setListShownNoAnimation"), void>(shown); }
inline ref<android::widget::ListAdapter> ListFragment::getListAdapter() { return call_method<SCAPIX_META_STRING("getListAdapter"), ref<android::widget::ListAdapter>>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_LISTFRAGMENT_H
