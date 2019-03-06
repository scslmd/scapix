// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/database/Observable.h>

#ifndef SCAPIX_ANDROID_DATABASE_DATASETOBSERVABLE_H
#define SCAPIX_ANDROID_DATABASE_DATASETOBSERVABLE_H

namespace scapix::java_api {
namespace android::database {

class DataSetObservable : public object_base<SCAPIX_META_STRING("android/database/DataSetObservable"),
	android::database::Observable>
{
public:

	static ref<DataSetObservable> new_object();
	void notifyChanged();
	void notifyInvalidated();

protected:

	DataSetObservable(handle_type h) : base_(h) {}

};

} // namespace android::database
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::database {

inline ref<DataSetObservable> DataSetObservable::new_object() { return base_::new_object(); }
inline void DataSetObservable::notifyChanged() { return call_method<SCAPIX_META_STRING("notifyChanged"), void>(); }
inline void DataSetObservable::notifyInvalidated() { return call_method<SCAPIX_META_STRING("notifyInvalidated"), void>(); }

} // namespace android::database
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DATABASE_DATASETOBSERVABLE_H
