#include <webbind/CSSRGB.hpp>


CSSRGB CSSRGB::take_ownership(Handle h) noexcept {
        return CSSRGB(h);
    }
CSSRGB CSSRGB::clone() const noexcept { return *this; }
CSSRGB::CSSRGB(Handle h) noexcept : CSSColorValue(emlite::Val::take_ownership(h)) {}
CSSRGB::CSSRGB(const emlite::Val &val) noexcept: CSSColorValue(val) {}


CSSRGB::CSSRGB(const jsbind::Any& r, const jsbind::Any& g, const jsbind::Any& b) : CSSColorValue(emlite::Val::global("CSSRGB").new_(r, g, b)) {}

CSSRGB::CSSRGB(const jsbind::Any& r, const jsbind::Any& g, const jsbind::Any& b, const jsbind::Any& alpha) : CSSColorValue(emlite::Val::global("CSSRGB").new_(r, g, b, alpha)) {}

jsbind::Any CSSRGB::r() const {
    return CSSColorValue::get("r").as<jsbind::Any>();
}

void CSSRGB::r(const jsbind::Any& value) {
    CSSColorValue::set("r", value);
}

jsbind::Any CSSRGB::g() const {
    return CSSColorValue::get("g").as<jsbind::Any>();
}

void CSSRGB::g(const jsbind::Any& value) {
    CSSColorValue::set("g", value);
}

jsbind::Any CSSRGB::b() const {
    return CSSColorValue::get("b").as<jsbind::Any>();
}

void CSSRGB::b(const jsbind::Any& value) {
    CSSColorValue::set("b", value);
}

jsbind::Any CSSRGB::alpha() const {
    return CSSColorValue::get("alpha").as<jsbind::Any>();
}

void CSSRGB::alpha(const jsbind::Any& value) {
    CSSColorValue::set("alpha", value);
}

