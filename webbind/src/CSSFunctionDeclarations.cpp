#include <webbind/CSSFunctionDeclarations.hpp>
#include <webbind/CSSFunctionDescriptors.hpp>


CSSFunctionDeclarations CSSFunctionDeclarations::take_ownership(Handle h) noexcept {
        return CSSFunctionDeclarations(h);
    }
CSSFunctionDeclarations CSSFunctionDeclarations::clone() const noexcept { return *this; }
CSSFunctionDeclarations::CSSFunctionDeclarations(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSFunctionDeclarations::CSSFunctionDeclarations(const emlite::Val &val) noexcept: CSSRule(val) {}


CSSFunctionDescriptors CSSFunctionDeclarations::style() const {
    return CSSRule::get("style").as<CSSFunctionDescriptors>();
}

