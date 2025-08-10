#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGraphicsElement.hpp"

namespace webbind {

class SVGAnimatedRect;
class SVGAnimatedPreserveAspectRatio;

/// Interface SVGSymbolElement
/// [`SVGSymbolElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSymbolElement)
class SVGSymbolElement : public SVGGraphicsElement {
    explicit SVGSymbolElement(Handle h) noexcept;
public:
    explicit SVGSymbolElement(const emlite::Val &val) noexcept;
    static SVGSymbolElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGSymbolElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `viewBox` attribute.
    /// [`SVGSymbolElement.viewBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSymbolElement/viewBox)
    [[nodiscard]] SVGAnimatedRect viewBox() const;
    /// Getter of the `preserveAspectRatio` attribute.
    /// [`SVGSymbolElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSymbolElement/preserveAspectRatio)
    [[nodiscard]] SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
};

} // namespace webbind