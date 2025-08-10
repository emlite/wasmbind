#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGraphicsElement.hpp"

namespace webbind {

class SVGAnimatedLength;

/// Interface SVGForeignObjectElement
/// [`SVGForeignObjectElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement)
class SVGForeignObjectElement : public SVGGraphicsElement {
    explicit SVGForeignObjectElement(Handle h) noexcept;
public:
    explicit SVGForeignObjectElement(const emlite::Val &val) noexcept;
    static SVGForeignObjectElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGForeignObjectElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGForeignObjectElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/x)
    /// [`SVGForeignObjectElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGForeignObjectElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/y)
    /// [`SVGForeignObjectElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGForeignObjectElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/width)
    /// [`SVGForeignObjectElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGForeignObjectElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/height)
    /// [`SVGForeignObjectElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGForeignObjectElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
};

} // namespace webbind