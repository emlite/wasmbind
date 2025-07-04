#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGTextContentElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGAnimatedEnumeration;
class SVGAnimatedString;


class SVGTextPathElement : public SVGTextContentElement {
    explicit SVGTextPathElement(Handle h) noexcept;

public:
    explicit SVGTextPathElement(const emlite::Val &val) noexcept;
    static SVGTextPathElement take_ownership(Handle h) noexcept;

    SVGTextPathElement clone() const noexcept;
    SVGAnimatedLength startOffset() const;
    SVGAnimatedEnumeration method() const;
    SVGAnimatedEnumeration spacing() const;
    SVGAnimatedString href() const;
};

