#include <webbind/CSSMathMax.hpp>
#include <webbind/CSSNumericArray.hpp>


CSSMathMax CSSMathMax::take_ownership(Handle h) noexcept {
        return CSSMathMax(h);
    }
CSSMathMax CSSMathMax::clone() const noexcept { return *this; }
emlite::Val CSSMathMax::instance() noexcept { return emlite::Val::global("CSSMathMax"); }
CSSMathMax::CSSMathMax(Handle h) noexcept : CSSMathValue(emlite::Val::take_ownership(h)) {}
CSSMathMax::CSSMathMax(const emlite::Val &val) noexcept: CSSMathValue(val) {}


CSSMathMax::CSSMathMax(const jsbind::Any& args) : CSSMathValue(emlite::Val::global("CSSMathMax").new_(args)) {}

CSSNumericArray CSSMathMax::values() const {
    return CSSMathValue::get("values").as<CSSNumericArray>();
}

