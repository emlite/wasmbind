#include <webbind/CSSPropertyRule.hpp>

namespace webbind {

CSSPropertyRule CSSPropertyRule::take_ownership(Handle h) noexcept {
    return CSSPropertyRule(h);
}

CSSPropertyRule CSSPropertyRule::clone() const noexcept { return *this; }

emlite::Val CSSPropertyRule::instance() noexcept { return emlite::Val::global("CSSPropertyRule"); }

CSSPropertyRule::CSSPropertyRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}

CSSPropertyRule::CSSPropertyRule(const emlite::Val &val) noexcept: CSSRule(val) {}

jsbind::String CSSPropertyRule::name() const {
    return CSSRule::get("name").as<jsbind::String>();
}

jsbind::String CSSPropertyRule::syntax() const {
    return CSSRule::get("syntax").as<jsbind::String>();
}

bool CSSPropertyRule::inherits() const {
    return CSSRule::get("inherits").as<bool>();
}

jsbind::String CSSPropertyRule::initialValue() const {
    return CSSRule::get("initialValue").as<jsbind::String>();
}


} // namespace webbind