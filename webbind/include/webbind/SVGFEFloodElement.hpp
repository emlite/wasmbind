#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGAnimatedString;


/// The SVGFEFloodElement class.
/// [`SVGFEFloodElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement)
class SVGFEFloodElement : public SVGElement {
    explicit SVGFEFloodElement(Handle h) noexcept;

public:
    explicit SVGFEFloodElement(const emlite::Val &val) noexcept;
    static SVGFEFloodElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEFloodElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `x` attribute.
    /// [`SVGFEFloodElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEFloodElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEFloodElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEFloodElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEFloodElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

