// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_IO_DATAOUTPUT_H
#define SCAPIX_JAVA_IO_DATAOUTPUT_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::io {

class DataOutput : public object_base<SCAPIX_META_STRING("java/io/DataOutput"),
	java::lang::Object>
{
public:

	void write(jint p1);
	void write(ref<link::java::array<jbyte>> p1);
	void write(ref<link::java::array<jbyte>> p1, jint p2, jint p3);
	void writeBoolean(jboolean p1);
	void writeByte(jint p1);
	void writeShort(jint p1);
	void writeChar(jint p1);
	void writeInt(jint p1);
	void writeLong(jlong p1);
	void writeFloat(jfloat p1);
	void writeDouble(jdouble p1);
	void writeBytes(ref<java::lang::String> p1);
	void writeChars(ref<java::lang::String> p1);
	void writeUTF(ref<java::lang::String> p1);

protected:

	DataOutput(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::io {

inline void DataOutput::write(jint p1) { return call_method<SCAPIX_META_STRING("write"), void>(p1); }
inline void DataOutput::write(ref<link::java::array<jbyte>> p1) { return call_method<SCAPIX_META_STRING("write"), void>(p1); }
inline void DataOutput::write(ref<link::java::array<jbyte>> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("write"), void>(p1, p2, p3); }
inline void DataOutput::writeBoolean(jboolean p1) { return call_method<SCAPIX_META_STRING("writeBoolean"), void>(p1); }
inline void DataOutput::writeByte(jint p1) { return call_method<SCAPIX_META_STRING("writeByte"), void>(p1); }
inline void DataOutput::writeShort(jint p1) { return call_method<SCAPIX_META_STRING("writeShort"), void>(p1); }
inline void DataOutput::writeChar(jint p1) { return call_method<SCAPIX_META_STRING("writeChar"), void>(p1); }
inline void DataOutput::writeInt(jint p1) { return call_method<SCAPIX_META_STRING("writeInt"), void>(p1); }
inline void DataOutput::writeLong(jlong p1) { return call_method<SCAPIX_META_STRING("writeLong"), void>(p1); }
inline void DataOutput::writeFloat(jfloat p1) { return call_method<SCAPIX_META_STRING("writeFloat"), void>(p1); }
inline void DataOutput::writeDouble(jdouble p1) { return call_method<SCAPIX_META_STRING("writeDouble"), void>(p1); }
inline void DataOutput::writeBytes(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("writeBytes"), void>(p1); }
inline void DataOutput::writeChars(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("writeChars"), void>(p1); }
inline void DataOutput::writeUTF(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("writeUTF"), void>(p1); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_DATAOUTPUT_H
