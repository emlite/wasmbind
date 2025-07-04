#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedRect;
class SVGAnimatedPreserveAspectRatio;


class SVGSymbolElement : public SVGGraphicsElement {
    explicit SVGSymbolElement(Handle h) noexcept;

public:
    explicit SVGSymbolElement(const emlite::Val &val) noexcept;
    static SVGSymbolElement take_ownership(Handle h) noexcept;

    SVGSymbolElement clone() const noexcept;
    SVGAnimatedRect viewBox() const;
    SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
};

