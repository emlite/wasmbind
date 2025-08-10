#include "webbind/CSSFontFaceDescriptors.hpp"

namespace webbind {

CSSFontFaceDescriptors CSSFontFaceDescriptors::take_ownership(Handle h) noexcept {
        return CSSFontFaceDescriptors(h);
    }
CSSFontFaceDescriptors CSSFontFaceDescriptors::clone() const noexcept { return *this; }
emlite::Val CSSFontFaceDescriptors::instance() noexcept { return emlite::Val::global("CSSFontFaceDescriptors"); }
CSSFontFaceDescriptors::CSSFontFaceDescriptors(Handle h) noexcept : CSSStyleDeclaration(emlite::Val::take_ownership(h)) {}
CSSFontFaceDescriptors::CSSFontFaceDescriptors(const emlite::Val &val) noexcept: CSSStyleDeclaration(val) {}

jsbind::String CSSFontFaceDescriptors::src() const {
    return CSSStyleDeclaration::get("src").as<jsbind::String>();
}

void CSSFontFaceDescriptors::src(const jsbind::String& value) {
    CSSStyleDeclaration::set("src", value);
}

jsbind::String CSSFontFaceDescriptors::fontFamily() const {
    return CSSStyleDeclaration::get("fontFamily").as<jsbind::String>();
}

void CSSFontFaceDescriptors::fontFamily(const jsbind::String& value) {
    CSSStyleDeclaration::set("fontFamily", value);
}

jsbind::String CSSFontFaceDescriptors::font_family() const {
    return CSSStyleDeclaration::get("font-family").as<jsbind::String>();
}

void CSSFontFaceDescriptors::font_family(const jsbind::String& value) {
    CSSStyleDeclaration::set("font-family", value);
}

jsbind::String CSSFontFaceDescriptors::fontStyle() const {
    return CSSStyleDeclaration::get("fontStyle").as<jsbind::String>();
}

void CSSFontFaceDescriptors::fontStyle(const jsbind::String& value) {
    CSSStyleDeclaration::set("fontStyle", value);
}

jsbind::String CSSFontFaceDescriptors::font_style() const {
    return CSSStyleDeclaration::get("font-style").as<jsbind::String>();
}

void CSSFontFaceDescriptors::font_style(const jsbind::String& value) {
    CSSStyleDeclaration::set("font-style", value);
}

jsbind::String CSSFontFaceDescriptors::fontWeight() const {
    return CSSStyleDeclaration::get("fontWeight").as<jsbind::String>();
}

void CSSFontFaceDescriptors::fontWeight(const jsbind::String& value) {
    CSSStyleDeclaration::set("fontWeight", value);
}

jsbind::String CSSFontFaceDescriptors::font_weight() const {
    return CSSStyleDeclaration::get("font-weight").as<jsbind::String>();
}

void CSSFontFaceDescriptors::font_weight(const jsbind::String& value) {
    CSSStyleDeclaration::set("font-weight", value);
}

jsbind::String CSSFontFaceDescriptors::fontStretch() const {
    return CSSStyleDeclaration::get("fontStretch").as<jsbind::String>();
}

void CSSFontFaceDescriptors::fontStretch(const jsbind::String& value) {
    CSSStyleDeclaration::set("fontStretch", value);
}

jsbind::String CSSFontFaceDescriptors::font_stretch() const {
    return CSSStyleDeclaration::get("font-stretch").as<jsbind::String>();
}

void CSSFontFaceDescriptors::font_stretch(const jsbind::String& value) {
    CSSStyleDeclaration::set("font-stretch", value);
}

jsbind::String CSSFontFaceDescriptors::fontWidth() const {
    return CSSStyleDeclaration::get("fontWidth").as<jsbind::String>();
}

void CSSFontFaceDescriptors::fontWidth(const jsbind::String& value) {
    CSSStyleDeclaration::set("fontWidth", value);
}

jsbind::String CSSFontFaceDescriptors::font_width() const {
    return CSSStyleDeclaration::get("font-width").as<jsbind::String>();
}

void CSSFontFaceDescriptors::font_width(const jsbind::String& value) {
    CSSStyleDeclaration::set("font-width", value);
}

jsbind::String CSSFontFaceDescriptors::fontSize() const {
    return CSSStyleDeclaration::get("fontSize").as<jsbind::String>();
}

void CSSFontFaceDescriptors::fontSize(const jsbind::String& value) {
    CSSStyleDeclaration::set("fontSize", value);
}

jsbind::String CSSFontFaceDescriptors::font_size() const {
    return CSSStyleDeclaration::get("font-size").as<jsbind::String>();
}

void CSSFontFaceDescriptors::font_size(const jsbind::String& value) {
    CSSStyleDeclaration::set("font-size", value);
}

jsbind::String CSSFontFaceDescriptors::sizeAdjust() const {
    return CSSStyleDeclaration::get("sizeAdjust").as<jsbind::String>();
}

void CSSFontFaceDescriptors::sizeAdjust(const jsbind::String& value) {
    CSSStyleDeclaration::set("sizeAdjust", value);
}

jsbind::String CSSFontFaceDescriptors::size_adjust() const {
    return CSSStyleDeclaration::get("size-adjust").as<jsbind::String>();
}

void CSSFontFaceDescriptors::size_adjust(const jsbind::String& value) {
    CSSStyleDeclaration::set("size-adjust", value);
}

jsbind::String CSSFontFaceDescriptors::unicodeRange() const {
    return CSSStyleDeclaration::get("unicodeRange").as<jsbind::String>();
}

void CSSFontFaceDescriptors::unicodeRange(const jsbind::String& value) {
    CSSStyleDeclaration::set("unicodeRange", value);
}

jsbind::String CSSFontFaceDescriptors::unicode_range() const {
    return CSSStyleDeclaration::get("unicode-range").as<jsbind::String>();
}

void CSSFontFaceDescriptors::unicode_range(const jsbind::String& value) {
    CSSStyleDeclaration::set("unicode-range", value);
}

jsbind::String CSSFontFaceDescriptors::fontFeatureSettings() const {
    return CSSStyleDeclaration::get("fontFeatureSettings").as<jsbind::String>();
}

void CSSFontFaceDescriptors::fontFeatureSettings(const jsbind::String& value) {
    CSSStyleDeclaration::set("fontFeatureSettings", value);
}

jsbind::String CSSFontFaceDescriptors::font_feature_settings() const {
    return CSSStyleDeclaration::get("font-feature-settings").as<jsbind::String>();
}

void CSSFontFaceDescriptors::font_feature_settings(const jsbind::String& value) {
    CSSStyleDeclaration::set("font-feature-settings", value);
}

jsbind::String CSSFontFaceDescriptors::fontVariationSettings() const {
    return CSSStyleDeclaration::get("fontVariationSettings").as<jsbind::String>();
}

void CSSFontFaceDescriptors::fontVariationSettings(const jsbind::String& value) {
    CSSStyleDeclaration::set("fontVariationSettings", value);
}

jsbind::String CSSFontFaceDescriptors::font_variation_settings() const {
    return CSSStyleDeclaration::get("font-variation-settings").as<jsbind::String>();
}

void CSSFontFaceDescriptors::font_variation_settings(const jsbind::String& value) {
    CSSStyleDeclaration::set("font-variation-settings", value);
}

jsbind::String CSSFontFaceDescriptors::fontNamedInstance() const {
    return CSSStyleDeclaration::get("fontNamedInstance").as<jsbind::String>();
}

void CSSFontFaceDescriptors::fontNamedInstance(const jsbind::String& value) {
    CSSStyleDeclaration::set("fontNamedInstance", value);
}

jsbind::String CSSFontFaceDescriptors::font_named_instance() const {
    return CSSStyleDeclaration::get("font-named-instance").as<jsbind::String>();
}

void CSSFontFaceDescriptors::font_named_instance(const jsbind::String& value) {
    CSSStyleDeclaration::set("font-named-instance", value);
}

jsbind::String CSSFontFaceDescriptors::fontDisplay() const {
    return CSSStyleDeclaration::get("fontDisplay").as<jsbind::String>();
}

void CSSFontFaceDescriptors::fontDisplay(const jsbind::String& value) {
    CSSStyleDeclaration::set("fontDisplay", value);
}

jsbind::String CSSFontFaceDescriptors::font_display() const {
    return CSSStyleDeclaration::get("font-display").as<jsbind::String>();
}

void CSSFontFaceDescriptors::font_display(const jsbind::String& value) {
    CSSStyleDeclaration::set("font-display", value);
}

jsbind::String CSSFontFaceDescriptors::fontLanguageOverride() const {
    return CSSStyleDeclaration::get("fontLanguageOverride").as<jsbind::String>();
}

void CSSFontFaceDescriptors::fontLanguageOverride(const jsbind::String& value) {
    CSSStyleDeclaration::set("fontLanguageOverride", value);
}

jsbind::String CSSFontFaceDescriptors::font_language_override() const {
    return CSSStyleDeclaration::get("font-language-override").as<jsbind::String>();
}

void CSSFontFaceDescriptors::font_language_override(const jsbind::String& value) {
    CSSStyleDeclaration::set("font-language-override", value);
}

jsbind::String CSSFontFaceDescriptors::ascentOverride() const {
    return CSSStyleDeclaration::get("ascentOverride").as<jsbind::String>();
}

void CSSFontFaceDescriptors::ascentOverride(const jsbind::String& value) {
    CSSStyleDeclaration::set("ascentOverride", value);
}

jsbind::String CSSFontFaceDescriptors::ascent_override() const {
    return CSSStyleDeclaration::get("ascent-override").as<jsbind::String>();
}

void CSSFontFaceDescriptors::ascent_override(const jsbind::String& value) {
    CSSStyleDeclaration::set("ascent-override", value);
}

jsbind::String CSSFontFaceDescriptors::descentOverride() const {
    return CSSStyleDeclaration::get("descentOverride").as<jsbind::String>();
}

void CSSFontFaceDescriptors::descentOverride(const jsbind::String& value) {
    CSSStyleDeclaration::set("descentOverride", value);
}

jsbind::String CSSFontFaceDescriptors::descent_override() const {
    return CSSStyleDeclaration::get("descent-override").as<jsbind::String>();
}

void CSSFontFaceDescriptors::descent_override(const jsbind::String& value) {
    CSSStyleDeclaration::set("descent-override", value);
}

jsbind::String CSSFontFaceDescriptors::lineGapOverride() const {
    return CSSStyleDeclaration::get("lineGapOverride").as<jsbind::String>();
}

void CSSFontFaceDescriptors::lineGapOverride(const jsbind::String& value) {
    CSSStyleDeclaration::set("lineGapOverride", value);
}

jsbind::String CSSFontFaceDescriptors::line_gap_override() const {
    return CSSStyleDeclaration::get("line-gap-override").as<jsbind::String>();
}

void CSSFontFaceDescriptors::line_gap_override(const jsbind::String& value) {
    CSSStyleDeclaration::set("line-gap-override", value);
}

jsbind::String CSSFontFaceDescriptors::superscriptPositionOverride() const {
    return CSSStyleDeclaration::get("superscriptPositionOverride").as<jsbind::String>();
}

void CSSFontFaceDescriptors::superscriptPositionOverride(const jsbind::String& value) {
    CSSStyleDeclaration::set("superscriptPositionOverride", value);
}

jsbind::String CSSFontFaceDescriptors::superscript_position_override() const {
    return CSSStyleDeclaration::get("superscript-position-override").as<jsbind::String>();
}

void CSSFontFaceDescriptors::superscript_position_override(const jsbind::String& value) {
    CSSStyleDeclaration::set("superscript-position-override", value);
}

jsbind::String CSSFontFaceDescriptors::subscriptPositionOverride() const {
    return CSSStyleDeclaration::get("subscriptPositionOverride").as<jsbind::String>();
}

void CSSFontFaceDescriptors::subscriptPositionOverride(const jsbind::String& value) {
    CSSStyleDeclaration::set("subscriptPositionOverride", value);
}

jsbind::String CSSFontFaceDescriptors::subscript_position_override() const {
    return CSSStyleDeclaration::get("subscript-position-override").as<jsbind::String>();
}

void CSSFontFaceDescriptors::subscript_position_override(const jsbind::String& value) {
    CSSStyleDeclaration::set("subscript-position-override", value);
}

jsbind::String CSSFontFaceDescriptors::superscriptSizeOverride() const {
    return CSSStyleDeclaration::get("superscriptSizeOverride").as<jsbind::String>();
}

void CSSFontFaceDescriptors::superscriptSizeOverride(const jsbind::String& value) {
    CSSStyleDeclaration::set("superscriptSizeOverride", value);
}

jsbind::String CSSFontFaceDescriptors::superscript_size_override() const {
    return CSSStyleDeclaration::get("superscript-size-override").as<jsbind::String>();
}

void CSSFontFaceDescriptors::superscript_size_override(const jsbind::String& value) {
    CSSStyleDeclaration::set("superscript-size-override", value);
}

jsbind::String CSSFontFaceDescriptors::subscriptSizeOverride() const {
    return CSSStyleDeclaration::get("subscriptSizeOverride").as<jsbind::String>();
}

void CSSFontFaceDescriptors::subscriptSizeOverride(const jsbind::String& value) {
    CSSStyleDeclaration::set("subscriptSizeOverride", value);
}

jsbind::String CSSFontFaceDescriptors::subscript_size_override() const {
    return CSSStyleDeclaration::get("subscript-size-override").as<jsbind::String>();
}

void CSSFontFaceDescriptors::subscript_size_override(const jsbind::String& value) {
    CSSStyleDeclaration::set("subscript-size-override", value);
}


} // namespace webbind