#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGTextContentElement.hpp"
#include "enums.hpp"

class SVGAnimatedLengthList;
class SVGAnimatedNumberList;


class SVGTextPositioningElement : public SVGTextContentElement {
    explicit SVGTextPositioningElement(Handle h) noexcept;

public:
    explicit SVGTextPositioningElement(const emlite::Val &val) noexcept;
    static SVGTextPositioningElement take_ownership(Handle h) noexcept;

    SVGTextPositioningElement clone() const noexcept;
    SVGAnimatedLengthList x() const;
    SVGAnimatedLengthList y() const;
    SVGAnimatedLengthList dx() const;
    SVGAnimatedLengthList dy() const;
    SVGAnimatedNumberList rotate() const;
};

