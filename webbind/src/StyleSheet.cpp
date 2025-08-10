#include <webbind/StyleSheet.hpp>
#include <webbind/CSSStyleSheet.hpp>
#include <webbind/MediaList.hpp>

namespace webbind {

StyleSheet StyleSheet::take_ownership(Handle h) noexcept {
        return StyleSheet(h);
    }
StyleSheet StyleSheet::clone() const noexcept { return *this; }
emlite::Val StyleSheet::instance() noexcept { return emlite::Val::global("StyleSheet"); }
StyleSheet::StyleSheet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StyleSheet::StyleSheet(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String StyleSheet::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

jsbind::String StyleSheet::href() const {
    return emlite::Val::get("href").as<jsbind::String>();
}

jsbind::Any StyleSheet::ownerNode() const {
    return emlite::Val::get("ownerNode").as<jsbind::Any>();
}

CSSStyleSheet StyleSheet::parentStyleSheet() const {
    return emlite::Val::get("parentStyleSheet").as<CSSStyleSheet>();
}

jsbind::String StyleSheet::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
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


} // namespace webbind