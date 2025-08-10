#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Baseline;
class Font;

/// Interface FontMetrics
/// [`FontMetrics`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics)
class FontMetrics : public emlite::Val {
    explicit FontMetrics(Handle h) noexcept;
public:
    explicit FontMetrics(const emlite::Val &val) noexcept;
    static FontMetrics take_ownership(Handle h) noexcept;
    [[nodiscard]] FontMetrics clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `width` attribute.
    /// [`FontMetrics.width`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/width)
    [[nodiscard]] double width() const;
    /// Getter of the `advances` attribute.
    /// [`FontMetrics.advances`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/advances)
    [[nodiscard]] jsbind::TypedArray<double> advances() const;
    /// Getter of the `boundingBoxLeft` attribute.
    /// [`FontMetrics.boundingBoxLeft`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxLeft)
    [[nodiscard]] double boundingBoxLeft() const;
    /// Getter of the `boundingBoxRight` attribute.
    /// [`FontMetrics.boundingBoxRight`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxRight)
    [[nodiscard]] double boundingBoxRight() const;
    /// Getter of the `height` attribute.
    /// [`FontMetrics.height`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/height)
    [[nodiscard]] double height() const;
    /// Getter of the `emHeightAscent` attribute.
    /// [`FontMetrics.emHeightAscent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/emHeightAscent)
    [[nodiscard]] double emHeightAscent() const;
    /// Getter of the `emHeightDescent` attribute.
    /// [`FontMetrics.emHeightDescent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/emHeightDescent)
    [[nodiscard]] double emHeightDescent() const;
    /// Getter of the `boundingBoxAscent` attribute.
    /// [`FontMetrics.boundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxAscent)
    [[nodiscard]] double boundingBoxAscent() const;
    /// Getter of the `boundingBoxDescent` attribute.
    /// [`FontMetrics.boundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxDescent)
    [[nodiscard]] double boundingBoxDescent() const;
    /// Getter of the `fontBoundingBoxAscent` attribute.
    /// [`FontMetrics.fontBoundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/fontBoundingBoxAscent)
    [[nodiscard]] double fontBoundingBoxAscent() const;
    /// Getter of the `fontBoundingBoxDescent` attribute.
    /// [`FontMetrics.fontBoundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/fontBoundingBoxDescent)
    [[nodiscard]] double fontBoundingBoxDescent() const;
    /// Getter of the `dominantBaseline` attribute.
    /// [`FontMetrics.dominantBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/dominantBaseline)
    [[nodiscard]] Baseline dominantBaseline() const;
    /// Getter of the `baselines` attribute.
    /// [`FontMetrics.baselines`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/baselines)
    [[nodiscard]] jsbind::TypedArray<Baseline> baselines() const;
    /// Getter of the `fonts` attribute.
    /// [`FontMetrics.fonts`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/fonts)
    [[nodiscard]] jsbind::TypedArray<Font> fonts() const;
};

} // namespace webbind