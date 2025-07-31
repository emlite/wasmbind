#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGElement;
class SVGAnimatedString;


/// The SVGUseElement class.
/// [`SVGUseElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement)
class SVGUseElement : public SVGGraphicsElement {
    explicit SVGUseElement(Handle h) noexcept;

public:
    explicit SVGUseElement(const emlite::Val &val) noexcept;
    static SVGUseElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGUseElement clone() const noexcept;
    /// Getter of the `x` attribute.
    /// [`SVGUseElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGUseElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGUseElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGUseElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `instanceRoot` attribute.
    /// [`SVGUseElement.instanceRoot`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/instanceRoot)
    [[nodiscard]] SVGElement instanceRoot() const;
    /// Getter of the `animatedInstanceRoot` attribute.
    /// [`SVGUseElement.animatedInstanceRoot`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/animatedInstanceRoot)
    [[nodiscard]] SVGElement animatedInstanceRoot() const;
    /// Getter of the `href` attribute.
    /// [`SVGUseElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

