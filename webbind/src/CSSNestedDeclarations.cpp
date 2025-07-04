#include <webbind/CSSNestedDeclarations.hpp>
#include <webbind/CSSStyleProperties.hpp>


CSSNestedDeclarations CSSNestedDeclarations::take_ownership(Handle h) noexcept {
        return CSSNestedDeclarations(h);
    }
CSSNestedDeclarations CSSNestedDeclarations::clone() const noexcept { return *this; }
CSSNestedDeclarations::CSSNestedDeclarations(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSNestedDeclarations::CSSNestedDeclarations(const emlite::Val &val) noexcept: CSSRule(val) {}


CSSStyleProperties CSSNestedDeclarations::style() const {
    return CSSRule::get("style").as<CSSStyleProperties>();
}

