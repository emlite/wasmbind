#include <webbind/XRDepthInformation.hpp>
#include <webbind/XRRigidTransform.hpp>


XRDepthInformation XRDepthInformation::take_ownership(Handle h) noexcept {
        return XRDepthInformation(h);
    }
XRDepthInformation XRDepthInformation::clone() const noexcept { return *this; }
XRDepthInformation::XRDepthInformation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRDepthInformation::XRDepthInformation(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long XRDepthInformation::width() const {
    return emlite::Val::get("width").as<unsigned long>();
}

unsigned long XRDepthInformation::height() const {
    return emlite::Val::get("height").as<unsigned long>();
}

XRRigidTransform XRDepthInformation::normDepthBufferFromNormView() const {
    return emlite::Val::get("normDepthBufferFromNormView").as<XRRigidTransform>();
}

float XRDepthInformation::rawValueToMeters() const {
    return emlite::Val::get("rawValueToMeters").as<float>();
}

jsbind::Float32Array XRDepthInformation::projectionMatrix() const {
    return emlite::Val::get("projectionMatrix").as<jsbind::Float32Array>();
}

XRRigidTransform XRDepthInformation::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

