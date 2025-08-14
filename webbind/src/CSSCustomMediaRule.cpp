#include <webbind/CSSCustomMediaRule.hpp>

namespace webbind {

CSSCustomMediaRule CSSCustomMediaRule::take_ownership(Handle h) noexcept {
    return CSSCustomMediaRule(h);
}

CSSCustomMediaRule CSSCustomMediaRule::clone() const noexcept { return *this; }

emlite::Val CSSCustomMediaRule::instance() noexcept { return emlite::Val::global("CSSCustomMediaRule"); }

CSSCustomMediaRule::CSSCustomMediaRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}

CSSCustomMediaRule::CSSCustomMediaRule(const emlite::Val &val) noexcept: CSSRule(val) {}

jsbind::String CSSCustomMediaRule::name() const {
    return CSSRule::get("name").as<jsbind::String>();
}

jsbind::Any CSSCustomMediaRule::query() const {
    return CSSRule::get("query").as<jsbind::Any>();
}


} // namespace webbind