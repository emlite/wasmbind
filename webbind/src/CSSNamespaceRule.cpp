#include <webbind/CSSNamespaceRule.hpp>


CSSNamespaceRule CSSNamespaceRule::take_ownership(Handle h) noexcept {
        return CSSNamespaceRule(h);
    }
CSSNamespaceRule CSSNamespaceRule::clone() const noexcept { return *this; }
CSSNamespaceRule::CSSNamespaceRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSNamespaceRule::CSSNamespaceRule(const emlite::Val &val) noexcept: CSSRule(val) {}


jsbind::CSSOMString CSSNamespaceRule::namespaceURI() const {
    return CSSRule::get("namespaceURI").as<jsbind::CSSOMString>();
}

jsbind::CSSOMString CSSNamespaceRule::prefix() const {
    return CSSRule::get("prefix").as<jsbind::CSSOMString>();
}

