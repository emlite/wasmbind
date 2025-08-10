#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedPreserveAspectRatio;
class SVGAnimatedString;
class SVGAnimatedLength;

/// Interface SVGFEImageElement
/// [`SVGFEImageElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement)
class SVGFEImageElement : public SVGElement {
    explicit SVGFEImageElement(Handle h) noexcept;
public:
    explicit SVGFEImageElement(const emlite::Val &val) noexcept;
    static SVGFEImageElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEImageElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `preserveAspectRatio` attribute.
    /// [`SVGFEImageElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/preserveAspectRatio)
    [[nodiscard]] SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
    /// Getter of the `crossOrigin` attribute.
    /// [`SVGFEImageElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/crossOrigin)
    [[nodiscard]] SVGAnimatedString crossOrigin() const;
    /// Getter of the `x` attribute.
    /// [`SVGFEImageElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEImageElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEImageElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEImageElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEImageElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
    /// Getter of the `href` attribute.
    /// [`SVGFEImageElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

} // namespace webbind