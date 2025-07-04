#include <webbind/CSSContainerRule.hpp>


CSSContainerRule CSSContainerRule::take_ownership(Handle h) noexcept {
        return CSSContainerRule(h);
    }
CSSContainerRule CSSContainerRule::clone() const noexcept { return *this; }
CSSContainerRule::CSSContainerRule(Handle h) noexcept : CSSConditionRule(emlite::Val::take_ownership(h)) {}
CSSContainerRule::CSSContainerRule(const emlite::Val &val) noexcept: CSSConditionRule(val) {}


jsbind::CSSOMString CSSContainerRule::containerName() const {
    return CSSConditionRule::get("containerName").as<jsbind::CSSOMString>();
}

jsbind::CSSOMString CSSContainerRule::containerQuery() const {
    return CSSConditionRule::get("containerQuery").as<jsbind::CSSOMString>();
}

