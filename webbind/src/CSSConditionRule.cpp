#include <webbind/CSSConditionRule.hpp>


CSSConditionRule CSSConditionRule::take_ownership(Handle h) noexcept {
        return CSSConditionRule(h);
    }
CSSConditionRule CSSConditionRule::clone() const noexcept { return *this; }
CSSConditionRule::CSSConditionRule(Handle h) noexcept : CSSGroupingRule(emlite::Val::take_ownership(h)) {}
CSSConditionRule::CSSConditionRule(const emlite::Val &val) noexcept: CSSGroupingRule(val) {}


jsbind::CSSOMString CSSConditionRule::conditionText() const {
    return CSSGroupingRule::get("conditionText").as<jsbind::CSSOMString>();
}

