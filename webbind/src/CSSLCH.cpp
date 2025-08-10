#include <webbind/CSSLCH.hpp>

namespace webbind {

CSSLCH CSSLCH::take_ownership(Handle h) noexcept {
    return CSSLCH(h);
}

CSSLCH CSSLCH::clone() const noexcept { return *this; }

emlite::Val CSSLCH::instance() noexcept { return emlite::Val::global("CSSLCH"); }

CSSLCH::CSSLCH(Handle h) noexcept : CSSColorValue(emlite::Val::take_ownership(h)) {}

CSSLCH::CSSLCH(const emlite::Val &val) noexcept: CSSColorValue(val) {}

CSSLCH::CSSLCH(const jsbind::Any& l, const jsbind::Any& c, const jsbind::Any& h) : CSSColorValue(emlite::Val::global("CSSLCH").new_(l, c, h)) {}

CSSLCH::CSSLCH(const jsbind::Any& l, const jsbind::Any& c, const jsbind::Any& h, const jsbind::Any& alpha) : CSSColorValue(emlite::Val::global("CSSLCH").new_(l, c, h, alpha)) {}

jsbind::Any CSSLCH::l() const {
    return CSSColorValue::get("l").as<jsbind::Any>();
}

void CSSLCH::l(const jsbind::Any& value) {
    CSSColorValue::set("l", value);
}

jsbind::Any CSSLCH::c() const {
    return CSSColorValue::get("c").as<jsbind::Any>();
}

void CSSLCH::c(const jsbind::Any& value) {
    CSSColorValue::set("c", value);
}

jsbind::Any CSSLCH::h() const {
    return CSSColorValue::get("h").as<jsbind::Any>();
}

void CSSLCH::h(const jsbind::Any& value) {
    CSSColorValue::set("h", value);
}

jsbind::Any CSSLCH::alpha() const {
    return CSSColorValue::get("alpha").as<jsbind::Any>();
}

void CSSLCH::alpha(const jsbind::Any& value) {
    CSSColorValue::set("alpha", value);
}


} // namespace webbind