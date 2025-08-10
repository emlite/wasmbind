#include "webbind/Point2D.hpp"

using emlite::Val;
namespace webbind {

Point2D::Point2D(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Point2D Point2D::take_ownership(Handle h) noexcept {
        return Point2D(h);
    }
Point2D::Point2D(const emlite::Val &val) noexcept: emlite::Val(val) {}
Point2D::Point2D() noexcept: emlite::Val(emlite::Val::object()) {}
Point2D Point2D::clone() const noexcept { return *this; }

double Point2D::x() const {
    return emlite::Val::get("x").as<double>();
}

void Point2D::x(double value) {
    emlite::Val::set("x", value);
}

double Point2D::y() const {
    return emlite::Val::get("y").as<double>();
}

void Point2D::y(double value) {
    emlite::Val::set("y", value);
}


} // namespace webbind