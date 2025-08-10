#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGraphicsElement.hpp"

namespace webbind {

class SVGAnimatedLength;
class SVGElement;
class SVGAnimatedString;

/// Interface SVGUseElement
/// [`SVGUseElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement)
class SVGUseElement : public SVGGraphicsElement {
    explicit SVGUseElement(Handle h) noexcept;
public:
    explicit SVGUseElement(const emlite::Val &val) noexcept;
    static SVGUseElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGUseElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGUseElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/x)
    /// [`SVGUseElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGUseElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/y)
    /// [`SVGUseElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGUseElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/width)
    /// [`SVGUseElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGUseElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/height)
    /// [`SVGUseElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGUseElement.instanceRoot`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/instanceRoot)
    /// [`SVGUseElement.instanceRoot`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/instanceRoot)
    [[nodiscard]] SVGElement instanceRoot() const;
    /// [`SVGUseElement.animatedInstanceRoot`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/animatedInstanceRoot)
    /// [`SVGUseElement.animatedInstanceRoot`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/animatedInstanceRoot)
    [[nodiscard]] SVGElement animatedInstanceRoot() const;
    /// [`SVGUseElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/href)
    /// [`SVGUseElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

} // namespace webbind