#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedLength;
class SVGAnimatedString;

/// Interface SVGFEFloodElement
/// [`SVGFEFloodElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement)
class SVGFEFloodElement : public SVGElement {
    explicit SVGFEFloodElement(Handle h) noexcept;
public:
    explicit SVGFEFloodElement(const emlite::Val &val) noexcept;
    static SVGFEFloodElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEFloodElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFEFloodElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/x)
    /// [`SVGFEFloodElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEFloodElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/y)
    /// [`SVGFEFloodElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEFloodElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/width)
    /// [`SVGFEFloodElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEFloodElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/height)
    /// [`SVGFEFloodElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEFloodElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/result)
    /// [`SVGFEFloodElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFloodElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind