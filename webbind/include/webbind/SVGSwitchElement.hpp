#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"


class SVGSwitchElement : public SVGGraphicsElement {
    explicit SVGSwitchElement(Handle h) noexcept;

public:
    explicit SVGSwitchElement(const emlite::Val &val) noexcept;
    static SVGSwitchElement take_ownership(Handle h) noexcept;

    SVGSwitchElement clone() const noexcept;
};

