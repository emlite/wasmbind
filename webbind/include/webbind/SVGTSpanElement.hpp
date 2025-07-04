#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGTextPositioningElement.hpp"
#include "enums.hpp"


class SVGTSpanElement : public SVGTextPositioningElement {
    explicit SVGTSpanElement(Handle h) noexcept;

public:
    explicit SVGTSpanElement(const emlite::Val &val) noexcept;
    static SVGTSpanElement take_ownership(Handle h) noexcept;

    SVGTSpanElement clone() const noexcept;
};

