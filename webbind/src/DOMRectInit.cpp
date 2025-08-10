#include <webbind/DOMRectInit.hpp>

namespace webbind {

DOMRectInit::DOMRectInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMRectInit DOMRectInit::take_ownership(Handle h) noexcept {
    return DOMRectInit(h);
}

DOMRectInit::DOMRectInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

DOMRectInit::DOMRectInit() noexcept: emlite::Val(emlite::Val::object()) {}

DOMRectInit DOMRectInit::clone() const noexcept { return *this; }

double DOMRectInit::x() const {
    return emlite::Val::get("x").as<double>();
}

void DOMRectInit::x(double value) {
    emlite::Val::set("x", value);
}

double DOMRectInit::y() const {
    return emlite::Val::get("y").as<double>();
}

void DOMRectInit::y(double value) {
    emlite::Val::set("y", value);
}

double DOMRectInit::width() const {
    return emlite::Val::get("width").as<double>();
}

void DOMRectInit::width(double value) {
    emlite::Val::set("width", value);
}

double DOMRectInit::height() const {
    return emlite::Val::get("height").as<double>();
}

void DOMRectInit::height(double value) {
    emlite::Val::set("height", value);
}


} // namespace webbind