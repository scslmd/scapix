// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_UTIL_DATE_H
#define SCAPIX_JAVA_UTIL_DATE_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::time { class Instant; }

namespace java::util {

class Date : public object_base<SCAPIX_META_STRING("java/util/Date"),
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable,
	java::lang::Comparable>
{
public:

	static ref<Date> new_object();
	static ref<Date> new_object(jlong date);
	static ref<Date> new_object(jint year, jint month, jint date);
	static ref<Date> new_object(jint year, jint month, jint date, jint hrs, jint min);
	static ref<Date> new_object(jint year, jint month, jint date, jint hrs, jint min, jint sec);
	static ref<Date> new_object(ref<java::lang::String> s);
	ref<java::lang::Object> clone();
	static jlong UTC_(jint year, jint month, jint date, jint hrs, jint min, jint sec);
	static jlong parse(ref<java::lang::String> s);
	jint getYear();
	void setYear(jint year);
	jint getMonth();
	void setMonth(jint month);
	jint getDate();
	void setDate(jint date);
	jint getDay();
	jint getHours();
	void setHours(jint hours);
	jint getMinutes();
	void setMinutes(jint minutes);
	jint getSeconds();
	void setSeconds(jint seconds);
	jlong getTime();
	void setTime(jlong time);
	jboolean before(ref<java::util::Date> when);
	jboolean after(ref<java::util::Date> when);
	jboolean equals(ref<java::lang::Object> obj);
	jint compareTo(ref<java::util::Date> anotherDate);
	jint hashCode();
	ref<java::lang::String> toString();
	ref<java::lang::String> toLocaleString();
	ref<java::lang::String> toGMTString();
	jint getTimezoneOffset();
	static ref<java::util::Date> from(ref<java::time::Instant> instant);
	ref<java::time::Instant> toInstant();

protected:

	Date(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Instant.h>

namespace scapix::java_api {
namespace java::util {

inline ref<Date> Date::new_object() { return base_::new_object(); }
inline ref<Date> Date::new_object(jlong date) { return base_::new_object(date); }
inline ref<Date> Date::new_object(jint year, jint month, jint date) { return base_::new_object(year, month, date); }
inline ref<Date> Date::new_object(jint year, jint month, jint date, jint hrs, jint min) { return base_::new_object(year, month, date, hrs, min); }
inline ref<Date> Date::new_object(jint year, jint month, jint date, jint hrs, jint min, jint sec) { return base_::new_object(year, month, date, hrs, min, sec); }
inline ref<Date> Date::new_object(ref<java::lang::String> s) { return base_::new_object(s); }
inline ref<java::lang::Object> Date::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline jlong Date::UTC_(jint year, jint month, jint date, jint hrs, jint min, jint sec) { return call_static_method<SCAPIX_META_STRING("UTC"), jlong>(year, month, date, hrs, min, sec); }
inline jlong Date::parse(ref<java::lang::String> s) { return call_static_method<SCAPIX_META_STRING("parse"), jlong>(s); }
inline jint Date::getYear() { return call_method<SCAPIX_META_STRING("getYear"), jint>(); }
inline void Date::setYear(jint year) { return call_method<SCAPIX_META_STRING("setYear"), void>(year); }
inline jint Date::getMonth() { return call_method<SCAPIX_META_STRING("getMonth"), jint>(); }
inline void Date::setMonth(jint month) { return call_method<SCAPIX_META_STRING("setMonth"), void>(month); }
inline jint Date::getDate() { return call_method<SCAPIX_META_STRING("getDate"), jint>(); }
inline void Date::setDate(jint date) { return call_method<SCAPIX_META_STRING("setDate"), void>(date); }
inline jint Date::getDay() { return call_method<SCAPIX_META_STRING("getDay"), jint>(); }
inline jint Date::getHours() { return call_method<SCAPIX_META_STRING("getHours"), jint>(); }
inline void Date::setHours(jint hours) { return call_method<SCAPIX_META_STRING("setHours"), void>(hours); }
inline jint Date::getMinutes() { return call_method<SCAPIX_META_STRING("getMinutes"), jint>(); }
inline void Date::setMinutes(jint minutes) { return call_method<SCAPIX_META_STRING("setMinutes"), void>(minutes); }
inline jint Date::getSeconds() { return call_method<SCAPIX_META_STRING("getSeconds"), jint>(); }
inline void Date::setSeconds(jint seconds) { return call_method<SCAPIX_META_STRING("setSeconds"), void>(seconds); }
inline jlong Date::getTime() { return call_method<SCAPIX_META_STRING("getTime"), jlong>(); }
inline void Date::setTime(jlong time) { return call_method<SCAPIX_META_STRING("setTime"), void>(time); }
inline jboolean Date::before(ref<java::util::Date> when) { return call_method<SCAPIX_META_STRING("before"), jboolean>(when); }
inline jboolean Date::after(ref<java::util::Date> when) { return call_method<SCAPIX_META_STRING("after"), jboolean>(when); }
inline jboolean Date::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint Date::compareTo(ref<java::util::Date> anotherDate) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(anotherDate); }
inline jint Date::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> Date::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Date::toLocaleString() { return call_method<SCAPIX_META_STRING("toLocaleString"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Date::toGMTString() { return call_method<SCAPIX_META_STRING("toGMTString"), ref<java::lang::String>>(); }
inline jint Date::getTimezoneOffset() { return call_method<SCAPIX_META_STRING("getTimezoneOffset"), jint>(); }
inline ref<java::util::Date> Date::from(ref<java::time::Instant> instant) { return call_static_method<SCAPIX_META_STRING("from"), ref<java::util::Date>>(instant); }
inline ref<java::time::Instant> Date::toInstant() { return call_method<SCAPIX_META_STRING("toInstant"), ref<java::time::Instant>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_DATE_H
