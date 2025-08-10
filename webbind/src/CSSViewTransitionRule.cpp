#include "webbind/CSSViewTransitionRule.hpp"

namespace webbind {

CSSViewTransitionRule CSSViewTransitionRule::take_ownership(Handle h) noexcept {
        return CSSViewTransitionRule(h);
    }
CSSViewTransitionRule CSSViewTransitionRule::clone() const noexcept { return *this; }
emlite::Val CSSViewTransitionRule::instance() noexcept { return emlite::Val::global("CSSViewTransitionRule"); }
CSSViewTransitionRule::CSSViewTransitionRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSViewTransitionRule::CSSViewTransitionRule(const emlite::Val &val) noexcept: CSSRule(val) {}

jsbind::String CSSViewTransitionRule::navigation() const {
    return CSSRule::get("navigation").as<jsbind::String>();
}

jsbind::TypedArray<jsbind::String> CSSViewTransitionRule::types() const {
    return CSSRule::get("types").as<jsbind::TypedArray<jsbind::String>>();
}


} // namespace webbind