#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedEnumeration;
class SVGAnimatedLength;

/// Interface SVGFEBlendElement
/// [`SVGFEBlendElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement)
class SVGFEBlendElement : public SVGElement {
    explicit SVGFEBlendElement(Handle h) noexcept;
public:
    explicit SVGFEBlendElement(const emlite::Val &val) noexcept;
    static SVGFEBlendElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEBlendElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFEBlendElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `in2` attribute.
    /// [`SVGFEBlendElement.in2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/in2)
    [[nodiscard]] SVGAnimatedString in2() const;
    /// Getter of the `mode` attribute.
    /// [`SVGFEBlendElement.mode`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/mode)
    [[nodiscard]] SVGAnimatedEnumeration mode() const;
    /// Getter of the `x` attribute.
    /// [`SVGFEBlendElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEBlendElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEBlendElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEBlendElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEBlendElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind