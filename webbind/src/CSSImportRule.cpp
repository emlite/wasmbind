#include "webbind/CSSImportRule.hpp"
#include "webbind/MediaList.hpp"
#include "webbind/CSSStyleSheet.hpp"

namespace webbind {

CSSImportRule CSSImportRule::take_ownership(Handle h) noexcept {
        return CSSImportRule(h);
    }
CSSImportRule CSSImportRule::clone() const noexcept { return *this; }
emlite::Val CSSImportRule::instance() noexcept { return emlite::Val::global("CSSImportRule"); }
CSSImportRule::CSSImportRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSImportRule::CSSImportRule(const emlite::Val &val) noexcept: CSSRule(val) {}

jsbind::String CSSImportRule::href() const {
    return CSSRule::get("href").as<jsbind::String>();
}

MediaList CSSImportRule::media() const {
    return CSSRule::get("media").as<MediaList>();
}

CSSStyleSheet CSSImportRule::styleSheet() const {
    return CSSRule::get("styleSheet").as<CSSStyleSheet>();
}

jsbind::String CSSImportRule::layerName() const {
    return CSSRule::get("layerName").as<jsbind::String>();
}

jsbind::String CSSImportRule::supportsText() const {
    return CSSRule::get("supportsText").as<jsbind::String>();
}


} // namespace webbind