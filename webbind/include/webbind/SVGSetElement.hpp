#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGAnimationElement.hpp"
#include "enums.hpp"


/// The SVGSetElement class.
/// [`SVGSetElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSetElement)
class SVGSetElement : public SVGAnimationElement {
    explicit SVGSetElement(Handle h) noexcept;

public:
    explicit SVGSetElement(const emlite::Val &val) noexcept;
    static SVGSetElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGSetElement clone() const noexcept;
};

