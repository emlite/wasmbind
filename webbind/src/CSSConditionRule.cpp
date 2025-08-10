#include <webbind/CSSConditionRule.hpp>

namespace webbind {

CSSConditionRule CSSConditionRule::take_ownership(Handle h) noexcept {
        return CSSConditionRule(h);
    }
CSSConditionRule CSSConditionRule::clone() const noexcept { return *this; }
emlite::Val CSSConditionRule::instance() noexcept { return emlite::Val::global("CSSConditionRule"); }
CSSConditionRule::CSSConditionRule(Handle h) noexcept : CSSGroupingRule(emlite::Val::take_ownership(h)) {}
CSSConditionRule::CSSConditionRule(const emlite::Val &val) noexcept: CSSGroupingRule(val) {}

jsbind::String CSSConditionRule::conditionText() const {
    return CSSGroupingRule::get("conditionText").as<jsbind::String>();
}


} // namespace webbind