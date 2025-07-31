#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGAnimatedPreserveAspectRatio;
class SVGAnimatedString;


/// The SVGImageElement class.
/// [`SVGImageElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGImageElement)
class SVGImageElement : public SVGGraphicsElement {
    explicit SVGImageElement(Handle h) noexcept;

public:
    explicit SVGImageElement(const emlite::Val &val) noexcept;
    static SVGImageElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGImageElement clone() const noexcept;
    /// Getter of the `x` attribute.
    /// [`SVGImageElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGImageElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGImageElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGImageElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGImageElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGImageElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGImageElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGImageElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `preserveAspectRatio` attribute.
    /// [`SVGImageElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGImageElement/preserveAspectRatio)
    [[nodiscard]] SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
    /// Getter of the `crossOrigin` attribute.
    /// [`SVGImageElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/SVGImageElement/crossOrigin)
    [[nodiscard]] jsbind::String crossOrigin() const;
    /// Setter of the `crossOrigin` attribute.
    /// [`SVGImageElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/SVGImageElement/crossOrigin)
    void crossOrigin(const jsbind::String& value);
    /// Getter of the `href` attribute.
    /// [`SVGImageElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGImageElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

