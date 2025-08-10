#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;

/// Interface SVGFEOffsetElement
/// [`SVGFEOffsetElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement)
class SVGFEOffsetElement : public SVGElement {
    explicit SVGFEOffsetElement(Handle h) noexcept;
public:
    explicit SVGFEOffsetElement(const emlite::Val &val) noexcept;
    static SVGFEOffsetElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEOffsetElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFEOffsetElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/in1)
    /// [`SVGFEOffsetElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFEOffsetElement.dx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/dx)
    /// [`SVGFEOffsetElement.dx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/dx)
    [[nodiscard]] SVGAnimatedNumber dx() const;
    /// [`SVGFEOffsetElement.dy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/dy)
    /// [`SVGFEOffsetElement.dy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/dy)
    [[nodiscard]] SVGAnimatedNumber dy() const;
    /// [`SVGFEOffsetElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/x)
    /// [`SVGFEOffsetElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEOffsetElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/y)
    /// [`SVGFEOffsetElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEOffsetElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/width)
    /// [`SVGFEOffsetElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEOffsetElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/height)
    /// [`SVGFEOffsetElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEOffsetElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/result)
    /// [`SVGFEOffsetElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEOffsetElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind