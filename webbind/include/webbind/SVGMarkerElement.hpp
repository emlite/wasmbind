#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGAnimatedEnumeration;
class SVGAnimatedAngle;
class SVGAngle;
class SVGAnimatedRect;
class SVGAnimatedPreserveAspectRatio;


class SVGMarkerElement : public SVGElement {
    explicit SVGMarkerElement(Handle h) noexcept;

public:
    explicit SVGMarkerElement(const emlite::Val &val) noexcept;
    static SVGMarkerElement take_ownership(Handle h) noexcept;

    SVGMarkerElement clone() const noexcept;
    SVGAnimatedLength refX() const;
    SVGAnimatedLength refY() const;
    SVGAnimatedEnumeration markerUnits() const;
    SVGAnimatedLength markerWidth() const;
    SVGAnimatedLength markerHeight() const;
    SVGAnimatedEnumeration orientType() const;
    SVGAnimatedAngle orientAngle() const;
    jsbind::String orient() const;
    void orient(const jsbind::String& value);
    jsbind::Undefined setOrientToAuto();
    jsbind::Undefined setOrientToAngle(const SVGAngle& angle);
    SVGAnimatedRect viewBox() const;
    SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
};

