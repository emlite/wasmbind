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
    /// [`SVGFEImageElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/preserveAspectRatio)
    /// [`SVGFEImageElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/preserveAspectRatio)
    [[nodiscard]] SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
    /// [`SVGFEImageElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/crossOrigin)
    /// [`SVGFEImageElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/crossOrigin)
    [[nodiscard]] SVGAnimatedString crossOrigin() const;
    /// [`SVGFEImageElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/x)
    /// [`SVGFEImageElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEImageElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/y)
    /// [`SVGFEImageElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEImageElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/width)
    /// [`SVGFEImageElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEImageElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/height)
    /// [`SVGFEImageElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEImageElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/result)
    /// [`SVGFEImageElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
    /// [`SVGFEImageElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/href)
    /// [`SVGFEImageElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEImageElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

} // namespace webbind