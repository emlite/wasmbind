#include <webbind/CSSColorProfileRule.hpp>


CSSColorProfileRule CSSColorProfileRule::take_ownership(Handle h) noexcept {
        return CSSColorProfileRule(h);
    }
CSSColorProfileRule CSSColorProfileRule::clone() const noexcept { return *this; }
CSSColorProfileRule::CSSColorProfileRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSColorProfileRule::CSSColorProfileRule(const emlite::Val &val) noexcept: CSSRule(val) {}


jsbind::CSSOMString CSSColorProfileRule::name() const {
    return CSSRule::get("name").as<jsbind::CSSOMString>();
}

jsbind::CSSOMString CSSColorProfileRule::src() const {
    return CSSRule::get("src").as<jsbind::CSSOMString>();
}

jsbind::CSSOMString CSSColorProfileRule::renderingIntent() const {
    return CSSRule::get("renderingIntent").as<jsbind::CSSOMString>();
}

jsbind::CSSOMString CSSColorProfileRule::components() const {
    return CSSRule::get("components").as<jsbind::CSSOMString>();
}

