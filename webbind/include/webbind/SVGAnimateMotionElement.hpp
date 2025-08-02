#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGAnimationElement.hpp"
#include "enums.hpp"


/// The SVGAnimateMotionElement class.
/// [`SVGAnimateMotionElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimateMotionElement)
class SVGAnimateMotionElement : public SVGAnimationElement {
    explicit SVGAnimateMotionElement(Handle h) noexcept;

public:
    explicit SVGAnimateMotionElement(const emlite::Val &val) noexcept;
    static SVGAnimateMotionElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAnimateMotionElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

