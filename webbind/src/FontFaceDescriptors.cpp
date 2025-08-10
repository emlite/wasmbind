#include "webbind/FontFaceDescriptors.hpp"

using emlite::Val;
namespace webbind {

FontFaceDescriptors::FontFaceDescriptors(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FontFaceDescriptors FontFaceDescriptors::take_ownership(Handle h) noexcept {
        return FontFaceDescriptors(h);
    }
FontFaceDescriptors::FontFaceDescriptors(const emlite::Val &val) noexcept: emlite::Val(val) {}
FontFaceDescriptors::FontFaceDescriptors() noexcept: emlite::Val(emlite::Val::object()) {}
FontFaceDescriptors FontFaceDescriptors::clone() const noexcept { return *this; }

jsbind::String FontFaceDescriptors::style() const {
    return emlite::Val::get("style").as<jsbind::String>();
}

void FontFaceDescriptors::style(const jsbind::String& value) {
    emlite::Val::set("style", value);
}

jsbind::String FontFaceDescriptors::weight() const {
    return emlite::Val::get("weight").as<jsbind::String>();
}

void FontFaceDescriptors::weight(const jsbind::String& value) {
    emlite::Val::set("weight", value);
}

jsbind::String FontFaceDescriptors::stretch() const {
    return emlite::Val::get("stretch").as<jsbind::String>();
}

void FontFaceDescriptors::stretch(const jsbind::String& value) {
    emlite::Val::set("stretch", value);
}

jsbind::String FontFaceDescriptors::unicodeRange() const {
    return emlite::Val::get("unicodeRange").as<jsbind::String>();
}

void FontFaceDescriptors::unicodeRange(const jsbind::String& value) {
    emlite::Val::set("unicodeRange", value);
}

jsbind::String FontFaceDescriptors::featureSettings() const {
    return emlite::Val::get("featureSettings").as<jsbind::String>();
}

void FontFaceDescriptors::featureSettings(const jsbind::String& value) {
    emlite::Val::set("featureSettings", value);
}

jsbind::String FontFaceDescriptors::variationSettings() const {
    return emlite::Val::get("variationSettings").as<jsbind::String>();
}

void FontFaceDescriptors::variationSettings(const jsbind::String& value) {
    emlite::Val::set("variationSettings", value);
}

jsbind::String FontFaceDescriptors::display() const {
    return emlite::Val::get("display").as<jsbind::String>();
}

void FontFaceDescriptors::display(const jsbind::String& value) {
    emlite::Val::set("display", value);
}

jsbind::String FontFaceDescriptors::ascentOverride() const {
    return emlite::Val::get("ascentOverride").as<jsbind::String>();
}

void FontFaceDescriptors::ascentOverride(const jsbind::String& value) {
    emlite::Val::set("ascentOverride", value);
}

jsbind::String FontFaceDescriptors::descentOverride() const {
    return emlite::Val::get("descentOverride").as<jsbind::String>();
}

void FontFaceDescriptors::descentOverride(const jsbind::String& value) {
    emlite::Val::set("descentOverride", value);
}

jsbind::String FontFaceDescriptors::lineGapOverride() const {
    return emlite::Val::get("lineGapOverride").as<jsbind::String>();
}

void FontFaceDescriptors::lineGapOverride(const jsbind::String& value) {
    emlite::Val::set("lineGapOverride", value);
}


} // namespace webbind