#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class HTMLCanvasElement;
class CanvasRenderingContext2DSettings;
class DOMMatrix;
class DOMMatrix2DInit;
class CanvasGradient;
class CanvasPattern;
class Path2D;
class Element;
class TextMetrics;
class ImageData;
class ImageDataSettings;

/// Interface CanvasRenderingContext2D
/// [`CanvasRenderingContext2D`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D)
class CanvasRenderingContext2D : public emlite::Val {
    explicit CanvasRenderingContext2D(Handle h) noexcept;
public:
    explicit CanvasRenderingContext2D(const emlite::Val &val) noexcept;
    static CanvasRenderingContext2D take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasRenderingContext2D clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CanvasRenderingContext2D.canvas`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/canvas)
    /// [`CanvasRenderingContext2D.canvas`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/canvas)
    [[nodiscard]] HTMLCanvasElement canvas() const;
    /// The getContextAttributes method.
    /// [`CanvasRenderingContext2D.getContextAttributes`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/getContextAttributes)
    CanvasRenderingContext2DSettings getContextAttributes();
    /// The save method.
    /// [`CanvasRenderingContext2D.save`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/save)
    jsbind::Undefined save();
    /// The restore method.
    /// [`CanvasRenderingContext2D.restore`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/restore)
    jsbind::Undefined restore();
    /// The reset method.
    /// [`CanvasRenderingContext2D.reset`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/reset)
    jsbind::Undefined reset();
    /// The isContextLost method.
    /// [`CanvasRenderingContext2D.isContextLost`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/isContextLost)
    bool isContextLost();
    /// The scale method.
    /// [`CanvasRenderingContext2D.scale`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/scale)
    jsbind::Undefined scale(double x, double y);
    /// The rotate method.
    /// [`CanvasRenderingContext2D.rotate`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/rotate)
    jsbind::Undefined rotate(double angle);
    /// The translate method.
    /// [`CanvasRenderingContext2D.translate`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/translate)
    jsbind::Undefined translate(double x, double y);
    /// The transform method.
    /// [`CanvasRenderingContext2D.transform`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/transform)
    jsbind::Undefined transform(double a, double b, double c, double d, double e, double f);
    /// The getTransform method.
    /// [`CanvasRenderingContext2D.getTransform`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/getTransform)
    DOMMatrix getTransform();
    /// The setTransform method.
    /// [`CanvasRenderingContext2D.setTransform`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/setTransform)
    jsbind::Undefined setTransform(double a, double b, double c, double d, double e, double f);
    /// The setTransform method.
    /// [`CanvasRenderingContext2D.setTransform`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/setTransform)
    jsbind::Undefined setTransform();
    /// The setTransform method.
    /// [`CanvasRenderingContext2D.setTransform`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/setTransform)
    jsbind::Undefined setTransform(const DOMMatrix2DInit& transform);
    /// The resetTransform method.
    /// [`CanvasRenderingContext2D.resetTransform`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/resetTransform)
    jsbind::Undefined resetTransform();
    /// [`CanvasRenderingContext2D.globalAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/globalAlpha)
    /// [`CanvasRenderingContext2D.globalAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/globalAlpha)
    [[nodiscard]] double globalAlpha() const;
    /// Setter of the `globalAlpha` attribute.
    /// [`CanvasRenderingContext2D.globalAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/globalAlpha)
    void globalAlpha(double value);
    /// [`CanvasRenderingContext2D.globalCompositeOperation`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/globalCompositeOperation)
    /// [`CanvasRenderingContext2D.globalCompositeOperation`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/globalCompositeOperation)
    [[nodiscard]] jsbind::String globalCompositeOperation() const;
    /// Setter of the `globalCompositeOperation` attribute.
    /// [`CanvasRenderingContext2D.globalCompositeOperation`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/globalCompositeOperation)
    void globalCompositeOperation(const jsbind::String& value);
    /// [`CanvasRenderingContext2D.imageSmoothingEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/imageSmoothingEnabled)
    /// [`CanvasRenderingContext2D.imageSmoothingEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/imageSmoothingEnabled)
    [[nodiscard]] bool imageSmoothingEnabled() const;
    /// Setter of the `imageSmoothingEnabled` attribute.
    /// [`CanvasRenderingContext2D.imageSmoothingEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/imageSmoothingEnabled)
    void imageSmoothingEnabled(bool value);
    /// [`CanvasRenderingContext2D.imageSmoothingQuality`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/imageSmoothingQuality)
    /// [`CanvasRenderingContext2D.imageSmoothingQuality`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/imageSmoothingQuality)
    [[nodiscard]] ImageSmoothingQuality imageSmoothingQuality() const;
    /// Setter of the `imageSmoothingQuality` attribute.
    /// [`CanvasRenderingContext2D.imageSmoothingQuality`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/imageSmoothingQuality)
    void imageSmoothingQuality(const ImageSmoothingQuality& value);
    /// [`CanvasRenderingContext2D.strokeStyle`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/strokeStyle)
    /// [`CanvasRenderingContext2D.strokeStyle`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/strokeStyle)
    [[nodiscard]] jsbind::Any strokeStyle() const;
    /// Setter of the `strokeStyle` attribute.
    /// [`CanvasRenderingContext2D.strokeStyle`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/strokeStyle)
    void strokeStyle(const jsbind::Any& value);
    /// [`CanvasRenderingContext2D.fillStyle`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fillStyle)
    /// [`CanvasRenderingContext2D.fillStyle`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fillStyle)
    [[nodiscard]] jsbind::Any fillStyle() const;
    /// Setter of the `fillStyle` attribute.
    /// [`CanvasRenderingContext2D.fillStyle`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fillStyle)
    void fillStyle(const jsbind::Any& value);
    /// The createLinearGradient method.
    /// [`CanvasRenderingContext2D.createLinearGradient`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/createLinearGradient)
    CanvasGradient createLinearGradient(double x0, double y0, double x1, double y1);
    /// The createRadialGradient method.
    /// [`CanvasRenderingContext2D.createRadialGradient`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/createRadialGradient)
    CanvasGradient createRadialGradient(double x0, double y0, double r0, double x1, double y1, double r1);
    /// The createConicGradient method.
    /// [`CanvasRenderingContext2D.createConicGradient`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/createConicGradient)
    CanvasGradient createConicGradient(double startAngle, double x, double y);
    /// The createPattern method.
    /// [`CanvasRenderingContext2D.createPattern`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/createPattern)
    CanvasPattern createPattern(const jsbind::Any& image, const jsbind::String& repetition);
    /// [`CanvasRenderingContext2D.shadowOffsetX`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowOffsetX)
    /// [`CanvasRenderingContext2D.shadowOffsetX`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowOffsetX)
    [[nodiscard]] double shadowOffsetX() const;
    /// Setter of the `shadowOffsetX` attribute.
    /// [`CanvasRenderingContext2D.shadowOffsetX`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowOffsetX)
    void shadowOffsetX(double value);
    /// [`CanvasRenderingContext2D.shadowOffsetY`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowOffsetY)
    /// [`CanvasRenderingContext2D.shadowOffsetY`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowOffsetY)
    [[nodiscard]] double shadowOffsetY() const;
    /// Setter of the `shadowOffsetY` attribute.
    /// [`CanvasRenderingContext2D.shadowOffsetY`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowOffsetY)
    void shadowOffsetY(double value);
    /// [`CanvasRenderingContext2D.shadowBlur`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowBlur)
    /// [`CanvasRenderingContext2D.shadowBlur`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowBlur)
    [[nodiscard]] double shadowBlur() const;
    /// Setter of the `shadowBlur` attribute.
    /// [`CanvasRenderingContext2D.shadowBlur`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowBlur)
    void shadowBlur(double value);
    /// [`CanvasRenderingContext2D.shadowColor`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowColor)
    /// [`CanvasRenderingContext2D.shadowColor`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowColor)
    [[nodiscard]] jsbind::String shadowColor() const;
    /// Setter of the `shadowColor` attribute.
    /// [`CanvasRenderingContext2D.shadowColor`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/shadowColor)
    void shadowColor(const jsbind::String& value);
    /// [`CanvasRenderingContext2D.filter`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/filter)
    /// [`CanvasRenderingContext2D.filter`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/filter)
    [[nodiscard]] jsbind::String filter() const;
    /// Setter of the `filter` attribute.
    /// [`CanvasRenderingContext2D.filter`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/filter)
    void filter(const jsbind::String& value);
    /// The clearRect method.
    /// [`CanvasRenderingContext2D.clearRect`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/clearRect)
    jsbind::Undefined clearRect(double x, double y, double w, double h);
    /// The fillRect method.
    /// [`CanvasRenderingContext2D.fillRect`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fillRect)
    jsbind::Undefined fillRect(double x, double y, double w, double h);
    /// The strokeRect method.
    /// [`CanvasRenderingContext2D.strokeRect`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/strokeRect)
    jsbind::Undefined strokeRect(double x, double y, double w, double h);
    /// The beginPath method.
    /// [`CanvasRenderingContext2D.beginPath`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/beginPath)
    jsbind::Undefined beginPath();
    /// The fill method.
    /// [`CanvasRenderingContext2D.fill`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fill)
    jsbind::Undefined fill();
    /// The fill method.
    /// [`CanvasRenderingContext2D.fill`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fill)
    jsbind::Undefined fill(const CanvasFillRule& fillRule);
    /// The fill method.
    /// [`CanvasRenderingContext2D.fill`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fill)
    jsbind::Undefined fill(const Path2D& path);
    /// The fill method.
    /// [`CanvasRenderingContext2D.fill`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fill)
    jsbind::Undefined fill(const Path2D& path, const CanvasFillRule& fillRule);
    /// The stroke method.
    /// [`CanvasRenderingContext2D.stroke`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/stroke)
    jsbind::Undefined stroke();
    /// The stroke method.
    /// [`CanvasRenderingContext2D.stroke`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/stroke)
    jsbind::Undefined stroke(const Path2D& path);
    /// The clip method.
    /// [`CanvasRenderingContext2D.clip`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/clip)
    jsbind::Undefined clip();
    /// The clip method.
    /// [`CanvasRenderingContext2D.clip`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/clip)
    jsbind::Undefined clip(const CanvasFillRule& fillRule);
    /// The clip method.
    /// [`CanvasRenderingContext2D.clip`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/clip)
    jsbind::Undefined clip(const Path2D& path);
    /// The clip method.
    /// [`CanvasRenderingContext2D.clip`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/clip)
    jsbind::Undefined clip(const Path2D& path, const CanvasFillRule& fillRule);
    /// The isPointInPath method.
    /// [`CanvasRenderingContext2D.isPointInPath`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/isPointInPath)
    bool isPointInPath(double x, double y);
    /// The isPointInPath method.
    /// [`CanvasRenderingContext2D.isPointInPath`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/isPointInPath)
    bool isPointInPath(double x, double y, const CanvasFillRule& fillRule);
    /// The isPointInPath method.
    /// [`CanvasRenderingContext2D.isPointInPath`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/isPointInPath)
    bool isPointInPath(const Path2D& path, double x, double y);
    /// The isPointInPath method.
    /// [`CanvasRenderingContext2D.isPointInPath`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/isPointInPath)
    bool isPointInPath(const Path2D& path, double x, double y, const CanvasFillRule& fillRule);
    /// The isPointInStroke method.
    /// [`CanvasRenderingContext2D.isPointInStroke`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/isPointInStroke)
    bool isPointInStroke(double x, double y);
    /// The isPointInStroke method.
    /// [`CanvasRenderingContext2D.isPointInStroke`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/isPointInStroke)
    bool isPointInStroke(const Path2D& path, double x, double y);
    /// The drawFocusIfNeeded method.
    /// [`CanvasRenderingContext2D.drawFocusIfNeeded`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/drawFocusIfNeeded)
    jsbind::Undefined drawFocusIfNeeded(const Element& element);
    /// The drawFocusIfNeeded method.
    /// [`CanvasRenderingContext2D.drawFocusIfNeeded`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/drawFocusIfNeeded)
    jsbind::Undefined drawFocusIfNeeded(const Path2D& path, const Element& element);
    /// The fillText method.
    /// [`CanvasRenderingContext2D.fillText`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fillText)
    jsbind::Undefined fillText(const jsbind::String& text, double x, double y);
    /// The fillText method.
    /// [`CanvasRenderingContext2D.fillText`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fillText)
    jsbind::Undefined fillText(const jsbind::String& text, double x, double y, double maxWidth);
    /// The strokeText method.
    /// [`CanvasRenderingContext2D.strokeText`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/strokeText)
    jsbind::Undefined strokeText(const jsbind::String& text, double x, double y);
    /// The strokeText method.
    /// [`CanvasRenderingContext2D.strokeText`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/strokeText)
    jsbind::Undefined strokeText(const jsbind::String& text, double x, double y, double maxWidth);
    /// The measureText method.
    /// [`CanvasRenderingContext2D.measureText`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/measureText)
    TextMetrics measureText(const jsbind::String& text);
    /// The drawImage method.
    /// [`CanvasRenderingContext2D.drawImage`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/drawImage)
    jsbind::Undefined drawImage(const jsbind::Any& image, double dx, double dy);
    /// The drawImage method.
    /// [`CanvasRenderingContext2D.drawImage`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/drawImage)
    jsbind::Undefined drawImage(const jsbind::Any& image, double dx, double dy, double dw, double dh);
    /// The drawImage method.
    /// [`CanvasRenderingContext2D.drawImage`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/drawImage)
    jsbind::Undefined drawImage(const jsbind::Any& image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh);
    /// The createImageData method.
    /// [`CanvasRenderingContext2D.createImageData`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/createImageData)
    ImageData createImageData(long sw, long sh);
    /// The createImageData method.
    /// [`CanvasRenderingContext2D.createImageData`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/createImageData)
    ImageData createImageData(long sw, long sh, const ImageDataSettings& settings);
    /// The createImageData method.
    /// [`CanvasRenderingContext2D.createImageData`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/createImageData)
    ImageData createImageData(const ImageData& imageData);
    /// The getImageData method.
    /// [`CanvasRenderingContext2D.getImageData`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/getImageData)
    ImageData getImageData(long sx, long sy, long sw, long sh);
    /// The getImageData method.
    /// [`CanvasRenderingContext2D.getImageData`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/getImageData)
    ImageData getImageData(long sx, long sy, long sw, long sh, const ImageDataSettings& settings);
    /// The putImageData method.
    /// [`CanvasRenderingContext2D.putImageData`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/putImageData)
    jsbind::Undefined putImageData(const ImageData& imageData, long dx, long dy);
    /// The putImageData method.
    /// [`CanvasRenderingContext2D.putImageData`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/putImageData)
    jsbind::Undefined putImageData(const ImageData& imageData, long dx, long dy, long dirtyX, long dirtyY, long dirtyWidth, long dirtyHeight);
    /// [`CanvasRenderingContext2D.lineWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineWidth)
    /// [`CanvasRenderingContext2D.lineWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineWidth)
    [[nodiscard]] double lineWidth() const;
    /// Setter of the `lineWidth` attribute.
    /// [`CanvasRenderingContext2D.lineWidth`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineWidth)
    void lineWidth(double value);
    /// [`CanvasRenderingContext2D.lineCap`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineCap)
    /// [`CanvasRenderingContext2D.lineCap`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineCap)
    [[nodiscard]] CanvasLineCap lineCap() const;
    /// Setter of the `lineCap` attribute.
    /// [`CanvasRenderingContext2D.lineCap`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineCap)
    void lineCap(const CanvasLineCap& value);
    /// [`CanvasRenderingContext2D.lineJoin`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineJoin)
    /// [`CanvasRenderingContext2D.lineJoin`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineJoin)
    [[nodiscard]] CanvasLineJoin lineJoin() const;
    /// Setter of the `lineJoin` attribute.
    /// [`CanvasRenderingContext2D.lineJoin`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineJoin)
    void lineJoin(const CanvasLineJoin& value);
    /// [`CanvasRenderingContext2D.miterLimit`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/miterLimit)
    /// [`CanvasRenderingContext2D.miterLimit`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/miterLimit)
    [[nodiscard]] double miterLimit() const;
    /// Setter of the `miterLimit` attribute.
    /// [`CanvasRenderingContext2D.miterLimit`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/miterLimit)
    void miterLimit(double value);
    /// The setLineDash method.
    /// [`CanvasRenderingContext2D.setLineDash`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/setLineDash)
    jsbind::Undefined setLineDash(jsbind::TypedArray<double> segments);
    /// The getLineDash method.
    /// [`CanvasRenderingContext2D.getLineDash`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/getLineDash)
    jsbind::TypedArray<double> getLineDash();
    /// [`CanvasRenderingContext2D.lineDashOffset`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineDashOffset)
    /// [`CanvasRenderingContext2D.lineDashOffset`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineDashOffset)
    [[nodiscard]] double lineDashOffset() const;
    /// Setter of the `lineDashOffset` attribute.
    /// [`CanvasRenderingContext2D.lineDashOffset`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineDashOffset)
    void lineDashOffset(double value);
    /// [`CanvasRenderingContext2D.lang`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lang)
    /// [`CanvasRenderingContext2D.lang`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// Setter of the `lang` attribute.
    /// [`CanvasRenderingContext2D.lang`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lang)
    void lang(const jsbind::String& value);
    /// [`CanvasRenderingContext2D.font`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/font)
    /// [`CanvasRenderingContext2D.font`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/font)
    [[nodiscard]] jsbind::String font() const;
    /// Setter of the `font` attribute.
    /// [`CanvasRenderingContext2D.font`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/font)
    void font(const jsbind::String& value);
    /// [`CanvasRenderingContext2D.textAlign`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/textAlign)
    /// [`CanvasRenderingContext2D.textAlign`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/textAlign)
    [[nodiscard]] CanvasTextAlign textAlign() const;
    /// Setter of the `textAlign` attribute.
    /// [`CanvasRenderingContext2D.textAlign`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/textAlign)
    void textAlign(const CanvasTextAlign& value);
    /// [`CanvasRenderingContext2D.textBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/textBaseline)
    /// [`CanvasRenderingContext2D.textBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/textBaseline)
    [[nodiscard]] CanvasTextBaseline textBaseline() const;
    /// Setter of the `textBaseline` attribute.
    /// [`CanvasRenderingContext2D.textBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/textBaseline)
    void textBaseline(const CanvasTextBaseline& value);
    /// [`CanvasRenderingContext2D.direction`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/direction)
    /// [`CanvasRenderingContext2D.direction`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/direction)
    [[nodiscard]] CanvasDirection direction() const;
    /// Setter of the `direction` attribute.
    /// [`CanvasRenderingContext2D.direction`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/direction)
    void direction(const CanvasDirection& value);
    /// [`CanvasRenderingContext2D.letterSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/letterSpacing)
    /// [`CanvasRenderingContext2D.letterSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/letterSpacing)
    [[nodiscard]] jsbind::String letterSpacing() const;
    /// Setter of the `letterSpacing` attribute.
    /// [`CanvasRenderingContext2D.letterSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/letterSpacing)
    void letterSpacing(const jsbind::String& value);
    /// [`CanvasRenderingContext2D.fontKerning`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fontKerning)
    /// [`CanvasRenderingContext2D.fontKerning`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fontKerning)
    [[nodiscard]] CanvasFontKerning fontKerning() const;
    /// Setter of the `fontKerning` attribute.
    /// [`CanvasRenderingContext2D.fontKerning`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fontKerning)
    void fontKerning(const CanvasFontKerning& value);
    /// [`CanvasRenderingContext2D.fontStretch`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fontStretch)
    /// [`CanvasRenderingContext2D.fontStretch`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fontStretch)
    [[nodiscard]] CanvasFontStretch fontStretch() const;
    /// Setter of the `fontStretch` attribute.
    /// [`CanvasRenderingContext2D.fontStretch`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fontStretch)
    void fontStretch(const CanvasFontStretch& value);
    /// [`CanvasRenderingContext2D.fontVariantCaps`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fontVariantCaps)
    /// [`CanvasRenderingContext2D.fontVariantCaps`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fontVariantCaps)
    [[nodiscard]] CanvasFontVariantCaps fontVariantCaps() const;
    /// Setter of the `fontVariantCaps` attribute.
    /// [`CanvasRenderingContext2D.fontVariantCaps`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fontVariantCaps)
    void fontVariantCaps(const CanvasFontVariantCaps& value);
    /// [`CanvasRenderingContext2D.textRendering`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/textRendering)
    /// [`CanvasRenderingContext2D.textRendering`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/textRendering)
    [[nodiscard]] CanvasTextRendering textRendering() const;
    /// Setter of the `textRendering` attribute.
    /// [`CanvasRenderingContext2D.textRendering`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/textRendering)
    void textRendering(const CanvasTextRendering& value);
    /// [`CanvasRenderingContext2D.wordSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/wordSpacing)
    /// [`CanvasRenderingContext2D.wordSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/wordSpacing)
    [[nodiscard]] jsbind::String wordSpacing() const;
    /// Setter of the `wordSpacing` attribute.
    /// [`CanvasRenderingContext2D.wordSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/wordSpacing)
    void wordSpacing(const jsbind::String& value);
    /// The closePath method.
    /// [`CanvasRenderingContext2D.closePath`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/closePath)
    jsbind::Undefined closePath();
    /// The moveTo method.
    /// [`CanvasRenderingContext2D.moveTo`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/moveTo)
    jsbind::Undefined moveTo(double x, double y);
    /// The lineTo method.
    /// [`CanvasRenderingContext2D.lineTo`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineTo)
    jsbind::Undefined lineTo(double x, double y);
    /// The quadraticCurveTo method.
    /// [`CanvasRenderingContext2D.quadraticCurveTo`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/quadraticCurveTo)
    jsbind::Undefined quadraticCurveTo(double cpx, double cpy, double x, double y);
    /// The bezierCurveTo method.
    /// [`CanvasRenderingContext2D.bezierCurveTo`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/bezierCurveTo)
    jsbind::Undefined bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);
    /// The arcTo method.
    /// [`CanvasRenderingContext2D.arcTo`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/arcTo)
    jsbind::Undefined arcTo(double x1, double y1, double x2, double y2, double radius);
    /// The rect method.
    /// [`CanvasRenderingContext2D.rect`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/rect)
    jsbind::Undefined rect(double x, double y, double w, double h);
    /// The roundRect method.
    /// [`CanvasRenderingContext2D.roundRect`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/roundRect)
    jsbind::Undefined roundRect(double x, double y, double w, double h);
    /// The roundRect method.
    /// [`CanvasRenderingContext2D.roundRect`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/roundRect)
    jsbind::Undefined roundRect(double x, double y, double w, double h, const jsbind::Any& radii);
    /// The arc method.
    /// [`CanvasRenderingContext2D.arc`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/arc)
    jsbind::Undefined arc(double x, double y, double radius, double startAngle, double endAngle);
    /// The arc method.
    /// [`CanvasRenderingContext2D.arc`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/arc)
    jsbind::Undefined arc(double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);
    /// The ellipse method.
    /// [`CanvasRenderingContext2D.ellipse`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/ellipse)
    jsbind::Undefined ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);
    /// The ellipse method.
    /// [`CanvasRenderingContext2D.ellipse`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/ellipse)
    jsbind::Undefined ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);
};

} // namespace webbind