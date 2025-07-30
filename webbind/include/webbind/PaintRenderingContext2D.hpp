#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGSVGElement.hpp"
#include "enums.hpp"

class DOMMatrix;
class CanvasGradient;
class CanvasPattern;
class Path2D;


class PaintRenderingContext2D : public emlite::Val {
    explicit PaintRenderingContext2D(Handle h) noexcept;

public:
    explicit PaintRenderingContext2D(const emlite::Val &val) noexcept;
    static PaintRenderingContext2D take_ownership(Handle h) noexcept;

    PaintRenderingContext2D clone() const noexcept;
    jsbind::Undefined save();
    jsbind::Undefined restore();
    jsbind::Undefined reset();
    bool isContextLost();
    jsbind::Undefined scale(double x, double y);
    jsbind::Undefined rotate(double angle);
    jsbind::Undefined translate(double x, double y);
    jsbind::Undefined transform(double a, double b, double c, double d, double e, double f);
    DOMMatrix getTransform();
    jsbind::Undefined setTransform();
    jsbind::Undefined setTransform(const DOMMatrix2DInit& transform);
    jsbind::Undefined resetTransform();
    double globalAlpha() const;
    void globalAlpha(double value);
    jsbind::String globalCompositeOperation() const;
    void globalCompositeOperation(const jsbind::String& value);
    bool imageSmoothingEnabled() const;
    void imageSmoothingEnabled(bool value);
    ImageSmoothingQuality imageSmoothingQuality() const;
    void imageSmoothingQuality(const ImageSmoothingQuality& value);
    jsbind::Any strokeStyle() const;
    void strokeStyle(const jsbind::Any& value);
    jsbind::Any fillStyle() const;
    void fillStyle(const jsbind::Any& value);
    CanvasGradient createLinearGradient(double x0, double y0, double x1, double y1);
    CanvasGradient createRadialGradient(double x0, double y0, double r0, double x1, double y1, double r1);
    CanvasGradient createConicGradient(double startAngle, double x, double y);
    CanvasPattern createPattern(const jsbind::Any& image, const jsbind::String& repetition);
    double shadowOffsetX() const;
    void shadowOffsetX(double value);
    double shadowOffsetY() const;
    void shadowOffsetY(double value);
    double shadowBlur() const;
    void shadowBlur(double value);
    jsbind::String shadowColor() const;
    void shadowColor(const jsbind::String& value);
    jsbind::Undefined clearRect(double x, double y, double w, double h);
    jsbind::Undefined fillRect(double x, double y, double w, double h);
    jsbind::Undefined strokeRect(double x, double y, double w, double h);
    jsbind::Undefined beginPath();
    jsbind::Undefined fill(const Path2D& path);
    jsbind::Undefined fill(const Path2D& path, const CanvasFillRule& fillRule);
    jsbind::Undefined stroke(const Path2D& path);
    jsbind::Undefined clip(const Path2D& path);
    jsbind::Undefined clip(const Path2D& path, const CanvasFillRule& fillRule);
    bool isPointInPath(const Path2D& path, double x, double y);
    bool isPointInPath(const Path2D& path, double x, double y, const CanvasFillRule& fillRule);
    bool isPointInStroke(const Path2D& path, double x, double y);
    jsbind::Undefined drawImage(const jsbind::Any& image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh);
    double lineWidth() const;
    void lineWidth(double value);
    CanvasLineCap lineCap() const;
    void lineCap(const CanvasLineCap& value);
    CanvasLineJoin lineJoin() const;
    void lineJoin(const CanvasLineJoin& value);
    double miterLimit() const;
    void miterLimit(double value);
    jsbind::Undefined setLineDash(jsbind::TypedArray<double> segments);
    jsbind::TypedArray<double> getLineDash();
    double lineDashOffset() const;
    void lineDashOffset(double value);
    jsbind::Undefined closePath();
    jsbind::Undefined moveTo(double x, double y);
    jsbind::Undefined lineTo(double x, double y);
    jsbind::Undefined quadraticCurveTo(double cpx, double cpy, double x, double y);
    jsbind::Undefined bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);
    jsbind::Undefined arcTo(double x1, double y1, double x2, double y2, double radius);
    jsbind::Undefined rect(double x, double y, double w, double h);
    jsbind::Undefined roundRect(double x, double y, double w, double h);
    jsbind::Undefined roundRect(double x, double y, double w, double h, const jsbind::Any& radii);
    jsbind::Undefined arc(double x, double y, double radius, double startAngle, double endAngle);
    jsbind::Undefined arc(double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);
    jsbind::Undefined ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);
    jsbind::Undefined ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);
};

