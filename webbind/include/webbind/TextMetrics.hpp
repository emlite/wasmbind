#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface TextMetrics
/// [`TextMetrics`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics)
class TextMetrics : public emlite::Val {
    explicit TextMetrics(Handle h) noexcept;
public:
    explicit TextMetrics(const emlite::Val &val) noexcept;
    static TextMetrics take_ownership(Handle h) noexcept;
    [[nodiscard]] TextMetrics clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`TextMetrics.width`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/width)
    /// [`TextMetrics.width`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/width)
    [[nodiscard]] double width() const;
    /// [`TextMetrics.actualBoundingBoxLeft`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxLeft)
    /// [`TextMetrics.actualBoundingBoxLeft`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxLeft)
    [[nodiscard]] double actualBoundingBoxLeft() const;
    /// [`TextMetrics.actualBoundingBoxRight`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxRight)
    /// [`TextMetrics.actualBoundingBoxRight`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxRight)
    [[nodiscard]] double actualBoundingBoxRight() const;
    /// [`TextMetrics.fontBoundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/fontBoundingBoxAscent)
    /// [`TextMetrics.fontBoundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/fontBoundingBoxAscent)
    [[nodiscard]] double fontBoundingBoxAscent() const;
    /// [`TextMetrics.fontBoundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/fontBoundingBoxDescent)
    /// [`TextMetrics.fontBoundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/fontBoundingBoxDescent)
    [[nodiscard]] double fontBoundingBoxDescent() const;
    /// [`TextMetrics.actualBoundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxAscent)
    /// [`TextMetrics.actualBoundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxAscent)
    [[nodiscard]] double actualBoundingBoxAscent() const;
    /// [`TextMetrics.actualBoundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxDescent)
    /// [`TextMetrics.actualBoundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxDescent)
    [[nodiscard]] double actualBoundingBoxDescent() const;
    /// [`TextMetrics.emHeightAscent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/emHeightAscent)
    /// [`TextMetrics.emHeightAscent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/emHeightAscent)
    [[nodiscard]] double emHeightAscent() const;
    /// [`TextMetrics.emHeightDescent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/emHeightDescent)
    /// [`TextMetrics.emHeightDescent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/emHeightDescent)
    [[nodiscard]] double emHeightDescent() const;
    /// [`TextMetrics.hangingBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/hangingBaseline)
    /// [`TextMetrics.hangingBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/hangingBaseline)
    [[nodiscard]] double hangingBaseline() const;
    /// [`TextMetrics.alphabeticBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/alphabeticBaseline)
    /// [`TextMetrics.alphabeticBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/alphabeticBaseline)
    [[nodiscard]] double alphabeticBaseline() const;
    /// [`TextMetrics.ideographicBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/ideographicBaseline)
    /// [`TextMetrics.ideographicBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/ideographicBaseline)
    [[nodiscard]] double ideographicBaseline() const;
};

} // namespace webbind