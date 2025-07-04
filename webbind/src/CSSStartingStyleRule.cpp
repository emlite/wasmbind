#include <webbind/CSSStartingStyleRule.hpp>


CSSStartingStyleRule CSSStartingStyleRule::take_ownership(Handle h) noexcept {
        return CSSStartingStyleRule(h);
    }
CSSStartingStyleRule CSSStartingStyleRule::clone() const noexcept { return *this; }
CSSStartingStyleRule::CSSStartingStyleRule(Handle h) noexcept : CSSGroupingRule(emlite::Val::take_ownership(h)) {}
CSSStartingStyleRule::CSSStartingStyleRule(const emlite::Val &val) noexcept: CSSGroupingRule(val) {}


