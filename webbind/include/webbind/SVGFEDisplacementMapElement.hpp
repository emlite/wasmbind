#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedEnumeration;
class SVGAnimatedLength;


/// The SVGFEDisplacementMapElement class.
/// [`SVGFEDisplacementMapElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement)
class SVGFEDisplacementMapElement : public SVGElement {
    explicit SVGFEDisplacementMapElement(Handle h) noexcept;

public:
    explicit SVGFEDisplacementMapElement(const emlite::Val &val) noexcept;
    static SVGFEDisplacementMapElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEDisplacementMapElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFEDisplacementMapElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `in2` attribute.
    /// [`SVGFEDisplacementMapElement.in2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/in2)
    [[nodiscard]] SVGAnimatedString in2() const;
    /// Getter of the `scale` attribute.
    /// [`SVGFEDisplacementMapElement.scale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/scale)
    [[nodiscard]] SVGAnimatedNumber scale() const;
    /// Getter of the `xChannelSelector` attribute.
    /// [`SVGFEDisplacementMapElement.xChannelSelector`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/xChannelSelector)
    [[nodiscard]] SVGAnimatedEnumeration xChannelSelector() const;
    /// Getter of the `yChannelSelector` attribute.
    /// [`SVGFEDisplacementMapElement.yChannelSelector`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/yChannelSelector)
    [[nodiscard]] SVGAnimatedEnumeration yChannelSelector() const;
    /// Getter of the `x` attribute.
    /// [`SVGFEDisplacementMapElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEDisplacementMapElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEDisplacementMapElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEDisplacementMapElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEDisplacementMapElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDisplacementMapElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

