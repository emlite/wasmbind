#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedLength;

/// Interface SVGFETileElement
/// [`SVGFETileElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETileElement)
class SVGFETileElement : public SVGElement {
    explicit SVGFETileElement(Handle h) noexcept;
public:
    explicit SVGFETileElement(const emlite::Val &val) noexcept;
    static SVGFETileElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFETileElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFETileElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETileElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `x` attribute.
    /// [`SVGFETileElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETileElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFETileElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETileElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFETileElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETileElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFETileElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETileElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFETileElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETileElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind