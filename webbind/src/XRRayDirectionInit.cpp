#include <webbind/XRRayDirectionInit.hpp>

using emlite::Val;
namespace webbind {

XRRayDirectionInit::XRRayDirectionInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRRayDirectionInit XRRayDirectionInit::take_ownership(Handle h) noexcept {
        return XRRayDirectionInit(h);
    }
XRRayDirectionInit::XRRayDirectionInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRRayDirectionInit::XRRayDirectionInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRRayDirectionInit XRRayDirectionInit::clone() const noexcept { return *this; }

double XRRayDirectionInit::x() const {
    return emlite::Val::get("x").as<double>();
}

void XRRayDirectionInit::x(double value) {
    emlite::Val::set("x", value);
}

double XRRayDirectionInit::y() const {
    return emlite::Val::get("y").as<double>();
}

void XRRayDirectionInit::y(double value) {
    emlite::Val::set("y", value);
}

double XRRayDirectionInit::z() const {
    return emlite::Val::get("z").as<double>();
}

void XRRayDirectionInit::z(double value) {
    emlite::Val::set("z", value);
}

double XRRayDirectionInit::w() const {
    return emlite::Val::get("w").as<double>();
}

void XRRayDirectionInit::w(double value) {
    emlite::Val::set("w", value);
}


} // namespace webbind