#include <webbind/DOMRect.hpp>
#include <webbind/DOMRectReadOnly.hpp>


DOMRect DOMRect::take_ownership(Handle h) noexcept {
        return DOMRect(h);
    }
DOMRect DOMRect::clone() const noexcept { return *this; }
emlite::Val DOMRect::instance() noexcept { return emlite::Val::global("DOMRect"); }
DOMRect::DOMRect(Handle h) noexcept : DOMRectReadOnly(emlite::Val::take_ownership(h)) {}
DOMRect::DOMRect(const emlite::Val &val) noexcept: DOMRectReadOnly(val) {}


DOMRect::DOMRect() : DOMRectReadOnly(emlite::Val::global("DOMRect").new_()) {}

DOMRect::DOMRect(double x) : DOMRectReadOnly(emlite::Val::global("DOMRect").new_(x)) {}

DOMRect::DOMRect(double x, double y) : DOMRectReadOnly(emlite::Val::global("DOMRect").new_(x, y)) {}

DOMRect::DOMRect(double x, double y, double width) : DOMRectReadOnly(emlite::Val::global("DOMRect").new_(x, y, width)) {}

DOMRect::DOMRect(double x, double y, double width, double height) : DOMRectReadOnly(emlite::Val::global("DOMRect").new_(x, y, width, height)) {}

DOMRect DOMRect::fromRect() {
    return emlite::Val::global("domrect").call("fromRect").as<DOMRect>();
}

DOMRect DOMRect::fromRect(const DOMRectInit& other) {
    return emlite::Val::global("domrect").call("fromRect", other).as<DOMRect>();
}

double DOMRect::x() const {
    return DOMRectReadOnly::get("x").as<double>();
}

void DOMRect::x(double value) {
    DOMRectReadOnly::set("x", value);
}

double DOMRect::y() const {
    return DOMRectReadOnly::get("y").as<double>();
}

void DOMRect::y(double value) {
    DOMRectReadOnly::set("y", value);
}

double DOMRect::width() const {
    return DOMRectReadOnly::get("width").as<double>();
}

void DOMRect::width(double value) {
    DOMRectReadOnly::set("width", value);
}

double DOMRect::height() const {
    return DOMRectReadOnly::get("height").as<double>();
}

void DOMRect::height(double value) {
    DOMRectReadOnly::set("height", value);
}

