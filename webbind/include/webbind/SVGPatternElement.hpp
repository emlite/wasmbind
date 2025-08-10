#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedEnumeration;
class SVGAnimatedTransformList;
class SVGAnimatedLength;
class SVGAnimatedRect;
class SVGAnimatedPreserveAspectRatio;
class SVGAnimatedString;

/// Interface SVGPatternElement
/// [`SVGPatternElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement)
class SVGPatternElement : public SVGElement {
    explicit SVGPatternElement(Handle h) noexcept;
public:
    explicit SVGPatternElement(const emlite::Val &val) noexcept;
    static SVGPatternElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGPatternElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `patternUnits` attribute.
    /// [`SVGPatternElement.patternUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/patternUnits)
    [[nodiscard]] SVGAnimatedEnumeration patternUnits() const;
    /// Getter of the `patternContentUnits` attribute.
    /// [`SVGPatternElement.patternContentUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/patternContentUnits)
    [[nodiscard]] SVGAnimatedEnumeration patternContentUnits() const;
    /// Getter of the `patternTransform` attribute.
    /// [`SVGPatternElement.patternTransform`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/patternTransform)
    [[nodiscard]] SVGAnimatedTransformList patternTransform() const;
    /// Getter of the `x` attribute.
    /// [`SVGPatternElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGPatternElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGPatternElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGPatternElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `viewBox` attribute.
    /// [`SVGPatternElement.viewBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/viewBox)
    [[nodiscard]] SVGAnimatedRect viewBox() const;
    /// Getter of the `preserveAspectRatio` attribute.
    /// [`SVGPatternElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/preserveAspectRatio)
    [[nodiscard]] SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
    /// Getter of the `href` attribute.
    /// [`SVGPatternElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

} // namespace webbind