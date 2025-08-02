#include <webbind/CSSNamespaceRule.hpp>


CSSNamespaceRule CSSNamespaceRule::take_ownership(Handle h) noexcept {
        return CSSNamespaceRule(h);
    }
CSSNamespaceRule CSSNamespaceRule::clone() const noexcept { return *this; }
emlite::Val CSSNamespaceRule::instance() noexcept { return emlite::Val::global("CSSNamespaceRule"); }
CSSNamespaceRule::CSSNamespaceRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSNamespaceRule::CSSNamespaceRule(const emlite::Val &val) noexcept: CSSRule(val) {}


jsbind::String CSSNamespaceRule::namespaceURI() const {
    return CSSRule::get("namespaceURI").as<jsbind::String>();
}

jsbind::String CSSNamespaceRule::prefix() const {
    return CSSRule::get("prefix").as<jsbind::String>();
}

