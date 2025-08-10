#include <webbind/DOMPointReadOnly.hpp>
#include <webbind/DOMPointReadOnly.hpp>
#include <webbind/DOMPointInit.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/DOMMatrixInit.hpp>

namespace webbind {

DOMPointReadOnly DOMPointReadOnly::take_ownership(Handle h) noexcept {
    return DOMPointReadOnly(h);
}

DOMPointReadOnly DOMPointReadOnly::clone() const noexcept { return *this; }

emlite::Val DOMPointReadOnly::instance() noexcept { return emlite::Val::global("DOMPointReadOnly"); }

DOMPointReadOnly::DOMPointReadOnly(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

DOMPointReadOnly::DOMPointReadOnly(const emlite::Val &val) noexcept: emlite::Val(val) {}

DOMPointReadOnly::DOMPointReadOnly() : emlite::Val(emlite::Val::global("DOMPointReadOnly").new_()) {}

DOMPointReadOnly::DOMPointReadOnly(double x) : emlite::Val(emlite::Val::global("DOMPointReadOnly").new_(x)) {}

DOMPointReadOnly::DOMPointReadOnly(double x, double y) : emlite::Val(emlite::Val::global("DOMPointReadOnly").new_(x, y)) {}

DOMPointReadOnly::DOMPointReadOnly(double x, double y, double z) : emlite::Val(emlite::Val::global("DOMPointReadOnly").new_(x, y, z)) {}

DOMPointReadOnly::DOMPointReadOnly(double x, double y, double z, double w) : emlite::Val(emlite::Val::global("DOMPointReadOnly").new_(x, y, z, w)) {}

DOMPointReadOnly DOMPointReadOnly::fromPoint() {
    return emlite::Val::global("dompointreadonly").call("fromPoint").as<DOMPointReadOnly>();
}

DOMPointReadOnly DOMPointReadOnly::fromPoint(const DOMPointInit& other) {
    return emlite::Val::global("dompointreadonly").call("fromPoint", other).as<DOMPointReadOnly>();
}

double DOMPointReadOnly::x() const {
    return emlite::Val::get("x").as<double>();
}

double DOMPointReadOnly::y() const {
    return emlite::Val::get("y").as<double>();
}

double DOMPointReadOnly::z() const {
    return emlite::Val::get("z").as<double>();
}

double DOMPointReadOnly::w() const {
    return emlite::Val::get("w").as<double>();
}

DOMPoint DOMPointReadOnly::matrixTransform() {
    return emlite::Val::call("matrixTransform").as<DOMPoint>();
}

DOMPoint DOMPointReadOnly::matrixTransform(const DOMMatrixInit& matrix) {
    return emlite::Val::call("matrixTransform", matrix).as<DOMPoint>();
}

jsbind::Object DOMPointReadOnly::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}


} // namespace webbind