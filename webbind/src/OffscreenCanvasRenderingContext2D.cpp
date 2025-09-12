#include <webbind/OffscreenCanvasRenderingContext2D.hpp>
#include <webbind/OffscreenCanvas.hpp>
#include <webbind/CanvasRenderingContext2DSettings.hpp>
#include <webbind/DOMMatrix.hpp>
#include <webbind/DOMMatrix2DInit.hpp>
#include <webbind/CanvasGradient.hpp>
#include <webbind/CanvasPattern.hpp>
#include <webbind/Path2D.hpp>
#include <webbind/TextMetrics.hpp>
#include <webbind/ImageData.hpp>
#include <webbind/ImageDataSettings.hpp>

namespace webbind {

OffscreenCanvasRenderingContext2D OffscreenCanvasRenderingContext2D::take_ownership(Handle h) noexcept {
    return OffscreenCanvasRenderingContext2D(h);
}

OffscreenCanvasRenderingContext2D OffscreenCanvasRenderingContext2D::clone() const noexcept { return *this; }

emlite::Val OffscreenCanvasRenderingContext2D::instance() noexcept { return emlite::Val::global("OffscreenCanvasRenderingContext2D"); }

OffscreenCanvasRenderingContext2D::OffscreenCanvasRenderingContext2D(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

OffscreenCanvasRenderingContext2D::OffscreenCanvasRenderingContext2D(const emlite::Val &val) noexcept: emlite::Val(val) {}

OffscreenCanvas OffscreenCanvasRenderingContext2D::canvas() const {
    return emlite::Val::get("canvas").as<OffscreenCanvas>();
}

CanvasRenderingContext2DSettings OffscreenCanvasRenderingContext2D::getContextAttributes() {
    return emlite::Val::call("getContextAttributes").as<CanvasRenderingContext2DSettings>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::save() {
    return emlite::Val::call("save").as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::restore() {
    return emlite::Val::call("restore").as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::reset() {
    return emlite::Val::call("reset").as<jsbind::Undefined>();
}

bool OffscreenCanvasRenderingContext2D::isContextLost() {
    return emlite::Val::call("isContextLost").as<bool>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::scale(double x, double y) {
    return emlite::Val::call("scale", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::rotate(double angle) {
    return emlite::Val::call("rotate", angle).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::translate(double x, double y) {
    return emlite::Val::call("translate", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::transform(double a, double b, double c, double d, double e, double f) {
    return emlite::Val::call("transform", a, b, c, d, e, f).as<jsbind::Undefined>();
}

DOMMatrix OffscreenCanvasRenderingContext2D::getTransform() {
    return emlite::Val::call("getTransform").as<DOMMatrix>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::setTransform(double a, double b, double c, double d, double e, double f) {
    return emlite::Val::call("setTransform", a, b, c, d, e, f).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::setTransform() {
    return emlite::Val::call("setTransform").as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::setTransform(const DOMMatrix2DInit& transform) {
    return emlite::Val::call("setTransform", transform).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::resetTransform() {
    return emlite::Val::call("resetTransform").as<jsbind::Undefined>();
}

double OffscreenCanvasRenderingContext2D::globalAlpha() const {
    return emlite::Val::get("globalAlpha").as<double>();
}

void OffscreenCanvasRenderingContext2D::globalAlpha(double value) {
    emlite::Val::set("globalAlpha", value);
}

jsbind::String OffscreenCanvasRenderingContext2D::globalCompositeOperation() const {
    return emlite::Val::get("globalCompositeOperation").as<jsbind::String>();
}

void OffscreenCanvasRenderingContext2D::globalCompositeOperation(const jsbind::String& value) {
    emlite::Val::set("globalCompositeOperation", value);
}

bool OffscreenCanvasRenderingContext2D::imageSmoothingEnabled() const {
    return emlite::Val::get("imageSmoothingEnabled").as<bool>();
}

void OffscreenCanvasRenderingContext2D::imageSmoothingEnabled(bool value) {
    emlite::Val::set("imageSmoothingEnabled", value);
}

ImageSmoothingQuality OffscreenCanvasRenderingContext2D::imageSmoothingQuality() const {
    return emlite::Val::get("imageSmoothingQuality").as<ImageSmoothingQuality>();
}

void OffscreenCanvasRenderingContext2D::imageSmoothingQuality(const ImageSmoothingQuality& value) {
    emlite::Val::set("imageSmoothingQuality", value);
}

jsbind::Any OffscreenCanvasRenderingContext2D::strokeStyle() const {
    return emlite::Val::get("strokeStyle").as<jsbind::Any>();
}

void OffscreenCanvasRenderingContext2D::strokeStyle(const jsbind::Any& value) {
    emlite::Val::set("strokeStyle", value);
}

jsbind::Any OffscreenCanvasRenderingContext2D::fillStyle() const {
    return emlite::Val::get("fillStyle").as<jsbind::Any>();
}

void OffscreenCanvasRenderingContext2D::fillStyle(const jsbind::Any& value) {
    emlite::Val::set("fillStyle", value);
}

CanvasGradient OffscreenCanvasRenderingContext2D::createLinearGradient(double x0, double y0, double x1, double y1) {
    return emlite::Val::call("createLinearGradient", x0, y0, x1, y1).as<CanvasGradient>();
}

CanvasGradient OffscreenCanvasRenderingContext2D::createRadialGradient(double x0, double y0, double r0, double x1, double y1, double r1) {
    return emlite::Val::call("createRadialGradient", x0, y0, r0, x1, y1, r1).as<CanvasGradient>();
}

CanvasGradient OffscreenCanvasRenderingContext2D::createConicGradient(double startAngle, double x, double y) {
    return emlite::Val::call("createConicGradient", startAngle, x, y).as<CanvasGradient>();
}

CanvasPattern OffscreenCanvasRenderingContext2D::createPattern(const jsbind::Any& image, const jsbind::String& repetition) {
    return emlite::Val::call("createPattern", image, repetition).as<CanvasPattern>();
}

double OffscreenCanvasRenderingContext2D::shadowOffsetX() const {
    return emlite::Val::get("shadowOffsetX").as<double>();
}

void OffscreenCanvasRenderingContext2D::shadowOffsetX(double value) {
    emlite::Val::set("shadowOffsetX", value);
}

double OffscreenCanvasRenderingContext2D::shadowOffsetY() const {
    return emlite::Val::get("shadowOffsetY").as<double>();
}

void OffscreenCanvasRenderingContext2D::shadowOffsetY(double value) {
    emlite::Val::set("shadowOffsetY", value);
}

double OffscreenCanvasRenderingContext2D::shadowBlur() const {
    return emlite::Val::get("shadowBlur").as<double>();
}

void OffscreenCanvasRenderingContext2D::shadowBlur(double value) {
    emlite::Val::set("shadowBlur", value);
}

jsbind::String OffscreenCanvasRenderingContext2D::shadowColor() const {
    return emlite::Val::get("shadowColor").as<jsbind::String>();
}

void OffscreenCanvasRenderingContext2D::shadowColor(const jsbind::String& value) {
    emlite::Val::set("shadowColor", value);
}

jsbind::String OffscreenCanvasRenderingContext2D::filter() const {
    return emlite::Val::get("filter").as<jsbind::String>();
}

void OffscreenCanvasRenderingContext2D::filter(const jsbind::String& value) {
    emlite::Val::set("filter", value);
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::clearRect(double x, double y, double w, double h) {
    return emlite::Val::call("clearRect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::fillRect(double x, double y, double w, double h) {
    return emlite::Val::call("fillRect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::strokeRect(double x, double y, double w, double h) {
    return emlite::Val::call("strokeRect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::beginPath() {
    return emlite::Val::call("beginPath").as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::fill() {
    return emlite::Val::call("fill").as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::fill(const CanvasFillRule& fillRule) {
    return emlite::Val::call("fill", fillRule).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::fill(const Path2D& path) {
    return emlite::Val::call("fill", path).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::fill(const Path2D& path, const CanvasFillRule& fillRule) {
    return emlite::Val::call("fill", path, fillRule).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::stroke() {
    return emlite::Val::call("stroke").as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::stroke(const Path2D& path) {
    return emlite::Val::call("stroke", path).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::clip() {
    return emlite::Val::call("clip").as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::clip(const CanvasFillRule& fillRule) {
    return emlite::Val::call("clip", fillRule).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::clip(const Path2D& path) {
    return emlite::Val::call("clip", path).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::clip(const Path2D& path, const CanvasFillRule& fillRule) {
    return emlite::Val::call("clip", path, fillRule).as<jsbind::Undefined>();
}

bool OffscreenCanvasRenderingContext2D::isPointInPath(double x, double y) {
    return emlite::Val::call("isPointInPath", x, y).as<bool>();
}

bool OffscreenCanvasRenderingContext2D::isPointInPath(double x, double y, const CanvasFillRule& fillRule) {
    return emlite::Val::call("isPointInPath", x, y, fillRule).as<bool>();
}

bool OffscreenCanvasRenderingContext2D::isPointInPath(const Path2D& path, double x, double y) {
    return emlite::Val::call("isPointInPath", path, x, y).as<bool>();
}

bool OffscreenCanvasRenderingContext2D::isPointInPath(const Path2D& path, double x, double y, const CanvasFillRule& fillRule) {
    return emlite::Val::call("isPointInPath", path, x, y, fillRule).as<bool>();
}

bool OffscreenCanvasRenderingContext2D::isPointInStroke(double x, double y) {
    return emlite::Val::call("isPointInStroke", x, y).as<bool>();
}

bool OffscreenCanvasRenderingContext2D::isPointInStroke(const Path2D& path, double x, double y) {
    return emlite::Val::call("isPointInStroke", path, x, y).as<bool>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::fillText(const jsbind::String& text, double x, double y) {
    return emlite::Val::call("fillText", text, x, y).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::fillText(const jsbind::String& text, double x, double y, double maxWidth) {
    return emlite::Val::call("fillText", text, x, y, maxWidth).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::strokeText(const jsbind::String& text, double x, double y) {
    return emlite::Val::call("strokeText", text, x, y).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::strokeText(const jsbind::String& text, double x, double y, double maxWidth) {
    return emlite::Val::call("strokeText", text, x, y, maxWidth).as<jsbind::Undefined>();
}

TextMetrics OffscreenCanvasRenderingContext2D::measureText(const jsbind::String& text) {
    return emlite::Val::call("measureText", text).as<TextMetrics>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::drawImage(const jsbind::Any& image, double dx, double dy) {
    return emlite::Val::call("drawImage", image, dx, dy).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::drawImage(const jsbind::Any& image, double dx, double dy, double dw, double dh) {
    return emlite::Val::call("drawImage", image, dx, dy, dw, dh).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::drawImage(const jsbind::Any& image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh) {
    return emlite::Val::call("drawImage", image, sx, sy, sw, sh, dx, dy, dw, dh).as<jsbind::Undefined>();
}

ImageData OffscreenCanvasRenderingContext2D::createImageData(long sw, long sh) {
    return emlite::Val::call("createImageData", sw, sh).as<ImageData>();
}

ImageData OffscreenCanvasRenderingContext2D::createImageData(long sw, long sh, const ImageDataSettings& settings) {
    return emlite::Val::call("createImageData", sw, sh, settings).as<ImageData>();
}

ImageData OffscreenCanvasRenderingContext2D::createImageData(const ImageData& imageData) {
    return emlite::Val::call("createImageData", imageData).as<ImageData>();
}

ImageData OffscreenCanvasRenderingContext2D::getImageData(long sx, long sy, long sw, long sh) {
    return emlite::Val::call("getImageData", sx, sy, sw, sh).as<ImageData>();
}

ImageData OffscreenCanvasRenderingContext2D::getImageData(long sx, long sy, long sw, long sh, const ImageDataSettings& settings) {
    return emlite::Val::call("getImageData", sx, sy, sw, sh, settings).as<ImageData>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::putImageData(const ImageData& imageData, long dx, long dy) {
    return emlite::Val::call("putImageData", imageData, dx, dy).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::putImageData(const ImageData& imageData, long dx, long dy, long dirtyX, long dirtyY, long dirtyWidth, long dirtyHeight) {
    return emlite::Val::call("putImageData", imageData, dx, dy, dirtyX, dirtyY, dirtyWidth, dirtyHeight).as<jsbind::Undefined>();
}

double OffscreenCanvasRenderingContext2D::lineWidth() const {
    return emlite::Val::get("lineWidth").as<double>();
}

void OffscreenCanvasRenderingContext2D::lineWidth(double value) {
    emlite::Val::set("lineWidth", value);
}

CanvasLineCap OffscreenCanvasRenderingContext2D::lineCap() const {
    return emlite::Val::get("lineCap").as<CanvasLineCap>();
}

void OffscreenCanvasRenderingContext2D::lineCap(const CanvasLineCap& value) {
    emlite::Val::set("lineCap", value);
}

CanvasLineJoin OffscreenCanvasRenderingContext2D::lineJoin() const {
    return emlite::Val::get("lineJoin").as<CanvasLineJoin>();
}

void OffscreenCanvasRenderingContext2D::lineJoin(const CanvasLineJoin& value) {
    emlite::Val::set("lineJoin", value);
}

double OffscreenCanvasRenderingContext2D::miterLimit() const {
    return emlite::Val::get("miterLimit").as<double>();
}

void OffscreenCanvasRenderingContext2D::miterLimit(double value) {
    emlite::Val::set("miterLimit", value);
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::setLineDash(jsbind::TypedArray<double> segments) {
    return emlite::Val::call("setLineDash", segments).as<jsbind::Undefined>();
}

jsbind::TypedArray<double> OffscreenCanvasRenderingContext2D::getLineDash() {
    return emlite::Val::call("getLineDash").as<jsbind::TypedArray<double>>();
}

double OffscreenCanvasRenderingContext2D::lineDashOffset() const {
    return emlite::Val::get("lineDashOffset").as<double>();
}

void OffscreenCanvasRenderingContext2D::lineDashOffset(double value) {
    emlite::Val::set("lineDashOffset", value);
}

jsbind::String OffscreenCanvasRenderingContext2D::lang() const {
    return emlite::Val::get("lang").as<jsbind::String>();
}

void OffscreenCanvasRenderingContext2D::lang(const jsbind::String& value) {
    emlite::Val::set("lang", value);
}

jsbind::String OffscreenCanvasRenderingContext2D::font() const {
    return emlite::Val::get("font").as<jsbind::String>();
}

void OffscreenCanvasRenderingContext2D::font(const jsbind::String& value) {
    emlite::Val::set("font", value);
}

CanvasTextAlign OffscreenCanvasRenderingContext2D::textAlign() const {
    return emlite::Val::get("textAlign").as<CanvasTextAlign>();
}

void OffscreenCanvasRenderingContext2D::textAlign(const CanvasTextAlign& value) {
    emlite::Val::set("textAlign", value);
}

CanvasTextBaseline OffscreenCanvasRenderingContext2D::textBaseline() const {
    return emlite::Val::get("textBaseline").as<CanvasTextBaseline>();
}

void OffscreenCanvasRenderingContext2D::textBaseline(const CanvasTextBaseline& value) {
    emlite::Val::set("textBaseline", value);
}

CanvasDirection OffscreenCanvasRenderingContext2D::direction() const {
    return emlite::Val::get("direction").as<CanvasDirection>();
}

void OffscreenCanvasRenderingContext2D::direction(const CanvasDirection& value) {
    emlite::Val::set("direction", value);
}

jsbind::String OffscreenCanvasRenderingContext2D::letterSpacing() const {
    return emlite::Val::get("letterSpacing").as<jsbind::String>();
}

void OffscreenCanvasRenderingContext2D::letterSpacing(const jsbind::String& value) {
    emlite::Val::set("letterSpacing", value);
}

CanvasFontKerning OffscreenCanvasRenderingContext2D::fontKerning() const {
    return emlite::Val::get("fontKerning").as<CanvasFontKerning>();
}

void OffscreenCanvasRenderingContext2D::fontKerning(const CanvasFontKerning& value) {
    emlite::Val::set("fontKerning", value);
}

CanvasFontStretch OffscreenCanvasRenderingContext2D::fontStretch() const {
    return emlite::Val::get("fontStretch").as<CanvasFontStretch>();
}

void OffscreenCanvasRenderingContext2D::fontStretch(const CanvasFontStretch& value) {
    emlite::Val::set("fontStretch", value);
}

CanvasFontVariantCaps OffscreenCanvasRenderingContext2D::fontVariantCaps() const {
    return emlite::Val::get("fontVariantCaps").as<CanvasFontVariantCaps>();
}

void OffscreenCanvasRenderingContext2D::fontVariantCaps(const CanvasFontVariantCaps& value) {
    emlite::Val::set("fontVariantCaps", value);
}

CanvasTextRendering OffscreenCanvasRenderingContext2D::textRendering() const {
    return emlite::Val::get("textRendering").as<CanvasTextRendering>();
}

void OffscreenCanvasRenderingContext2D::textRendering(const CanvasTextRendering& value) {
    emlite::Val::set("textRendering", value);
}

jsbind::String OffscreenCanvasRenderingContext2D::wordSpacing() const {
    return emlite::Val::get("wordSpacing").as<jsbind::String>();
}

void OffscreenCanvasRenderingContext2D::wordSpacing(const jsbind::String& value) {
    emlite::Val::set("wordSpacing", value);
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::closePath() {
    return emlite::Val::call("closePath").as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::moveTo(double x, double y) {
    return emlite::Val::call("moveTo", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::lineTo(double x, double y) {
    return emlite::Val::call("lineTo", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::quadraticCurveTo(double cpx, double cpy, double x, double y) {
    return emlite::Val::call("quadraticCurveTo", cpx, cpy, x, y).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y) {
    return emlite::Val::call("bezierCurveTo", cp1x, cp1y, cp2x, cp2y, x, y).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::arcTo(double x1, double y1, double x2, double y2, double radius) {
    return emlite::Val::call("arcTo", x1, y1, x2, y2, radius).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::rect(double x, double y, double w, double h) {
    return emlite::Val::call("rect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::roundRect(double x, double y, double w, double h) {
    return emlite::Val::call("roundRect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::roundRect(double x, double y, double w, double h, const jsbind::Any& radii) {
    return emlite::Val::call("roundRect", x, y, w, h, radii).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::arc(double x, double y, double radius, double startAngle, double endAngle) {
    return emlite::Val::call("arc", x, y, radius, startAngle, endAngle).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::arc(double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise) {
    return emlite::Val::call("arc", x, y, radius, startAngle, endAngle, counterclockwise).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle) {
    return emlite::Val::call("ellipse", x, y, radiusX, radiusY, rotation, startAngle, endAngle).as<jsbind::Undefined>();
}

jsbind::Undefined OffscreenCanvasRenderingContext2D::ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise) {
    return emlite::Val::call("ellipse", x, y, radiusX, radiusY, rotation, startAngle, endAngle, counterclockwise).as<jsbind::Undefined>();
}


} // namespace webbind