#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedEnumeration;
class SVGAnimatedTransformList;


class SVGClipPathElement : public SVGElement {
    explicit SVGClipPathElement(Handle h) noexcept;

public:
    explicit SVGClipPathElement(const emlite::Val &val) noexcept;
    static SVGClipPathElement take_ownership(Handle h) noexcept;

    SVGClipPathElement clone() const noexcept;
    SVGAnimatedEnumeration clipPathUnits() const;
    SVGAnimatedTransformList transform() const;
};

