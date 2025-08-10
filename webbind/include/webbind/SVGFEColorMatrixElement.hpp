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
    /// [`SVGFEColorMatrixElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/in1)
    /// [`SVGFEColorMatrixElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFEColorMatrixElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/type)
    /// [`SVGFEColorMatrixElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/type)
    [[nodiscard]] SVGAnimatedEnumeration type() const;
    /// [`SVGFEColorMatrixElement.values`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/values)
    /// [`SVGFEColorMatrixElement.values`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/values)
    [[nodiscard]] SVGAnimatedNumberList values() const;
    /// [`SVGFEColorMatrixElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/x)
    /// [`SVGFEColorMatrixElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEColorMatrixElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/y)
    /// [`SVGFEColorMatrixElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEColorMatrixElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/width)
    /// [`SVGFEColorMatrixElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEColorMatrixElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/height)
    /// [`SVGFEColorMatrixElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEColorMatrixElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/result)
    /// [`SVGFEColorMatrixElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEColorMatrixElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind