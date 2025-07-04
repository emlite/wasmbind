#include <webbind/XRRigidTransform.hpp>
#include <webbind/DOMPointReadOnly.hpp>


XRRigidTransform XRRigidTransform::take_ownership(Handle h) noexcept {
        return XRRigidTransform(h);
    }
XRRigidTransform XRRigidTransform::clone() const noexcept { return *this; }
XRRigidTransform::XRRigidTransform(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRRigidTransform::XRRigidTransform(const emlite::Val &val) noexcept: emlite::Val(val) {}


XRRigidTransform::XRRigidTransform(const DOMPointInit& position, const DOMPointInit& orientation): emlite::Val(emlite::Val::global("XRRigidTransform").new_(position, orientation)) {}

DOMPointReadOnly XRRigidTransform::position() const {
    return emlite::Val::get("position").as<DOMPointReadOnly>();
}

DOMPointReadOnly XRRigidTransform::orientation() const {
    return emlite::Val::get("orientation").as<DOMPointReadOnly>();
}

jsbind::Float32Array XRRigidTransform::matrix() const {
    return emlite::Val::get("matrix").as<jsbind::Float32Array>();
}

XRRigidTransform XRRigidTransform::inverse() const {
    return emlite::Val::get("inverse").as<XRRigidTransform>();
}

