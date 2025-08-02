#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FontFace;
class FontFaceFeatures;
class FontFaceVariations;
class FontFacePalettes;


/// The FontFace class.
/// [`FontFace`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace)
class FontFace : public emlite::Val {
    explicit FontFace(Handle h) noexcept;

public:
    explicit FontFace(const emlite::Val &val) noexcept;
    static FontFace take_ownership(Handle h) noexcept;

    [[nodiscard]] FontFace clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new FontFace(..)` constructor, creating a new FontFace instance
    FontFace(const jsbind::String& family, const jsbind::Any& source);
    /// The `new FontFace(..)` constructor, creating a new FontFace instance
    FontFace(const jsbind::String& family, const jsbind::Any& source, const jsbind::Any& descriptors);
    /// Getter of the `family` attribute.
    /// [`FontFace.family`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/family)
    [[nodiscard]] jsbind::String family() const;
    /// Setter of the `family` attribute.
    /// [`FontFace.family`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/family)
    void family(const jsbind::String& value);
    /// Getter of the `style` attribute.
    /// [`FontFace.style`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/style)
    [[nodiscard]] jsbind::String style() const;
    /// Setter of the `style` attribute.
    /// [`FontFace.style`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/style)
    void style(const jsbind::String& value);
    /// Getter of the `weight` attribute.
    /// [`FontFace.weight`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/weight)
    [[nodiscard]] jsbind::String weight() const;
    /// Setter of the `weight` attribute.
    /// [`FontFace.weight`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/weight)
    void weight(const jsbind::String& value);
    /// Getter of the `stretch` attribute.
    /// [`FontFace.stretch`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/stretch)
    [[nodiscard]] jsbind::String stretch() const;
    /// Setter of the `stretch` attribute.
    /// [`FontFace.stretch`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/stretch)
    void stretch(const jsbind::String& value);
    /// Getter of the `unicodeRange` attribute.
    /// [`FontFace.unicodeRange`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/unicodeRange)
    [[nodiscard]] jsbind::String unicodeRange() const;
    /// Setter of the `unicodeRange` attribute.
    /// [`FontFace.unicodeRange`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/unicodeRange)
    void unicodeRange(const jsbind::String& value);
    /// Getter of the `featureSettings` attribute.
    /// [`FontFace.featureSettings`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/featureSettings)
    [[nodiscard]] jsbind::String featureSettings() const;
    /// Setter of the `featureSettings` attribute.
    /// [`FontFace.featureSettings`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/featureSettings)
    void featureSettings(const jsbind::String& value);
    /// Getter of the `variationSettings` attribute.
    /// [`FontFace.variationSettings`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/variationSettings)
    [[nodiscard]] jsbind::String variationSettings() const;
    /// Setter of the `variationSettings` attribute.
    /// [`FontFace.variationSettings`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/variationSettings)
    void variationSettings(const jsbind::String& value);
    /// Getter of the `display` attribute.
    /// [`FontFace.display`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/display)
    [[nodiscard]] jsbind::String display() const;
    /// Setter of the `display` attribute.
    /// [`FontFace.display`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/display)
    void display(const jsbind::String& value);
    /// Getter of the `ascentOverride` attribute.
    /// [`FontFace.ascentOverride`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/ascentOverride)
    [[nodiscard]] jsbind::String ascentOverride() const;
    /// Setter of the `ascentOverride` attribute.
    /// [`FontFace.ascentOverride`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/ascentOverride)
    void ascentOverride(const jsbind::String& value);
    /// Getter of the `descentOverride` attribute.
    /// [`FontFace.descentOverride`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/descentOverride)
    [[nodiscard]] jsbind::String descentOverride() const;
    /// Setter of the `descentOverride` attribute.
    /// [`FontFace.descentOverride`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/descentOverride)
    void descentOverride(const jsbind::String& value);
    /// Getter of the `lineGapOverride` attribute.
    /// [`FontFace.lineGapOverride`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/lineGapOverride)
    [[nodiscard]] jsbind::String lineGapOverride() const;
    /// Setter of the `lineGapOverride` attribute.
    /// [`FontFace.lineGapOverride`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/lineGapOverride)
    void lineGapOverride(const jsbind::String& value);
    /// Getter of the `status` attribute.
    /// [`FontFace.status`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/status)
    [[nodiscard]] FontFaceLoadStatus status() const;
    /// The load method.
    /// [`FontFace.load`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/load)
    jsbind::Promise<FontFace> load();
    /// Getter of the `loaded` attribute.
    /// [`FontFace.loaded`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/loaded)
    [[nodiscard]] jsbind::Promise<FontFace> loaded() const;
    /// Getter of the `features` attribute.
    /// [`FontFace.features`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/features)
    [[nodiscard]] FontFaceFeatures features() const;
    /// Getter of the `variations` attribute.
    /// [`FontFace.variations`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/variations)
    [[nodiscard]] FontFaceVariations variations() const;
    /// Getter of the `palettes` attribute.
    /// [`FontFace.palettes`](https://developer.mozilla.org/en-US/docs/Web/API/FontFace/palettes)
    [[nodiscard]] FontFacePalettes palettes() const;
};

