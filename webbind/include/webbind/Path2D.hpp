#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGSVGElement.hpp"
#include "enums.hpp"

class Path2D;


/// The Path2D class.
/// [`Path2D`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D)
class Path2D : public emlite::Val {
    explicit Path2D(Handle h) noexcept;

public:
    explicit Path2D(const emlite::Val &val) noexcept;
    static Path2D take_ownership(Handle h) noexcept;

    [[nodiscard]] Path2D clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Path2D(..)` constructor, creating a new Path2D instance
    Path2D();
    /// The `new Path2D(..)` constructor, creating a new Path2D instance
    Path2D(const jsbind::Any& path);
    /// The addPath method.
    /// [`Path2D.addPath`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/addPath)
    jsbind::Undefined addPath(const Path2D& path);
    /// The addPath method.
    /// [`Path2D.addPath`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/addPath)
    jsbind::Undefined addPath(const Path2D& path, const DOMMatrix2DInit& transform);
    /// The closePath method.
    /// [`Path2D.closePath`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/closePath)
    jsbind::Undefined closePath();
    /// The moveTo method.
    /// [`Path2D.moveTo`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/moveTo)
    jsbind::Undefined moveTo(double x, double y);
    /// The lineTo method.
    /// [`Path2D.lineTo`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/lineTo)
    jsbind::Undefined lineTo(double x, double y);
    /// The quadraticCurveTo method.
    /// [`Path2D.quadraticCurveTo`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/quadraticCurveTo)
    jsbind::Undefined quadraticCurveTo(double cpx, double cpy, double x, double y);
    /// The bezierCurveTo method.
    /// [`Path2D.bezierCurveTo`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/bezierCurveTo)
    jsbind::Undefined bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);
    /// The arcTo method.
    /// [`Path2D.arcTo`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/arcTo)
    jsbind::Undefined arcTo(double x1, double y1, double x2, double y2, double radius);
    /// The rect method.
    /// [`Path2D.rect`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/rect)
    jsbind::Undefined rect(double x, double y, double w, double h);
    /// The roundRect method.
    /// [`Path2D.roundRect`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/roundRect)
    jsbind::Undefined roundRect(double x, double y, double w, double h);
    /// The roundRect method.
    /// [`Path2D.roundRect`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/roundRect)
    jsbind::Undefined roundRect(double x, double y, double w, double h, const jsbind::Any& radii);
    /// The arc method.
    /// [`Path2D.arc`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/arc)
    jsbind::Undefined arc(double x, double y, double radius, double startAngle, double endAngle);
    /// The arc method.
    /// [`Path2D.arc`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/arc)
    jsbind::Undefined arc(double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);
    /// The ellipse method.
    /// [`Path2D.ellipse`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/ellipse)
    jsbind::Undefined ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);
    /// The ellipse method.
    /// [`Path2D.ellipse`](https://developer.mozilla.org/en-US/docs/Web/API/Path2D/ellipse)
    jsbind::Undefined ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);
};

