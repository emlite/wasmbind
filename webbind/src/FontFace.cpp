#include <webbind/FontFace.hpp>
#include <webbind/FontFaceFeatures.hpp>
#include <webbind/FontFaceVariations.hpp>
#include <webbind/FontFacePalettes.hpp>


FontFace FontFace::take_ownership(Handle h) noexcept {
        return FontFace(h);
    }
FontFace FontFace::clone() const noexcept { return *this; }
FontFace::FontFace(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FontFace::FontFace(const emlite::Val &val) noexcept: emlite::Val(val) {}


FontFace::FontFace(const jsbind::CSSOMString& family, const jsbind::Any& source) : emlite::Val(emlite::Val::global("FontFace").new_(family, source)) {}

FontFace::FontFace(const jsbind::CSSOMString& family, const jsbind::Any& source, const jsbind::Any& descriptors) : emlite::Val(emlite::Val::global("FontFace").new_(family, source, descriptors)) {}

jsbind::CSSOMString FontFace::family() const {
    return emlite::Val::get("family").as<jsbind::CSSOMString>();
}

void FontFace::family(const jsbind::CSSOMString& value) {
    emlite::Val::set("family", value);
}

jsbind::CSSOMString FontFace::style() const {
    return emlite::Val::get("style").as<jsbind::CSSOMString>();
}

void FontFace::style(const jsbind::CSSOMString& value) {
    emlite::Val::set("style", value);
}

jsbind::CSSOMString FontFace::weight() const {
    return emlite::Val::get("weight").as<jsbind::CSSOMString>();
}

void FontFace::weight(const jsbind::CSSOMString& value) {
    emlite::Val::set("weight", value);
}

jsbind::CSSOMString FontFace::stretch() const {
    return emlite::Val::get("stretch").as<jsbind::CSSOMString>();
}

void FontFace::stretch(const jsbind::CSSOMString& value) {
    emlite::Val::set("stretch", value);
}

jsbind::CSSOMString FontFace::unicodeRange() const {
    return emlite::Val::get("unicodeRange").as<jsbind::CSSOMString>();
}

void FontFace::unicodeRange(const jsbind::CSSOMString& value) {
    emlite::Val::set("unicodeRange", value);
}

jsbind::CSSOMString FontFace::featureSettings() const {
    return emlite::Val::get("featureSettings").as<jsbind::CSSOMString>();
}

void FontFace::featureSettings(const jsbind::CSSOMString& value) {
    emlite::Val::set("featureSettings", value);
}

jsbind::CSSOMString FontFace::variationSettings() const {
    return emlite::Val::get("variationSettings").as<jsbind::CSSOMString>();
}

void FontFace::variationSettings(const jsbind::CSSOMString& value) {
    emlite::Val::set("variationSettings", value);
}

jsbind::CSSOMString FontFace::display() const {
    return emlite::Val::get("display").as<jsbind::CSSOMString>();
}

void FontFace::display(const jsbind::CSSOMString& value) {
    emlite::Val::set("display", value);
}

jsbind::CSSOMString FontFace::ascentOverride() const {
    return emlite::Val::get("ascentOverride").as<jsbind::CSSOMString>();
}

void FontFace::ascentOverride(const jsbind::CSSOMString& value) {
    emlite::Val::set("ascentOverride", value);
}

jsbind::CSSOMString FontFace::descentOverride() const {
    return emlite::Val::get("descentOverride").as<jsbind::CSSOMString>();
}

void FontFace::descentOverride(const jsbind::CSSOMString& value) {
    emlite::Val::set("descentOverride", value);
}

jsbind::CSSOMString FontFace::lineGapOverride() const {
    return emlite::Val::get("lineGapOverride").as<jsbind::CSSOMString>();
}

void FontFace::lineGapOverride(const jsbind::CSSOMString& value) {
    emlite::Val::set("lineGapOverride", value);
}

FontFaceLoadStatus FontFace::status() const {
    return emlite::Val::get("status").as<FontFaceLoadStatus>();
}

jsbind::Promise FontFace::load() {
    return emlite::Val::call("load").as<jsbind::Promise>();
}

jsbind::Promise FontFace::loaded() const {
    return emlite::Val::get("loaded").as<jsbind::Promise>();
}

FontFaceFeatures FontFace::features() const {
    return emlite::Val::get("features").as<FontFaceFeatures>();
}

FontFaceVariations FontFace::variations() const {
    return emlite::Val::get("variations").as<FontFaceVariations>();
}

FontFacePalettes FontFace::palettes() const {
    return emlite::Val::get("palettes").as<FontFacePalettes>();
}

