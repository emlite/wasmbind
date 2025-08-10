#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedEnumeration;
class SVGAnimatedNumberList;
class SVGAnimatedLength;

/// Interface SVGFEColorMatrixElement
/// [`SVGFEColorMatrixElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement)
class SVGFEColorMatrixElement : public SVGElement {
    explicit SVGFEColorMatrixElement(Handle h) noexcept;
public:
    explicit SVGFEColorMatrixElement(const emlite::Val &val) noexcept;
    static SVGFEColorMatrixElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEColorMatrixElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFEColorMatrixElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `type` attribute.
    /// [`SVGFEColorMatrixElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/type)
    [[nodiscard]] SVGAnimatedEnumeration type() const;
    /// Getter of the `values` attribute.
    /// [`SVGFEColorMatrixElement.values`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/values)
    [[nodiscard]] SVGAnimatedNumberList values() const;
    /// Getter of the `x` attribute.
    /// [`SVGFEColorMatrixElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEColorMatrixElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEColorMatrixElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEColorMatrixElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEColorMatrixElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind