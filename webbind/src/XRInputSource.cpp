#include <webbind/XRInputSource.hpp>
#include <webbind/XRSpace.hpp>
#include <webbind/Gamepad.hpp>
#include <webbind/XRHand.hpp>


XRInputSource XRInputSource::take_ownership(Handle h) noexcept {
        return XRInputSource(h);
    }
XRInputSource XRInputSource::clone() const noexcept { return *this; }
XRInputSource::XRInputSource(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRInputSource::XRInputSource(const emlite::Val &val) noexcept: emlite::Val(val) {}


XRHandedness XRInputSource::handedness() const {
    return emlite::Val::get("handedness").as<XRHandedness>();
}

XRTargetRayMode XRInputSource::targetRayMode() const {
    return emlite::Val::get("targetRayMode").as<XRTargetRayMode>();
}

XRSpace XRInputSource::targetRaySpace() const {
    return emlite::Val::get("targetRaySpace").as<XRSpace>();
}

XRSpace XRInputSource::gripSpace() const {
    return emlite::Val::get("gripSpace").as<XRSpace>();
}

jsbind::FrozenArray<jsbind::DOMString> XRInputSource::profiles() const {
    return emlite::Val::get("profiles").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

bool XRInputSource::skipRendering() const {
    return emlite::Val::get("skipRendering").as<bool>();
}

Gamepad XRInputSource::gamepad() const {
    return emlite::Val::get("gamepad").as<Gamepad>();
}

XRHand XRInputSource::hand() const {
    return emlite::Val::get("hand").as<XRHand>();
}

