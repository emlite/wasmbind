#include <webbind/DOMRectReadOnly.hpp>


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

DOMRectReadOnly DOMRectReadOnly::take_ownership(Handle h) noexcept {
        return DOMRectReadOnly(h);
    }
DOMRectReadOnly DOMRectReadOnly::clone() const noexcept { return *this; }
DOMRectReadOnly::DOMRectReadOnly(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMRectReadOnly::DOMRectReadOnly(const emlite::Val &val) noexcept: emlite::Val(val) {}


DOMRectReadOnly::DOMRectReadOnly() : emlite::Val(emlite::Val::global("DOMRectReadOnly").new_()) {}

DOMRectReadOnly::DOMRectReadOnly(double x) : emlite::Val(emlite::Val::global("DOMRectReadOnly").new_(x)) {}

DOMRectReadOnly::DOMRectReadOnly(double x, double y) : emlite::Val(emlite::Val::global("DOMRectReadOnly").new_(x, y)) {}

DOMRectReadOnly::DOMRectReadOnly(double x, double y, double width) : emlite::Val(emlite::Val::global("DOMRectReadOnly").new_(x, y, width)) {}

DOMRectReadOnly::DOMRectReadOnly(double x, double y, double width, double height) : emlite::Val(emlite::Val::global("DOMRectReadOnly").new_(x, y, width, height)) {}

DOMRectReadOnly DOMRectReadOnly::fromRect() {
    return emlite::Val::global("domrectreadonly").call("fromRect").as<DOMRectReadOnly>();
}

DOMRectReadOnly DOMRectReadOnly::fromRect(const DOMRectInit& other) {
    return emlite::Val::global("domrectreadonly").call("fromRect", other).as<DOMRectReadOnly>();
}

double DOMRectReadOnly::x() const {
    return emlite::Val::get("x").as<double>();
}

double DOMRectReadOnly::y() const {
    return emlite::Val::get("y").as<double>();
}

double DOMRectReadOnly::width() const {
    return emlite::Val::get("width").as<double>();
}

double DOMRectReadOnly::height() const {
    return emlite::Val::get("height").as<double>();
}

double DOMRectReadOnly::top() const {
    return emlite::Val::get("top").as<double>();
}

double DOMRectReadOnly::right() const {
    return emlite::Val::get("right").as<double>();
}

double DOMRectReadOnly::bottom() const {
    return emlite::Val::get("bottom").as<double>();
}

double DOMRectReadOnly::left() const {
    return emlite::Val::get("left").as<double>();
}

jsbind::Object DOMRectReadOnly::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

