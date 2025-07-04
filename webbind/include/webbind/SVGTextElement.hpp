#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGTextPositioningElement.hpp"
#include "enums.hpp"


class SVGTextElement : public SVGTextPositioningElement {
    explicit SVGTextElement(Handle h) noexcept;

public:
    explicit SVGTextElement(const emlite::Val &val) noexcept;
    static SVGTextElement take_ownership(Handle h) noexcept;

    SVGTextElement clone() const noexcept;
};

