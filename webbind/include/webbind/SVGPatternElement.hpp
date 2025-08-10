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
    /// [`SVGPatternElement.patternUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/patternUnits)
    /// [`SVGPatternElement.patternUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/patternUnits)
    [[nodiscard]] SVGAnimatedEnumeration patternUnits() const;
    /// [`SVGPatternElement.patternContentUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/patternContentUnits)
    /// [`SVGPatternElement.patternContentUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/patternContentUnits)
    [[nodiscard]] SVGAnimatedEnumeration patternContentUnits() const;
    /// [`SVGPatternElement.patternTransform`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/patternTransform)
    /// [`SVGPatternElement.patternTransform`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/patternTransform)
    [[nodiscard]] SVGAnimatedTransformList patternTransform() const;
    /// [`SVGPatternElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/x)
    /// [`SVGPatternElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGPatternElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/y)
    /// [`SVGPatternElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGPatternElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/width)
    /// [`SVGPatternElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGPatternElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/height)
    /// [`SVGPatternElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGPatternElement.viewBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/viewBox)
    /// [`SVGPatternElement.viewBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/viewBox)
    [[nodiscard]] SVGAnimatedRect viewBox() const;
    /// [`SVGPatternElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/preserveAspectRatio)
    /// [`SVGPatternElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/preserveAspectRatio)
    [[nodiscard]] SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
    /// [`SVGPatternElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/href)
    /// [`SVGPatternElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPatternElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

} // namespace webbind