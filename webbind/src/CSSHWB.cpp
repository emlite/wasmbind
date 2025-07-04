#include <webbind/CSSHWB.hpp>
#include <webbind/CSSNumericValue.hpp>


CSSHWB CSSHWB::take_ownership(Handle h) noexcept {
        return CSSHWB(h);
    }
CSSHWB CSSHWB::clone() const noexcept { return *this; }
CSSHWB::CSSHWB(Handle h) noexcept : CSSColorValue(emlite::Val::take_ownership(h)) {}
CSSHWB::CSSHWB(const emlite::Val &val) noexcept: CSSColorValue(val) {}


CSSHWB::CSSHWB(const CSSNumericValue& h, const jsbind::Any& w, const jsbind::Any& b, const jsbind::Any& alpha): CSSColorValue(emlite::Val::global("CSSHWB").new_(h, w, b, alpha)) {}

CSSNumericValue CSSHWB::h() const {
    return CSSColorValue::get("h").as<CSSNumericValue>();
}

void CSSHWB::h(const CSSNumericValue& value) {
    CSSColorValue::set("h", value);
}

jsbind::Any CSSHWB::w() const {
    return CSSColorValue::get("w").as<jsbind::Any>();
}

void CSSHWB::w(const jsbind::Any& value) {
    CSSColorValue::set("w", value);
}

jsbind::Any CSSHWB::b() const {
    return CSSColorValue::get("b").as<jsbind::Any>();
}

void CSSHWB::b(const jsbind::Any& value) {
    CSSColorValue::set("b", value);
}

jsbind::Any CSSHWB::alpha() const {
    return CSSColorValue::get("alpha").as<jsbind::Any>();
}

void CSSHWB::alpha(const jsbind::Any& value) {
    CSSColorValue::set("alpha", value);
}

