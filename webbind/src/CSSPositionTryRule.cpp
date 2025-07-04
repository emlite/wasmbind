#include <webbind/CSSPositionTryRule.hpp>
#include <webbind/CSSPositionTryDescriptors.hpp>


CSSPositionTryRule CSSPositionTryRule::take_ownership(Handle h) noexcept {
        return CSSPositionTryRule(h);
    }
CSSPositionTryRule CSSPositionTryRule::clone() const noexcept { return *this; }
CSSPositionTryRule::CSSPositionTryRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSPositionTryRule::CSSPositionTryRule(const emlite::Val &val) noexcept: CSSRule(val) {}


jsbind::CSSOMString CSSPositionTryRule::name() const {
    return CSSRule::get("name").as<jsbind::CSSOMString>();
}

CSSPositionTryDescriptors CSSPositionTryRule::style() const {
    return CSSRule::get("style").as<CSSPositionTryDescriptors>();
}

