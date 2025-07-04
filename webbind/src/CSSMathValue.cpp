#include <webbind/CSSMathValue.hpp>


CSSMathValue CSSMathValue::take_ownership(Handle h) noexcept {
        return CSSMathValue(h);
    }
CSSMathValue CSSMathValue::clone() const noexcept { return *this; }
CSSMathValue::CSSMathValue(Handle h) noexcept : CSSNumericValue(emlite::Val::take_ownership(h)) {}
CSSMathValue::CSSMathValue(const emlite::Val &val) noexcept: CSSNumericValue(val) {}


CSSMathOperator CSSMathValue::operator_() const {
    return CSSNumericValue::get("operator").as<CSSMathOperator>();
}

