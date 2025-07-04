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
    jsbind::CSSOMString src() const;
    void src(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fontFamily() const;
    void fontFamily(const jsbind::CSSOMString& value);
    jsbind::CSSOMString font_family() const;
    void font_family(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fontStyle() const;
    void fontStyle(const jsbind::CSSOMString& value);
    jsbind::CSSOMString font_style() const;
    void font_style(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fontWeight() const;
    void fontWeight(const jsbind::CSSOMString& value);
    jsbind::CSSOMString font_weight() const;
    void font_weight(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fontStretch() const;
    void fontStretch(const jsbind::CSSOMString& value);
    jsbind::CSSOMString font_stretch() const;
    void font_stretch(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fontWidth() const;
    void fontWidth(const jsbind::CSSOMString& value);
    jsbind::CSSOMString font_width() const;
    void font_width(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fontSize() const;
    void fontSize(const jsbind::CSSOMString& value);
    jsbind::CSSOMString font_size() const;
    void font_size(const jsbind::CSSOMString& value);
    jsbind::CSSOMString sizeAdjust() const;
    void sizeAdjust(const jsbind::CSSOMString& value);
    jsbind::CSSOMString size_adjust() const;
    void size_adjust(const jsbind::CSSOMString& value);
    jsbind::CSSOMString unicodeRange() const;
    void unicodeRange(const jsbind::CSSOMString& value);
    jsbind::CSSOMString unicode_range() const;
    void unicode_range(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fontFeatureSettings() const;
    void fontFeatureSettings(const jsbind::CSSOMString& value);
    jsbind::CSSOMString font_feature_settings() const;
    void font_feature_settings(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fontVariationSettings() const;
    void fontVariationSettings(const jsbind::CSSOMString& value);
    jsbind::CSSOMString font_variation_settings() const;
    void font_variation_settings(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fontNamedInstance() const;
    void fontNamedInstance(const jsbind::CSSOMString& value);
    jsbind::CSSOMString font_named_instance() const;
    void font_named_instance(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fontDisplay() const;
    void fontDisplay(const jsbind::CSSOMString& value);
    jsbind::CSSOMString font_display() const;
    void font_display(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fontLanguageOverride() const;
    void fontLanguageOverride(const jsbind::CSSOMString& value);
    jsbind::CSSOMString font_language_override() const;
    void font_language_override(const jsbind::CSSOMString& value);
    jsbind::CSSOMString ascentOverride() const;
    void ascentOverride(const jsbind::CSSOMString& value);
    jsbind::CSSOMString ascent_override() const;
    void ascent_override(const jsbind::CSSOMString& value);
    jsbind::CSSOMString descentOverride() const;
    void descentOverride(const jsbind::CSSOMString& value);
    jsbind::CSSOMString descent_override() const;
    void descent_override(const jsbind::CSSOMString& value);
    jsbind::CSSOMString lineGapOverride() const;
    void lineGapOverride(const jsbind::CSSOMString& value);
    jsbind::CSSOMString line_gap_override() const;
    void line_gap_override(const jsbind::CSSOMString& value);
    jsbind::CSSOMString superscriptPositionOverride() const;
    void superscriptPositionOverride(const jsbind::CSSOMString& value);
    jsbind::CSSOMString superscript_position_override() const;
    void superscript_position_override(const jsbind::CSSOMString& value);
    jsbind::CSSOMString subscriptPositionOverride() const;
    void subscriptPositionOverride(const jsbind::CSSOMString& value);
    jsbind::CSSOMString subscript_position_override() const;
    void subscript_position_override(const jsbind::CSSOMString& value);
    jsbind::CSSOMString superscriptSizeOverride() const;
    void superscriptSizeOverride(const jsbind::CSSOMString& value);
    jsbind::CSSOMString superscript_size_override() const;
    void superscript_size_override(const jsbind::CSSOMString& value);
    jsbind::CSSOMString subscriptSizeOverride() const;
    void subscriptSizeOverride(const jsbind::CSSOMString& value);
    jsbind::CSSOMString subscript_size_override() const;
    void subscript_size_override(const jsbind::CSSOMString& value);
};

