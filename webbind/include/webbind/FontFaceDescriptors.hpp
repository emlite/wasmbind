#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FontFaceDescriptors
class FontFaceDescriptors : public emlite::Val {
  explicit FontFaceDescriptors(Handle h) noexcept;
public:
    static FontFaceDescriptors take_ownership(Handle h) noexcept;
    explicit FontFaceDescriptors(const emlite::Val &val) noexcept;
    FontFaceDescriptors() noexcept;
    [[nodiscard]] FontFaceDescriptors clone() const noexcept;
    /// Getter of the `style` attribute.
    [[nodiscard]] jsbind::String style() const;
    /// Setter of the `style` attribute.
    void style(const jsbind::String& value);
    /// Getter of the `weight` attribute.
    [[nodiscard]] jsbind::String weight() const;
    /// Setter of the `weight` attribute.
    void weight(const jsbind::String& value);
    /// Getter of the `stretch` attribute.
    [[nodiscard]] jsbind::String stretch() const;
    /// Setter of the `stretch` attribute.
    void stretch(const jsbind::String& value);
    /// Getter of the `unicodeRange` attribute.
    [[nodiscard]] jsbind::String unicodeRange() const;
    /// Setter of the `unicodeRange` attribute.
    void unicodeRange(const jsbind::String& value);
    /// Getter of the `featureSettings` attribute.
    [[nodiscard]] jsbind::String featureSettings() const;
    /// Setter of the `featureSettings` attribute.
    void featureSettings(const jsbind::String& value);
    /// Getter of the `variationSettings` attribute.
    [[nodiscard]] jsbind::String variationSettings() const;
    /// Setter of the `variationSettings` attribute.
    void variationSettings(const jsbind::String& value);
    /// Getter of the `display` attribute.
    [[nodiscard]] jsbind::String display() const;
    /// Setter of the `display` attribute.
    void display(const jsbind::String& value);
    /// Getter of the `ascentOverride` attribute.
    [[nodiscard]] jsbind::String ascentOverride() const;
    /// Setter of the `ascentOverride` attribute.
    void ascentOverride(const jsbind::String& value);
    /// Getter of the `descentOverride` attribute.
    [[nodiscard]] jsbind::String descentOverride() const;
    /// Setter of the `descentOverride` attribute.
    void descentOverride(const jsbind::String& value);
    /// Getter of the `lineGapOverride` attribute.
    [[nodiscard]] jsbind::String lineGapOverride() const;
    /// Setter of the `lineGapOverride` attribute.
    void lineGapOverride(const jsbind::String& value);
};

} // namespace webbind