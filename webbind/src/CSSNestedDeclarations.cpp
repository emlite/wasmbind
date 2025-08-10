#include <webbind/CSSNestedDeclarations.hpp>
#include <webbind/CSSStyleProperties.hpp>

namespace webbind {

CSSNestedDeclarations CSSNestedDeclarations::take_ownership(Handle h) noexcept {
    return CSSNestedDeclarations(h);
}

CSSNestedDeclarations CSSNestedDeclarations::clone() const noexcept { return *this; }

emlite::Val CSSNestedDeclarations::instance() noexcept { return emlite::Val::global("CSSNestedDeclarations"); }

CSSNestedDeclarations::CSSNestedDeclarations(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}

CSSNestedDeclarations::CSSNestedDeclarations(const emlite::Val &val) noexcept: CSSRule(val) {}

CSSStyleProperties CSSNestedDeclarations::style() const {
    return CSSRule::get("style").as<CSSStyleProperties>();
}


} // namespace webbind