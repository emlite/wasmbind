#include <webbind/XRCamera.hpp>


XRCamera XRCamera::take_ownership(Handle h) noexcept {
        return XRCamera(h);
    }
XRCamera XRCamera::clone() const noexcept { return *this; }
emlite::Val XRCamera::instance() noexcept { return emlite::Val::global("XRCamera"); }
XRCamera::XRCamera(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRCamera::XRCamera(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long XRCamera::width() const {
    return emlite::Val::get("width").as<unsigned long>();
}

unsigned long XRCamera::height() const {
    return emlite::Val::get("height").as<unsigned long>();
}

