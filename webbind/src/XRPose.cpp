#include <webbind/XRPose.hpp>
#include <webbind/XRRigidTransform.hpp>
#include <webbind/DOMPointReadOnly.hpp>


XRPose XRPose::take_ownership(Handle h) noexcept {
        return XRPose(h);
    }
XRPose XRPose::clone() const noexcept { return *this; }
XRPose::XRPose(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRPose::XRPose(const emlite::Val &val) noexcept: emlite::Val(val) {}


XRRigidTransform XRPose::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

DOMPointReadOnly XRPose::linearVelocity() const {
    return emlite::Val::get("linearVelocity").as<DOMPointReadOnly>();
}

DOMPointReadOnly XRPose::angularVelocity() const {
    return emlite::Val::get("angularVelocity").as<DOMPointReadOnly>();
}

bool XRPose::emulatedPosition() const {
    return emlite::Val::get("emulatedPosition").as<bool>();
}

