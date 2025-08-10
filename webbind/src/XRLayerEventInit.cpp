#include "webbind/XRLayerEventInit.hpp"
#include "webbind/XRLayer.hpp"

using emlite::Val;
namespace webbind {

XRLayerEventInit::XRLayerEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
XRLayerEventInit XRLayerEventInit::take_ownership(Handle h) noexcept {
        return XRLayerEventInit(h);
    }
XRLayerEventInit::XRLayerEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
XRLayerEventInit::XRLayerEventInit() noexcept: EventInit(emlite::Val::object()) {}
XRLayerEventInit XRLayerEventInit::clone() const noexcept { return *this; }

XRLayer XRLayerEventInit::layer() const {
    return emlite::Val::get("layer").as<XRLayer>();
}

void XRLayerEventInit::layer(const XRLayer& value) {
    emlite::Val::set("layer", value);
}


} // namespace webbind