#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


/// The SVGForeignObjectElement class.
/// [`SVGForeignObjectElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement)
class SVGForeignObjectElement : public SVGGraphicsElement {
    explicit SVGForeignObjectElement(Handle h) noexcept;

public:
    explicit SVGForeignObjectElement(const emlite::Val &val) noexcept;
    static SVGForeignObjectElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGForeignObjectElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `x` attribute.
    /// [`SVGForeignObjectElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGForeignObjectElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGForeignObjectElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGForeignObjectElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
};

