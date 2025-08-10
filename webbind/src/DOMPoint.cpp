#include <webbind/DOMPoint.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/DOMPointInit.hpp>

namespace webbind {

DOMPoint DOMPoint::take_ownership(Handle h) noexcept {
        return DOMPoint(h);
    }
DOMPoint DOMPoint::clone() const noexcept { return *this; }
emlite::Val DOMPoint::instance() noexcept { return emlite::Val::global("DOMPoint"); }
DOMPoint::DOMPoint(Handle h) noexcept : DOMPointReadOnly(emlite::Val::take_ownership(h)) {}
DOMPoint::DOMPoint(const emlite::Val &val) noexcept: DOMPointReadOnly(val) {}

DOMPoint::DOMPoint() : DOMPointReadOnly(emlite::Val::global("DOMPoint").new_()) {}

DOMPoint::DOMPoint(double x) : DOMPointReadOnly(emlite::Val::global("DOMPoint").new_(x)) {}

DOMPoint::DOMPoint(double x, double y) : DOMPointReadOnly(emlite::Val::global("DOMPoint").new_(x, y)) {}

DOMPoint::DOMPoint(double x, double y, double z) : DOMPointReadOnly(emlite::Val::global("DOMPoint").new_(x, y, z)) {}

DOMPoint::DOMPoint(double x, double y, double z, double w) : DOMPointReadOnly(emlite::Val::global("DOMPoint").new_(x, y, z, w)) {}

DOMPoint DOMPoint::fromPoint() {
    return emlite::Val::global("dompoint").call("fromPoint").as<DOMPoint>();
}

DOMPoint DOMPoint::fromPoint(const DOMPointInit& other) {
    return emlite::Val::global("dompoint").call("fromPoint", other).as<DOMPoint>();
}

double DOMPoint::x() const {
    return DOMPointReadOnly::get("x").as<double>();
}

void DOMPoint::x(double value) {
    DOMPointReadOnly::set("x", value);
}

double DOMPoint::y() const {
    return DOMPointReadOnly::get("y").as<double>();
}

void DOMPoint::y(double value) {
    DOMPointReadOnly::set("y", value);
}

double DOMPoint::z() const {
    return DOMPointReadOnly::get("z").as<double>();
}

void DOMPoint::z(double value) {
    DOMPointReadOnly::set("z", value);
}

double DOMPoint::w() const {
    return DOMPointReadOnly::get("w").as<double>();
}

void DOMPoint::w(double value) {
    DOMPointReadOnly::set("w", value);
}


} // namespace webbind