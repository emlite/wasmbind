#include <webbind/CSSImportRule.hpp>
#include <webbind/MediaList.hpp>
#include <webbind/CSSStyleSheet.hpp>


CSSImportRule CSSImportRule::take_ownership(Handle h) noexcept {
        return CSSImportRule(h);
    }
CSSImportRule CSSImportRule::clone() const noexcept { return *this; }
CSSImportRule::CSSImportRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSImportRule::CSSImportRule(const emlite::Val &val) noexcept: CSSRule(val) {}


jsbind::USVString CSSImportRule::href() const {
    return CSSRule::get("href").as<jsbind::USVString>();
}

MediaList CSSImportRule::media() const {
    return CSSRule::get("media").as<MediaList>();
}

CSSStyleSheet CSSImportRule::styleSheet() const {
    return CSSRule::get("styleSheet").as<CSSStyleSheet>();
}

jsbind::CSSOMString CSSImportRule::layerName() const {
    return CSSRule::get("layerName").as<jsbind::CSSOMString>();
}

jsbind::CSSOMString CSSImportRule::supportsText() const {
    return CSSRule::get("supportsText").as<jsbind::CSSOMString>();
}

