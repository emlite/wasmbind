#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGSVGElement.hpp"
#include "enums.hpp"

class DOMMatrix;
class CanvasGradient;
class CanvasPattern;
class Path2D;


/// The PaintRenderingContext2D class.
/// [`PaintRenderingContext2D`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D)
class PaintRenderingContext2D : public emlite::Val {
    explicit PaintRenderingContext2D(Handle h) noexcept;

public:
    explicit PaintRenderingContext2D(const emlite::Val &val) noexcept;
    static PaintRenderingContext2D take_ownership(Handle h) noexcept;

    [[nodiscard]] PaintRenderingContext2D clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The save method.
    /// [`PaintRenderingContext2D.save`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/save)
    jsbind::Undefined save();
    /// The restore method.
    /// [`PaintRenderingContext2D.restore`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/restore)
    jsbind::Undefined restore();
    /// The reset method.
    /// [`PaintRenderingContext2D.reset`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/reset)
    jsbind::Undefined reset();
    /// The isContextLost method.
    /// [`PaintRenderingContext2D.isContextLost`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/isContextLost)
    bool isContextLost();
    /// The scale method.
    /// [`PaintRenderingContext2D.scale`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/scale)
    jsbind::Undefined scale(double x, double y);
    /// The rotate method.
    /// [`PaintRenderingContext2D.rotate`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/rotate)
    jsbind::Undefined rotate(double angle);
    /// The translate method.
    /// [`PaintRenderingContext2D.translate`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/translate)
    jsbind::Undefined translate(double x, double y);
    /// The transform method.
    /// [`PaintRenderingContext2D.transform`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/transform)
    jsbind::Undefined transform(double a, double b, double c, double d, double e, double f);
    /// The getTransform method.
    /// [`PaintRenderingContext2D.getTransform`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/getTransform)
    DOMMatrix getTransform();
    /// The setTransform method.
    /// [`PaintRenderingContext2D.setTransform`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/setTransform)
    jsbind::Undefined setTransform();
    /// The setTransform method.
    /// [`PaintRenderingContext2D.setTransform`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/setTransform)
    jsbind::Undefined setTransform(const DOMMatrix2DInit& transform);
    /// The resetTransform method.
    /// [`PaintRenderingContext2D.resetTransform`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/resetTransform)
    jsbind::Undefined resetTransform();
    /// Getter of the `globalAlpha` attribute.
    /// [`PaintRenderingContext2D.globalAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/globalAlpha)
    [[nodiscard]] double globalAlpha() const;
    /// Setter of the `globalAlpha` attribute.
    /// [`PaintRenderingContext2D.globalAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/globalAlpha)
    void globalAlpha(double value);
    /// Getter of the `globalCompositeOperation` attribute.
    /// [`PaintRenderingContext2D.globalCompositeOperation`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/globalCompositeOperation)
    [[nodiscard]] jsbind::String globalCompositeOperation() const;
    /// Setter of the `globalCompositeOperation` attribute.
    /// [`PaintRenderingContext2D.globalCompositeOperation`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/globalCompositeOperation)
    void globalCompositeOperation(const jsbind::String& value);
    /// Getter of the `imageSmoothingEnabled` attribute.
    /// [`PaintRenderingContext2D.imageSmoothingEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/imageSmoothingEnabled)
    [[nodiscard]] bool imageSmoothingEnabled() const;
    /// Setter of the `imageSmoothingEnabled` attribute.
    /// [`PaintRenderingContext2D.imageSmoothingEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/imageSmoothingEnabled)
    void imageSmoothingEnabled(bool value);
    /// Getter of the `imageSmoothingQuality` attribute.
    /// [`PaintRenderingContext2D.imageSmoothingQuality`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/imageSmoothingQuality)
    [[nodiscard]] ImageSmoothingQuality imageSmoothingQuality() const;
    /// Setter of the `imageSmoothingQuality` attribute.
    /// [`PaintRenderingContext2D.imageSmoothingQuality`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/imageSmoothingQuality)
    void imageSmoothingQuality(const ImageSmoothingQuality& value);
    /// Getter of the `strokeStyle` attribute.
    /// [`PaintRenderingContext2D.strokeStyle`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/strokeStyle)
    [[nodiscard]] jsbind::Any strokeStyle() const;
    /// Setter of the `strokeStyle` attribute.
    /// [`PaintRenderingContext2D.strokeStyle`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/strokeStyle)
    void strokeStyle(const jsbind::Any& value);
    /// Getter of the `fillStyle` attribute.
    /// [`PaintRenderingContext2D.fillStyle`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/fillStyle)
    [[nodiscard]] jsbind::Any fillStyle() const;
    /// Setter of the `fillStyle` attribute.
    /// [`PaintRenderingContext2D.fillStyle`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/fillStyle)
    void fillStyle(const jsbind::Any& value);
    /// The createLinearGradient method.
    /// [`PaintRenderingContext2D.createLinearGradient`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/createLinearGradient)
    CanvasGradient createLinearGradient(double x0, double y0, double x1, double y1);
    /// The createRadialGradient method.
    /// [`PaintRenderingContext2D.createRadialGradient`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/createRadialGradient)
    CanvasGradient createRadialGradient(double x0, double y0, double r0, double x1, double y1, double r1);
    /// The createConicGradient method.
    /// [`PaintRenderingContext2D.createConicGradient`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/createConicGradient)
    CanvasGradient createConicGradient(double startAngle, double x, double y);
    /// The createPattern method.
    /// [`PaintRenderingContext2D.createPattern`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/createPattern)
    CanvasPattern createPattern(const jsbind::Any& image, const jsbind::String& repetition);
    /// Getter of the `shadowOffsetX` attribute.
    /// [`PaintRenderingContext2D.shadowOffsetX`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/shadowOffsetX)
    [[nodiscard]] double shadowOffsetX() const;
    /// Setter of the `shadowOffsetX` attribute.
    /// [`PaintRenderingContext2D.shadowOffsetX`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/shadowOffsetX)
    void shadowOffsetX(double value);
    /// Getter of the `shadowOffsetY` attribute.
    /// [`PaintRenderingContext2D.shadowOffsetY`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/shadowOffsetY)
    [[nodiscard]] double shadowOffsetY() const;
    /// Setter of the `shadowOffsetY` attribute.
    /// [`PaintRenderingContext2D.shadowOffsetY`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/shadowOffsetY)
    void shadowOffsetY(double value);
    /// Getter of the `shadowBlur` attribute.
    /// [`PaintRenderingContext2D.shadowBlur`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/shadowBlur)
    [[nodiscard]] double shadowBlur() const;
    /// Setter of the `shadowBlur` attribute.
    /// [`PaintRenderingContext2D.shadowBlur`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/shadowBlur)
    void shadowBlur(double value);
    /// Getter of the `shadowColor` attribute.
    /// [`PaintRenderingContext2D.shadowColor`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/shadowColor)
    [[nodiscard]] jsbind::String shadowColor() const;
    /// Setter of the `shadowColor` attribute.
    /// [`PaintRenderingContext2D.shadowColor`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/shadowColor)
    void shadowColor(const jsbind::String& value);
    /// The clearRect method.
    /// [`PaintRenderingContext2D.clearRect`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/clearRect)
    jsbind::Undefined clearRect(double x, double y, double w, double h);
    /// The fillRect method.
    /// [`PaintRenderingContext2D.fillRect`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/fillRect)
    jsbind::Undefined fillRect(double x, double y, double w, double h);
    /// The strokeRect method.
    /// [`PaintRenderingContext2D.strokeRect`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/strokeRect)
    jsbind::Undefined strokeRect(double x, double y, double w, double h);
    /// The beginPath method.
    /// [`PaintRenderingContext2D.beginPath`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/beginPath)
    jsbind::Undefined beginPath();
    /// The fill method.
    /// [`PaintRenderingContext2D.fill`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/fill)
    jsbind::Undefined fill(const Path2D& path);
    /// The fill method.
    /// [`PaintRenderingContext2D.fill`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/fill)
    jsbind::Undefined fill(const Path2D& path, const CanvasFillRule& fillRule);
    /// The stroke method.
    /// [`PaintRenderingContext2D.stroke`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/stroke)
    jsbind::Undefined stroke(const Path2D& path);
    /// The clip method.
    /// [`PaintRenderingContext2D.clip`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/clip)
    jsbind::Undefined clip(const Path2D& path);
    /// The clip method.
    /// [`PaintRenderingContext2D.clip`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/clip)
    jsbind::Undefined clip(const Path2D& path, const CanvasFillRule& fillRule);
    /// The isPointInPath method.
    /// [`PaintRenderingContext2D.isPointInPath`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/isPointInPath)
    bool isPointInPath(const Path2D& path, double x, double y);
    /// The isPointInPath method.
    /// [`PaintRenderingContext2D.isPointInPath`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/isPointInPath)
    bool isPointInPath(const Path2D& path, double x, double y, const CanvasFillRule& fillRule);
    /// The isPointInStroke method.
    /// [`PaintRenderingContext2D.isPointInStroke`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/isPointInStroke)
    bool isPointInStroke(const Path2D& path, double x, double y);
    /// The drawImage method.
    /// [`PaintRenderingContext2D.drawImage`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/drawImage)
    jsbind::Undefined drawImage(const jsbind::Any& image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh);
    /// Getter of the `lineWidth` attribute.
    /// [`PaintRenderingContext2D.lineWidth`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/lineWidth)
    [[nodiscard]] double lineWidth() const;
    /// Setter of the `lineWidth` attribute.
    /// [`PaintRenderingContext2D.lineWidth`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/lineWidth)
    void lineWidth(double value);
    /// Getter of the `lineCap` attribute.
    /// [`PaintRenderingContext2D.lineCap`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/lineCap)
    [[nodiscard]] CanvasLineCap lineCap() const;
    /// Setter of the `lineCap` attribute.
    /// [`PaintRenderingContext2D.lineCap`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/lineCap)
    void lineCap(const CanvasLineCap& value);
    /// Getter of the `lineJoin` attribute.
    /// [`PaintRenderingContext2D.lineJoin`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/lineJoin)
    [[nodiscard]] CanvasLineJoin lineJoin() const;
    /// Setter of the `lineJoin` attribute.
    /// [`PaintRenderingContext2D.lineJoin`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/lineJoin)
    void lineJoin(const CanvasLineJoin& value);
    /// Getter of the `miterLimit` attribute.
    /// [`PaintRenderingContext2D.miterLimit`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/miterLimit)
    [[nodiscard]] double miterLimit() const;
    /// Setter of the `miterLimit` attribute.
    /// [`PaintRenderingContext2D.miterLimit`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/miterLimit)
    void miterLimit(double value);
    /// The setLineDash method.
    /// [`PaintRenderingContext2D.setLineDash`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/setLineDash)
    jsbind::Undefined setLineDash(jsbind::TypedArray<double> segments);
    /// The getLineDash method.
    /// [`PaintRenderingContext2D.getLineDash`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/getLineDash)
    jsbind::TypedArray<double> getLineDash();
    /// Getter of the `lineDashOffset` attribute.
    /// [`PaintRenderingContext2D.lineDashOffset`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/lineDashOffset)
    [[nodiscard]] double lineDashOffset() const;
    /// Setter of the `lineDashOffset` attribute.
    /// [`PaintRenderingContext2D.lineDashOffset`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/lineDashOffset)
    void lineDashOffset(double value);
    /// The closePath method.
    /// [`PaintRenderingContext2D.closePath`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/closePath)
    jsbind::Undefined closePath();
    /// The moveTo method.
    /// [`PaintRenderingContext2D.moveTo`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/moveTo)
    jsbind::Undefined moveTo(double x, double y);
    /// The lineTo method.
    /// [`PaintRenderingContext2D.lineTo`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/lineTo)
    jsbind::Undefined lineTo(double x, double y);
    /// The quadraticCurveTo method.
    /// [`PaintRenderingContext2D.quadraticCurveTo`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/quadraticCurveTo)
    jsbind::Undefined quadraticCurveTo(double cpx, double cpy, double x, double y);
    /// The bezierCurveTo method.
    /// [`PaintRenderingContext2D.bezierCurveTo`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/bezierCurveTo)
    jsbind::Undefined bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);
    /// The arcTo method.
    /// [`PaintRenderingContext2D.arcTo`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/arcTo)
    jsbind::Undefined arcTo(double x1, double y1, double x2, double y2, double radius);
    /// The rect method.
    /// [`PaintRenderingContext2D.rect`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/rect)
    jsbind::Undefined rect(double x, double y, double w, double h);
    /// The roundRect method.
    /// [`PaintRenderingContext2D.roundRect`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/roundRect)
    jsbind::Undefined roundRect(double x, double y, double w, double h);
    /// The roundRect method.
    /// [`PaintRenderingContext2D.roundRect`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/roundRect)
    jsbind::Undefined roundRect(double x, double y, double w, double h, const jsbind::Any& radii);
    /// The arc method.
    /// [`PaintRenderingContext2D.arc`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/arc)
    jsbind::Undefined arc(double x, double y, double radius, double startAngle, double endAngle);
    /// The arc method.
    /// [`PaintRenderingContext2D.arc`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/arc)
    jsbind::Undefined arc(double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);
    /// The ellipse method.
    /// [`PaintRenderingContext2D.ellipse`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/ellipse)
    jsbind::Undefined ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);
    /// The ellipse method.
    /// [`PaintRenderingContext2D.ellipse`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D/ellipse)
    jsbind::Undefined ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);
};

