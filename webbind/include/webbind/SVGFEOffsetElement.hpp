#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;


/// The SVGFEOffsetElement class.
/// [`SVGFEOffsetElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement)
class SVGFEOffsetElement : public SVGElement {
    explicit SVGFEOffsetElement(Handle h) noexcept;

public:
    explicit SVGFEOffsetElement(const emlite::Val &val) noexcept;
    static SVGFEOffsetElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEOffsetElement clone() const noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFEOffsetElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `dx` attribute.
    /// [`SVGFEOffsetElement.dx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/dx)
    [[nodiscard]] SVGAnimatedNumber dx() const;
    /// Getter of the `dy` attribute.
    /// [`SVGFEOffsetElement.dy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/dy)
    [[nodiscard]] SVGAnimatedNumber dy() const;
    /// Getter of the `x` attribute.
    /// [`SVGFEOffsetElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEOffsetElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEOffsetElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEOffsetElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEOffsetElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

