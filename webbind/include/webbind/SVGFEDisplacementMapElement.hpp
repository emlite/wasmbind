#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedEnumeration;
class SVGAnimatedLength;

/// Interface SVGFEDisplacementMapElement
/// [`SVGFEDisplacementMapElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement)
class SVGFEDisplacementMapElement : public SVGElement {
    explicit SVGFEDisplacementMapElement(Handle h) noexcept;
public:
    explicit SVGFEDisplacementMapElement(const emlite::Val &val) noexcept;
    static SVGFEDisplacementMapElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEDisplacementMapElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFEDisplacementMapElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/in1)
    /// [`SVGFEDisplacementMapElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFEDisplacementMapElement.in2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/in2)
    /// [`SVGFEDisplacementMapElement.in2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/in2)
    [[nodiscard]] SVGAnimatedString in2() const;
    /// [`SVGFEDisplacementMapElement.scale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/scale)
    /// [`SVGFEDisplacementMapElement.scale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/scale)
    [[nodiscard]] SVGAnimatedNumber scale() const;
    /// [`SVGFEDisplacementMapElement.xChannelSelector`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/xChannelSelector)
    /// [`SVGFEDisplacementMapElement.xChannelSelector`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/xChannelSelector)
    [[nodiscard]] SVGAnimatedEnumeration xChannelSelector() const;
    /// [`SVGFEDisplacementMapElement.yChannelSelector`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/yChannelSelector)
    /// [`SVGFEDisplacementMapElement.yChannelSelector`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/yChannelSelector)
    [[nodiscard]] SVGAnimatedEnumeration yChannelSelector() const;
    /// [`SVGFEDisplacementMapElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/x)
    /// [`SVGFEDisplacementMapElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEDisplacementMapElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/y)
    /// [`SVGFEDisplacementMapElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEDisplacementMapElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/width)
    /// [`SVGFEDisplacementMapElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEDisplacementMapElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/height)
    /// [`SVGFEDisplacementMapElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEDisplacementMapElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/result)
    /// [`SVGFEDisplacementMapElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind