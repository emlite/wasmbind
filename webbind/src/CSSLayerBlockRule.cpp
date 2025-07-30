#include <webbind/CSSLayerBlockRule.hpp>


CSSLayerBlockRule CSSLayerBlockRule::take_ownership(Handle h) noexcept {
        return CSSLayerBlockRule(h);
    }
CSSLayerBlockRule CSSLayerBlockRule::clone() const noexcept { return *this; }
CSSLayerBlockRule::CSSLayerBlockRule(Handle h) noexcept : CSSGroupingRule(emlite::Val::take_ownership(h)) {}
CSSLayerBlockRule::CSSLayerBlockRule(const emlite::Val &val) noexcept: CSSGroupingRule(val) {}


jsbind::String CSSLayerBlockRule::name() const {
    return CSSGroupingRule::get("name").as<jsbind::String>();
}

