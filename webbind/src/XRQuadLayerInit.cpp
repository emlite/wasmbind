#include <webbind/XRQuadLayerInit.hpp>
#include <webbind/XRRigidTransform.hpp>

namespace webbind {

XRQuadLayerInit::XRQuadLayerInit(Handle h) noexcept : XRLayerInit(emlite::Val::take_ownership(h)) {}
XRQuadLayerInit XRQuadLayerInit::take_ownership(Handle h) noexcept {
    return XRQuadLayerInit(h);
}

XRQuadLayerInit::XRQuadLayerInit(const emlite::Val &val) noexcept: XRLayerInit(val) {}

XRQuadLayerInit::XRQuadLayerInit() noexcept: XRLayerInit(emlite::Val::object()) {}

XRQuadLayerInit XRQuadLayerInit::clone() const noexcept { return *this; }

XRTextureType XRQuadLayerInit::textureType() const {
    return emlite::Val::get("textureType").as<XRTextureType>();
}

void XRQuadLayerInit::textureType(const XRTextureType& value) {
    emlite::Val::set("textureType", value);
}

XRRigidTransform XRQuadLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XRQuadLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XRQuadLayerInit::width() const {
    return emlite::Val::get("width").as<float>();
}

void XRQuadLayerInit::width(float value) {
    emlite::Val::set("width", value);
}

float XRQuadLayerInit::height() const {
    return emlite::Val::get("height").as<float>();
}

void XRQuadLayerInit::height(float value) {
    emlite::Val::set("height", value);
}


} // namespace webbind