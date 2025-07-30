#include <webbind/CSSLayerStatementRule.hpp>


CSSLayerStatementRule CSSLayerStatementRule::take_ownership(Handle h) noexcept {
        return CSSLayerStatementRule(h);
    }
CSSLayerStatementRule CSSLayerStatementRule::clone() const noexcept { return *this; }
CSSLayerStatementRule::CSSLayerStatementRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSLayerStatementRule::CSSLayerStatementRule(const emlite::Val &val) noexcept: CSSRule(val) {}


jsbind::TypedArray<jsbind::String> CSSLayerStatementRule::nameList() const {
    return CSSRule::get("nameList").as<jsbind::TypedArray<jsbind::String>>();
}

