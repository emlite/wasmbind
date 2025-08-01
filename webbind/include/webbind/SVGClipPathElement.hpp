#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedEnumeration;
class SVGAnimatedTransformList;


/// The SVGClipPathElement class.
/// [`SVGClipPathElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGClipPathElement)
class SVGClipPathElement : public SVGElement {
    explicit SVGClipPathElement(Handle h) noexcept;

public:
    explicit SVGClipPathElement(const emlite::Val &val) noexcept;
    static SVGClipPathElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGClipPathElement clone() const noexcept;
    /// Getter of the `clipPathUnits` attribute.
    /// [`SVGClipPathElement.clipPathUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGClipPathElement/clipPathUnits)
    [[nodiscard]] SVGAnimatedEnumeration clipPathUnits() const;
    /// Getter of the `transform` attribute.
    /// [`SVGClipPathElement.transform`](https://developer.mozilla.org/en-US/docs/Web/API/SVGClipPathElement/transform)
    [[nodiscard]] SVGAnimatedTransformList transform() const;
};

