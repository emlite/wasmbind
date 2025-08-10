#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedEnumeration;
class SVGAnimatedLength;

/// Interface SVGMaskElement
/// [`SVGMaskElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement)
class SVGMaskElement : public SVGElement {
    explicit SVGMaskElement(Handle h) noexcept;
public:
    explicit SVGMaskElement(const emlite::Val &val) noexcept;
    static SVGMaskElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGMaskElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGMaskElement.maskUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/maskUnits)
    /// [`SVGMaskElement.maskUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/maskUnits)
    [[nodiscard]] SVGAnimatedEnumeration maskUnits() const;
    /// [`SVGMaskElement.maskContentUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/maskContentUnits)
    /// [`SVGMaskElement.maskContentUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/maskContentUnits)
    [[nodiscard]] SVGAnimatedEnumeration maskContentUnits() const;
    /// [`SVGMaskElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/x)
    /// [`SVGMaskElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGMaskElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/y)
    /// [`SVGMaskElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGMaskElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/width)
    /// [`SVGMaskElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGMaskElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/height)
    /// [`SVGMaskElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
};

} // namespace webbind