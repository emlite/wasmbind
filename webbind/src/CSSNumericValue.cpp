#include <webbind/CSSNumericValue.hpp>
#include <webbind/CSSNumericValue.hpp>
#include <webbind/CSSUnitValue.hpp>
#include <webbind/CSSMathSum.hpp>
#include <webbind/CSSNumericType.hpp>

namespace webbind {

CSSNumericValue CSSNumericValue::take_ownership(Handle h) noexcept {
        return CSSNumericValue(h);
    }
CSSNumericValue CSSNumericValue::clone() const noexcept { return *this; }
emlite::Val CSSNumericValue::instance() noexcept { return emlite::Val::global("CSSNumericValue"); }
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


} // namespace webbind