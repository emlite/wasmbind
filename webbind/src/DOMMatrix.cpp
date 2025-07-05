#include <webbind/DOMMatrix.hpp>
#include <webbind/DOMPointReadOnly.hpp>


DOMMatrix DOMMatrix::take_ownership(Handle h) noexcept {
        return DOMMatrix(h);
    }
DOMMatrix DOMMatrix::clone() const noexcept { return *this; }
DOMMatrix::DOMMatrix(Handle h) noexcept : DOMMatrixReadOnly(emlite::Val::take_ownership(h)) {}
DOMMatrix::DOMMatrix(const emlite::Val &val) noexcept: DOMMatrixReadOnly(val) {}


DOMMatrix::DOMMatrix() : DOMMatrixReadOnly(emlite::Val::global("DOMMatrix").new_()) {}

DOMMatrix::DOMMatrix(const jsbind::Any& init) : DOMMatrixReadOnly(emlite::Val::global("DOMMatrix").new_(init)) {}

DOMMatrix DOMMatrix::fromMatrix() {
    return emlite::Val::global("dommatrix").call("fromMatrix").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::fromMatrix(const DOMMatrixInit& other) {
    return emlite::Val::global("dommatrix").call("fromMatrix", other).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::fromFloat32Array(const jsbind::Float32Array& array32) {
    return emlite::Val::global("dommatrix").call("fromFloat32Array", array32).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::fromFloat64Array(const jsbind::Float64Array& array64) {
    return emlite::Val::global("dommatrix").call("fromFloat64Array", array64).as<DOMMatrix>();
}

double DOMMatrix::a() const {
    return DOMMatrixReadOnly::get("a").as<double>();
}

void DOMMatrix::a(double value) {
    DOMMatrixReadOnly::set("a", value);
}

double DOMMatrix::b() const {
    return DOMMatrixReadOnly::get("b").as<double>();
}

void DOMMatrix::b(double value) {
    DOMMatrixReadOnly::set("b", value);
}

double DOMMatrix::c() const {
    return DOMMatrixReadOnly::get("c").as<double>();
}

void DOMMatrix::c(double value) {
    DOMMatrixReadOnly::set("c", value);
}

double DOMMatrix::d() const {
    return DOMMatrixReadOnly::get("d").as<double>();
}

void DOMMatrix::d(double value) {
    DOMMatrixReadOnly::set("d", value);
}

double DOMMatrix::e() const {
    return DOMMatrixReadOnly::get("e").as<double>();
}

void DOMMatrix::e(double value) {
    DOMMatrixReadOnly::set("e", value);
}

double DOMMatrix::f() const {
    return DOMMatrixReadOnly::get("f").as<double>();
}

void DOMMatrix::f(double value) {
    DOMMatrixReadOnly::set("f", value);
}

double DOMMatrix::m11() const {
    return DOMMatrixReadOnly::get("m11").as<double>();
}

void DOMMatrix::m11(double value) {
    DOMMatrixReadOnly::set("m11", value);
}

double DOMMatrix::m12() const {
    return DOMMatrixReadOnly::get("m12").as<double>();
}

void DOMMatrix::m12(double value) {
    DOMMatrixReadOnly::set("m12", value);
}

double DOMMatrix::m13() const {
    return DOMMatrixReadOnly::get("m13").as<double>();
}

void DOMMatrix::m13(double value) {
    DOMMatrixReadOnly::set("m13", value);
}

double DOMMatrix::m14() const {
    return DOMMatrixReadOnly::get("m14").as<double>();
}

void DOMMatrix::m14(double value) {
    DOMMatrixReadOnly::set("m14", value);
}

double DOMMatrix::m21() const {
    return DOMMatrixReadOnly::get("m21").as<double>();
}

void DOMMatrix::m21(double value) {
    DOMMatrixReadOnly::set("m21", value);
}

double DOMMatrix::m22() const {
    return DOMMatrixReadOnly::get("m22").as<double>();
}

void DOMMatrix::m22(double value) {
    DOMMatrixReadOnly::set("m22", value);
}

double DOMMatrix::m23() const {
    return DOMMatrixReadOnly::get("m23").as<double>();
}

void DOMMatrix::m23(double value) {
    DOMMatrixReadOnly::set("m23", value);
}

double DOMMatrix::m24() const {
    return DOMMatrixReadOnly::get("m24").as<double>();
}

void DOMMatrix::m24(double value) {
    DOMMatrixReadOnly::set("m24", value);
}

double DOMMatrix::m31() const {
    return DOMMatrixReadOnly::get("m31").as<double>();
}

void DOMMatrix::m31(double value) {
    DOMMatrixReadOnly::set("m31", value);
}

double DOMMatrix::m32() const {
    return DOMMatrixReadOnly::get("m32").as<double>();
}

void DOMMatrix::m32(double value) {
    DOMMatrixReadOnly::set("m32", value);
}

double DOMMatrix::m33() const {
    return DOMMatrixReadOnly::get("m33").as<double>();
}

void DOMMatrix::m33(double value) {
    DOMMatrixReadOnly::set("m33", value);
}

double DOMMatrix::m34() const {
    return DOMMatrixReadOnly::get("m34").as<double>();
}

void DOMMatrix::m34(double value) {
    DOMMatrixReadOnly::set("m34", value);
}

double DOMMatrix::m41() const {
    return DOMMatrixReadOnly::get("m41").as<double>();
}

void DOMMatrix::m41(double value) {
    DOMMatrixReadOnly::set("m41", value);
}

double DOMMatrix::m42() const {
    return DOMMatrixReadOnly::get("m42").as<double>();
}

void DOMMatrix::m42(double value) {
    DOMMatrixReadOnly::set("m42", value);
}

double DOMMatrix::m43() const {
    return DOMMatrixReadOnly::get("m43").as<double>();
}

void DOMMatrix::m43(double value) {
    DOMMatrixReadOnly::set("m43", value);
}

double DOMMatrix::m44() const {
    return DOMMatrixReadOnly::get("m44").as<double>();
}

void DOMMatrix::m44(double value) {
    DOMMatrixReadOnly::set("m44", value);
}

DOMMatrix DOMMatrix::multiplySelf() {
    return DOMMatrixReadOnly::call("multiplySelf").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::multiplySelf(const DOMMatrixInit& other) {
    return DOMMatrixReadOnly::call("multiplySelf", other).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::preMultiplySelf() {
    return DOMMatrixReadOnly::call("preMultiplySelf").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::preMultiplySelf(const DOMMatrixInit& other) {
    return DOMMatrixReadOnly::call("preMultiplySelf", other).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::translateSelf() {
    return DOMMatrixReadOnly::call("translateSelf").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::translateSelf(double tx) {
    return DOMMatrixReadOnly::call("translateSelf", tx).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::translateSelf(double tx, double ty) {
    return DOMMatrixReadOnly::call("translateSelf", tx, ty).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::translateSelf(double tx, double ty, double tz) {
    return DOMMatrixReadOnly::call("translateSelf", tx, ty, tz).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scaleSelf() {
    return DOMMatrixReadOnly::call("scaleSelf").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scaleSelf(double scaleX) {
    return DOMMatrixReadOnly::call("scaleSelf", scaleX).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scaleSelf(double scaleX, double scaleY) {
    return DOMMatrixReadOnly::call("scaleSelf", scaleX, scaleY).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scaleSelf(double scaleX, double scaleY, double scaleZ) {
    return DOMMatrixReadOnly::call("scaleSelf", scaleX, scaleY, scaleZ).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scaleSelf(double scaleX, double scaleY, double scaleZ, double originX) {
    return DOMMatrixReadOnly::call("scaleSelf", scaleX, scaleY, scaleZ, originX).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scaleSelf(double scaleX, double scaleY, double scaleZ, double originX, double originY) {
    return DOMMatrixReadOnly::call("scaleSelf", scaleX, scaleY, scaleZ, originX, originY).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scaleSelf(double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ) {
    return DOMMatrixReadOnly::call("scaleSelf", scaleX, scaleY, scaleZ, originX, originY, originZ).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scale3dSelf() {
    return DOMMatrixReadOnly::call("scale3dSelf").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scale3dSelf(double scale) {
    return DOMMatrixReadOnly::call("scale3dSelf", scale).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scale3dSelf(double scale, double originX) {
    return DOMMatrixReadOnly::call("scale3dSelf", scale, originX).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scale3dSelf(double scale, double originX, double originY) {
    return DOMMatrixReadOnly::call("scale3dSelf", scale, originX, originY).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::scale3dSelf(double scale, double originX, double originY, double originZ) {
    return DOMMatrixReadOnly::call("scale3dSelf", scale, originX, originY, originZ).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateSelf() {
    return DOMMatrixReadOnly::call("rotateSelf").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateSelf(double rotX) {
    return DOMMatrixReadOnly::call("rotateSelf", rotX).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateSelf(double rotX, double rotY) {
    return DOMMatrixReadOnly::call("rotateSelf", rotX, rotY).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateSelf(double rotX, double rotY, double rotZ) {
    return DOMMatrixReadOnly::call("rotateSelf", rotX, rotY, rotZ).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateFromVectorSelf() {
    return DOMMatrixReadOnly::call("rotateFromVectorSelf").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateFromVectorSelf(double x) {
    return DOMMatrixReadOnly::call("rotateFromVectorSelf", x).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateFromVectorSelf(double x, double y) {
    return DOMMatrixReadOnly::call("rotateFromVectorSelf", x, y).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateAxisAngleSelf() {
    return DOMMatrixReadOnly::call("rotateAxisAngleSelf").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateAxisAngleSelf(double x) {
    return DOMMatrixReadOnly::call("rotateAxisAngleSelf", x).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateAxisAngleSelf(double x, double y) {
    return DOMMatrixReadOnly::call("rotateAxisAngleSelf", x, y).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateAxisAngleSelf(double x, double y, double z) {
    return DOMMatrixReadOnly::call("rotateAxisAngleSelf", x, y, z).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::rotateAxisAngleSelf(double x, double y, double z, double angle) {
    return DOMMatrixReadOnly::call("rotateAxisAngleSelf", x, y, z, angle).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::skewXSelf() {
    return DOMMatrixReadOnly::call("skewXSelf").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::skewXSelf(double sx) {
    return DOMMatrixReadOnly::call("skewXSelf", sx).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::skewYSelf() {
    return DOMMatrixReadOnly::call("skewYSelf").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::skewYSelf(double sy) {
    return DOMMatrixReadOnly::call("skewYSelf", sy).as<DOMMatrix>();
}

DOMMatrix DOMMatrix::invertSelf() {
    return DOMMatrixReadOnly::call("invertSelf").as<DOMMatrix>();
}

DOMMatrix DOMMatrix::setMatrixValue(const jsbind::DOMString& transformList) {
    return DOMMatrixReadOnly::call("setMatrixValue", transformList).as<DOMMatrix>();
}

