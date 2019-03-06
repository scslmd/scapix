// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/sql/ResultSetMetaData.h>

#ifndef SCAPIX_JAVAX_SQL_ROWSETMETADATA_H
#define SCAPIX_JAVAX_SQL_ROWSETMETADATA_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace javax::sql {

class RowSetMetaData : public object_base<SCAPIX_META_STRING("javax/sql/RowSetMetaData"),
	java::lang::Object,
	java::sql::ResultSetMetaData>
{
public:

	void setColumnCount(jint p1);
	void setAutoIncrement(jint p1, jboolean p2);
	void setCaseSensitive(jint p1, jboolean p2);
	void setSearchable(jint p1, jboolean p2);
	void setCurrency(jint p1, jboolean p2);
	void setNullable(jint p1, jint p2);
	void setSigned(jint p1, jboolean p2);
	void setColumnDisplaySize(jint p1, jint p2);
	void setColumnLabel(jint p1, ref<java::lang::String> p2);
	void setColumnName(jint p1, ref<java::lang::String> p2);
	void setSchemaName(jint p1, ref<java::lang::String> p2);
	void setPrecision(jint p1, jint p2);
	void setScale(jint p1, jint p2);
	void setTableName(jint p1, ref<java::lang::String> p2);
	void setCatalogName(jint p1, ref<java::lang::String> p2);
	void setColumnType(jint p1, jint p2);
	void setColumnTypeName(jint p1, ref<java::lang::String> p2);

protected:

	RowSetMetaData(handle_type h) : base_(h) {}

};

} // namespace javax::sql
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::sql {

inline void RowSetMetaData::setColumnCount(jint p1) { return call_method<SCAPIX_META_STRING("setColumnCount"), void>(p1); }
inline void RowSetMetaData::setAutoIncrement(jint p1, jboolean p2) { return call_method<SCAPIX_META_STRING("setAutoIncrement"), void>(p1, p2); }
inline void RowSetMetaData::setCaseSensitive(jint p1, jboolean p2) { return call_method<SCAPIX_META_STRING("setCaseSensitive"), void>(p1, p2); }
inline void RowSetMetaData::setSearchable(jint p1, jboolean p2) { return call_method<SCAPIX_META_STRING("setSearchable"), void>(p1, p2); }
inline void RowSetMetaData::setCurrency(jint p1, jboolean p2) { return call_method<SCAPIX_META_STRING("setCurrency"), void>(p1, p2); }
inline void RowSetMetaData::setNullable(jint p1, jint p2) { return call_method<SCAPIX_META_STRING("setNullable"), void>(p1, p2); }
inline void RowSetMetaData::setSigned(jint p1, jboolean p2) { return call_method<SCAPIX_META_STRING("setSigned"), void>(p1, p2); }
inline void RowSetMetaData::setColumnDisplaySize(jint p1, jint p2) { return call_method<SCAPIX_META_STRING("setColumnDisplaySize"), void>(p1, p2); }
inline void RowSetMetaData::setColumnLabel(jint p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("setColumnLabel"), void>(p1, p2); }
inline void RowSetMetaData::setColumnName(jint p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("setColumnName"), void>(p1, p2); }
inline void RowSetMetaData::setSchemaName(jint p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("setSchemaName"), void>(p1, p2); }
inline void RowSetMetaData::setPrecision(jint p1, jint p2) { return call_method<SCAPIX_META_STRING("setPrecision"), void>(p1, p2); }
inline void RowSetMetaData::setScale(jint p1, jint p2) { return call_method<SCAPIX_META_STRING("setScale"), void>(p1, p2); }
inline void RowSetMetaData::setTableName(jint p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("setTableName"), void>(p1, p2); }
inline void RowSetMetaData::setCatalogName(jint p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("setCatalogName"), void>(p1, p2); }
inline void RowSetMetaData::setColumnType(jint p1, jint p2) { return call_method<SCAPIX_META_STRING("setColumnType"), void>(p1, p2); }
inline void RowSetMetaData::setColumnTypeName(jint p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("setColumnTypeName"), void>(p1, p2); }

} // namespace javax::sql
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SQL_ROWSETMETADATA_H
