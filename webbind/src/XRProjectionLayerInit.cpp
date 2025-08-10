#include <webbind/XRProjectionLayerInit.hpp>

namespace webbind {

XRProjectionLayerInit::XRProjectionLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRProjectionLayerInit XRProjectionLayerInit::take_ownership(Handle h) noexcept {
    return XRProjectionLayerInit(h);
}

XRProjectionLayerInit::XRProjectionLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

XRProjectionLayerInit::XRProjectionLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}

XRProjectionLayerInit XRProjectionLayerInit::clone() const noexcept { return *this; }

XRTextureType XRProjectionLayerInit::textureType() const {
    return emlite::Val::get("textureType").as<XRTextureType>();
}

void XRProjectionLayerInit::textureType(const XRTextureType& value) {
    emlite::Val::set("textureType", value);
}

jsbind::Any XRProjectionLayerInit::colorFormat() const {
    return emlite::Val::get("colorFormat").as<jsbind::Any>();
}

void XRProjectionLayerInit::colorFormat(const jsbind::Any& value) {
    emlite::Val::set("colorFormat", value);
}

jsbind::Any XRProjectionLayerInit::depthFormat() const {
    return emlite::Val::get("depthFormat").as<jsbind::Any>();
}

void XRProjectionLayerInit::depthFormat(const jsbind::Any& value) {
    emlite::Val::set("depthFormat", value);
}

double XRProjectionLayerInit::scaleFactor() const {
    return emlite::Val::get("scaleFactor").as<double>();
}

void XRProjectionLayerInit::scaleFactor(double value) {
    emlite::Val::set("scaleFactor", value);
}

bool XRProjectionLayerInit::clearOnAccess() const {
    return emlite::Val::get("clearOnAccess").as<bool>();
}

void XRProjectionLayerInit::clearOnAccess(bool value) {
    emlite::Val::set("clearOnAccess", value);
}


} // namespace webbind