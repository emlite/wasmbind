#include <webbind/PaintRenderingContext2D.hpp>
#include <webbind/DOMMatrix.hpp>
#include <webbind/DOMMatrix2DInit.hpp>
#include <webbind/CanvasGradient.hpp>
#include <webbind/CanvasPattern.hpp>
#include <webbind/Path2D.hpp>

namespace webbind {

PaintRenderingContext2D PaintRenderingContext2D::take_ownership(Handle h) noexcept {
        return PaintRenderingContext2D(h);
    }
PaintRenderingContext2D PaintRenderingContext2D::clone() const noexcept { return *this; }
emlite::Val PaintRenderingContext2D::instance() noexcept { return emlite::Val::global("PaintRenderingContext2D"); }
PaintRenderingContext2D::PaintRenderingContext2D(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaintRenderingContext2D::PaintRenderingContext2D(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined PaintRenderingContext2D::save() {
    return emlite::Val::call("save").as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::restore() {
    return emlite::Val::call("restore").as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::reset() {
    return emlite::Val::call("reset").as<jsbind::Undefined>();
}

bool PaintRenderingContext2D::isContextLost() {
    return emlite::Val::call("isContextLost").as<bool>();
}

jsbind::Undefined PaintRenderingContext2D::scale(double x, double y) {
    return emlite::Val::call("scale", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::rotate(double angle) {
    return emlite::Val::call("rotate", angle).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::translate(double x, double y) {
    return emlite::Val::call("translate", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::transform(double a, double b, double c, double d, double e, double f) {
    return emlite::Val::call("transform", a, b, c, d, e, f).as<jsbind::Undefined>();
}

DOMMatrix PaintRenderingContext2D::getTransform() {
    return emlite::Val::call("getTransform").as<DOMMatrix>();
}

jsbind::Undefined PaintRenderingContext2D::setTransform() {
    return emlite::Val::call("setTransform").as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::setTransform(const DOMMatrix2DInit& transform) {
    return emlite::Val::call("setTransform", transform).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::resetTransform() {
    return emlite::Val::call("resetTransform").as<jsbind::Undefined>();
}

double PaintRenderingContext2D::globalAlpha() const {
    return emlite::Val::get("globalAlpha").as<double>();
}

void PaintRenderingContext2D::globalAlpha(double value) {
    emlite::Val::set("globalAlpha", value);
}

jsbind::String PaintRenderingContext2D::globalCompositeOperation() const {
    return emlite::Val::get("globalCompositeOperation").as<jsbind::String>();
}

void PaintRenderingContext2D::globalCompositeOperation(const jsbind::String& value) {
    emlite::Val::set("globalCompositeOperation", value);
}

bool PaintRenderingContext2D::imageSmoothingEnabled() const {
    return emlite::Val::get("imageSmoothingEnabled").as<bool>();
}

void PaintRenderingContext2D::imageSmoothingEnabled(bool value) {
    emlite::Val::set("imageSmoothingEnabled", value);
}

ImageSmoothingQuality PaintRenderingContext2D::imageSmoothingQuality() const {
    return emlite::Val::get("imageSmoothingQuality").as<ImageSmoothingQuality>();
}

void PaintRenderingContext2D::imageSmoothingQuality(const ImageSmoothingQuality& value) {
    emlite::Val::set("imageSmoothingQuality", value);
}

jsbind::Any PaintRenderingContext2D::strokeStyle() const {
    return emlite::Val::get("strokeStyle").as<jsbind::Any>();
}

void PaintRenderingContext2D::strokeStyle(const jsbind::Any& value) {
    emlite::Val::set("strokeStyle", value);
}

jsbind::Any PaintRenderingContext2D::fillStyle() const {
    return emlite::Val::get("fillStyle").as<jsbind::Any>();
}

void PaintRenderingContext2D::fillStyle(const jsbind::Any& value) {
    emlite::Val::set("fillStyle", value);
}

CanvasGradient PaintRenderingContext2D::createLinearGradient(double x0, double y0, double x1, double y1) {
    return emlite::Val::call("createLinearGradient", x0, y0, x1, y1).as<CanvasGradient>();
}

CanvasGradient PaintRenderingContext2D::createRadialGradient(double x0, double y0, double r0, double x1, double y1, double r1) {
    return emlite::Val::call("createRadialGradient", x0, y0, r0, x1, y1, r1).as<CanvasGradient>();
}

CanvasGradient PaintRenderingContext2D::createConicGradient(double startAngle, double x, double y) {
    return emlite::Val::call("createConicGradient", startAngle, x, y).as<CanvasGradient>();
}

CanvasPattern PaintRenderingContext2D::createPattern(const jsbind::Any& image, const jsbind::String& repetition) {
    return emlite::Val::call("createPattern", image, repetition).as<CanvasPattern>();
}

double PaintRenderingContext2D::shadowOffsetX() const {
    return emlite::Val::get("shadowOffsetX").as<double>();
}

void PaintRenderingContext2D::shadowOffsetX(double value) {
    emlite::Val::set("shadowOffsetX", value);
}

double PaintRenderingContext2D::shadowOffsetY() const {
    return emlite::Val::get("shadowOffsetY").as<double>();
}

void PaintRenderingContext2D::shadowOffsetY(double value) {
    emlite::Val::set("shadowOffsetY", value);
}

double PaintRenderingContext2D::shadowBlur() const {
    return emlite::Val::get("shadowBlur").as<double>();
}

void PaintRenderingContext2D::shadowBlur(double value) {
    emlite::Val::set("shadowBlur", value);
}

jsbind::String PaintRenderingContext2D::shadowColor() const {
    return emlite::Val::get("shadowColor").as<jsbind::String>();
}

void PaintRenderingContext2D::shadowColor(const jsbind::String& value) {
    emlite::Val::set("shadowColor", value);
}

jsbind::Undefined PaintRenderingContext2D::clearRect(double x, double y, double w, double h) {
    return emlite::Val::call("clearRect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::fillRect(double x, double y, double w, double h) {
    return emlite::Val::call("fillRect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::strokeRect(double x, double y, double w, double h) {
    return emlite::Val::call("strokeRect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::beginPath() {
    return emlite::Val::call("beginPath").as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::fill(const Path2D& path) {
    return emlite::Val::call("fill", path).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::fill(const Path2D& path, const CanvasFillRule& fillRule) {
    return emlite::Val::call("fill", path, fillRule).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::stroke(const Path2D& path) {
    return emlite::Val::call("stroke", path).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::clip(const Path2D& path) {
    return emlite::Val::call("clip", path).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::clip(const Path2D& path, const CanvasFillRule& fillRule) {
    return emlite::Val::call("clip", path, fillRule).as<jsbind::Undefined>();
}

bool PaintRenderingContext2D::isPointInPath(const Path2D& path, double x, double y) {
    return emlite::Val::call("isPointInPath", path, x, y).as<bool>();
}

bool PaintRenderingContext2D::isPointInPath(const Path2D& path, double x, double y, const CanvasFillRule& fillRule) {
    return emlite::Val::call("isPointInPath", path, x, y, fillRule).as<bool>();
}

bool PaintRenderingContext2D::isPointInStroke(const Path2D& path, double x, double y) {
    return emlite::Val::call("isPointInStroke", path, x, y).as<bool>();
}

jsbind::Undefined PaintRenderingContext2D::drawImage(const jsbind::Any& image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh) {
    return emlite::Val::call("drawImage", image, sx, sy, sw, sh, dx, dy, dw, dh).as<jsbind::Undefined>();
}

double PaintRenderingContext2D::lineWidth() const {
    return emlite::Val::get("lineWidth").as<double>();
}

void PaintRenderingContext2D::lineWidth(double value) {
    emlite::Val::set("lineWidth", value);
}

CanvasLineCap PaintRenderingContext2D::lineCap() const {
    return emlite::Val::get("lineCap").as<CanvasLineCap>();
}

void PaintRenderingContext2D::lineCap(const CanvasLineCap& value) {
    emlite::Val::set("lineCap", value);
}

CanvasLineJoin PaintRenderingContext2D::lineJoin() const {
    return emlite::Val::get("lineJoin").as<CanvasLineJoin>();
}

void PaintRenderingContext2D::lineJoin(const CanvasLineJoin& value) {
    emlite::Val::set("lineJoin", value);
}

double PaintRenderingContext2D::miterLimit() const {
    return emlite::Val::get("miterLimit").as<double>();
}

void PaintRenderingContext2D::miterLimit(double value) {
    emlite::Val::set("miterLimit", value);
}

jsbind::Undefined PaintRenderingContext2D::setLineDash(jsbind::TypedArray<double> segments) {
    return emlite::Val::call("setLineDash", segments).as<jsbind::Undefined>();
}

jsbind::TypedArray<double> PaintRenderingContext2D::getLineDash() {
    return emlite::Val::call("getLineDash").as<jsbind::TypedArray<double>>();
}

double PaintRenderingContext2D::lineDashOffset() const {
    return emlite::Val::get("lineDashOffset").as<double>();
}

void PaintRenderingContext2D::lineDashOffset(double value) {
    emlite::Val::set("lineDashOffset", value);
}

jsbind::Undefined PaintRenderingContext2D::closePath() {
    return emlite::Val::call("closePath").as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::moveTo(double x, double y) {
    return emlite::Val::call("moveTo", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::lineTo(double x, double y) {
    return emlite::Val::call("lineTo", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::quadraticCurveTo(double cpx, double cpy, double x, double y) {
    return emlite::Val::call("quadraticCurveTo", cpx, cpy, x, y).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y) {
    return emlite::Val::call("bezierCurveTo", cp1x, cp1y, cp2x, cp2y, x, y).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::arcTo(double x1, double y1, double x2, double y2, double radius) {
    return emlite::Val::call("arcTo", x1, y1, x2, y2, radius).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::rect(double x, double y, double w, double h) {
    return emlite::Val::call("rect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::roundRect(double x, double y, double w, double h) {
    return emlite::Val::call("roundRect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::roundRect(double x, double y, double w, double h, const jsbind::Any& radii) {
    return emlite::Val::call("roundRect", x, y, w, h, radii).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::arc(double x, double y, double radius, double startAngle, double endAngle) {
    return emlite::Val::call("arc", x, y, radius, startAngle, endAngle).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::arc(double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise) {
    return emlite::Val::call("arc", x, y, radius, startAngle, endAngle, counterclockwise).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle) {
    return emlite::Val::call("ellipse", x, y, radiusX, radiusY, rotation, startAngle, endAngle).as<jsbind::Undefined>();
}

jsbind::Undefined PaintRenderingContext2D::ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise) {
    return emlite::Val::call("ellipse", x, y, radiusX, radiusY, rotation, startAngle, endAngle, counterclockwise).as<jsbind::Undefined>();
}


} // namespace webbind