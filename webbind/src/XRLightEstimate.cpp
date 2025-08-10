#include "webbind/XRLightEstimate.hpp"
#include "webbind/DOMPointReadOnly.hpp"

namespace webbind {

XRLightEstimate XRLightEstimate::take_ownership(Handle h) noexcept {
        return XRLightEstimate(h);
    }
XRLightEstimate XRLightEstimate::clone() const noexcept { return *this; }
emlite::Val XRLightEstimate::instance() noexcept { return emlite::Val::global("XRLightEstimate"); }
XRLightEstimate::XRLightEstimate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRLightEstimate::XRLightEstimate(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Float32Array XRLightEstimate::sphericalHarmonicsCoefficients() const {
    return emlite::Val::get("sphericalHarmonicsCoefficients").as<jsbind::Float32Array>();
}

DOMPointReadOnly XRLightEstimate::primaryLightDirection() const {
    return emlite::Val::get("primaryLightDirection").as<DOMPointReadOnly>();
}

DOMPointReadOnly XRLightEstimate::primaryLightIntensity() const {
    return emlite::Val::get("primaryLightIntensity").as<DOMPointReadOnly>();
}


} // namespace webbind