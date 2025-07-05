#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;
class DOMPointInit;
class DOMPoint;


class DOMPointInit : public emlite::Val {
  explicit DOMPointInit(Handle h) noexcept;
public:
    static DOMPointInit take_ownership(Handle h) noexcept;
    explicit DOMPointInit(const emlite::Val &val) noexcept;
    DOMPointInit() noexcept;
    DOMPointInit clone() const noexcept;
    double x() const;
    void x(double value);
    double y() const;
    void y(double value);
    double z() const;
    void z(double value);
    double w() const;
    void w(double value);
};

class SVGGeometryElement : public SVGGraphicsElement {
    explicit SVGGeometryElement(Handle h) noexcept;

public:
    explicit SVGGeometryElement(const emlite::Val &val) noexcept;
    static SVGGeometryElement take_ownership(Handle h) noexcept;

    SVGGeometryElement clone() const noexcept;
    SVGAnimatedNumber pathLength() const;
    bool isPointInFill();
    bool isPointInFill(const DOMPointInit& point);
    bool isPointInStroke();
    bool isPointInStroke(const DOMPointInit& point);
    float getTotalLength();
    DOMPoint getPointAtLength(float distance);
};

