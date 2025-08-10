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
    /// [`FontMetrics.width`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/width)
    /// [`FontMetrics.width`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/width)
    [[nodiscard]] double width() const;
    /// [`FontMetrics.advances`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/advances)
    /// [`FontMetrics.advances`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/advances)
    [[nodiscard]] jsbind::TypedArray<double> advances() const;
    /// [`FontMetrics.boundingBoxLeft`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxLeft)
    /// [`FontMetrics.boundingBoxLeft`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxLeft)
    [[nodiscard]] double boundingBoxLeft() const;
    /// [`FontMetrics.boundingBoxRight`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxRight)
    /// [`FontMetrics.boundingBoxRight`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxRight)
    [[nodiscard]] double boundingBoxRight() const;
    /// [`FontMetrics.height`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/height)
    /// [`FontMetrics.height`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/height)
    [[nodiscard]] double height() const;
    /// [`FontMetrics.emHeightAscent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/emHeightAscent)
    /// [`FontMetrics.emHeightAscent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/emHeightAscent)
    [[nodiscard]] double emHeightAscent() const;
    /// [`FontMetrics.emHeightDescent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/emHeightDescent)
    /// [`FontMetrics.emHeightDescent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/emHeightDescent)
    [[nodiscard]] double emHeightDescent() const;
    /// [`FontMetrics.boundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxAscent)
    /// [`FontMetrics.boundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxAscent)
    [[nodiscard]] double boundingBoxAscent() const;
    /// [`FontMetrics.boundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxDescent)
    /// [`FontMetrics.boundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/boundingBoxDescent)
    [[nodiscard]] double boundingBoxDescent() const;
    /// [`FontMetrics.fontBoundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/fontBoundingBoxAscent)
    /// [`FontMetrics.fontBoundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/fontBoundingBoxAscent)
    [[nodiscard]] double fontBoundingBoxAscent() const;
    /// [`FontMetrics.fontBoundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/fontBoundingBoxDescent)
    /// [`FontMetrics.fontBoundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/fontBoundingBoxDescent)
    [[nodiscard]] double fontBoundingBoxDescent() const;
    /// [`FontMetrics.dominantBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/dominantBaseline)
    /// [`FontMetrics.dominantBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/dominantBaseline)
    [[nodiscard]] Baseline dominantBaseline() const;
    /// [`FontMetrics.baselines`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/baselines)
    /// [`FontMetrics.baselines`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/baselines)
    [[nodiscard]] jsbind::TypedArray<Baseline> baselines() const;
    /// [`FontMetrics.fonts`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/fonts)
    /// [`FontMetrics.fonts`](https://developer.mozilla.org/en-US/docs/Web/API/FontMetrics/fonts)
    [[nodiscard]] jsbind::TypedArray<Font> fonts() const;
};

} // namespace webbind