#include <webbind/CSSStyleProperties.hpp>


CSSStyleProperties CSSStyleProperties::take_ownership(Handle h) noexcept {
        return CSSStyleProperties(h);
    }
CSSStyleProperties CSSStyleProperties::clone() const noexcept { return *this; }
CSSStyleProperties::CSSStyleProperties(Handle h) noexcept : CSSStyleDeclaration(emlite::Val::take_ownership(h)) {}
CSSStyleProperties::CSSStyleProperties(const emlite::Val &val) noexcept: CSSStyleDeclaration(val) {}


jsbind::CSSOMString CSSStyleProperties::cssFloat() const {
    return CSSStyleDeclaration::get("cssFloat").as<jsbind::CSSOMString>();
}

void CSSStyleProperties::cssFloat(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("cssFloat", value);
}

