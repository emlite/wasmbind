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


FontFace::FontFace(const jsbind::String& family, const jsbind::Any& source) : emlite::Val(emlite::Val::global("FontFace").new_(family, source)) {}

FontFace::FontFace(const jsbind::String& family, const jsbind::Any& source, const jsbind::Any& descriptors) : emlite::Val(emlite::Val::global("FontFace").new_(family, source, descriptors)) {}

jsbind::String FontFace::family() const {
    return emlite::Val::get("family").as<jsbind::String>();
}

void FontFace::family(const jsbind::String& value) {
    emlite::Val::set("family", value);
}

jsbind::String FontFace::style() const {
    return emlite::Val::get("style").as<jsbind::String>();
}

void FontFace::style(const jsbind::String& value) {
    emlite::Val::set("style", value);
}

jsbind::String FontFace::weight() const {
    return emlite::Val::get("weight").as<jsbind::String>();
}

void FontFace::weight(const jsbind::String& value) {
    emlite::Val::set("weight", value);
}

jsbind::String FontFace::stretch() const {
    return emlite::Val::get("stretch").as<jsbind::String>();
}

void FontFace::stretch(const jsbind::String& value) {
    emlite::Val::set("stretch", value);
}

jsbind::String FontFace::unicodeRange() const {
    return emlite::Val::get("unicodeRange").as<jsbind::String>();
}

void FontFace::unicodeRange(const jsbind::String& value) {
    emlite::Val::set("unicodeRange", value);
}

jsbind::String FontFace::featureSettings() const {
    return emlite::Val::get("featureSettings").as<jsbind::String>();
}

void FontFace::featureSettings(const jsbind::String& value) {
    emlite::Val::set("featureSettings", value);
}

jsbind::String FontFace::variationSettings() const {
    return emlite::Val::get("variationSettings").as<jsbind::String>();
}

void FontFace::variationSettings(const jsbind::String& value) {
    emlite::Val::set("variationSettings", value);
}

jsbind::String FontFace::display() const {
    return emlite::Val::get("display").as<jsbind::String>();
}

void FontFace::display(const jsbind::String& value) {
    emlite::Val::set("display", value);
}

jsbind::String FontFace::ascentOverride() const {
    return emlite::Val::get("ascentOverride").as<jsbind::String>();
}

void FontFace::ascentOverride(const jsbind::String& value) {
    emlite::Val::set("ascentOverride", value);
}

jsbind::String FontFace::descentOverride() const {
    return emlite::Val::get("descentOverride").as<jsbind::String>();
}

void FontFace::descentOverride(const jsbind::String& value) {
    emlite::Val::set("descentOverride", value);
}

jsbind::String FontFace::lineGapOverride() const {
    return emlite::Val::get("lineGapOverride").as<jsbind::String>();
}

void FontFace::lineGapOverride(const jsbind::String& value) {
    emlite::Val::set("lineGapOverride", value);
}

FontFaceLoadStatus FontFace::status() const {
    return emlite::Val::get("status").as<FontFaceLoadStatus>();
}

jsbind::Promise<FontFace> FontFace::load() {
    return emlite::Val::call("load").as<jsbind::Promise<FontFace>>();
}

jsbind::Promise<FontFace> FontFace::loaded() const {
    return emlite::Val::get("loaded").as<jsbind::Promise<FontFace>>();
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

