#include <webbind/CSSHSL.hpp>


CSSHSL CSSHSL::take_ownership(Handle h) noexcept {
        return CSSHSL(h);
    }
CSSHSL CSSHSL::clone() const noexcept { return *this; }
CSSHSL::CSSHSL(Handle h) noexcept : CSSColorValue(emlite::Val::take_ownership(h)) {}
CSSHSL::CSSHSL(const emlite::Val &val) noexcept: CSSColorValue(val) {}


CSSHSL::CSSHSL(const jsbind::Any& h, const jsbind::Any& s, const jsbind::Any& l, const jsbind::Any& alpha): CSSColorValue(emlite::Val::global("CSSHSL").new_(h, s, l, alpha)) {}

jsbind::Any CSSHSL::h() const {
    return CSSColorValue::get("h").as<jsbind::Any>();
}

void CSSHSL::h(const jsbind::Any& value) {
    CSSColorValue::set("h", value);
}

jsbind::Any CSSHSL::s() const {
    return CSSColorValue::get("s").as<jsbind::Any>();
}

void CSSHSL::s(const jsbind::Any& value) {
    CSSColorValue::set("s", value);
}

jsbind::Any CSSHSL::l() const {
    return CSSColorValue::get("l").as<jsbind::Any>();
}

void CSSHSL::l(const jsbind::Any& value) {
    CSSColorValue::set("l", value);
}

jsbind::Any CSSHSL::alpha() const {
    return CSSColorValue::get("alpha").as<jsbind::Any>();
}

void CSSHSL::alpha(const jsbind::Any& value) {
    CSSColorValue::set("alpha", value);
}

