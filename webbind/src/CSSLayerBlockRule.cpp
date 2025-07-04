#include <webbind/CSSLayerBlockRule.hpp>


CSSLayerBlockRule CSSLayerBlockRule::take_ownership(Handle h) noexcept {
        return CSSLayerBlockRule(h);
    }
CSSLayerBlockRule CSSLayerBlockRule::clone() const noexcept { return *this; }
CSSLayerBlockRule::CSSLayerBlockRule(Handle h) noexcept : CSSGroupingRule(emlite::Val::take_ownership(h)) {}
CSSLayerBlockRule::CSSLayerBlockRule(const emlite::Val &val) noexcept: CSSGroupingRule(val) {}


jsbind::CSSOMString CSSLayerBlockRule::name() const {
    return CSSGroupingRule::get("name").as<jsbind::CSSOMString>();
}

