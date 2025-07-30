#include <webbind/CSSNumericValue.hpp>
#include <webbind/CSSUnitValue.hpp>
#include <webbind/CSSMathSum.hpp>


CSSNumericType::CSSNumericType(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSNumericType CSSNumericType::take_ownership(Handle h) noexcept {
        return CSSNumericType(h);
    }
CSSNumericType::CSSNumericType(const emlite::Val &val) noexcept: emlite::Val(val) {}
CSSNumericType::CSSNumericType() noexcept: emlite::Val(emlite::Val::object()) {}
CSSNumericType CSSNumericType::clone() const noexcept { return *this; }

long CSSNumericType::length() const {
    return emlite::Val::get("length").as<long>();
}

void CSSNumericType::length(long value) {
    emlite::Val::set("length", value);
}

long CSSNumericType::angle() const {
    return emlite::Val::get("angle").as<long>();
}

void CSSNumericType::angle(long value) {
    emlite::Val::set("angle", value);
}

long CSSNumericType::time() const {
    return emlite::Val::get("time").as<long>();
}

void CSSNumericType::time(long value) {
    emlite::Val::set("time", value);
}

long CSSNumericType::frequency() const {
    return emlite::Val::get("frequency").as<long>();
}

void CSSNumericType::frequency(long value) {
    emlite::Val::set("frequency", value);
}

long CSSNumericType::resolution() const {
    return emlite::Val::get("resolution").as<long>();
}

void CSSNumericType::resolution(long value) {
    emlite::Val::set("resolution", value);
}

long CSSNumericType::flex() const {
    return emlite::Val::get("flex").as<long>();
}

void CSSNumericType::flex(long value) {
    emlite::Val::set("flex", value);
}

long CSSNumericType::percent() const {
    return emlite::Val::get("percent").as<long>();
}

void CSSNumericType::percent(long value) {
    emlite::Val::set("percent", value);
}

CSSNumericBaseType CSSNumericType::percentHint() const {
    return emlite::Val::get("percentHint").as<CSSNumericBaseType>();
}

void CSSNumericType::percentHint(const CSSNumericBaseType& value) {
    emlite::Val::set("percentHint", value);
}

CSSNumericValue CSSNumericValue::take_ownership(Handle h) noexcept {
        return CSSNumericValue(h);
    }
CSSNumericValue CSSNumericValue::clone() const noexcept { return *this; }
CSSNumericValue::CSSNumericValue(Handle h) noexcept : CSSStyleValue(emlite::Val::take_ownership(h)) {}
CSSNumericValue::CSSNumericValue(const emlite::Val &val) noexcept: CSSStyleValue(val) {}


CSSNumericValue CSSNumericValue::add(const jsbind::Any& values) {
    return CSSStyleValue::call("add", values).as<CSSNumericValue>();
}

CSSNumericValue CSSNumericValue::sub(const jsbind::Any& values) {
    return CSSStyleValue::call("sub", values).as<CSSNumericValue>();
}

CSSNumericValue CSSNumericValue::mul(const jsbind::Any& values) {
    return CSSStyleValue::call("mul", values).as<CSSNumericValue>();
}

CSSNumericValue CSSNumericValue::div(const jsbind::Any& values) {
    return CSSStyleValue::call("div", values).as<CSSNumericValue>();
}

CSSNumericValue CSSNumericValue::min(const jsbind::Any& values) {
    return CSSStyleValue::call("min", values).as<CSSNumericValue>();
}

CSSNumericValue CSSNumericValue::max(const jsbind::Any& values) {
    return CSSStyleValue::call("max", values).as<CSSNumericValue>();
}

bool CSSNumericValue::equals(const jsbind::Any& value) {
    return CSSStyleValue::call("equals", value).as<bool>();
}

CSSUnitValue CSSNumericValue::to(const jsbind::String& unit) {
    return CSSStyleValue::call("to", unit).as<CSSUnitValue>();
}

CSSMathSum CSSNumericValue::toSum(const jsbind::String& units) {
    return CSSStyleValue::call("toSum", units).as<CSSMathSum>();
}

CSSNumericType CSSNumericValue::type() {
    return CSSStyleValue::call("type").as<CSSNumericType>();
}

CSSNumericValue CSSNumericValue::parse(const jsbind::String& cssText) {
    return emlite::Val::global("cssnumericvalue").call("parse", cssText).as<CSSNumericValue>();
}

