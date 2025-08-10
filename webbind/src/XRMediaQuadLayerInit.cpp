#include <webbind/XRMediaQuadLayerInit.hpp>
#include <webbind/XRRigidTransform.hpp>

using emlite::Val;
namespace webbind {

XRMediaQuadLayerInit::XRMediaQuadLayerInit(Handle h) noexcept : XRMediaLayerInit(emlite::Val::take_ownership(h)) {}
XRMediaQuadLayerInit XRMediaQuadLayerInit::take_ownership(Handle h) noexcept {
        return XRMediaQuadLayerInit(h);
    }
XRMediaQuadLayerInit::XRMediaQuadLayerInit(const emlite::Val &val) noexcept: XRMediaLayerInit(val) {}
XRMediaQuadLayerInit::XRMediaQuadLayerInit() noexcept: XRMediaLayerInit(emlite::Val::object()) {}
XRMediaQuadLayerInit XRMediaQuadLayerInit::clone() const noexcept { return *this; }

XRRigidTransform XRMediaQuadLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XRMediaQuadLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XRMediaQuadLayerInit::width() const {
    return emlite::Val::get("width").as<float>();
}

void XRMediaQuadLayerInit::width(float value) {
    emlite::Val::set("width", value);
}

float XRMediaQuadLayerInit::height() const {
    return emlite::Val::get("height").as<float>();
}

void XRMediaQuadLayerInit::height(float value) {
    emlite::Val::set("height", value);
}


} // namespace webbind