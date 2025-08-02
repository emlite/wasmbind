#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGAnimationElement.hpp"
#include "enums.hpp"


/// The SVGAnimateTransformElement class.
/// [`SVGAnimateTransformElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimateTransformElement)
class SVGAnimateTransformElement : public SVGAnimationElement {
    explicit SVGAnimateTransformElement(Handle h) noexcept;

public:
    explicit SVGAnimateTransformElement(const emlite::Val &val) noexcept;
    static SVGAnimateTransformElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAnimateTransformElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

