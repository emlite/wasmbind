#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedEnumeration;
class SVGAnimatedTransformList;

/// Interface SVGClipPathElement
/// [`SVGClipPathElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGClipPathElement)
class SVGClipPathElement : public SVGElement {
    explicit SVGClipPathElement(Handle h) noexcept;
public:
    explicit SVGClipPathElement(const emlite::Val &val) noexcept;
    static SVGClipPathElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGClipPathElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGClipPathElement.clipPathUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGClipPathElement/clipPathUnits)
    /// [`SVGClipPathElement.clipPathUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGClipPathElement/clipPathUnits)
    [[nodiscard]] SVGAnimatedEnumeration clipPathUnits() const;
    /// [`SVGClipPathElement.transform`](https://developer.mozilla.org/en-US/docs/Web/API/SVGClipPathElement/transform)
    /// [`SVGClipPathElement.transform`](https://developer.mozilla.org/en-US/docs/Web/API/SVGClipPathElement/transform)
    [[nodiscard]] SVGAnimatedTransformList transform() const;
};

} // namespace webbind