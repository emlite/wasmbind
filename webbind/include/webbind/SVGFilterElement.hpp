#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedEnumeration;
class SVGAnimatedLength;
class SVGAnimatedString;

/// Interface SVGFilterElement
/// [`SVGFilterElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement)
class SVGFilterElement : public SVGElement {
    explicit SVGFilterElement(Handle h) noexcept;
public:
    explicit SVGFilterElement(const emlite::Val &val) noexcept;
    static SVGFilterElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFilterElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFilterElement.filterUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/filterUnits)
    /// [`SVGFilterElement.filterUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/filterUnits)
    [[nodiscard]] SVGAnimatedEnumeration filterUnits() const;
    /// [`SVGFilterElement.primitiveUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/primitiveUnits)
    /// [`SVGFilterElement.primitiveUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/primitiveUnits)
    [[nodiscard]] SVGAnimatedEnumeration primitiveUnits() const;
    /// [`SVGFilterElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/x)
    /// [`SVGFilterElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFilterElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/y)
    /// [`SVGFilterElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFilterElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/width)
    /// [`SVGFilterElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFilterElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/height)
    /// [`SVGFilterElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFilterElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/href)
    /// [`SVGFilterElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFilterElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

} // namespace webbind