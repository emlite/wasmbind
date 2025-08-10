#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CanvasRenderingContext2DSettings.hpp"
#include "DOMMatrix2DInit.hpp"
#include "ImageDataSettings.hpp"
#include "enums.hpp"

namespace webbind {

class OffscreenCanvas;
class DOMMatrix;
class CanvasGradient;
class CanvasPattern;
class Path2D;
class TextMetrics;
class ImageData;

/// Interface OffscreenCanvasRenderingContext2D
/// [`OffscreenCanvasRenderingContext2D`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D)
class OffscreenCanvasRenderingContext2D : public emlite::Val {
    explicit OffscreenCanvasRenderingContext2D(Handle h) noexcept;
public:
    explicit OffscreenCanvasRenderingContext2D(const emlite::Val &val) noexcept;
    static OffscreenCanvasRenderingContext2D take_ownership(Handle h) noexcept;
    [[nodiscard]] OffscreenCanvasRenderingContext2D clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `canvas` attribute.
    /// [`OffscreenCanvasRenderingContext2D.canvas`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/canvas)
    [[nodiscard]] OffscreenCanvas canvas() const;
    /// The getContextAttributes method.
    /// [`OffscreenCanvasRenderingContext2D.getContextAttributes`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/getContextAttributes)
    CanvasRenderingContext2DSettings getContextAttributes();
    /// The save method.
    /// [`OffscreenCanvasRenderingContext2D.save`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/save)
    jsbind::Undefined save();
    /// The restore method.
    /// [`OffscreenCanvasRenderingContext2D.restore`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/restore)
    jsbind::Undefined restore();
    /// The reset method.
    /// [`OffscreenCanvasRenderingContext2D.reset`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/reset)
    jsbind::Undefined reset();
    /// The isContextLost method.
    /// [`OffscreenCanvasRenderingContext2D.isContextLost`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/isContextLost)
    bool isContextLost();
    /// The scale method.
    /// [`OffscreenCanvasRenderingContext2D.scale`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/scale)
    jsbind::Undefined scale(double x, double y);
    /// The rotate method.
    /// [`OffscreenCanvasRenderingContext2D.rotate`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/rotate)
    jsbind::Undefined rotate(double angle);
    /// The translate method.
    /// [`OffscreenCanvasRenderingContext2D.translate`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/translate)
    jsbind::Undefined translate(double x, double y);
    /// The transform method.
    /// [`OffscreenCanvasRenderingContext2D.transform`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/transform)
    jsbind::Undefined transform(double a, double b, double c, double d, double e, double f);
    /// The getTransform method.
    /// [`OffscreenCanvasRenderingContext2D.getTransform`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/getTransform)
    DOMMatrix getTransform();
    /// The setTransform method.
    /// [`OffscreenCanvasRenderingContext2D.setTransform`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/setTransform)
    jsbind::Undefined setTransform();
    /// The setTransform method.
    /// [`OffscreenCanvasRenderingContext2D.setTransform`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/setTransform)
    jsbind::Undefined setTransform(const DOMMatrix2DInit& transform);
    /// The resetTransform method.
    /// [`OffscreenCanvasRenderingContext2D.resetTransform`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/resetTransform)
    jsbind::Undefined resetTransform();
    /// Getter of the `globalAlpha` attribute.
    /// [`OffscreenCanvasRenderingContext2D.globalAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/globalAlpha)
    [[nodiscard]] double globalAlpha() const;
    /// Setter of the `globalAlpha` attribute.
    /// [`OffscreenCanvasRenderingContext2D.globalAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/globalAlpha)
    void globalAlpha(double value);
    /// Getter of the `globalCompositeOperation` attribute.
    /// [`OffscreenCanvasRenderingContext2D.globalCompositeOperation`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/globalCompositeOperation)
    [[nodiscard]] jsbind::String globalCompositeOperation() const;
    /// Setter of the `globalCompositeOperation` attribute.
    /// [`OffscreenCanvasRenderingContext2D.globalCompositeOperation`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/globalCompositeOperation)
    void globalCompositeOperation(const jsbind::String& value);
    /// Getter of the `imageSmoothingEnabled` attribute.
    /// [`OffscreenCanvasRenderingContext2D.imageSmoothingEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/imageSmoothingEnabled)
    [[nodiscard]] bool imageSmoothingEnabled() const;
    /// Setter of the `imageSmoothingEnabled` attribute.
    /// [`OffscreenCanvasRenderingContext2D.imageSmoothingEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/imageSmoothingEnabled)
    void imageSmoothingEnabled(bool value);
    /// Getter of the `imageSmoothingQuality` attribute.
    /// [`OffscreenCanvasRenderingContext2D.imageSmoothingQuality`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/imageSmoothingQuality)
    [[nodiscard]] ImageSmoothingQuality imageSmoothingQuality() const;
    /// Setter of the `imageSmoothingQuality` attribute.
    /// [`OffscreenCanvasRenderingContext2D.imageSmoothingQuality`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/imageSmoothingQuality)
    void imageSmoothingQuality(const ImageSmoothingQuality& value);
    /// Getter of the `strokeStyle` attribute.
    /// [`OffscreenCanvasRenderingContext2D.strokeStyle`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/strokeStyle)
    [[nodiscard]] jsbind::Any strokeStyle() const;
    /// Setter of the `strokeStyle` attribute.
    /// [`OffscreenCanvasRenderingContext2D.strokeStyle`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/strokeStyle)
    void strokeStyle(const jsbind::Any& value);
    /// Getter of the `fillStyle` attribute.
    /// [`OffscreenCanvasRenderingContext2D.fillStyle`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fillStyle)
    [[nodiscard]] jsbind::Any fillStyle() const;
    /// Setter of the `fillStyle` attribute.
    /// [`OffscreenCanvasRenderingContext2D.fillStyle`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fillStyle)
    void fillStyle(const jsbind::Any& value);
    /// The createLinearGradient method.
    /// [`OffscreenCanvasRenderingContext2D.createLinearGradient`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/createLinearGradient)
    CanvasGradient createLinearGradient(double x0, double y0, double x1, double y1);
    /// The createRadialGradient method.
    /// [`OffscreenCanvasRenderingContext2D.createRadialGradient`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/createRadialGradient)
    CanvasGradient createRadialGradient(double x0, double y0, double r0, double x1, double y1, double r1);
    /// The createConicGradient method.
    /// [`OffscreenCanvasRenderingContext2D.createConicGradient`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/createConicGradient)
    CanvasGradient createConicGradient(double startAngle, double x, double y);
    /// The createPattern method.
    /// [`OffscreenCanvasRenderingContext2D.createPattern`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/createPattern)
    CanvasPattern createPattern(const jsbind::Any& image, const jsbind::String& repetition);
    /// Getter of the `shadowOffsetX` attribute.
    /// [`OffscreenCanvasRenderingContext2D.shadowOffsetX`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/shadowOffsetX)
    [[nodiscard]] double shadowOffsetX() const;
    /// Setter of the `shadowOffsetX` attribute.
    /// [`OffscreenCanvasRenderingContext2D.shadowOffsetX`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/shadowOffsetX)
    void shadowOffsetX(double value);
    /// Getter of the `shadowOffsetY` attribute.
    /// [`OffscreenCanvasRenderingContext2D.shadowOffsetY`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/shadowOffsetY)
    [[nodiscard]] double shadowOffsetY() const;
    /// Setter of the `shadowOffsetY` attribute.
    /// [`OffscreenCanvasRenderingContext2D.shadowOffsetY`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/shadowOffsetY)
    void shadowOffsetY(double value);
    /// Getter of the `shadowBlur` attribute.
    /// [`OffscreenCanvasRenderingContext2D.shadowBlur`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/shadowBlur)
    [[nodiscard]] double shadowBlur() const;
    /// Setter of the `shadowBlur` attribute.
    /// [`OffscreenCanvasRenderingContext2D.shadowBlur`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/shadowBlur)
    void shadowBlur(double value);
    /// Getter of the `shadowColor` attribute.
    /// [`OffscreenCanvasRenderingContext2D.shadowColor`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/shadowColor)
    [[nodiscard]] jsbind::String shadowColor() const;
    /// Setter of the `shadowColor` attribute.
    /// [`OffscreenCanvasRenderingContext2D.shadowColor`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/shadowColor)
    void shadowColor(const jsbind::String& value);
    /// Getter of the `filter` attribute.
    /// [`OffscreenCanvasRenderingContext2D.filter`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/filter)
    [[nodiscard]] jsbind::String filter() const;
    /// Setter of the `filter` attribute.
    /// [`OffscreenCanvasRenderingContext2D.filter`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/filter)
    void filter(const jsbind::String& value);
    /// The clearRect method.
    /// [`OffscreenCanvasRenderingContext2D.clearRect`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/clearRect)
    jsbind::Undefined clearRect(double x, double y, double w, double h);
    /// The fillRect method.
    /// [`OffscreenCanvasRenderingContext2D.fillRect`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fillRect)
    jsbind::Undefined fillRect(double x, double y, double w, double h);
    /// The strokeRect method.
    /// [`OffscreenCanvasRenderingContext2D.strokeRect`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/strokeRect)
    jsbind::Undefined strokeRect(double x, double y, double w, double h);
    /// The beginPath method.
    /// [`OffscreenCanvasRenderingContext2D.beginPath`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/beginPath)
    jsbind::Undefined beginPath();
    /// The fill method.
    /// [`OffscreenCanvasRenderingContext2D.fill`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fill)
    jsbind::Undefined fill(const Path2D& path);
    /// The fill method.
    /// [`OffscreenCanvasRenderingContext2D.fill`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fill)
    jsbind::Undefined fill(const Path2D& path, const CanvasFillRule& fillRule);
    /// The stroke method.
    /// [`OffscreenCanvasRenderingContext2D.stroke`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/stroke)
    jsbind::Undefined stroke(const Path2D& path);
    /// The clip method.
    /// [`OffscreenCanvasRenderingContext2D.clip`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/clip)
    jsbind::Undefined clip(const Path2D& path);
    /// The clip method.
    /// [`OffscreenCanvasRenderingContext2D.clip`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/clip)
    jsbind::Undefined clip(const Path2D& path, const CanvasFillRule& fillRule);
    /// The isPointInPath method.
    /// [`OffscreenCanvasRenderingContext2D.isPointInPath`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/isPointInPath)
    bool isPointInPath(const Path2D& path, double x, double y);
    /// The isPointInPath method.
    /// [`OffscreenCanvasRenderingContext2D.isPointInPath`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/isPointInPath)
    bool isPointInPath(const Path2D& path, double x, double y, const CanvasFillRule& fillRule);
    /// The isPointInStroke method.
    /// [`OffscreenCanvasRenderingContext2D.isPointInStroke`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/isPointInStroke)
    bool isPointInStroke(const Path2D& path, double x, double y);
    /// The fillText method.
    /// [`OffscreenCanvasRenderingContext2D.fillText`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fillText)
    jsbind::Undefined fillText(const jsbind::String& text, double x, double y);
    /// The fillText method.
    /// [`OffscreenCanvasRenderingContext2D.fillText`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fillText)
    jsbind::Undefined fillText(const jsbind::String& text, double x, double y, double maxWidth);
    /// The strokeText method.
    /// [`OffscreenCanvasRenderingContext2D.strokeText`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/strokeText)
    jsbind::Undefined strokeText(const jsbind::String& text, double x, double y);
    /// The strokeText method.
    /// [`OffscreenCanvasRenderingContext2D.strokeText`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/strokeText)
    jsbind::Undefined strokeText(const jsbind::String& text, double x, double y, double maxWidth);
    /// The measureText method.
    /// [`OffscreenCanvasRenderingContext2D.measureText`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/measureText)
    TextMetrics measureText(const jsbind::String& text);
    /// The drawImage method.
    /// [`OffscreenCanvasRenderingContext2D.drawImage`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/drawImage)
    jsbind::Undefined drawImage(const jsbind::Any& image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh);
    /// The createImageData method.
    /// [`OffscreenCanvasRenderingContext2D.createImageData`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/createImageData)
    ImageData createImageData(const ImageData& imageData);
    /// The getImageData method.
    /// [`OffscreenCanvasRenderingContext2D.getImageData`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/getImageData)
    ImageData getImageData(long sx, long sy, long sw, long sh);
    /// The getImageData method.
    /// [`OffscreenCanvasRenderingContext2D.getImageData`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/getImageData)
    ImageData getImageData(long sx, long sy, long sw, long sh, const ImageDataSettings& settings);
    /// The putImageData method.
    /// [`OffscreenCanvasRenderingContext2D.putImageData`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/putImageData)
    jsbind::Undefined putImageData(const ImageData& imageData, long dx, long dy, long dirtyX, long dirtyY, long dirtyWidth, long dirtyHeight);
    /// Getter of the `lineWidth` attribute.
    /// [`OffscreenCanvasRenderingContext2D.lineWidth`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/lineWidth)
    [[nodiscard]] double lineWidth() const;
    /// Setter of the `lineWidth` attribute.
    /// [`OffscreenCanvasRenderingContext2D.lineWidth`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/lineWidth)
    void lineWidth(double value);
    /// Getter of the `lineCap` attribute.
    /// [`OffscreenCanvasRenderingContext2D.lineCap`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/lineCap)
    [[nodiscard]] CanvasLineCap lineCap() const;
    /// Setter of the `lineCap` attribute.
    /// [`OffscreenCanvasRenderingContext2D.lineCap`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/lineCap)
    void lineCap(const CanvasLineCap& value);
    /// Getter of the `lineJoin` attribute.
    /// [`OffscreenCanvasRenderingContext2D.lineJoin`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/lineJoin)
    [[nodiscard]] CanvasLineJoin lineJoin() const;
    /// Setter of the `lineJoin` attribute.
    /// [`OffscreenCanvasRenderingContext2D.lineJoin`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/lineJoin)
    void lineJoin(const CanvasLineJoin& value);
    /// Getter of the `miterLimit` attribute.
    /// [`OffscreenCanvasRenderingContext2D.miterLimit`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/miterLimit)
    [[nodiscard]] double miterLimit() const;
    /// Setter of the `miterLimit` attribute.
    /// [`OffscreenCanvasRenderingContext2D.miterLimit`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/miterLimit)
    void miterLimit(double value);
    /// The setLineDash method.
    /// [`OffscreenCanvasRenderingContext2D.setLineDash`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/setLineDash)
    jsbind::Undefined setLineDash(jsbind::TypedArray<double> segments);
    /// The getLineDash method.
    /// [`OffscreenCanvasRenderingContext2D.getLineDash`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/getLineDash)
    jsbind::TypedArray<double> getLineDash();
    /// Getter of the `lineDashOffset` attribute.
    /// [`OffscreenCanvasRenderingContext2D.lineDashOffset`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/lineDashOffset)
    [[nodiscard]] double lineDashOffset() const;
    /// Setter of the `lineDashOffset` attribute.
    /// [`OffscreenCanvasRenderingContext2D.lineDashOffset`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/lineDashOffset)
    void lineDashOffset(double value);
    /// Getter of the `lang` attribute.
    /// [`OffscreenCanvasRenderingContext2D.lang`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// Setter of the `lang` attribute.
    /// [`OffscreenCanvasRenderingContext2D.lang`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/lang)
    void lang(const jsbind::String& value);
    /// Getter of the `font` attribute.
    /// [`OffscreenCanvasRenderingContext2D.font`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/font)
    [[nodiscard]] jsbind::String font() const;
    /// Setter of the `font` attribute.
    /// [`OffscreenCanvasRenderingContext2D.font`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/font)
    void font(const jsbind::String& value);
    /// Getter of the `textAlign` attribute.
    /// [`OffscreenCanvasRenderingContext2D.textAlign`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/textAlign)
    [[nodiscard]] CanvasTextAlign textAlign() const;
    /// Setter of the `textAlign` attribute.
    /// [`OffscreenCanvasRenderingContext2D.textAlign`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/textAlign)
    void textAlign(const CanvasTextAlign& value);
    /// Getter of the `textBaseline` attribute.
    /// [`OffscreenCanvasRenderingContext2D.textBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/textBaseline)
    [[nodiscard]] CanvasTextBaseline textBaseline() const;
    /// Setter of the `textBaseline` attribute.
    /// [`OffscreenCanvasRenderingContext2D.textBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/textBaseline)
    void textBaseline(const CanvasTextBaseline& value);
    /// Getter of the `direction` attribute.
    /// [`OffscreenCanvasRenderingContext2D.direction`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/direction)
    [[nodiscard]] CanvasDirection direction() const;
    /// Setter of the `direction` attribute.
    /// [`OffscreenCanvasRenderingContext2D.direction`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/direction)
    void direction(const CanvasDirection& value);
    /// Getter of the `letterSpacing` attribute.
    /// [`OffscreenCanvasRenderingContext2D.letterSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/letterSpacing)
    [[nodiscard]] jsbind::String letterSpacing() const;
    /// Setter of the `letterSpacing` attribute.
    /// [`OffscreenCanvasRenderingContext2D.letterSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/letterSpacing)
    void letterSpacing(const jsbind::String& value);
    /// Getter of the `fontKerning` attribute.
    /// [`OffscreenCanvasRenderingContext2D.fontKerning`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fontKerning)
    [[nodiscard]] CanvasFontKerning fontKerning() const;
    /// Setter of the `fontKerning` attribute.
    /// [`OffscreenCanvasRenderingContext2D.fontKerning`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fontKerning)
    void fontKerning(const CanvasFontKerning& value);
    /// Getter of the `fontStretch` attribute.
    /// [`OffscreenCanvasRenderingContext2D.fontStretch`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fontStretch)
    [[nodiscard]] CanvasFontStretch fontStretch() const;
    /// Setter of the `fontStretch` attribute.
    /// [`OffscreenCanvasRenderingContext2D.fontStretch`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fontStretch)
    void fontStretch(const CanvasFontStretch& value);
    /// Getter of the `fontVariantCaps` attribute.
    /// [`OffscreenCanvasRenderingContext2D.fontVariantCaps`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fontVariantCaps)
    [[nodiscard]] CanvasFontVariantCaps fontVariantCaps() const;
    /// Setter of the `fontVariantCaps` attribute.
    /// [`OffscreenCanvasRenderingContext2D.fontVariantCaps`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/fontVariantCaps)
    void fontVariantCaps(const CanvasFontVariantCaps& value);
    /// Getter of the `textRendering` attribute.
    /// [`OffscreenCanvasRenderingContext2D.textRendering`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/textRendering)
    [[nodiscard]] CanvasTextRendering textRendering() const;
    /// Setter of the `textRendering` attribute.
    /// [`OffscreenCanvasRenderingContext2D.textRendering`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/textRendering)
    void textRendering(const CanvasTextRendering& value);
    /// Getter of the `wordSpacing` attribute.
    /// [`OffscreenCanvasRenderingContext2D.wordSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/wordSpacing)
    [[nodiscard]] jsbind::String wordSpacing() const;
    /// Setter of the `wordSpacing` attribute.
    /// [`OffscreenCanvasRenderingContext2D.wordSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/wordSpacing)
    void wordSpacing(const jsbind::String& value);
    /// The closePath method.
    /// [`OffscreenCanvasRenderingContext2D.closePath`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/closePath)
    jsbind::Undefined closePath();
    /// The moveTo method.
    /// [`OffscreenCanvasRenderingContext2D.moveTo`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/moveTo)
    jsbind::Undefined moveTo(double x, double y);
    /// The lineTo method.
    /// [`OffscreenCanvasRenderingContext2D.lineTo`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/lineTo)
    jsbind::Undefined lineTo(double x, double y);
    /// The quadraticCurveTo method.
    /// [`OffscreenCanvasRenderingContext2D.quadraticCurveTo`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/quadraticCurveTo)
    jsbind::Undefined quadraticCurveTo(double cpx, double cpy, double x, double y);
    /// The bezierCurveTo method.
    /// [`OffscreenCanvasRenderingContext2D.bezierCurveTo`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/bezierCurveTo)
    jsbind::Undefined bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);
    /// The arcTo method.
    /// [`OffscreenCanvasRenderingContext2D.arcTo`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/arcTo)
    jsbind::Undefined arcTo(double x1, double y1, double x2, double y2, double radius);
    /// The rect method.
    /// [`OffscreenCanvasRenderingContext2D.rect`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/rect)
    jsbind::Undefined rect(double x, double y, double w, double h);
    /// The roundRect method.
    /// [`OffscreenCanvasRenderingContext2D.roundRect`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/roundRect)
    jsbind::Undefined roundRect(double x, double y, double w, double h);
    /// The roundRect method.
    /// [`OffscreenCanvasRenderingContext2D.roundRect`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/roundRect)
    jsbind::Undefined roundRect(double x, double y, double w, double h, const jsbind::Any& radii);
    /// The arc method.
    /// [`OffscreenCanvasRenderingContext2D.arc`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/arc)
    jsbind::Undefined arc(double x, double y, double radius, double startAngle, double endAngle);
    /// The arc method.
    /// [`OffscreenCanvasRenderingContext2D.arc`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/arc)
    jsbind::Undefined arc(double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);
    /// The ellipse method.
    /// [`OffscreenCanvasRenderingContext2D.ellipse`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/ellipse)
    jsbind::Undefined ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);
    /// The ellipse method.
    /// [`OffscreenCanvasRenderingContext2D.ellipse`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D/ellipse)
    jsbind::Undefined ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);
};

} // namespace webbind