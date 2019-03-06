// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/widget/BaseAdapter.h>
#include <scapix/java_api/android/widget/Filterable.h>
#include <scapix/java_api/android/widget/ThemedSpinnerAdapter.h>

#ifndef SCAPIX_ANDROID_WIDGET_ARRAYADAPTER_H
#define SCAPIX_ANDROID_WIDGET_ARRAYADAPTER_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::content::res { class Resources_Theme; }
namespace android::view { class View; }
namespace android::view { class ViewGroup; }
namespace android::widget { class Filter; }
namespace java::lang { class CharSequence; }
namespace java::lang { class Object; }
namespace java::util { class Collection; }
namespace java::util { class Comparator; }
namespace java::util { class List; }

namespace android::widget {

class ArrayAdapter : public object_base<SCAPIX_META_STRING("android/widget/ArrayAdapter"),
	android::widget::BaseAdapter,
	android::widget::Filterable,
	android::widget::ThemedSpinnerAdapter>
{
public:

	static ref<ArrayAdapter> new_object(ref<android::content::Context> context, jint resource);
	static ref<ArrayAdapter> new_object(ref<android::content::Context> context, jint resource, jint textViewResourceId);
	static ref<ArrayAdapter> new_object(ref<android::content::Context> context, jint resource, ref<link::java::array<java::lang::Object>> objects);
	static ref<ArrayAdapter> new_object(ref<android::content::Context> context, jint resource, jint textViewResourceId, ref<link::java::array<java::lang::Object>> objects);
	static ref<ArrayAdapter> new_object(ref<android::content::Context> context, jint resource, ref<java::util::List> objects);
	static ref<ArrayAdapter> new_object(ref<android::content::Context> context, jint resource, jint textViewResourceId, ref<java::util::List> objects);
	void add(ref<java::lang::Object> object);
	void addAll(ref<java::util::Collection> collection);
	void addAll(ref<link::java::array<java::lang::Object>> items);
	void insert(ref<java::lang::Object> object, jint index);
	void remove(ref<java::lang::Object> object);
	void clear();
	void sort(ref<java::util::Comparator> comparator);
	void notifyDataSetChanged();
	void setNotifyOnChange(jboolean notifyOnChange);
	ref<android::content::Context> getContext();
	jint getCount();
	ref<java::lang::Object> getItem(jint position);
	jint getPosition(ref<java::lang::Object> item);
	jlong getItemId(jint position);
	ref<android::view::View> getView(jint position, ref<android::view::View> convertView, ref<android::view::ViewGroup> parent);
	void setDropDownViewResource(jint resource);
	void setDropDownViewTheme(ref<android::content::res::Resources_Theme> theme);
	ref<android::content::res::Resources_Theme> getDropDownViewTheme();
	ref<android::view::View> getDropDownView(jint position, ref<android::view::View> convertView, ref<android::view::ViewGroup> parent);
	static ref<android::widget::ArrayAdapter> createFromResource(ref<android::content::Context> context, jint textArrayResId, jint textViewResId);
	ref<android::widget::Filter> getFilter();
	ref<link::java::array<java::lang::CharSequence>> getAutofillOptions();

protected:

	ArrayAdapter(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#include <scapix/java_api/android/widget/Filter.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<ArrayAdapter> ArrayAdapter::new_object(ref<android::content::Context> context, jint resource) { return base_::new_object(context, resource); }
inline ref<ArrayAdapter> ArrayAdapter::new_object(ref<android::content::Context> context, jint resource, jint textViewResourceId) { return base_::new_object(context, resource, textViewResourceId); }
inline ref<ArrayAdapter> ArrayAdapter::new_object(ref<android::content::Context> context, jint resource, ref<link::java::array<java::lang::Object>> objects) { return base_::new_object(context, resource, objects); }
inline ref<ArrayAdapter> ArrayAdapter::new_object(ref<android::content::Context> context, jint resource, jint textViewResourceId, ref<link::java::array<java::lang::Object>> objects) { return base_::new_object(context, resource, textViewResourceId, objects); }
inline ref<ArrayAdapter> ArrayAdapter::new_object(ref<android::content::Context> context, jint resource, ref<java::util::List> objects) { return base_::new_object(context, resource, objects); }
inline ref<ArrayAdapter> ArrayAdapter::new_object(ref<android::content::Context> context, jint resource, jint textViewResourceId, ref<java::util::List> objects) { return base_::new_object(context, resource, textViewResourceId, objects); }
inline void ArrayAdapter::add(ref<java::lang::Object> object) { return call_method<SCAPIX_META_STRING("add"), void>(object); }
inline void ArrayAdapter::addAll(ref<java::util::Collection> collection) { return call_method<SCAPIX_META_STRING("addAll"), void>(collection); }
inline void ArrayAdapter::addAll(ref<link::java::array<java::lang::Object>> items) { return call_method<SCAPIX_META_STRING("addAll"), void>(items); }
inline void ArrayAdapter::insert(ref<java::lang::Object> object, jint index) { return call_method<SCAPIX_META_STRING("insert"), void>(object, index); }
inline void ArrayAdapter::remove(ref<java::lang::Object> object) { return call_method<SCAPIX_META_STRING("remove"), void>(object); }
inline void ArrayAdapter::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline void ArrayAdapter::sort(ref<java::util::Comparator> comparator) { return call_method<SCAPIX_META_STRING("sort"), void>(comparator); }
inline void ArrayAdapter::notifyDataSetChanged() { return call_method<SCAPIX_META_STRING("notifyDataSetChanged"), void>(); }
inline void ArrayAdapter::setNotifyOnChange(jboolean notifyOnChange) { return call_method<SCAPIX_META_STRING("setNotifyOnChange"), void>(notifyOnChange); }
inline ref<android::content::Context> ArrayAdapter::getContext() { return call_method<SCAPIX_META_STRING("getContext"), ref<android::content::Context>>(); }
inline jint ArrayAdapter::getCount() { return call_method<SCAPIX_META_STRING("getCount"), jint>(); }
inline ref<java::lang::Object> ArrayAdapter::getItem(jint position) { return call_method<SCAPIX_META_STRING("getItem"), ref<java::lang::Object>>(position); }
inline jint ArrayAdapter::getPosition(ref<java::lang::Object> item) { return call_method<SCAPIX_META_STRING("getPosition"), jint>(item); }
inline jlong ArrayAdapter::getItemId(jint position) { return call_method<SCAPIX_META_STRING("getItemId"), jlong>(position); }
inline ref<android::view::View> ArrayAdapter::getView(jint position, ref<android::view::View> convertView, ref<android::view::ViewGroup> parent) { return call_method<SCAPIX_META_STRING("getView"), ref<android::view::View>>(position, convertView, parent); }
inline void ArrayAdapter::setDropDownViewResource(jint resource) { return call_method<SCAPIX_META_STRING("setDropDownViewResource"), void>(resource); }
inline void ArrayAdapter::setDropDownViewTheme(ref<android::content::res::Resources_Theme> theme) { return call_method<SCAPIX_META_STRING("setDropDownViewTheme"), void>(theme); }
inline ref<android::content::res::Resources_Theme> ArrayAdapter::getDropDownViewTheme() { return call_method<SCAPIX_META_STRING("getDropDownViewTheme"), ref<android::content::res::Resources_Theme>>(); }
inline ref<android::view::View> ArrayAdapter::getDropDownView(jint position, ref<android::view::View> convertView, ref<android::view::ViewGroup> parent) { return call_method<SCAPIX_META_STRING("getDropDownView"), ref<android::view::View>>(position, convertView, parent); }
inline ref<android::widget::ArrayAdapter> ArrayAdapter::createFromResource(ref<android::content::Context> context, jint textArrayResId, jint textViewResId) { return call_static_method<SCAPIX_META_STRING("createFromResource"), ref<android::widget::ArrayAdapter>>(context, textArrayResId, textViewResId); }
inline ref<android::widget::Filter> ArrayAdapter::getFilter() { return call_method<SCAPIX_META_STRING("getFilter"), ref<android::widget::Filter>>(); }
inline ref<link::java::array<java::lang::CharSequence>> ArrayAdapter::getAutofillOptions() { return call_method<SCAPIX_META_STRING("getAutofillOptions"), ref<link::java::array<java::lang::CharSequence>>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_ARRAYADAPTER_H
