#include <webbind/XRLightEstimate.hpp>
#include <webbind/DOMPointReadOnly.hpp>


XRLightEstimate XRLightEstimate::take_ownership(Handle h) noexcept {
        return XRLightEstimate(h);
    }
XRLightEstimate XRLightEstimate::clone() const noexcept { return *this; }
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

