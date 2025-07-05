#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGSVGElement.hpp"
#include "enums.hpp"

class HTMLCanvasElement;
class CanvasRenderingContext2DSettings;
class DOMMatrix;
class CanvasGradient;
class CanvasPattern;
class Path2D;
class Element;
class TextMetrics;
class ImageData;
class ImageDataSettings;


class CanvasRenderingContext2DSettings : public emlite::Val {
  explicit CanvasRenderingContext2DSettings(Handle h) noexcept;
public:
    static CanvasRenderingContext2DSettings take_ownership(Handle h) noexcept;
    explicit CanvasRenderingContext2DSettings(const emlite::Val &val) noexcept;
    CanvasRenderingContext2DSettings() noexcept;
    CanvasRenderingContext2DSettings clone() const noexcept;
    bool alpha() const;
    void alpha(bool value);
    bool desynchronized() const;
    void desynchronized(bool value);
    PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
    CanvasColorType colorType() const;
    void colorType(const CanvasColorType& value);
    bool willReadFrequently() const;
    void willReadFrequently(bool value);
};

class ImageDataSettings : public emlite::Val {
  explicit ImageDataSettings(Handle h) noexcept;
public:
    static ImageDataSettings take_ownership(Handle h) noexcept;
    explicit ImageDataSettings(const emlite::Val &val) noexcept;
    ImageDataSettings() noexcept;
    ImageDataSettings clone() const noexcept;
    PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
    ImageDataPixelFormat pixelFormat() const;
    void pixelFormat(const ImageDataPixelFormat& value);
};

class CanvasRenderingContext2D : public emlite::Val {
    explicit CanvasRenderingContext2D(Handle h) noexcept;

public:
    explicit CanvasRenderingContext2D(const emlite::Val &val) noexcept;
    static CanvasRenderingContext2D take_ownership(Handle h) noexcept;

    CanvasRenderingContext2D clone() const noexcept;
    HTMLCanvasElement canvas() const;
    CanvasRenderingContext2DSettings getContextAttributes();
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
    jsbind::DOMString globalCompositeOperation() const;
    void globalCompositeOperation(const jsbind::DOMString& value);
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
    CanvasPattern createPattern(const jsbind::Any& image, const jsbind::DOMString& repetition);
    double shadowOffsetX() const;
    void shadowOffsetX(double value);
    double shadowOffsetY() const;
    void shadowOffsetY(double value);
    double shadowBlur() const;
    void shadowBlur(double value);
    jsbind::DOMString shadowColor() const;
    void shadowColor(const jsbind::DOMString& value);
    jsbind::DOMString filter() const;
    void filter(const jsbind::DOMString& value);
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
    jsbind::Undefined drawFocusIfNeeded(const Path2D& path, const Element& element);
    jsbind::Undefined fillText(const jsbind::DOMString& text, double x, double y);
    jsbind::Undefined fillText(const jsbind::DOMString& text, double x, double y, double maxWidth);
    jsbind::Undefined strokeText(const jsbind::DOMString& text, double x, double y);
    jsbind::Undefined strokeText(const jsbind::DOMString& text, double x, double y, double maxWidth);
    TextMetrics measureText(const jsbind::DOMString& text);
    jsbind::Undefined drawImage(const jsbind::Any& image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh);
    ImageData createImageData(const ImageData& imageData);
    ImageData getImageData(long sx, long sy, long sw, long sh);
    ImageData getImageData(long sx, long sy, long sw, long sh, const ImageDataSettings& settings);
    jsbind::Undefined putImageData(const ImageData& imageData, long dx, long dy, long dirtyX, long dirtyY, long dirtyWidth, long dirtyHeight);
    double lineWidth() const;
    void lineWidth(double value);
    CanvasLineCap lineCap() const;
    void lineCap(const CanvasLineCap& value);
    CanvasLineJoin lineJoin() const;
    void lineJoin(const CanvasLineJoin& value);
    double miterLimit() const;
    void miterLimit(double value);
    jsbind::Undefined setLineDash(jsbind::Sequence<double> segments);
    jsbind::Sequence<double> getLineDash();
    double lineDashOffset() const;
    void lineDashOffset(double value);
    jsbind::DOMString lang() const;
    void lang(const jsbind::DOMString& value);
    jsbind::DOMString font() const;
    void font(const jsbind::DOMString& value);
    CanvasTextAlign textAlign() const;
    void textAlign(const CanvasTextAlign& value);
    CanvasTextBaseline textBaseline() const;
    void textBaseline(const CanvasTextBaseline& value);
    CanvasDirection direction() const;
    void direction(const CanvasDirection& value);
    jsbind::DOMString letterSpacing() const;
    void letterSpacing(const jsbind::DOMString& value);
    CanvasFontKerning fontKerning() const;
    void fontKerning(const CanvasFontKerning& value);
    CanvasFontStretch fontStretch() const;
    void fontStretch(const CanvasFontStretch& value);
    CanvasFontVariantCaps fontVariantCaps() const;
    void fontVariantCaps(const CanvasFontVariantCaps& value);
    CanvasTextRendering textRendering() const;
    void textRendering(const CanvasTextRendering& value);
    jsbind::DOMString wordSpacing() const;
    void wordSpacing(const jsbind::DOMString& value);
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

