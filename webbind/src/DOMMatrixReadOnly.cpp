#include <webbind/DOMMatrixReadOnly.hpp>
#include <webbind/DOMPointReadOnly.hpp>
#include <webbind/DOMMatrix.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/SVGGeometryElement.hpp>


DOMMatrixReadOnly DOMMatrixReadOnly::take_ownership(Handle h) noexcept {
        return DOMMatrixReadOnly(h);
    }
DOMMatrixReadOnly DOMMatrixReadOnly::clone() const noexcept { return *this; }
DOMMatrixReadOnly::DOMMatrixReadOnly(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMMatrixReadOnly::DOMMatrixReadOnly(const emlite::Val &val) noexcept: emlite::Val(val) {}


DOMMatrixReadOnly::DOMMatrixReadOnly() : emlite::Val(emlite::Val::global("DOMMatrixReadOnly").new_()) {}

DOMMatrixReadOnly::DOMMatrixReadOnly(const jsbind::Any& init) : emlite::Val(emlite::Val::global("DOMMatrixReadOnly").new_(init)) {}

DOMMatrixReadOnly DOMMatrixReadOnly::fromMatrix() {
    return emlite::Val::global("dommatrixreadonly").call("fromMatrix").as<DOMMatrixReadOnly>();
}

DOMMatrixReadOnly DOMMatrixReadOnly::fromMatrix(const DOMMatrixInit& other) {
    return emlite::Val::global("dommatrixreadonly").call("fromMatrix", other).as<DOMMatrixReadOnly>();
}

DOMMatrixReadOnly DOMMatrixReadOnly::fromFloat32Array(const jsbind::Float32Array& array32) {
    return emlite::Val::global("dommatrixreadonly").call("fromFloat32Array", array32).as<DOMMatrixReadOnly>();
}

DOMMatrixReadOnly DOMMatrixReadOnly::fromFloat64Array(const jsbind::Float64Array& array64) {
    return emlite::Val::global("dommatrixreadonly").call("fromFloat64Array", array64).as<DOMMatrixReadOnly>();
}

double DOMMatrixReadOnly::a() const {
    return emlite::Val::get("a").as<double>();
}

double DOMMatrixReadOnly::b() const {
    return emlite::Val::get("b").as<double>();
}

double DOMMatrixReadOnly::c() const {
    return emlite::Val::get("c").as<double>();
}

double DOMMatrixReadOnly::d() const {
    return emlite::Val::get("d").as<double>();
}

double DOMMatrixReadOnly::e() const {
    return emlite::Val::get("e").as<double>();
}

double DOMMatrixReadOnly::f() const {
    return emlite::Val::get("f").as<double>();
}

double DOMMatrixReadOnly::m11() const {
    return emlite::Val::get("m11").as<double>();
}

double DOMMatrixReadOnly::m12() const {
    return emlite::Val::get("m12").as<double>();
}

double DOMMatrixReadOnly::m13() const {
    return emlite::Val::get("m13").as<double>();
}

double DOMMatrixReadOnly::m14() const {
    return emlite::Val::get("m14").as<double>();
}

double DOMMatrixReadOnly::m21() const {
    return emlite::Val::get("m21").as<double>();
}

double DOMMatrixReadOnly::m22() const {
    return emlite::Val::get("m22").as<double>();
}

double DOMMatrixReadOnly::m23() const {
    return emlite::Val::get("m23").as<double>();
}

double DOMMatrixReadOnly::m24() const {
    return emlite::Val::get("m24").as<double>();
}

double DOMMatrixReadOnly::m31() const {
    return emlite::Val::get("m31").as<double>();
}

double DOMMatrixReadOnly::m32() const {
    return emlite::Val::get("m32").as<double>();
}

double DOMMatrixReadOnly::m33() const {
    return emlite::Val::get("m33").as<double>();
}

double DOMMatrixReadOnly::m34() const {
    return emlite::Val::get("m34").as<double>();
}

double DOMMatrixReadOnly::m41() const {
    return emlite::Val::get("m41").as<double>();
}

double DOMMatrixReadOnly::m42() const {
    return emlite::Val::get("m42").as<double>();
}

double DOMMatrixReadOnly::m43() const {
    return emlite::Val::get("m43").as<double>();
}

double DOMMatrixReadOnly::m44() const {
    return emlite::Val::get("m44").as<double>();
}

bool DOMMatrixReadOnly::is2D() const {
    return emlite::Val::get("is2D").as<bool>();
}

bool DOMMatrixReadOnly::isIdentity() const {
    return emlite::Val::get("isIdentity").as<bool>();
}

DOMMatrix DOMMatrixReadOnly::translate() {
    return emlite::Val::call("translate").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::translate(double tx) {
    return emlite::Val::call("translate", tx).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::translate(double tx, double ty) {
    return emlite::Val::call("translate", tx, ty).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::translate(double tx, double ty, double tz) {
    return emlite::Val::call("translate", tx, ty, tz).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale() {
    return emlite::Val::call("scale").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale(double scaleX) {
    return emlite::Val::call("scale", scaleX).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale(double scaleX, double scaleY) {
    return emlite::Val::call("scale", scaleX, scaleY).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale(double scaleX, double scaleY, double scaleZ) {
    return emlite::Val::call("scale", scaleX, scaleY, scaleZ).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale(double scaleX, double scaleY, double scaleZ, double originX) {
    return emlite::Val::call("scale", scaleX, scaleY, scaleZ, originX).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale(double scaleX, double scaleY, double scaleZ, double originX, double originY) {
    return emlite::Val::call("scale", scaleX, scaleY, scaleZ, originX, originY).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale(double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ) {
    return emlite::Val::call("scale", scaleX, scaleY, scaleZ, originX, originY, originZ).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scaleNonUniform() {
    return emlite::Val::call("scaleNonUniform").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scaleNonUniform(double scaleX) {
    return emlite::Val::call("scaleNonUniform", scaleX).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scaleNonUniform(double scaleX, double scaleY) {
    return emlite::Val::call("scaleNonUniform", scaleX, scaleY).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale3d() {
    return emlite::Val::call("scale3d").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale3d(double scale) {
    return emlite::Val::call("scale3d", scale).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale3d(double scale, double originX) {
    return emlite::Val::call("scale3d", scale, originX).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale3d(double scale, double originX, double originY) {
    return emlite::Val::call("scale3d", scale, originX, originY).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::scale3d(double scale, double originX, double originY, double originZ) {
    return emlite::Val::call("scale3d", scale, originX, originY, originZ).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotate() {
    return emlite::Val::call("rotate").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotate(double rotX) {
    return emlite::Val::call("rotate", rotX).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotate(double rotX, double rotY) {
    return emlite::Val::call("rotate", rotX, rotY).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotate(double rotX, double rotY, double rotZ) {
    return emlite::Val::call("rotate", rotX, rotY, rotZ).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotateFromVector() {
    return emlite::Val::call("rotateFromVector").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotateFromVector(double x) {
    return emlite::Val::call("rotateFromVector", x).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotateFromVector(double x, double y) {
    return emlite::Val::call("rotateFromVector", x, y).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotateAxisAngle() {
    return emlite::Val::call("rotateAxisAngle").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotateAxisAngle(double x) {
    return emlite::Val::call("rotateAxisAngle", x).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotateAxisAngle(double x, double y) {
    return emlite::Val::call("rotateAxisAngle", x, y).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotateAxisAngle(double x, double y, double z) {
    return emlite::Val::call("rotateAxisAngle", x, y, z).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::rotateAxisAngle(double x, double y, double z, double angle) {
    return emlite::Val::call("rotateAxisAngle", x, y, z, angle).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::skewX() {
    return emlite::Val::call("skewX").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::skewX(double sx) {
    return emlite::Val::call("skewX", sx).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::skewY() {
    return emlite::Val::call("skewY").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::skewY(double sy) {
    return emlite::Val::call("skewY", sy).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::multiply() {
    return emlite::Val::call("multiply").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::multiply(const DOMMatrixInit& other) {
    return emlite::Val::call("multiply", other).as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::flipX() {
    return emlite::Val::call("flipX").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::flipY() {
    return emlite::Val::call("flipY").as<DOMMatrix>();
}

DOMMatrix DOMMatrixReadOnly::inverse() {
    return emlite::Val::call("inverse").as<DOMMatrix>();
}

DOMPoint DOMMatrixReadOnly::transformPoint() {
    return emlite::Val::call("transformPoint").as<DOMPoint>();
}

DOMPoint DOMMatrixReadOnly::transformPoint(const DOMPointInit& point) {
    return emlite::Val::call("transformPoint", point).as<DOMPoint>();
}

jsbind::Float32Array DOMMatrixReadOnly::toFloat32Array() {
    return emlite::Val::call("toFloat32Array").as<jsbind::Float32Array>();
}

jsbind::Float64Array DOMMatrixReadOnly::toFloat64Array() {
    return emlite::Val::call("toFloat64Array").as<jsbind::Float64Array>();
}

jsbind::Object DOMMatrixReadOnly::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

