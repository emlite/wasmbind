#include <webbind/CSSFontFaceDescriptors.hpp>


CSSFontFaceDescriptors CSSFontFaceDescriptors::take_ownership(Handle h) noexcept {
        return CSSFontFaceDescriptors(h);
    }
CSSFontFaceDescriptors CSSFontFaceDescriptors::clone() const noexcept { return *this; }
CSSFontFaceDescriptors::CSSFontFaceDescriptors(Handle h) noexcept : CSSStyleDeclaration(emlite::Val::take_ownership(h)) {}
CSSFontFaceDescriptors::CSSFontFaceDescriptors(const emlite::Val &val) noexcept: CSSStyleDeclaration(val) {}


jsbind::CSSOMString CSSFontFaceDescriptors::src() const {
    return CSSStyleDeclaration::get("src").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::src(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("src", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::fontFamily() const {
    return CSSStyleDeclaration::get("fontFamily").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::fontFamily(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("fontFamily", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::font_family() const {
    return CSSStyleDeclaration::get("font-family").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::font_family(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("font-family", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::fontStyle() const {
    return CSSStyleDeclaration::get("fontStyle").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::fontStyle(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("fontStyle", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::font_style() const {
    return CSSStyleDeclaration::get("font-style").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::font_style(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("font-style", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::fontWeight() const {
    return CSSStyleDeclaration::get("fontWeight").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::fontWeight(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("fontWeight", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::font_weight() const {
    return CSSStyleDeclaration::get("font-weight").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::font_weight(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("font-weight", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::fontStretch() const {
    return CSSStyleDeclaration::get("fontStretch").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::fontStretch(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("fontStretch", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::font_stretch() const {
    return CSSStyleDeclaration::get("font-stretch").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::font_stretch(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("font-stretch", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::fontWidth() const {
    return CSSStyleDeclaration::get("fontWidth").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::fontWidth(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("fontWidth", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::font_width() const {
    return CSSStyleDeclaration::get("font-width").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::font_width(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("font-width", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::fontSize() const {
    return CSSStyleDeclaration::get("fontSize").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::fontSize(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("fontSize", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::font_size() const {
    return CSSStyleDeclaration::get("font-size").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::font_size(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("font-size", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::sizeAdjust() const {
    return CSSStyleDeclaration::get("sizeAdjust").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::sizeAdjust(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("sizeAdjust", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::size_adjust() const {
    return CSSStyleDeclaration::get("size-adjust").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::size_adjust(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("size-adjust", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::unicodeRange() const {
    return CSSStyleDeclaration::get("unicodeRange").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::unicodeRange(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("unicodeRange", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::unicode_range() const {
    return CSSStyleDeclaration::get("unicode-range").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::unicode_range(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("unicode-range", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::fontFeatureSettings() const {
    return CSSStyleDeclaration::get("fontFeatureSettings").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::fontFeatureSettings(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("fontFeatureSettings", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::font_feature_settings() const {
    return CSSStyleDeclaration::get("font-feature-settings").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::font_feature_settings(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("font-feature-settings", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::fontVariationSettings() const {
    return CSSStyleDeclaration::get("fontVariationSettings").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::fontVariationSettings(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("fontVariationSettings", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::font_variation_settings() const {
    return CSSStyleDeclaration::get("font-variation-settings").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::font_variation_settings(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("font-variation-settings", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::fontNamedInstance() const {
    return CSSStyleDeclaration::get("fontNamedInstance").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::fontNamedInstance(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("fontNamedInstance", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::font_named_instance() const {
    return CSSStyleDeclaration::get("font-named-instance").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::font_named_instance(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("font-named-instance", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::fontDisplay() const {
    return CSSStyleDeclaration::get("fontDisplay").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::fontDisplay(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("fontDisplay", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::font_display() const {
    return CSSStyleDeclaration::get("font-display").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::font_display(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("font-display", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::fontLanguageOverride() const {
    return CSSStyleDeclaration::get("fontLanguageOverride").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::fontLanguageOverride(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("fontLanguageOverride", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::font_language_override() const {
    return CSSStyleDeclaration::get("font-language-override").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::font_language_override(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("font-language-override", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::ascentOverride() const {
    return CSSStyleDeclaration::get("ascentOverride").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::ascentOverride(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("ascentOverride", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::ascent_override() const {
    return CSSStyleDeclaration::get("ascent-override").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::ascent_override(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("ascent-override", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::descentOverride() const {
    return CSSStyleDeclaration::get("descentOverride").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::descentOverride(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("descentOverride", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::descent_override() const {
    return CSSStyleDeclaration::get("descent-override").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::descent_override(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("descent-override", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::lineGapOverride() const {
    return CSSStyleDeclaration::get("lineGapOverride").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::lineGapOverride(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("lineGapOverride", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::line_gap_override() const {
    return CSSStyleDeclaration::get("line-gap-override").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::line_gap_override(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("line-gap-override", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::superscriptPositionOverride() const {
    return CSSStyleDeclaration::get("superscriptPositionOverride").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::superscriptPositionOverride(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("superscriptPositionOverride", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::superscript_position_override() const {
    return CSSStyleDeclaration::get("superscript-position-override").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::superscript_position_override(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("superscript-position-override", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::subscriptPositionOverride() const {
    return CSSStyleDeclaration::get("subscriptPositionOverride").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::subscriptPositionOverride(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("subscriptPositionOverride", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::subscript_position_override() const {
    return CSSStyleDeclaration::get("subscript-position-override").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::subscript_position_override(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("subscript-position-override", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::superscriptSizeOverride() const {
    return CSSStyleDeclaration::get("superscriptSizeOverride").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::superscriptSizeOverride(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("superscriptSizeOverride", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::superscript_size_override() const {
    return CSSStyleDeclaration::get("superscript-size-override").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::superscript_size_override(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("superscript-size-override", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::subscriptSizeOverride() const {
    return CSSStyleDeclaration::get("subscriptSizeOverride").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::subscriptSizeOverride(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("subscriptSizeOverride", value);
}

jsbind::CSSOMString CSSFontFaceDescriptors::subscript_size_override() const {
    return CSSStyleDeclaration::get("subscript-size-override").as<jsbind::CSSOMString>();
}

void CSSFontFaceDescriptors::subscript_size_override(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("subscript-size-override", value);
}

