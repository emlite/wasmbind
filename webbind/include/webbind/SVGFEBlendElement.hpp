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
    /// [`SVGFEBlendElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/in1)
    /// [`SVGFEBlendElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFEBlendElement.in2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/in2)
    /// [`SVGFEBlendElement.in2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/in2)
    [[nodiscard]] SVGAnimatedString in2() const;
    /// [`SVGFEBlendElement.mode`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/mode)
    /// [`SVGFEBlendElement.mode`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/mode)
    [[nodiscard]] SVGAnimatedEnumeration mode() const;
    /// [`SVGFEBlendElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/x)
    /// [`SVGFEBlendElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEBlendElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/y)
    /// [`SVGFEBlendElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEBlendElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/width)
    /// [`SVGFEBlendElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEBlendElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/height)
    /// [`SVGFEBlendElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEBlendElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/result)
    /// [`SVGFEBlendElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEBlendElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind