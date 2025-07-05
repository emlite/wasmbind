#include <webbind/Path2D.hpp>
#include <webbind/SVGSVGElement.hpp>


Path2D Path2D::take_ownership(Handle h) noexcept {
        return Path2D(h);
    }
Path2D Path2D::clone() const noexcept { return *this; }
Path2D::Path2D(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Path2D::Path2D(const emlite::Val &val) noexcept: emlite::Val(val) {}


Path2D::Path2D() : emlite::Val(emlite::Val::global("Path2D").new_()) {}

Path2D::Path2D(const jsbind::Any& path) : emlite::Val(emlite::Val::global("Path2D").new_(path)) {}

jsbind::Undefined Path2D::addPath(const Path2D& path) {
    return emlite::Val::call("addPath", path).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::addPath(const Path2D& path, const DOMMatrix2DInit& transform) {
    return emlite::Val::call("addPath", path, transform).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::closePath() {
    return emlite::Val::call("closePath").as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::moveTo(double x, double y) {
    return emlite::Val::call("moveTo", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::lineTo(double x, double y) {
    return emlite::Val::call("lineTo", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::quadraticCurveTo(double cpx, double cpy, double x, double y) {
    return emlite::Val::call("quadraticCurveTo", cpx, cpy, x, y).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y) {
    return emlite::Val::call("bezierCurveTo", cp1x, cp1y, cp2x, cp2y, x, y).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::arcTo(double x1, double y1, double x2, double y2, double radius) {
    return emlite::Val::call("arcTo", x1, y1, x2, y2, radius).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::rect(double x, double y, double w, double h) {
    return emlite::Val::call("rect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::roundRect(double x, double y, double w, double h) {
    return emlite::Val::call("roundRect", x, y, w, h).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::roundRect(double x, double y, double w, double h, const jsbind::Any& radii) {
    return emlite::Val::call("roundRect", x, y, w, h, radii).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::arc(double x, double y, double radius, double startAngle, double endAngle) {
    return emlite::Val::call("arc", x, y, radius, startAngle, endAngle).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::arc(double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise) {
    return emlite::Val::call("arc", x, y, radius, startAngle, endAngle, counterclockwise).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle) {
    return emlite::Val::call("ellipse", x, y, radiusX, radiusY, rotation, startAngle, endAngle).as<jsbind::Undefined>();
}

jsbind::Undefined Path2D::ellipse(double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise) {
    return emlite::Val::call("ellipse", x, y, radiusX, radiusY, rotation, startAngle, endAngle, counterclockwise).as<jsbind::Undefined>();
}

