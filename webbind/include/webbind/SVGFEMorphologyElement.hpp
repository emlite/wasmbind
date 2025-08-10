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
    /// [`SVGFEMorphologyElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/in1)
    /// [`SVGFEMorphologyElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFEMorphologyElement.operator`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/operator)
    /// [`SVGFEMorphologyElement.operator`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/operator)
    [[nodiscard]] SVGAnimatedEnumeration operator_() const;
    /// [`SVGFEMorphologyElement.radiusX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/radiusX)
    /// [`SVGFEMorphologyElement.radiusX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/radiusX)
    [[nodiscard]] SVGAnimatedNumber radiusX() const;
    /// [`SVGFEMorphologyElement.radiusY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/radiusY)
    /// [`SVGFEMorphologyElement.radiusY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/radiusY)
    [[nodiscard]] SVGAnimatedNumber radiusY() const;
    /// [`SVGFEMorphologyElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/x)
    /// [`SVGFEMorphologyElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEMorphologyElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/y)
    /// [`SVGFEMorphologyElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEMorphologyElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/width)
    /// [`SVGFEMorphologyElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEMorphologyElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/height)
    /// [`SVGFEMorphologyElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEMorphologyElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/result)
    /// [`SVGFEMorphologyElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMorphologyElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind