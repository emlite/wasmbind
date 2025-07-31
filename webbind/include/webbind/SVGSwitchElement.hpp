#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"


/// The SVGSwitchElement class.
/// [`SVGSwitchElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSwitchElement)
class SVGSwitchElement : public SVGGraphicsElement {
    explicit SVGSwitchElement(Handle h) noexcept;

public:
    explicit SVGSwitchElement(const emlite::Val &val) noexcept;
    static SVGSwitchElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGSwitchElement clone() const noexcept;
};

