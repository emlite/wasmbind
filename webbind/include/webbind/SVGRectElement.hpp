#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGeometryElement.hpp"

namespace webbind {

class SVGAnimatedLength;

/// Interface SVGRectElement
/// [`SVGRectElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement)
class SVGRectElement : public SVGGeometryElement {
    explicit SVGRectElement(Handle h) noexcept;
public:
    explicit SVGRectElement(const emlite::Val &val) noexcept;
    static SVGRectElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGRectElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGRectElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/x)
    /// [`SVGRectElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGRectElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/y)
    /// [`SVGRectElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGRectElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/width)
    /// [`SVGRectElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGRectElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/height)
    /// [`SVGRectElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGRectElement.rx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/rx)
    /// [`SVGRectElement.rx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/rx)
    [[nodiscard]] SVGAnimatedLength rx() const;
    /// [`SVGRectElement.ry`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/ry)
    /// [`SVGRectElement.ry`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/ry)
    [[nodiscard]] SVGAnimatedLength ry() const;
};

} // namespace webbind