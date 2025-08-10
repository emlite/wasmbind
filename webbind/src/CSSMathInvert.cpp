#include <webbind/CSSMathInvert.hpp>
#include <webbind/CSSNumericValue.hpp>

namespace webbind {

CSSMathInvert CSSMathInvert::take_ownership(Handle h) noexcept {
    return CSSMathInvert(h);
}

CSSMathInvert CSSMathInvert::clone() const noexcept { return *this; }

emlite::Val CSSMathInvert::instance() noexcept { return emlite::Val::global("CSSMathInvert"); }

CSSMathInvert::CSSMathInvert(Handle h) noexcept : CSSMathValue(emlite::Val::take_ownership(h)) {}

CSSMathInvert::CSSMathInvert(const emlite::Val &val) noexcept: CSSMathValue(val) {}

CSSMathInvert::CSSMathInvert(const jsbind::Any& arg) : CSSMathValue(emlite::Val::global("CSSMathInvert").new_(arg)) {}

CSSNumericValue CSSMathInvert::value() const {
    return CSSMathValue::get("value").as<CSSNumericValue>();
}


} // namespace webbind