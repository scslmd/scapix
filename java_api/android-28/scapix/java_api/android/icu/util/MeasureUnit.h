// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_ANDROID_ICU_UTIL_MEASUREUNIT_H
#define SCAPIX_ANDROID_ICU_UTIL_MEASUREUNIT_H

namespace scapix::java_api {

namespace android::icu::util { class TimeUnit; }
namespace java::lang { class String; }
namespace java::util { class Set; }

namespace android::icu::util {

class MeasureUnit : public object_base<SCAPIX_META_STRING("android/icu/util/MeasureUnit"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static ref<android::icu::util::MeasureUnit> ACRE_();
	static ref<android::icu::util::MeasureUnit> ACRE_FOOT_();
	static ref<android::icu::util::MeasureUnit> AMPERE_();
	static ref<android::icu::util::MeasureUnit> ARC_MINUTE_();
	static ref<android::icu::util::MeasureUnit> ARC_SECOND_();
	static ref<android::icu::util::MeasureUnit> ASTRONOMICAL_UNIT_();
	static ref<android::icu::util::MeasureUnit> BIT_();
	static ref<android::icu::util::MeasureUnit> BUSHEL_();
	static ref<android::icu::util::MeasureUnit> BYTE_();
	static ref<android::icu::util::MeasureUnit> CALORIE_();
	static ref<android::icu::util::MeasureUnit> CARAT_();
	static ref<android::icu::util::MeasureUnit> CELSIUS_();
	static ref<android::icu::util::MeasureUnit> CENTILITER_();
	static ref<android::icu::util::MeasureUnit> CENTIMETER_();
	static ref<android::icu::util::MeasureUnit> CENTURY_();
	static ref<android::icu::util::MeasureUnit> CUBIC_CENTIMETER_();
	static ref<android::icu::util::MeasureUnit> CUBIC_FOOT_();
	static ref<android::icu::util::MeasureUnit> CUBIC_INCH_();
	static ref<android::icu::util::MeasureUnit> CUBIC_KILOMETER_();
	static ref<android::icu::util::MeasureUnit> CUBIC_METER_();
	static ref<android::icu::util::MeasureUnit> CUBIC_MILE_();
	static ref<android::icu::util::MeasureUnit> CUBIC_YARD_();
	static ref<android::icu::util::MeasureUnit> CUP_();
	static ref<android::icu::util::MeasureUnit> CUP_METRIC_();
	static ref<android::icu::util::TimeUnit> DAY_();
	static ref<android::icu::util::MeasureUnit> DECILITER_();
	static ref<android::icu::util::MeasureUnit> DECIMETER_();
	static ref<android::icu::util::MeasureUnit> DEGREE_();
	static ref<android::icu::util::MeasureUnit> FAHRENHEIT_();
	static ref<android::icu::util::MeasureUnit> FATHOM_();
	static ref<android::icu::util::MeasureUnit> FLUID_OUNCE_();
	static ref<android::icu::util::MeasureUnit> FOODCALORIE_();
	static ref<android::icu::util::MeasureUnit> FOOT_();
	static ref<android::icu::util::MeasureUnit> FURLONG_();
	static ref<android::icu::util::MeasureUnit> GALLON_();
	static ref<android::icu::util::MeasureUnit> GALLON_IMPERIAL_();
	static ref<android::icu::util::MeasureUnit> GENERIC_TEMPERATURE_();
	static ref<android::icu::util::MeasureUnit> GIGABIT_();
	static ref<android::icu::util::MeasureUnit> GIGABYTE_();
	static ref<android::icu::util::MeasureUnit> GIGAHERTZ_();
	static ref<android::icu::util::MeasureUnit> GIGAWATT_();
	static ref<android::icu::util::MeasureUnit> GRAM_();
	static ref<android::icu::util::MeasureUnit> G_FORCE_();
	static ref<android::icu::util::MeasureUnit> HECTARE_();
	static ref<android::icu::util::MeasureUnit> HECTOLITER_();
	static ref<android::icu::util::MeasureUnit> HECTOPASCAL_();
	static ref<android::icu::util::MeasureUnit> HERTZ_();
	static ref<android::icu::util::MeasureUnit> HORSEPOWER_();
	static ref<android::icu::util::TimeUnit> HOUR_();
	static ref<android::icu::util::MeasureUnit> INCH_();
	static ref<android::icu::util::MeasureUnit> INCH_HG_();
	static ref<android::icu::util::MeasureUnit> JOULE_();
	static ref<android::icu::util::MeasureUnit> KARAT_();
	static ref<android::icu::util::MeasureUnit> KELVIN_();
	static ref<android::icu::util::MeasureUnit> KILOBIT_();
	static ref<android::icu::util::MeasureUnit> KILOBYTE_();
	static ref<android::icu::util::MeasureUnit> KILOCALORIE_();
	static ref<android::icu::util::MeasureUnit> KILOGRAM_();
	static ref<android::icu::util::MeasureUnit> KILOHERTZ_();
	static ref<android::icu::util::MeasureUnit> KILOJOULE_();
	static ref<android::icu::util::MeasureUnit> KILOMETER_();
	static ref<android::icu::util::MeasureUnit> KILOMETER_PER_HOUR_();
	static ref<android::icu::util::MeasureUnit> KILOWATT_();
	static ref<android::icu::util::MeasureUnit> KILOWATT_HOUR_();
	static ref<android::icu::util::MeasureUnit> KNOT_();
	static ref<android::icu::util::MeasureUnit> LIGHT_YEAR_();
	static ref<android::icu::util::MeasureUnit> LITER_();
	static ref<android::icu::util::MeasureUnit> LITER_PER_100KILOMETERS_();
	static ref<android::icu::util::MeasureUnit> LITER_PER_KILOMETER_();
	static ref<android::icu::util::MeasureUnit> LUX_();
	static ref<android::icu::util::MeasureUnit> MEGABIT_();
	static ref<android::icu::util::MeasureUnit> MEGABYTE_();
	static ref<android::icu::util::MeasureUnit> MEGAHERTZ_();
	static ref<android::icu::util::MeasureUnit> MEGALITER_();
	static ref<android::icu::util::MeasureUnit> MEGAWATT_();
	static ref<android::icu::util::MeasureUnit> METER_();
	static ref<android::icu::util::MeasureUnit> METER_PER_SECOND_();
	static ref<android::icu::util::MeasureUnit> METER_PER_SECOND_SQUARED_();
	static ref<android::icu::util::MeasureUnit> METRIC_TON_();
	static ref<android::icu::util::MeasureUnit> MICROGRAM_();
	static ref<android::icu::util::MeasureUnit> MICROMETER_();
	static ref<android::icu::util::MeasureUnit> MICROSECOND_();
	static ref<android::icu::util::MeasureUnit> MILE_();
	static ref<android::icu::util::MeasureUnit> MILE_PER_GALLON_();
	static ref<android::icu::util::MeasureUnit> MILE_PER_GALLON_IMPERIAL_();
	static ref<android::icu::util::MeasureUnit> MILE_PER_HOUR_();
	static ref<android::icu::util::MeasureUnit> MILE_SCANDINAVIAN_();
	static ref<android::icu::util::MeasureUnit> MILLIAMPERE_();
	static ref<android::icu::util::MeasureUnit> MILLIBAR_();
	static ref<android::icu::util::MeasureUnit> MILLIGRAM_();
	static ref<android::icu::util::MeasureUnit> MILLIGRAM_PER_DECILITER_();
	static ref<android::icu::util::MeasureUnit> MILLILITER_();
	static ref<android::icu::util::MeasureUnit> MILLIMETER_();
	static ref<android::icu::util::MeasureUnit> MILLIMETER_OF_MERCURY_();
	static ref<android::icu::util::MeasureUnit> MILLIMOLE_PER_LITER_();
	static ref<android::icu::util::MeasureUnit> MILLISECOND_();
	static ref<android::icu::util::MeasureUnit> MILLIWATT_();
	static ref<android::icu::util::TimeUnit> MINUTE_();
	static ref<android::icu::util::TimeUnit> MONTH_();
	static ref<android::icu::util::MeasureUnit> NANOMETER_();
	static ref<android::icu::util::MeasureUnit> NANOSECOND_();
	static ref<android::icu::util::MeasureUnit> NAUTICAL_MILE_();
	static ref<android::icu::util::MeasureUnit> OHM_();
	static ref<android::icu::util::MeasureUnit> OUNCE_();
	static ref<android::icu::util::MeasureUnit> OUNCE_TROY_();
	static ref<android::icu::util::MeasureUnit> PARSEC_();
	static ref<android::icu::util::MeasureUnit> PART_PER_MILLION_();
	static ref<android::icu::util::MeasureUnit> PICOMETER_();
	static ref<android::icu::util::MeasureUnit> PINT_();
	static ref<android::icu::util::MeasureUnit> PINT_METRIC_();
	static ref<android::icu::util::MeasureUnit> POUND_();
	static ref<android::icu::util::MeasureUnit> POUND_PER_SQUARE_INCH_();
	static ref<android::icu::util::MeasureUnit> QUART_();
	static ref<android::icu::util::MeasureUnit> RADIAN_();
	static ref<android::icu::util::MeasureUnit> REVOLUTION_ANGLE_();
	static ref<android::icu::util::TimeUnit> SECOND_();
	static ref<android::icu::util::MeasureUnit> SQUARE_CENTIMETER_();
	static ref<android::icu::util::MeasureUnit> SQUARE_FOOT_();
	static ref<android::icu::util::MeasureUnit> SQUARE_INCH_();
	static ref<android::icu::util::MeasureUnit> SQUARE_KILOMETER_();
	static ref<android::icu::util::MeasureUnit> SQUARE_METER_();
	static ref<android::icu::util::MeasureUnit> SQUARE_MILE_();
	static ref<android::icu::util::MeasureUnit> SQUARE_YARD_();
	static ref<android::icu::util::MeasureUnit> STONE_();
	static ref<android::icu::util::MeasureUnit> TABLESPOON_();
	static ref<android::icu::util::MeasureUnit> TEASPOON_();
	static ref<android::icu::util::MeasureUnit> TERABIT_();
	static ref<android::icu::util::MeasureUnit> TERABYTE_();
	static ref<android::icu::util::MeasureUnit> TON_();
	static ref<android::icu::util::MeasureUnit> VOLT_();
	static ref<android::icu::util::MeasureUnit> WATT_();
	static ref<android::icu::util::TimeUnit> WEEK_();
	static ref<android::icu::util::MeasureUnit> YARD_();
	static ref<android::icu::util::TimeUnit> YEAR_();

	ref<java::lang::String> getType();
	ref<java::lang::String> getSubtype();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> rhs);
	ref<java::lang::String> toString();
	static ref<java::util::Set> getAvailableTypes();
	static ref<java::util::Set> getAvailable(ref<java::lang::String> type);
	static ref<java::util::Set> getAvailable();

protected:

