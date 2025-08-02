#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedRect;
class SVGAnimatedPreserveAspectRatio;


/// The SVGViewElement class.
/// [`SVGViewElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGViewElement)
class SVGViewElement : public SVGElement {
    explicit SVGViewElement(Handle h) noexcept;

public:
    explicit SVGViewElement(const emlite::Val &val) noexcept;
    static SVGViewElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGViewElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `viewBox` attribute.
    /// [`SVGViewElement.viewBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGViewElement/viewBox)
    [[nodiscard]] SVGAnimatedRect viewBox() const;
    /// Getter of the `preserveAspectRatio` attribute.
    /// [`SVGViewElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGViewElement/preserveAspectRatio)
    [[nodiscard]] SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
};

