#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedRect;
class SVGAnimatedPreserveAspectRatio;


/// The SVGSymbolElement class.
/// [`SVGSymbolElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSymbolElement)
class SVGSymbolElement : public SVGGraphicsElement {
    explicit SVGSymbolElement(Handle h) noexcept;

public:
    explicit SVGSymbolElement(const emlite::Val &val) noexcept;
    static SVGSymbolElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGSymbolElement clone() const noexcept;
    /// Getter of the `viewBox` attribute.
    /// [`SVGSymbolElement.viewBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSymbolElement/viewBox)
    [[nodiscard]] SVGAnimatedRect viewBox() const;
    /// Getter of the `preserveAspectRatio` attribute.
    /// [`SVGSymbolElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSymbolElement/preserveAspectRatio)
    [[nodiscard]] SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
};

