#include <webbind/XRRigidTransform.hpp>
#include <webbind/DOMPointInit.hpp>
#include <webbind/DOMPointReadOnly.hpp>
#include <webbind/XRRigidTransform.hpp>

namespace webbind {

XRRigidTransform XRRigidTransform::take_ownership(Handle h) noexcept {
        return XRRigidTransform(h);
    }
XRRigidTransform XRRigidTransform::clone() const noexcept { return *this; }
emlite::Val XRRigidTransform::instance() noexcept { return emlite::Val::global("XRRigidTransform"); }
XRRigidTransform::XRRigidTransform(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRRigidTransform::XRRigidTransform(const emlite::Val &val) noexcept: emlite::Val(val) {}

XRRigidTransform::XRRigidTransform() : emlite::Val(emlite::Val::global("XRRigidTransform").new_()) {}

XRRigidTransform::XRRigidTransform(const DOMPointInit& position) : emlite::Val(emlite::Val::global("XRRigidTransform").new_(position)) {}

XRRigidTransform::XRRigidTransform(const DOMPointInit& position, const DOMPointInit& orientation) : emlite::Val(emlite::Val::global("XRRigidTransform").new_(position, orientation)) {}

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


} // namespace webbind