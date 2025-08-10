#include <webbind/DOMMatrixInit.hpp>

namespace webbind {

DOMMatrixInit::DOMMatrixInit(Handle h) noexcept : DOMMatrix2DInit(emlite::Val::take_ownership(h)) {}
DOMMatrixInit DOMMatrixInit::take_ownership(Handle h) noexcept {
    return DOMMatrixInit(h);
}

DOMMatrixInit::DOMMatrixInit(const emlite::Val &val) noexcept: DOMMatrix2DInit(val) {}

DOMMatrixInit::DOMMatrixInit() noexcept: DOMMatrix2DInit(emlite::Val::object()) {}

DOMMatrixInit DOMMatrixInit::clone() const noexcept { return *this; }

double DOMMatrixInit::m13() const {
    return emlite::Val::get("m13").as<double>();
}

void DOMMatrixInit::m13(double value) {
    emlite::Val::set("m13", value);
}

double DOMMatrixInit::m14() const {
    return emlite::Val::get("m14").as<double>();
}

void DOMMatrixInit::m14(double value) {
    emlite::Val::set("m14", value);
}

double DOMMatrixInit::m23() const {
    return emlite::Val::get("m23").as<double>();
}

void DOMMatrixInit::m23(double value) {
    emlite::Val::set("m23", value);
}

double DOMMatrixInit::m24() const {
    return emlite::Val::get("m24").as<double>();
}

void DOMMatrixInit::m24(double value) {
    emlite::Val::set("m24", value);
}

double DOMMatrixInit::m31() const {
    return emlite::Val::get("m31").as<double>();
}

void DOMMatrixInit::m31(double value) {
    emlite::Val::set("m31", value);
}

double DOMMatrixInit::m32() const {
    return emlite::Val::get("m32").as<double>();
}

void DOMMatrixInit::m32(double value) {
    emlite::Val::set("m32", value);
}

double DOMMatrixInit::m33() const {
    return emlite::Val::get("m33").as<double>();
}

void DOMMatrixInit::m33(double value) {
    emlite::Val::set("m33", value);
}

double DOMMatrixInit::m34() const {
    return emlite::Val::get("m34").as<double>();
}

void DOMMatrixInit::m34(double value) {
    emlite::Val::set("m34", value);
}

double DOMMatrixInit::m43() const {
    return emlite::Val::get("m43").as<double>();
}

void DOMMatrixInit::m43(double value) {
    emlite::Val::set("m43", value);
}

double DOMMatrixInit::m44() const {
    return emlite::Val::get("m44").as<double>();
}

void DOMMatrixInit::m44(double value) {
    emlite::Val::set("m44", value);
}

bool DOMMatrixInit::is2D() const {
    return emlite::Val::get("is2D").as<bool>();
}

void DOMMatrixInit::is2D(bool value) {
    emlite::Val::set("is2D", value);
}


} // namespace webbind