	MeasureUnit(handle_type h) : base_(h) {}

};

} // namespace android::icu::util
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/util/TimeUnit.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace android::icu::util {

inline ref<android::icu::util::MeasureUnit> MeasureUnit::ACRE_() { return get_static_field<SCAPIX_META_STRING("ACRE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::ACRE_FOOT_() { return get_static_field<SCAPIX_META_STRING("ACRE_FOOT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::AMPERE_() { return get_static_field<SCAPIX_META_STRING("AMPERE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::ARC_MINUTE_() { return get_static_field<SCAPIX_META_STRING("ARC_MINUTE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::ARC_SECOND_() { return get_static_field<SCAPIX_META_STRING("ARC_SECOND"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::ASTRONOMICAL_UNIT_() { return get_static_field<SCAPIX_META_STRING("ASTRONOMICAL_UNIT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::BIT_() { return get_static_field<SCAPIX_META_STRING("BIT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::BUSHEL_() { return get_static_field<SCAPIX_META_STRING("BUSHEL"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::BYTE_() { return get_static_field<SCAPIX_META_STRING("BYTE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CALORIE_() { return get_static_field<SCAPIX_META_STRING("CALORIE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CARAT_() { return get_static_field<SCAPIX_META_STRING("CARAT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CELSIUS_() { return get_static_field<SCAPIX_META_STRING("CELSIUS"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CENTILITER_() { return get_static_field<SCAPIX_META_STRING("CENTILITER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CENTIMETER_() { return get_static_field<SCAPIX_META_STRING("CENTIMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CENTURY_() { return get_static_field<SCAPIX_META_STRING("CENTURY"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CUBIC_CENTIMETER_() { return get_static_field<SCAPIX_META_STRING("CUBIC_CENTIMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CUBIC_FOOT_() { return get_static_field<SCAPIX_META_STRING("CUBIC_FOOT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CUBIC_INCH_() { return get_static_field<SCAPIX_META_STRING("CUBIC_INCH"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CUBIC_KILOMETER_() { return get_static_field<SCAPIX_META_STRING("CUBIC_KILOMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CUBIC_METER_() { return get_static_field<SCAPIX_META_STRING("CUBIC_METER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CUBIC_MILE_() { return get_static_field<SCAPIX_META_STRING("CUBIC_MILE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CUBIC_YARD_() { return get_static_field<SCAPIX_META_STRING("CUBIC_YARD"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CUP_() { return get_static_field<SCAPIX_META_STRING("CUP"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::CUP_METRIC_() { return get_static_field<SCAPIX_META_STRING("CUP_METRIC"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::TimeUnit> MeasureUnit::DAY_() { return get_static_field<SCAPIX_META_STRING("DAY"), ref<android::icu::util::TimeUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::DECILITER_() { return get_static_field<SCAPIX_META_STRING("DECILITER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::DECIMETER_() { return get_static_field<SCAPIX_META_STRING("DECIMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::DEGREE_() { return get_static_field<SCAPIX_META_STRING("DEGREE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::FAHRENHEIT_() { return get_static_field<SCAPIX_META_STRING("FAHRENHEIT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::FATHOM_() { return get_static_field<SCAPIX_META_STRING("FATHOM"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::FLUID_OUNCE_() { return get_static_field<SCAPIX_META_STRING("FLUID_OUNCE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::FOODCALORIE_() { return get_static_field<SCAPIX_META_STRING("FOODCALORIE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::FOOT_() { return get_static_field<SCAPIX_META_STRING("FOOT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::FURLONG_() { return get_static_field<SCAPIX_META_STRING("FURLONG"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::GALLON_() { return get_static_field<SCAPIX_META_STRING("GALLON"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::GALLON_IMPERIAL_() { return get_static_field<SCAPIX_META_STRING("GALLON_IMPERIAL"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::GENERIC_TEMPERATURE_() { return get_static_field<SCAPIX_META_STRING("GENERIC_TEMPERATURE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::GIGABIT_() { return get_static_field<SCAPIX_META_STRING("GIGABIT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::GIGABYTE_() { return get_static_field<SCAPIX_META_STRING("GIGABYTE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::GIGAHERTZ_() { return get_static_field<SCAPIX_META_STRING("GIGAHERTZ"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::GIGAWATT_() { return get_static_field<SCAPIX_META_STRING("GIGAWATT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::GRAM_() { return get_static_field<SCAPIX_META_STRING("GRAM"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::G_FORCE_() { return get_static_field<SCAPIX_META_STRING("G_FORCE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::HECTARE_() { return get_static_field<SCAPIX_META_STRING("HECTARE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::HECTOLITER_() { return get_static_field<SCAPIX_META_STRING("HECTOLITER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::HECTOPASCAL_() { return get_static_field<SCAPIX_META_STRING("HECTOPASCAL"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::HERTZ_() { return get_static_field<SCAPIX_META_STRING("HERTZ"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::HORSEPOWER_() { return get_static_field<SCAPIX_META_STRING("HORSEPOWER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::TimeUnit> MeasureUnit::HOUR_() { return get_static_field<SCAPIX_META_STRING("HOUR"), ref<android::icu::util::TimeUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::INCH_() { return get_static_field<SCAPIX_META_STRING("INCH"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::INCH_HG_() { return get_static_field<SCAPIX_META_STRING("INCH_HG"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::JOULE_() { return get_static_field<SCAPIX_META_STRING("JOULE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KARAT_() { return get_static_field<SCAPIX_META_STRING("KARAT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KELVIN_() { return get_static_field<SCAPIX_META_STRING("KELVIN"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KILOBIT_() { return get_static_field<SCAPIX_META_STRING("KILOBIT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KILOBYTE_() { return get_static_field<SCAPIX_META_STRING("KILOBYTE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KILOCALORIE_() { return get_static_field<SCAPIX_META_STRING("KILOCALORIE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KILOGRAM_() { return get_static_field<SCAPIX_META_STRING("KILOGRAM"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KILOHERTZ_() { return get_static_field<SCAPIX_META_STRING("KILOHERTZ"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KILOJOULE_() { return get_static_field<SCAPIX_META_STRING("KILOJOULE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KILOMETER_() { return get_static_field<SCAPIX_META_STRING("KILOMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KILOMETER_PER_HOUR_() { return get_static_field<SCAPIX_META_STRING("KILOMETER_PER_HOUR"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KILOWATT_() { return get_static_field<SCAPIX_META_STRING("KILOWATT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KILOWATT_HOUR_() { return get_static_field<SCAPIX_META_STRING("KILOWATT_HOUR"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::KNOT_() { return get_static_field<SCAPIX_META_STRING("KNOT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::LIGHT_YEAR_() { return get_static_field<SCAPIX_META_STRING("LIGHT_YEAR"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::LITER_() { return get_static_field<SCAPIX_META_STRING("LITER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::LITER_PER_100KILOMETERS_() { return get_static_field<SCAPIX_META_STRING("LITER_PER_100KILOMETERS"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::LITER_PER_KILOMETER_() { return get_static_field<SCAPIX_META_STRING("LITER_PER_KILOMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::LUX_() { return get_static_field<SCAPIX_META_STRING("LUX"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MEGABIT_() { return get_static_field<SCAPIX_META_STRING("MEGABIT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MEGABYTE_() { return get_static_field<SCAPIX_META_STRING("MEGABYTE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MEGAHERTZ_() { return get_static_field<SCAPIX_META_STRING("MEGAHERTZ"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MEGALITER_() { return get_static_field<SCAPIX_META_STRING("MEGALITER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MEGAWATT_() { return get_static_field<SCAPIX_META_STRING("MEGAWATT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::METER_() { return get_static_field<SCAPIX_META_STRING("METER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::METER_PER_SECOND_() { return get_static_field<SCAPIX_META_STRING("METER_PER_SECOND"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::METER_PER_SECOND_SQUARED_() { return get_static_field<SCAPIX_META_STRING("METER_PER_SECOND_SQUARED"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::METRIC_TON_() { return get_static_field<SCAPIX_META_STRING("METRIC_TON"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MICROGRAM_() { return get_static_field<SCAPIX_META_STRING("MICROGRAM"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MICROMETER_() { return get_static_field<SCAPIX_META_STRING("MICROMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MICROSECOND_() { return get_static_field<SCAPIX_META_STRING("MICROSECOND"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILE_() { return get_static_field<SCAPIX_META_STRING("MILE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILE_PER_GALLON_() { return get_static_field<SCAPIX_META_STRING("MILE_PER_GALLON"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILE_PER_GALLON_IMPERIAL_() { return get_static_field<SCAPIX_META_STRING("MILE_PER_GALLON_IMPERIAL"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILE_PER_HOUR_() { return get_static_field<SCAPIX_META_STRING("MILE_PER_HOUR"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILE_SCANDINAVIAN_() { return get_static_field<SCAPIX_META_STRING("MILE_SCANDINAVIAN"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILLIAMPERE_() { return get_static_field<SCAPIX_META_STRING("MILLIAMPERE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILLIBAR_() { return get_static_field<SCAPIX_META_STRING("MILLIBAR"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILLIGRAM_() { return get_static_field<SCAPIX_META_STRING("MILLIGRAM"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILLIGRAM_PER_DECILITER_() { return get_static_field<SCAPIX_META_STRING("MILLIGRAM_PER_DECILITER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILLILITER_() { return get_static_field<SCAPIX_META_STRING("MILLILITER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILLIMETER_() { return get_static_field<SCAPIX_META_STRING("MILLIMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILLIMETER_OF_MERCURY_() { return get_static_field<SCAPIX_META_STRING("MILLIMETER_OF_MERCURY"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILLIMOLE_PER_LITER_() { return get_static_field<SCAPIX_META_STRING("MILLIMOLE_PER_LITER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILLISECOND_() { return get_static_field<SCAPIX_META_STRING("MILLISECOND"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::MILLIWATT_() { return get_static_field<SCAPIX_META_STRING("MILLIWATT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::TimeUnit> MeasureUnit::MINUTE_() { return get_static_field<SCAPIX_META_STRING("MINUTE"), ref<android::icu::util::TimeUnit>>(); }
inline ref<android::icu::util::TimeUnit> MeasureUnit::MONTH_() { return get_static_field<SCAPIX_META_STRING("MONTH"), ref<android::icu::util::TimeUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::NANOMETER_() { return get_static_field<SCAPIX_META_STRING("NANOMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::NANOSECOND_() { return get_static_field<SCAPIX_META_STRING("NANOSECOND"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::NAUTICAL_MILE_() { return get_static_field<SCAPIX_META_STRING("NAUTICAL_MILE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::OHM_() { return get_static_field<SCAPIX_META_STRING("OHM"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::OUNCE_() { return get_static_field<SCAPIX_META_STRING("OUNCE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::OUNCE_TROY_() { return get_static_field<SCAPIX_META_STRING("OUNCE_TROY"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::PARSEC_() { return get_static_field<SCAPIX_META_STRING("PARSEC"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::PART_PER_MILLION_() { return get_static_field<SCAPIX_META_STRING("PART_PER_MILLION"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::PICOMETER_() { return get_static_field<SCAPIX_META_STRING("PICOMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::PINT_() { return get_static_field<SCAPIX_META_STRING("PINT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::PINT_METRIC_() { return get_static_field<SCAPIX_META_STRING("PINT_METRIC"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::POUND_() { return get_static_field<SCAPIX_META_STRING("POUND"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::POUND_PER_SQUARE_INCH_() { return get_static_field<SCAPIX_META_STRING("POUND_PER_SQUARE_INCH"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::QUART_() { return get_static_field<SCAPIX_META_STRING("QUART"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::RADIAN_() { return get_static_field<SCAPIX_META_STRING("RADIAN"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::REVOLUTION_ANGLE_() { return get_static_field<SCAPIX_META_STRING("REVOLUTION_ANGLE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::TimeUnit> MeasureUnit::SECOND_() { return get_static_field<SCAPIX_META_STRING("SECOND"), ref<android::icu::util::TimeUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::SQUARE_CENTIMETER_() { return get_static_field<SCAPIX_META_STRING("SQUARE_CENTIMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::SQUARE_FOOT_() { return get_static_field<SCAPIX_META_STRING("SQUARE_FOOT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::SQUARE_INCH_() { return get_static_field<SCAPIX_META_STRING("SQUARE_INCH"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::SQUARE_KILOMETER_() { return get_static_field<SCAPIX_META_STRING("SQUARE_KILOMETER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::SQUARE_METER_() { return get_static_field<SCAPIX_META_STRING("SQUARE_METER"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::SQUARE_MILE_() { return get_static_field<SCAPIX_META_STRING("SQUARE_MILE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::SQUARE_YARD_() { return get_static_field<SCAPIX_META_STRING("SQUARE_YARD"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::STONE_() { return get_static_field<SCAPIX_META_STRING("STONE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::TABLESPOON_() { return get_static_field<SCAPIX_META_STRING("TABLESPOON"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::TEASPOON_() { return get_static_field<SCAPIX_META_STRING("TEASPOON"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::TERABIT_() { return get_static_field<SCAPIX_META_STRING("TERABIT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::TERABYTE_() { return get_static_field<SCAPIX_META_STRING("TERABYTE"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::TON_() { return get_static_field<SCAPIX_META_STRING("TON"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::VOLT_() { return get_static_field<SCAPIX_META_STRING("VOLT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::WATT_() { return get_static_field<SCAPIX_META_STRING("WATT"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::TimeUnit> MeasureUnit::WEEK_() { return get_static_field<SCAPIX_META_STRING("WEEK"), ref<android::icu::util::TimeUnit>>(); }
inline ref<android::icu::util::MeasureUnit> MeasureUnit::YARD_() { return get_static_field<SCAPIX_META_STRING("YARD"), ref<android::icu::util::MeasureUnit>>(); }
inline ref<android::icu::util::TimeUnit> MeasureUnit::YEAR_() { return get_static_field<SCAPIX_META_STRING("YEAR"), ref<android::icu::util::TimeUnit>>(); }
inline ref<java::lang::String> MeasureUnit::getType() { return call_method<SCAPIX_META_STRING("getType"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MeasureUnit::getSubtype() { return call_method<SCAPIX_META_STRING("getSubtype"), ref<java::lang::String>>(); }
inline jint MeasureUnit::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean MeasureUnit::equals(ref<java::lang::Object> rhs) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(rhs); }
inline ref<java::lang::String> MeasureUnit::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::util::Set> MeasureUnit::getAvailableTypes() { return call_static_method<SCAPIX_META_STRING("getAvailableTypes"), ref<java::util::Set>>(); }
inline ref<java::util::Set> MeasureUnit::getAvailable(ref<java::lang::String> type) { return call_static_method<SCAPIX_META_STRING("getAvailable"), ref<java::util::Set>>(type); }
inline ref<java::util::Set> MeasureUnit::getAvailable() { return call_static_method<SCAPIX_META_STRING("getAvailable"), ref<java::util::Set>>(); }

} // namespace android::icu::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_UTIL_MEASUREUNIT_H
