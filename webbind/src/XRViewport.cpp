#include <webbind/XRViewport.hpp>

namespace webbind {

XRViewport XRViewport::take_ownership(Handle h) noexcept {
        return XRViewport(h);
    }
XRViewport XRViewport::clone() const noexcept { return *this; }
emlite::Val XRViewport::instance() noexcept { return emlite::Val::global("XRViewport"); }
XRViewport::XRViewport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRViewport::XRViewport(const emlite::Val &val) noexcept: emlite::Val(val) {}

long XRViewport::x() const {
    return emlite::Val::get("x").as<long>();
}

long XRViewport::y() const {
    return emlite::Val::get("y").as<long>();
}

long XRViewport::width() const {
    return emlite::Val::get("width").as<long>();
}

long XRViewport::height() const {
    return emlite::Val::get("height").as<long>();
}


} // namespace webbind