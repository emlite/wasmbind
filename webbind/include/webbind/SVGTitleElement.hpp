#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"


class SVGTitleElement : public SVGElement {
    explicit SVGTitleElement(Handle h) noexcept;

public:
    explicit SVGTitleElement(const emlite::Val &val) noexcept;
    static SVGTitleElement take_ownership(Handle h) noexcept;

    SVGTitleElement clone() const noexcept;
};

