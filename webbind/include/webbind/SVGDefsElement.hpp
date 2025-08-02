#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"


/// The SVGDefsElement class.
/// [`SVGDefsElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGDefsElement)
class SVGDefsElement : public SVGGraphicsElement {
    explicit SVGDefsElement(Handle h) noexcept;

public:
    explicit SVGDefsElement(const emlite::Val &val) noexcept;
    static SVGDefsElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGDefsElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

