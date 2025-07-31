#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"


/// The SVGGElement class.
/// [`SVGGElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGElement)
class SVGGElement : public SVGGraphicsElement {
    explicit SVGGElement(Handle h) noexcept;

public:
    explicit SVGGElement(const emlite::Val &val) noexcept;
    static SVGGElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGGElement clone() const noexcept;
};

