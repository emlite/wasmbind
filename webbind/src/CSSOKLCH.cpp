#include <webbind/CSSOKLCH.hpp>


CSSOKLCH CSSOKLCH::take_ownership(Handle h) noexcept {
        return CSSOKLCH(h);
    }
CSSOKLCH CSSOKLCH::clone() const noexcept { return *this; }
CSSOKLCH::CSSOKLCH(Handle h) noexcept : CSSColorValue(emlite::Val::take_ownership(h)) {}
CSSOKLCH::CSSOKLCH(const emlite::Val &val) noexcept: CSSColorValue(val) {}


CSSOKLCH::CSSOKLCH(const jsbind::Any& l, const jsbind::Any& c, const jsbind::Any& h, const jsbind::Any& alpha): CSSColorValue(emlite::Val::global("CSSOKLCH").new_(l, c, h, alpha)) {}

jsbind::Any CSSOKLCH::l() const {
    return CSSColorValue::get("l").as<jsbind::Any>();
}

void CSSOKLCH::l(const jsbind::Any& value) {
    CSSColorValue::set("l", value);
}

jsbind::Any CSSOKLCH::c() const {
    return CSSColorValue::get("c").as<jsbind::Any>();
}

void CSSOKLCH::c(const jsbind::Any& value) {
    CSSColorValue::set("c", value);
}

jsbind::Any CSSOKLCH::h() const {
    return CSSColorValue::get("h").as<jsbind::Any>();
}

void CSSOKLCH::h(const jsbind::Any& value) {
    CSSColorValue::set("h", value);
}

jsbind::Any CSSOKLCH::alpha() const {
    return CSSColorValue::get("alpha").as<jsbind::Any>();
}

void CSSOKLCH::alpha(const jsbind::Any& value) {
    CSSColorValue::set("alpha", value);
}

