#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"


class SVGDefsElement : public SVGGraphicsElement {
    explicit SVGDefsElement(Handle h) noexcept;

public:
    explicit SVGDefsElement(const emlite::Val &val) noexcept;
    static SVGDefsElement take_ownership(Handle h) noexcept;

    SVGDefsElement clone() const noexcept;
};

