#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSStyleDeclaration.hpp"

namespace webbind {

/// Interface CSSFontFaceDescriptors
/// [`CSSFontFaceDescriptors`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors)
class CSSFontFaceDescriptors : public CSSStyleDeclaration {
    explicit CSSFontFaceDescriptors(Handle h) noexcept;
public:
    explicit CSSFontFaceDescriptors(const emlite::Val &val) noexcept;
    static CSSFontFaceDescriptors take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSFontFaceDescriptors clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSFontFaceDescriptors.src`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/src)
    /// [`CSSFontFaceDescriptors.src`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`CSSFontFaceDescriptors.src`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/src)
    void src(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.fontFamily`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontFamily)
    /// [`CSSFontFaceDescriptors.fontFamily`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontFamily)
    [[nodiscard]] jsbind::String fontFamily() const;
    /// Setter of the `fontFamily` attribute.
    /// [`CSSFontFaceDescriptors.fontFamily`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontFamily)
    void fontFamily(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.font-family`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-family)
    /// [`CSSFontFaceDescriptors.font-family`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-family)
    [[nodiscard]] jsbind::String font_family() const;
    /// Setter of the `font-family` attribute.
    /// [`CSSFontFaceDescriptors.font-family`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-family)
    void font_family(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.fontStyle`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontStyle)
    /// [`CSSFontFaceDescriptors.fontStyle`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontStyle)
    [[nodiscard]] jsbind::String fontStyle() const;
    /// Setter of the `fontStyle` attribute.
    /// [`CSSFontFaceDescriptors.fontStyle`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontStyle)
    void fontStyle(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.font-style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-style)
    /// [`CSSFontFaceDescriptors.font-style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-style)
    [[nodiscard]] jsbind::String font_style() const;
    /// Setter of the `font-style` attribute.
    /// [`CSSFontFaceDescriptors.font-style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-style)
    void font_style(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.fontWeight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontWeight)
    /// [`CSSFontFaceDescriptors.fontWeight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontWeight)
    [[nodiscard]] jsbind::String fontWeight() const;
    /// Setter of the `fontWeight` attribute.
    /// [`CSSFontFaceDescriptors.fontWeight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontWeight)
    void fontWeight(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.font-weight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-weight)
    /// [`CSSFontFaceDescriptors.font-weight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-weight)
    [[nodiscard]] jsbind::String font_weight() const;
    /// Setter of the `font-weight` attribute.
    /// [`CSSFontFaceDescriptors.font-weight`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-weight)
    void font_weight(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.fontStretch`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontStretch)
    /// [`CSSFontFaceDescriptors.fontStretch`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontStretch)
    [[nodiscard]] jsbind::String fontStretch() const;
    /// Setter of the `fontStretch` attribute.
    /// [`CSSFontFaceDescriptors.fontStretch`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontStretch)
    void fontStretch(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.font-stretch`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-stretch)
    /// [`CSSFontFaceDescriptors.font-stretch`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-stretch)
    [[nodiscard]] jsbind::String font_stretch() const;
    /// Setter of the `font-stretch` attribute.
    /// [`CSSFontFaceDescriptors.font-stretch`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-stretch)
    void font_stretch(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.fontWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontWidth)
    /// [`CSSFontFaceDescriptors.fontWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontWidth)
    [[nodiscard]] jsbind::String fontWidth() const;
    /// Setter of the `fontWidth` attribute.
    /// [`CSSFontFaceDescriptors.fontWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontWidth)
    void fontWidth(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.font-width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-width)
    /// [`CSSFontFaceDescriptors.font-width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-width)
    [[nodiscard]] jsbind::String font_width() const;
    /// Setter of the `font-width` attribute.
    /// [`CSSFontFaceDescriptors.font-width`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-width)
    void font_width(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.fontSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontSize)
    /// [`CSSFontFaceDescriptors.fontSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontSize)
    [[nodiscard]] jsbind::String fontSize() const;
    /// Setter of the `fontSize` attribute.
    /// [`CSSFontFaceDescriptors.fontSize`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontSize)
    void fontSize(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.font-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-size)
    /// [`CSSFontFaceDescriptors.font-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-size)
    [[nodiscard]] jsbind::String font_size() const;
    /// Setter of the `font-size` attribute.
    /// [`CSSFontFaceDescriptors.font-size`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-size)
    void font_size(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.sizeAdjust`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/sizeAdjust)
    /// [`CSSFontFaceDescriptors.sizeAdjust`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/sizeAdjust)
    [[nodiscard]] jsbind::String sizeAdjust() const;
    /// Setter of the `sizeAdjust` attribute.
    /// [`CSSFontFaceDescriptors.sizeAdjust`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/sizeAdjust)
    void sizeAdjust(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.size-adjust`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/size-adjust)
    /// [`CSSFontFaceDescriptors.size-adjust`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/size-adjust)
    [[nodiscard]] jsbind::String size_adjust() const;
    /// Setter of the `size-adjust` attribute.
    /// [`CSSFontFaceDescriptors.size-adjust`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/size-adjust)
    void size_adjust(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.unicodeRange`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/unicodeRange)
    /// [`CSSFontFaceDescriptors.unicodeRange`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/unicodeRange)
    [[nodiscard]] jsbind::String unicodeRange() const;
    /// Setter of the `unicodeRange` attribute.
    /// [`CSSFontFaceDescriptors.unicodeRange`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/unicodeRange)
    void unicodeRange(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.unicode-range`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/unicode-range)
    /// [`CSSFontFaceDescriptors.unicode-range`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/unicode-range)
    [[nodiscard]] jsbind::String unicode_range() const;
    /// Setter of the `unicode-range` attribute.
    /// [`CSSFontFaceDescriptors.unicode-range`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/unicode-range)
    void unicode_range(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.fontFeatureSettings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontFeatureSettings)
    /// [`CSSFontFaceDescriptors.fontFeatureSettings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontFeatureSettings)
    [[nodiscard]] jsbind::String fontFeatureSettings() const;
    /// Setter of the `fontFeatureSettings` attribute.
    /// [`CSSFontFaceDescriptors.fontFeatureSettings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontFeatureSettings)
    void fontFeatureSettings(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.font-feature-settings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-feature-settings)
    /// [`CSSFontFaceDescriptors.font-feature-settings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-feature-settings)
    [[nodiscard]] jsbind::String font_feature_settings() const;
    /// Setter of the `font-feature-settings` attribute.
    /// [`CSSFontFaceDescriptors.font-feature-settings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-feature-settings)
    void font_feature_settings(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.fontVariationSettings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontVariationSettings)
    /// [`CSSFontFaceDescriptors.fontVariationSettings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontVariationSettings)
    [[nodiscard]] jsbind::String fontVariationSettings() const;
    /// Setter of the `fontVariationSettings` attribute.
    /// [`CSSFontFaceDescriptors.fontVariationSettings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontVariationSettings)
    void fontVariationSettings(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.font-variation-settings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-variation-settings)
    /// [`CSSFontFaceDescriptors.font-variation-settings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-variation-settings)
    [[nodiscard]] jsbind::String font_variation_settings() const;
    /// Setter of the `font-variation-settings` attribute.
    /// [`CSSFontFaceDescriptors.font-variation-settings`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-variation-settings)
    void font_variation_settings(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.fontNamedInstance`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontNamedInstance)
    /// [`CSSFontFaceDescriptors.fontNamedInstance`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontNamedInstance)
    [[nodiscard]] jsbind::String fontNamedInstance() const;
    /// Setter of the `fontNamedInstance` attribute.
    /// [`CSSFontFaceDescriptors.fontNamedInstance`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontNamedInstance)
    void fontNamedInstance(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.font-named-instance`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-named-instance)
    /// [`CSSFontFaceDescriptors.font-named-instance`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-named-instance)
    [[nodiscard]] jsbind::String font_named_instance() const;
    /// Setter of the `font-named-instance` attribute.
    /// [`CSSFontFaceDescriptors.font-named-instance`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-named-instance)
    void font_named_instance(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.fontDisplay`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontDisplay)
    /// [`CSSFontFaceDescriptors.fontDisplay`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontDisplay)
    [[nodiscard]] jsbind::String fontDisplay() const;
    /// Setter of the `fontDisplay` attribute.
    /// [`CSSFontFaceDescriptors.fontDisplay`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontDisplay)
    void fontDisplay(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.font-display`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-display)
    /// [`CSSFontFaceDescriptors.font-display`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-display)
    [[nodiscard]] jsbind::String font_display() const;
    /// Setter of the `font-display` attribute.
    /// [`CSSFontFaceDescriptors.font-display`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-display)
    void font_display(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.fontLanguageOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontLanguageOverride)
    /// [`CSSFontFaceDescriptors.fontLanguageOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontLanguageOverride)
    [[nodiscard]] jsbind::String fontLanguageOverride() const;
    /// Setter of the `fontLanguageOverride` attribute.
    /// [`CSSFontFaceDescriptors.fontLanguageOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/fontLanguageOverride)
    void fontLanguageOverride(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.font-language-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-language-override)
    /// [`CSSFontFaceDescriptors.font-language-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-language-override)
    [[nodiscard]] jsbind::String font_language_override() const;
    /// Setter of the `font-language-override` attribute.
    /// [`CSSFontFaceDescriptors.font-language-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/font-language-override)
    void font_language_override(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.ascentOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/ascentOverride)
    /// [`CSSFontFaceDescriptors.ascentOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/ascentOverride)
    [[nodiscard]] jsbind::String ascentOverride() const;
    /// Setter of the `ascentOverride` attribute.
    /// [`CSSFontFaceDescriptors.ascentOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/ascentOverride)
    void ascentOverride(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.ascent-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/ascent-override)
    /// [`CSSFontFaceDescriptors.ascent-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/ascent-override)
    [[nodiscard]] jsbind::String ascent_override() const;
    /// Setter of the `ascent-override` attribute.
    /// [`CSSFontFaceDescriptors.ascent-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/ascent-override)
    void ascent_override(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.descentOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/descentOverride)
    /// [`CSSFontFaceDescriptors.descentOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/descentOverride)
    [[nodiscard]] jsbind::String descentOverride() const;
    /// Setter of the `descentOverride` attribute.
    /// [`CSSFontFaceDescriptors.descentOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/descentOverride)
    void descentOverride(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.descent-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/descent-override)
    /// [`CSSFontFaceDescriptors.descent-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/descent-override)
    [[nodiscard]] jsbind::String descent_override() const;
    /// Setter of the `descent-override` attribute.
    /// [`CSSFontFaceDescriptors.descent-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/descent-override)
    void descent_override(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.lineGapOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/lineGapOverride)
    /// [`CSSFontFaceDescriptors.lineGapOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/lineGapOverride)
    [[nodiscard]] jsbind::String lineGapOverride() const;
    /// Setter of the `lineGapOverride` attribute.
    /// [`CSSFontFaceDescriptors.lineGapOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/lineGapOverride)
    void lineGapOverride(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.line-gap-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/line-gap-override)
    /// [`CSSFontFaceDescriptors.line-gap-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/line-gap-override)
    [[nodiscard]] jsbind::String line_gap_override() const;
    /// Setter of the `line-gap-override` attribute.
    /// [`CSSFontFaceDescriptors.line-gap-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/line-gap-override)
    void line_gap_override(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.superscriptPositionOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscriptPositionOverride)
    /// [`CSSFontFaceDescriptors.superscriptPositionOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscriptPositionOverride)
    [[nodiscard]] jsbind::String superscriptPositionOverride() const;
    /// Setter of the `superscriptPositionOverride` attribute.
    /// [`CSSFontFaceDescriptors.superscriptPositionOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscriptPositionOverride)
    void superscriptPositionOverride(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.superscript-position-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscript-position-override)
    /// [`CSSFontFaceDescriptors.superscript-position-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscript-position-override)
    [[nodiscard]] jsbind::String superscript_position_override() const;
    /// Setter of the `superscript-position-override` attribute.
    /// [`CSSFontFaceDescriptors.superscript-position-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscript-position-override)
    void superscript_position_override(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.subscriptPositionOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscriptPositionOverride)
    /// [`CSSFontFaceDescriptors.subscriptPositionOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscriptPositionOverride)
    [[nodiscard]] jsbind::String subscriptPositionOverride() const;
    /// Setter of the `subscriptPositionOverride` attribute.
    /// [`CSSFontFaceDescriptors.subscriptPositionOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscriptPositionOverride)
    void subscriptPositionOverride(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.subscript-position-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscript-position-override)
    /// [`CSSFontFaceDescriptors.subscript-position-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscript-position-override)
    [[nodiscard]] jsbind::String subscript_position_override() const;
    /// Setter of the `subscript-position-override` attribute.
    /// [`CSSFontFaceDescriptors.subscript-position-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscript-position-override)
    void subscript_position_override(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.superscriptSizeOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscriptSizeOverride)
    /// [`CSSFontFaceDescriptors.superscriptSizeOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscriptSizeOverride)
    [[nodiscard]] jsbind::String superscriptSizeOverride() const;
    /// Setter of the `superscriptSizeOverride` attribute.
    /// [`CSSFontFaceDescriptors.superscriptSizeOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscriptSizeOverride)
    void superscriptSizeOverride(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.superscript-size-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscript-size-override)
    /// [`CSSFontFaceDescriptors.superscript-size-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscript-size-override)
    [[nodiscard]] jsbind::String superscript_size_override() const;
    /// Setter of the `superscript-size-override` attribute.
    /// [`CSSFontFaceDescriptors.superscript-size-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/superscript-size-override)
    void superscript_size_override(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.subscriptSizeOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscriptSizeOverride)
    /// [`CSSFontFaceDescriptors.subscriptSizeOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscriptSizeOverride)
    [[nodiscard]] jsbind::String subscriptSizeOverride() const;
    /// Setter of the `subscriptSizeOverride` attribute.
    /// [`CSSFontFaceDescriptors.subscriptSizeOverride`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscriptSizeOverride)
    void subscriptSizeOverride(const jsbind::String& value);
    /// [`CSSFontFaceDescriptors.subscript-size-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscript-size-override)
    /// [`CSSFontFaceDescriptors.subscript-size-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscript-size-override)
    [[nodiscard]] jsbind::String subscript_size_override() const;
    /// Setter of the `subscript-size-override` attribute.
    /// [`CSSFontFaceDescriptors.subscript-size-override`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors/subscript-size-override)
    void subscript_size_override(const jsbind::String& value);
};

} // namespace webbind