#include <webbind/CSSMathClamp.hpp>
#include <webbind/CSSNumericValue.hpp>


CSSMathClamp CSSMathClamp::take_ownership(Handle h) noexcept {
        return CSSMathClamp(h);
    }
CSSMathClamp CSSMathClamp::clone() const noexcept { return *this; }
emlite::Val CSSMathClamp::instance() noexcept { return emlite::Val::global("CSSMathClamp"); }
CSSMathClamp::CSSMathClamp(Handle h) noexcept : CSSMathValue(emlite::Val::take_ownership(h)) {}
CSSMathClamp::CSSMathClamp(const emlite::Val &val) noexcept: CSSMathValue(val) {}


CSSMathClamp::CSSMathClamp(const jsbind::Any& lower, const jsbind::Any& value, const jsbind::Any& upper) : CSSMathValue(emlite::Val::global("CSSMathClamp").new_(lower, value, upper)) {}

CSSNumericValue CSSMathClamp::lower() const {
    return CSSMathValue::get("lower").as<CSSNumericValue>();
}

CSSNumericValue CSSMathClamp::value() const {
    return CSSMathValue::get("value").as<CSSNumericValue>();
}

CSSNumericValue CSSMathClamp::upper() const {
    return CSSMathValue::get("upper").as<CSSNumericValue>();
}

