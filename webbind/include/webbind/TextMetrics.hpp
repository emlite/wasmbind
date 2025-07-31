#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The TextMetrics class.
/// [`TextMetrics`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics)
class TextMetrics : public emlite::Val {
    explicit TextMetrics(Handle h) noexcept;

public:
    explicit TextMetrics(const emlite::Val &val) noexcept;
    static TextMetrics take_ownership(Handle h) noexcept;

    [[nodiscard]] TextMetrics clone() const noexcept;
    /// Getter of the `width` attribute.
    /// [`TextMetrics.width`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/width)
    [[nodiscard]] double width() const;
    /// Getter of the `actualBoundingBoxLeft` attribute.
    /// [`TextMetrics.actualBoundingBoxLeft`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxLeft)
    [[nodiscard]] double actualBoundingBoxLeft() const;
    /// Getter of the `actualBoundingBoxRight` attribute.
    /// [`TextMetrics.actualBoundingBoxRight`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxRight)
    [[nodiscard]] double actualBoundingBoxRight() const;
    /// Getter of the `fontBoundingBoxAscent` attribute.
    /// [`TextMetrics.fontBoundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/fontBoundingBoxAscent)
    [[nodiscard]] double fontBoundingBoxAscent() const;
    /// Getter of the `fontBoundingBoxDescent` attribute.
    /// [`TextMetrics.fontBoundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/fontBoundingBoxDescent)
    [[nodiscard]] double fontBoundingBoxDescent() const;
    /// Getter of the `actualBoundingBoxAscent` attribute.
    /// [`TextMetrics.actualBoundingBoxAscent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxAscent)
    [[nodiscard]] double actualBoundingBoxAscent() const;
    /// Getter of the `actualBoundingBoxDescent` attribute.
    /// [`TextMetrics.actualBoundingBoxDescent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/actualBoundingBoxDescent)
    [[nodiscard]] double actualBoundingBoxDescent() const;
    /// Getter of the `emHeightAscent` attribute.
    /// [`TextMetrics.emHeightAscent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/emHeightAscent)
    [[nodiscard]] double emHeightAscent() const;
    /// Getter of the `emHeightDescent` attribute.
    /// [`TextMetrics.emHeightDescent`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/emHeightDescent)
    [[nodiscard]] double emHeightDescent() const;
    /// Getter of the `hangingBaseline` attribute.
    /// [`TextMetrics.hangingBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/hangingBaseline)
    [[nodiscard]] double hangingBaseline() const;
    /// Getter of the `alphabeticBaseline` attribute.
    /// [`TextMetrics.alphabeticBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/alphabeticBaseline)
    [[nodiscard]] double alphabeticBaseline() const;
    /// Getter of the `ideographicBaseline` attribute.
    /// [`TextMetrics.ideographicBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/TextMetrics/ideographicBaseline)
    [[nodiscard]] double ideographicBaseline() const;
};

