#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleDeclaration.hpp"
#include "enums.hpp"


class CSSFontFaceDescriptors : public CSSStyleDeclaration {
    explicit CSSFontFaceDescriptors(Handle h) noexcept;

public:
    explicit CSSFontFaceDescriptors(const emlite::Val &val) noexcept;
    static CSSFontFaceDescriptors take_ownership(Handle h) noexcept;

    CSSFontFaceDescriptors clone() const noexcept;
    jsbind::String src() const;
    void src(const jsbind::String& value);
    jsbind::String fontFamily() const;
    void fontFamily(const jsbind::String& value);
    jsbind::String font_family() const;
    void font_family(const jsbind::String& value);
    jsbind::String fontStyle() const;
    void fontStyle(const jsbind::String& value);
    jsbind::String font_style() const;
    void font_style(const jsbind::String& value);
    jsbind::String fontWeight() const;
    void fontWeight(const jsbind::String& value);
    jsbind::String font_weight() const;
    void font_weight(const jsbind::String& value);
    jsbind::String fontStretch() const;
    void fontStretch(const jsbind::String& value);
    jsbind::String font_stretch() const;
    void font_stretch(const jsbind::String& value);
    jsbind::String fontWidth() const;
    void fontWidth(const jsbind::String& value);
    jsbind::String font_width() const;
    void font_width(const jsbind::String& value);
    jsbind::String fontSize() const;
    void fontSize(const jsbind::String& value);
    jsbind::String font_size() const;
    void font_size(const jsbind::String& value);
    jsbind::String sizeAdjust() const;
    void sizeAdjust(const jsbind::String& value);
    jsbind::String size_adjust() const;
    void size_adjust(const jsbind::String& value);
    jsbind::String unicodeRange() const;
    void unicodeRange(const jsbind::String& value);
    jsbind::String unicode_range() const;
    void unicode_range(const jsbind::String& value);
    jsbind::String fontFeatureSettings() const;
    void fontFeatureSettings(const jsbind::String& value);
    jsbind::String font_feature_settings() const;
    void font_feature_settings(const jsbind::String& value);
    jsbind::String fontVariationSettings() const;
    void fontVariationSettings(const jsbind::String& value);
    jsbind::String font_variation_settings() const;
    void font_variation_settings(const jsbind::String& value);
    jsbind::String fontNamedInstance() const;
    void fontNamedInstance(const jsbind::String& value);
    jsbind::String font_named_instance() const;
    void font_named_instance(const jsbind::String& value);
    jsbind::String fontDisplay() const;
    void fontDisplay(const jsbind::String& value);
    jsbind::String font_display() const;
    void font_display(const jsbind::String& value);
    jsbind::String fontLanguageOverride() const;
    void fontLanguageOverride(const jsbind::String& value);
    jsbind::String font_language_override() const;
    void font_language_override(const jsbind::String& value);
    jsbind::String ascentOverride() const;
    void ascentOverride(const jsbind::String& value);
    jsbind::String ascent_override() const;
    void ascent_override(const jsbind::String& value);
    jsbind::String descentOverride() const;
    void descentOverride(const jsbind::String& value);
    jsbind::String descent_override() const;
    void descent_override(const jsbind::String& value);
    jsbind::String lineGapOverride() const;
    void lineGapOverride(const jsbind::String& value);
    jsbind::String line_gap_override() const;
    void line_gap_override(const jsbind::String& value);
    jsbind::String superscriptPositionOverride() const;
    void superscriptPositionOverride(const jsbind::String& value);
    jsbind::String superscript_position_override() const;
    void superscript_position_override(const jsbind::String& value);
    jsbind::String subscriptPositionOverride() const;
    void subscriptPositionOverride(const jsbind::String& value);
    jsbind::String subscript_position_override() const;
    void subscript_position_override(const jsbind::String& value);
    jsbind::String superscriptSizeOverride() const;
    void superscriptSizeOverride(const jsbind::String& value);
    jsbind::String superscript_size_override() const;
    void superscript_size_override(const jsbind::String& value);
    jsbind::String subscriptSizeOverride() const;
    void subscriptSizeOverride(const jsbind::String& value);
    jsbind::String subscript_size_override() const;
    void subscript_size_override(const jsbind::String& value);
};

