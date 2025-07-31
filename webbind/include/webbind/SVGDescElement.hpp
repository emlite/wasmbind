#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"


/// The SVGDescElement class.
/// [`SVGDescElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGDescElement)
class SVGDescElement : public SVGElement {
    explicit SVGDescElement(Handle h) noexcept;

public:
    explicit SVGDescElement(const emlite::Val &val) noexcept;
    static SVGDescElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGDescElement clone() const noexcept;
};

