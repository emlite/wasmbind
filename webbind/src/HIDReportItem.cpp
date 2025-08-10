#include <webbind/HIDReportItem.hpp>

namespace webbind {

HIDReportItem::HIDReportItem(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HIDReportItem HIDReportItem::take_ownership(Handle h) noexcept {
    return HIDReportItem(h);
}

HIDReportItem::HIDReportItem(const emlite::Val &val) noexcept: emlite::Val(val) {}

HIDReportItem::HIDReportItem() noexcept: emlite::Val(emlite::Val::object()) {}

HIDReportItem HIDReportItem::clone() const noexcept { return *this; }

bool HIDReportItem::isAbsolute() const {
    return emlite::Val::get("isAbsolute").as<bool>();
}

void HIDReportItem::isAbsolute(bool value) {
    emlite::Val::set("isAbsolute", value);
}

bool HIDReportItem::isArray() const {
    return emlite::Val::get("isArray").as<bool>();
}

void HIDReportItem::isArray(bool value) {
    emlite::Val::set("isArray", value);
}

bool HIDReportItem::isBufferedBytes() const {
    return emlite::Val::get("isBufferedBytes").as<bool>();
}

void HIDReportItem::isBufferedBytes(bool value) {
    emlite::Val::set("isBufferedBytes", value);
}

bool HIDReportItem::isConstant() const {
    return emlite::Val::get("isConstant").as<bool>();
}

void HIDReportItem::isConstant(bool value) {
    emlite::Val::set("isConstant", value);
}

bool HIDReportItem::isLinear() const {
    return emlite::Val::get("isLinear").as<bool>();
}

void HIDReportItem::isLinear(bool value) {
    emlite::Val::set("isLinear", value);
}

bool HIDReportItem::isRange() const {
    return emlite::Val::get("isRange").as<bool>();
}

void HIDReportItem::isRange(bool value) {
    emlite::Val::set("isRange", value);
}

bool HIDReportItem::isVolatile() const {
    return emlite::Val::get("isVolatile").as<bool>();
}

void HIDReportItem::isVolatile(bool value) {
    emlite::Val::set("isVolatile", value);
}

bool HIDReportItem::hasNull() const {
    return emlite::Val::get("hasNull").as<bool>();
}

void HIDReportItem::hasNull(bool value) {
    emlite::Val::set("hasNull", value);
}

bool HIDReportItem::hasPreferredState() const {
    return emlite::Val::get("hasPreferredState").as<bool>();
}

void HIDReportItem::hasPreferredState(bool value) {
    emlite::Val::set("hasPreferredState", value);
}

bool HIDReportItem::wrap() const {
    return emlite::Val::get("wrap").as<bool>();
}

void HIDReportItem::wrap(bool value) {
    emlite::Val::set("wrap", value);
}

jsbind::TypedArray<unsigned long> HIDReportItem::usages() const {
    return emlite::Val::get("usages").as<jsbind::TypedArray<unsigned long>>();
}

void HIDReportItem::usages(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("usages", value);
}

unsigned long HIDReportItem::usageMinimum() const {
    return emlite::Val::get("usageMinimum").as<unsigned long>();
}

void HIDReportItem::usageMinimum(unsigned long value) {
    emlite::Val::set("usageMinimum", value);
}

unsigned long HIDReportItem::usageMaximum() const {
    return emlite::Val::get("usageMaximum").as<unsigned long>();
}

void HIDReportItem::usageMaximum(unsigned long value) {
    emlite::Val::set("usageMaximum", value);
}

unsigned short HIDReportItem::reportSize() const {
    return emlite::Val::get("reportSize").as<unsigned short>();
}

void HIDReportItem::reportSize(unsigned short value) {
    emlite::Val::set("reportSize", value);
}

unsigned short HIDReportItem::reportCount() const {
    return emlite::Val::get("reportCount").as<unsigned short>();
}

void HIDReportItem::reportCount(unsigned short value) {
    emlite::Val::set("reportCount", value);
}

char HIDReportItem::unitExponent() const {
    return emlite::Val::get("unitExponent").as<char>();
}

void HIDReportItem::unitExponent(char value) {
    emlite::Val::set("unitExponent", value);
}

HIDUnitSystem HIDReportItem::unitSystem() const {
    return emlite::Val::get("unitSystem").as<HIDUnitSystem>();
}

void HIDReportItem::unitSystem(const HIDUnitSystem& value) {
    emlite::Val::set("unitSystem", value);
}

char HIDReportItem::unitFactorLengthExponent() const {
    return emlite::Val::get("unitFactorLengthExponent").as<char>();
}

void HIDReportItem::unitFactorLengthExponent(char value) {
    emlite::Val::set("unitFactorLengthExponent", value);
}

char HIDReportItem::unitFactorMassExponent() const {
    return emlite::Val::get("unitFactorMassExponent").as<char>();
}

void HIDReportItem::unitFactorMassExponent(char value) {
    emlite::Val::set("unitFactorMassExponent", value);
}

char HIDReportItem::unitFactorTimeExponent() const {
    return emlite::Val::get("unitFactorTimeExponent").as<char>();
}

void HIDReportItem::unitFactorTimeExponent(char value) {
    emlite::Val::set("unitFactorTimeExponent", value);
}

char HIDReportItem::unitFactorTemperatureExponent() const {
    return emlite::Val::get("unitFactorTemperatureExponent").as<char>();
}

void HIDReportItem::unitFactorTemperatureExponent(char value) {
    emlite::Val::set("unitFactorTemperatureExponent", value);
}

char HIDReportItem::unitFactorCurrentExponent() const {
    return emlite::Val::get("unitFactorCurrentExponent").as<char>();
}

void HIDReportItem::unitFactorCurrentExponent(char value) {
    emlite::Val::set("unitFactorCurrentExponent", value);
}

char HIDReportItem::unitFactorLuminousIntensityExponent() const {
    return emlite::Val::get("unitFactorLuminousIntensityExponent").as<char>();
}

void HIDReportItem::unitFactorLuminousIntensityExponent(char value) {
    emlite::Val::set("unitFactorLuminousIntensityExponent", value);
}

long HIDReportItem::logicalMinimum() const {
    return emlite::Val::get("logicalMinimum").as<long>();
}

void HIDReportItem::logicalMinimum(long value) {
    emlite::Val::set("logicalMinimum", value);
}

long HIDReportItem::logicalMaximum() const {
    return emlite::Val::get("logicalMaximum").as<long>();
}

void HIDReportItem::logicalMaximum(long value) {
    emlite::Val::set("logicalMaximum", value);
}

long HIDReportItem::physicalMinimum() const {
    return emlite::Val::get("physicalMinimum").as<long>();
}

void HIDReportItem::physicalMinimum(long value) {
    emlite::Val::set("physicalMinimum", value);
}

long HIDReportItem::physicalMaximum() const {
    return emlite::Val::get("physicalMaximum").as<long>();
}

void HIDReportItem::physicalMaximum(long value) {
    emlite::Val::set("physicalMaximum", value);
}

jsbind::TypedArray<jsbind::String> HIDReportItem::strings() const {
    return emlite::Val::get("strings").as<jsbind::TypedArray<jsbind::String>>();
}

void HIDReportItem::strings(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("strings", value);
}


} // namespace webbind