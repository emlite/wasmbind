#include <webbind/CSSMathProduct.hpp>
#include <webbind/CSSNumericArray.hpp>

namespace webbind {

CSSMathProduct CSSMathProduct::take_ownership(Handle h) noexcept {
    return CSSMathProduct(h);
}

CSSMathProduct CSSMathProduct::clone() const noexcept { return *this; }

emlite::Val CSSMathProduct::instance() noexcept { return emlite::Val::global("CSSMathProduct"); }

CSSMathProduct::CSSMathProduct(Handle h) noexcept : CSSMathValue(emlite::Val::take_ownership(h)) {}

CSSMathProduct::CSSMathProduct(const emlite::Val &val) noexcept: CSSMathValue(val) {}

CSSMathProduct::CSSMathProduct(const jsbind::Any& args) : CSSMathValue(emlite::Val::global("CSSMathProduct").new_(args)) {}

CSSNumericArray CSSMathProduct::values() const {
    return CSSMathValue::get("values").as<CSSNumericArray>();
}


} // namespace webbind