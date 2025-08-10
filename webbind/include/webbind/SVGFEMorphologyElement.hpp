#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedEnumeration;
class SVGAnimatedNumber;
class SVGAnimatedLength;

/// Interface SVGFEMorphologyElement
/// [`SVGFEMorphologyElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement)
class SVGFEMorphologyElement : public SVGElement {
    explicit SVGFEMorphologyElement(Handle h) noexcept;
public:
    explicit SVGFEMorphologyElement(const emlite::Val &val) noexcept;
    static SVGFEMorphologyElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEMorphologyElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFEMorphologyElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `operator` attribute.
    /// [`SVGFEMorphologyElement.operator`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/operator)
    [[nodiscard]] SVGAnimatedEnumeration operator_() const;
    /// Getter of the `radiusX` attribute.
    /// [`SVGFEMorphologyElement.radiusX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/radiusX)
    [[nodiscard]] SVGAnimatedNumber radiusX() const;
    /// Getter of the `radiusY` attribute.
    /// [`SVGFEMorphologyElement.radiusY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/radiusY)
    [[nodiscard]] SVGAnimatedNumber radiusY() const;
    /// Getter of the `x` attribute.
    /// [`SVGFEMorphologyElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEMorphologyElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEMorphologyElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEMorphologyElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEMorphologyElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind