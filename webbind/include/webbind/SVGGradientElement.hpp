#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedEnumeration;
class SVGAnimatedTransformList;
class SVGAnimatedString;


/// The SVGGradientElement class.
/// [`SVGGradientElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGradientElement)
class SVGGradientElement : public SVGElement {
    explicit SVGGradientElement(Handle h) noexcept;

public:
    explicit SVGGradientElement(const emlite::Val &val) noexcept;
    static SVGGradientElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGGradientElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `gradientUnits` attribute.
    /// [`SVGGradientElement.gradientUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGradientElement/gradientUnits)
    [[nodiscard]] SVGAnimatedEnumeration gradientUnits() const;
    /// Getter of the `gradientTransform` attribute.
    /// [`SVGGradientElement.gradientTransform`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGradientElement/gradientTransform)
    [[nodiscard]] SVGAnimatedTransformList gradientTransform() const;
    /// Getter of the `spreadMethod` attribute.
    /// [`SVGGradientElement.spreadMethod`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGradientElement/spreadMethod)
    [[nodiscard]] SVGAnimatedEnumeration spreadMethod() const;
    /// Getter of the `href` attribute.
    /// [`SVGGradientElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGradientElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

