#include <webbind/CSSImageValue.hpp>


CSSImageValue CSSImageValue::take_ownership(Handle h) noexcept {
        return CSSImageValue(h);
    }
CSSImageValue CSSImageValue::clone() const noexcept { return *this; }
emlite::Val CSSImageValue::instance() noexcept { return emlite::Val::global("CSSImageValue"); }
CSSImageValue::CSSImageValue(Handle h) noexcept : CSSStyleValue(emlite::Val::take_ownership(h)) {}
CSSImageValue::CSSImageValue(const emlite::Val &val) noexcept: CSSStyleValue(val) {}


