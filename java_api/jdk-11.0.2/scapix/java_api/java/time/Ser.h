// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Externalizable.h>

#ifndef SCAPIX_JAVA_TIME_SER_H
#define SCAPIX_JAVA_TIME_SER_H

namespace scapix::java_api {

namespace java::io { class ObjectInput; }
namespace java::io { class ObjectOutput; }

namespace java::time {

// private
class Ser : public object_base<SCAPIX_META_STRING("java/time/Ser"),
	java::lang::Object,
	java::io::Externalizable>
{
public:

	static ref<Ser> new_object();
	void writeExternal(ref<java::io::ObjectOutput> out);
	void readExternal(ref<java::io::ObjectInput> in);

protected:

	Ser(handle_type h) : base_(h) {}

};

} // namespace java::time
} // namespace scapix::java_api

#include <scapix/java_api/java/io/ObjectInput.h>
#include <scapix/java_api/java/io/ObjectOutput.h>

namespace scapix::java_api {
namespace java::time {

inline ref<Ser> Ser::new_object() { return base_::new_object(); }
inline void Ser::writeExternal(ref<java::io::ObjectOutput> out) { return call_method<SCAPIX_META_STRING("writeExternal"), void>(out); }
inline void Ser::readExternal(ref<java::io::ObjectInput> in) { return call_method<SCAPIX_META_STRING("readExternal"), void>(in); }

} // namespace java::time
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_SER_H
