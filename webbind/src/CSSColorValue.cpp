#include <webbind/CSSColorValue.hpp>


CSSColorValue CSSColorValue::take_ownership(Handle h) noexcept {
        return CSSColorValue(h);
    }
CSSColorValue CSSColorValue::clone() const noexcept { return *this; }
CSSColorValue::CSSColorValue(Handle h) noexcept : CSSStyleValue(emlite::Val::take_ownership(h)) {}
CSSColorValue::CSSColorValue(const emlite::Val &val) noexcept: CSSStyleValue(val) {}


jsbind::Any CSSColorValue::parse(const jsbind::String& cssText) {
    return emlite::Val::global("csscolorvalue").call("parse", cssText).as<jsbind::Any>();
}

