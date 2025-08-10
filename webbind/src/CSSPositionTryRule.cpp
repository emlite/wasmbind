#include "webbind/CSSPositionTryRule.hpp"
#include "webbind/CSSPositionTryDescriptors.hpp"

namespace webbind {

CSSPositionTryRule CSSPositionTryRule::take_ownership(Handle h) noexcept {
        return CSSPositionTryRule(h);
    }
CSSPositionTryRule CSSPositionTryRule::clone() const noexcept { return *this; }
emlite::Val CSSPositionTryRule::instance() noexcept { return emlite::Val::global("CSSPositionTryRule"); }
CSSPositionTryRule::CSSPositionTryRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSPositionTryRule::CSSPositionTryRule(const emlite::Val &val) noexcept: CSSRule(val) {}

jsbind::String CSSPositionTryRule::name() const {
    return CSSRule::get("name").as<jsbind::String>();
}

CSSPositionTryDescriptors CSSPositionTryRule::style() const {
    return CSSRule::get("style").as<CSSPositionTryDescriptors>();
}


} // namespace webbind