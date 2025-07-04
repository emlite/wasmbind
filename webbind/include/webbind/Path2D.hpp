#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGSVGElement.hpp"
#include "enums.hpp"

class Path2D;


class Path2D : public emlite::Val {
    explicit Path2D(Handle h) noexcept;

public:
    explicit Path2D(const emlite::Val &val) noexcept;
    static Path2D take_ownership(Handle h) noexcept;

    Path2D clone() const noexcept;
    Path2D(const jsbind::Any& path);
    jsbind::Undefined addPath(const Path2D& path, const DOMMatrix2DInit& transform);
    jsbind::Undefined closePath();
    jsbind::Undefined moveTo(double x, double y);
    jsbind::Undefined lineTo(double x, double y);
    jsbind::Undefined quadraticCurveTo(double cpx, double cpy, double x, double y);
    jsbind::Undefined bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);
    jsbind::Undefined arcTo(double x1, double y1, double x2, double y2, double radius);
    jsbind::Undefined rect(double x, double y, double w, double h);
    jsbind::Undefined roundRect(double x, double y, double w, double h, const jsbind::Any& radii);
    jsbind::Undefined arc(double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);
    jsbind::Undefined ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);
};

