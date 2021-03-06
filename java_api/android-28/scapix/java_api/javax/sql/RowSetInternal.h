// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_SQL_ROWSETINTERNAL_H
#define SCAPIX_JAVAX_SQL_ROWSETINTERNAL_H

namespace scapix::java_api {

namespace java::sql { class Connection; }
namespace java::sql { class ResultSet; }
namespace javax::sql { class RowSetMetaData; }

namespace javax::sql {

class RowSetInternal : public object_base<SCAPIX_META_STRING("javax/sql/RowSetInternal"),
	java::lang::Object>
{
public:

	ref<link::java::array<java::lang::Object>> getParams();
	ref<java::sql::Connection> getConnection();
	void setMetaData(ref<javax::sql::RowSetMetaData> p1);
	ref<java::sql::ResultSet> getOriginal();
	ref<java::sql::ResultSet> getOriginalRow();

protected:

	RowSetInternal(handle_type h) : base_(h) {}

};

} // namespace javax::sql
} // namespace scapix::java_api

#include <scapix/java_api/java/sql/Connection.h>
#include <scapix/java_api/java/sql/ResultSet.h>
#include <scapix/java_api/javax/sql/RowSetMetaData.h>

namespace scapix::java_api {
namespace javax::sql {

inline ref<link::java::array<java::lang::Object>> RowSetInternal::getParams() { return call_method<SCAPIX_META_STRING("getParams"), ref<link::java::array<java::lang::Object>>>(); }
inline ref<java::sql::Connection> RowSetInternal::getConnection() { return call_method<SCAPIX_META_STRING("getConnection"), ref<java::sql::Connection>>(); }
inline void RowSetInternal::setMetaData(ref<javax::sql::RowSetMetaData> p1) { return call_method<SCAPIX_META_STRING("setMetaData"), void>(p1); }
inline ref<java::sql::ResultSet> RowSetInternal::getOriginal() { return call_method<SCAPIX_META_STRING("getOriginal"), ref<java::sql::ResultSet>>(); }
inline ref<java::sql::ResultSet> RowSetInternal::getOriginalRow() { return call_method<SCAPIX_META_STRING("getOriginalRow"), ref<java::sql::ResultSet>>(); }

} // namespace javax::sql
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SQL_ROWSETINTERNAL_H
