#include <webbind/XRMediaBinding.hpp>
#include <webbind/XRSession.hpp>
#include <webbind/XRQuadLayer.hpp>
#include <webbind/HTMLVideoElement.hpp>
#include <webbind/XRMediaQuadLayerInit.hpp>
#include <webbind/XRCylinderLayer.hpp>
#include <webbind/XRMediaCylinderLayerInit.hpp>
#include <webbind/XREquirectLayer.hpp>
#include <webbind/XRMediaEquirectLayerInit.hpp>

namespace webbind {

XRMediaBinding XRMediaBinding::take_ownership(Handle h) noexcept {
        return XRMediaBinding(h);
    }
XRMediaBinding XRMediaBinding::clone() const noexcept { return *this; }
emlite::Val XRMediaBinding::instance() noexcept { return emlite::Val::global("XRMediaBinding"); }
XRMediaBinding::XRMediaBinding(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRMediaBinding::XRMediaBinding(const emlite::Val &val) noexcept: emlite::Val(val) {}

XRMediaBinding::XRMediaBinding(const XRSession& session) : emlite::Val(emlite::Val::global("XRMediaBinding").new_(session)) {}

XRQuadLayer XRMediaBinding::createQuadLayer(const HTMLVideoElement& video) {
    return emlite::Val::call("createQuadLayer", video).as<XRQuadLayer>();
}

XRQuadLayer XRMediaBinding::createQuadLayer(const HTMLVideoElement& video, const XRMediaQuadLayerInit& init) {
    return emlite::Val::call("createQuadLayer", video, init).as<XRQuadLayer>();
}

XRCylinderLayer XRMediaBinding::createCylinderLayer(const HTMLVideoElement& video) {
    return emlite::Val::call("createCylinderLayer", video).as<XRCylinderLayer>();
}

XRCylinderLayer XRMediaBinding::createCylinderLayer(const HTMLVideoElement& video, const XRMediaCylinderLayerInit& init) {
    return emlite::Val::call("createCylinderLayer", video, init).as<XRCylinderLayer>();
}

XREquirectLayer XRMediaBinding::createEquirectLayer(const HTMLVideoElement& video) {
    return emlite::Val::call("createEquirectLayer", video).as<XREquirectLayer>();
}

XREquirectLayer XRMediaBinding::createEquirectLayer(const HTMLVideoElement& video, const XRMediaEquirectLayerInit& init) {
    return emlite::Val::call("createEquirectLayer", video, init).as<XREquirectLayer>();
}


} // namespace webbind