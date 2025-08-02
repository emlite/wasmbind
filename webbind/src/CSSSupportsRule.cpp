#include <webbind/CSSSupportsRule.hpp>


CSSSupportsRule CSSSupportsRule::take_ownership(Handle h) noexcept {
        return CSSSupportsRule(h);
    }
CSSSupportsRule CSSSupportsRule::clone() const noexcept { return *this; }
emlite::Val CSSSupportsRule::instance() noexcept { return emlite::Val::global("CSSSupportsRule"); }
CSSSupportsRule::CSSSupportsRule(Handle h) noexcept : CSSConditionRule(emlite::Val::take_ownership(h)) {}
CSSSupportsRule::CSSSupportsRule(const emlite::Val &val) noexcept: CSSConditionRule(val) {}


bool CSSSupportsRule::matches() const {
    return CSSConditionRule::get("matches").as<bool>();
}

