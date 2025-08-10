#include <webbind/CSSMathSum.hpp>
#include <webbind/CSSNumericArray.hpp>

namespace webbind {

CSSMathSum CSSMathSum::take_ownership(Handle h) noexcept {
        return CSSMathSum(h);
    }
CSSMathSum CSSMathSum::clone() const noexcept { return *this; }
emlite::Val CSSMathSum::instance() noexcept { return emlite::Val::global("CSSMathSum"); }
CSSMathSum::CSSMathSum(Handle h) noexcept : CSSMathValue(emlite::Val::take_ownership(h)) {}
CSSMathSum::CSSMathSum(const emlite::Val &val) noexcept: CSSMathValue(val) {}

CSSMathSum::CSSMathSum(const jsbind::Any& args) : CSSMathValue(emlite::Val::global("CSSMathSum").new_(args)) {}

CSSNumericArray CSSMathSum::values() const {
    return CSSMathValue::get("values").as<CSSNumericArray>();
}


} // namespace webbind