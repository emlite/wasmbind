#include <webbind/DOMPointInit.hpp>

namespace webbind {

DOMPointInit::DOMPointInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMPointInit DOMPointInit::take_ownership(Handle h) noexcept {
    return DOMPointInit(h);
}

DOMPointInit::DOMPointInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

DOMPointInit::DOMPointInit() noexcept: emlite::Val(emlite::Val::object()) {}

DOMPointInit DOMPointInit::clone() const noexcept { return *this; }

double DOMPointInit::x() const {
    return emlite::Val::get("x").as<double>();
}

void DOMPointInit::x(double value) {
    emlite::Val::set("x", value);
}

double DOMPointInit::y() const {
    return emlite::Val::get("y").as<double>();
}

void DOMPointInit::y(double value) {
    emlite::Val::set("y", value);
}

double DOMPointInit::z() const {
    return emlite::Val::get("z").as<double>();
}

void DOMPointInit::z(double value) {
    emlite::Val::set("z", value);
}

double DOMPointInit::w() const {
    return emlite::Val::get("w").as<double>();
}

void DOMPointInit::w(double value) {
    emlite::Val::set("w", value);
}


} // namespace webbind