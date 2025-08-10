#include <webbind/XRCubeLayerInit.hpp>
#include <webbind/DOMPointReadOnly.hpp>

using emlite::Val;
namespace webbind {

XRCubeLayerInit::XRCubeLayerInit(Handle h) noexcept : XRLayerInit(emlite::Val::take_ownership(h)) {}
XRCubeLayerInit XRCubeLayerInit::take_ownership(Handle h) noexcept {
        return XRCubeLayerInit(h);
    }
XRCubeLayerInit::XRCubeLayerInit(const emlite::Val &val) noexcept: XRLayerInit(val) {}
XRCubeLayerInit::XRCubeLayerInit() noexcept: XRLayerInit(emlite::Val::object()) {}
XRCubeLayerInit XRCubeLayerInit::clone() const noexcept { return *this; }

DOMPointReadOnly XRCubeLayerInit::orientation() const {
    return emlite::Val::get("orientation").as<DOMPointReadOnly>();
}

void XRCubeLayerInit::orientation(const DOMPointReadOnly& value) {
    emlite::Val::set("orientation", value);
}


} // namespace webbind