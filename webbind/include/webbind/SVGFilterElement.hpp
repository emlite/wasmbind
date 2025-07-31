#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedEnumeration;
class SVGAnimatedLength;
class SVGAnimatedString;


/// The SVGFilterElement class.
/// [`SVGFilterElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement)
class SVGFilterElement : public SVGElement {
    explicit SVGFilterElement(Handle h) noexcept;

public:
    explicit SVGFilterElement(const emlite::Val &val) noexcept;
    static SVGFilterElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFilterElement clone() const noexcept;
    /// Getter of the `filterUnits` attribute.
    /// [`SVGFilterElement.filterUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/filterUnits)
    [[nodiscard]] SVGAnimatedEnumeration filterUnits() const;
    /// Getter of the `primitiveUnits` attribute.
    /// [`SVGFilterElement.primitiveUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/primitiveUnits)
    [[nodiscard]] SVGAnimatedEnumeration primitiveUnits() const;
    /// Getter of the `x` attribute.
    /// [`SVGFilterElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFilterElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFilterElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFilterElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `href` attribute.
    /// [`SVGFilterElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

