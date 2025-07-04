#include <webbind/StyleSheet.hpp>
#include <webbind/CSSStyleSheet.hpp>
#include <webbind/MediaList.hpp>


StyleSheet StyleSheet::take_ownership(Handle h) noexcept {
        return StyleSheet(h);
    }
StyleSheet StyleSheet::clone() const noexcept { return *this; }
StyleSheet::StyleSheet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StyleSheet::StyleSheet(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::CSSOMString StyleSheet::type() const {
    return emlite::Val::get("type").as<jsbind::CSSOMString>();
}

jsbind::USVString StyleSheet::href() const {
    return emlite::Val::get("href").as<jsbind::USVString>();
}

jsbind::Any StyleSheet::ownerNode() const {
    return emlite::Val::get("ownerNode").as<jsbind::Any>();
}

CSSStyleSheet StyleSheet::parentStyleSheet() const {
    return emlite::Val::get("parentStyleSheet").as<CSSStyleSheet>();
}

jsbind::DOMString StyleSheet::title() const {
    return emlite::Val::get("title").as<jsbind::DOMString>();
}

MediaList StyleSheet::media() const {
    return emlite::Val::get("media").as<MediaList>();
}

bool StyleSheet::disabled() const {
    return emlite::Val::get("disabled").as<bool>();
}

void StyleSheet::disabled(bool value) {
    emlite::Val::set("disabled", value);
}

