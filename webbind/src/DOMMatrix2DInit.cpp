#include <webbind/DOMMatrix2DInit.hpp>

namespace webbind {

DOMMatrix2DInit::DOMMatrix2DInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMMatrix2DInit DOMMatrix2DInit::take_ownership(Handle h) noexcept {
    return DOMMatrix2DInit(h);
}

DOMMatrix2DInit::DOMMatrix2DInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

DOMMatrix2DInit::DOMMatrix2DInit() noexcept: emlite::Val(emlite::Val::object()) {}

DOMMatrix2DInit DOMMatrix2DInit::clone() const noexcept { return *this; }

double DOMMatrix2DInit::a() const {
    return emlite::Val::get("a").as<double>();
}

void DOMMatrix2DInit::a(double value) {
    emlite::Val::set("a", value);
}

double DOMMatrix2DInit::b() const {
    return emlite::Val::get("b").as<double>();
}

void DOMMatrix2DInit::b(double value) {
    emlite::Val::set("b", value);
}

double DOMMatrix2DInit::c() const {
    return emlite::Val::get("c").as<double>();
}

void DOMMatrix2DInit::c(double value) {
    emlite::Val::set("c", value);
}

double DOMMatrix2DInit::d() const {
    return emlite::Val::get("d").as<double>();
}

void DOMMatrix2DInit::d(double value) {
    emlite::Val::set("d", value);
}

double DOMMatrix2DInit::e() const {
    return emlite::Val::get("e").as<double>();
}

void DOMMatrix2DInit::e(double value) {
    emlite::Val::set("e", value);
}

double DOMMatrix2DInit::f() const {
    return emlite::Val::get("f").as<double>();
}

void DOMMatrix2DInit::f(double value) {
    emlite::Val::set("f", value);
}

double DOMMatrix2DInit::m11() const {
    return emlite::Val::get("m11").as<double>();
}

void DOMMatrix2DInit::m11(double value) {
    emlite::Val::set("m11", value);
}

double DOMMatrix2DInit::m12() const {
    return emlite::Val::get("m12").as<double>();
}

void DOMMatrix2DInit::m12(double value) {
    emlite::Val::set("m12", value);
}

double DOMMatrix2DInit::m21() const {
    return emlite::Val::get("m21").as<double>();
}

void DOMMatrix2DInit::m21(double value) {
    emlite::Val::set("m21", value);
}

double DOMMatrix2DInit::m22() const {
    return emlite::Val::get("m22").as<double>();
}

void DOMMatrix2DInit::m22(double value) {
    emlite::Val::set("m22", value);
}

double DOMMatrix2DInit::m41() const {
    return emlite::Val::get("m41").as<double>();
}

void DOMMatrix2DInit::m41(double value) {
    emlite::Val::set("m41", value);
}

double DOMMatrix2DInit::m42() const {
    return emlite::Val::get("m42").as<double>();
}

void DOMMatrix2DInit::m42(double value) {
    emlite::Val::set("m42", value);
}


} // namespace webbind