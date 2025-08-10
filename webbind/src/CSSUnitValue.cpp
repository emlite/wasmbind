#include <webbind/CSSUnitValue.hpp>

namespace webbind {

CSSUnitValue CSSUnitValue::take_ownership(Handle h) noexcept {
    return CSSUnitValue(h);
}

CSSUnitValue CSSUnitValue::clone() const noexcept { return *this; }

emlite::Val CSSUnitValue::instance() noexcept { return emlite::Val::global("CSSUnitValue"); }

CSSUnitValue::CSSUnitValue(Handle h) noexcept : CSSNumericValue(emlite::Val::take_ownership(h)) {}

CSSUnitValue::CSSUnitValue(const emlite::Val &val) noexcept: CSSNumericValue(val) {}

CSSUnitValue::CSSUnitValue(double value, const jsbind::String& unit) : CSSNumericValue(emlite::Val::global("CSSUnitValue").new_(value, unit)) {}

double CSSUnitValue::value() const {
    return CSSNumericValue::get("value").as<double>();
}

void CSSUnitValue::value(double value) {
    CSSNumericValue::set("value", value);
}

jsbind::String CSSUnitValue::unit() const {
    return CSSNumericValue::get("unit").as<jsbind::String>();
}


} // namespace webbind