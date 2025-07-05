#include <webbind/CSSMathMin.hpp>
#include <webbind/CSSNumericArray.hpp>


CSSMathMin CSSMathMin::take_ownership(Handle h) noexcept {
        return CSSMathMin(h);
    }
CSSMathMin CSSMathMin::clone() const noexcept { return *this; }
CSSMathMin::CSSMathMin(Handle h) noexcept : CSSMathValue(emlite::Val::take_ownership(h)) {}
CSSMathMin::CSSMathMin(const emlite::Val &val) noexcept: CSSMathValue(val) {}


CSSMathMin::CSSMathMin(const jsbind::Any& args) : CSSMathValue(emlite::Val::global("CSSMathMin").new_(args)) {}

CSSNumericArray CSSMathMin::values() const {
    return CSSMathValue::get("values").as<CSSNumericArray>();
}

