#include "webbind/XRRay.hpp"
#include "webbind/XRRigidTransform.hpp"
#include "webbind/DOMPointReadOnly.hpp"

namespace webbind {

XRRay XRRay::take_ownership(Handle h) noexcept {
        return XRRay(h);
    }
XRRay XRRay::clone() const noexcept { return *this; }
emlite::Val XRRay::instance() noexcept { return emlite::Val::global("XRRay"); }
XRRay::XRRay(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRRay::XRRay(const emlite::Val &val) noexcept: emlite::Val(val) {}

XRRay::XRRay(const XRRigidTransform& transform) : emlite::Val(emlite::Val::global("XRRay").new_(transform)) {}

DOMPointReadOnly XRRay::origin() const {
    return emlite::Val::get("origin").as<DOMPointReadOnly>();
}

DOMPointReadOnly XRRay::direction() const {
    return emlite::Val::get("direction").as<DOMPointReadOnly>();
}

jsbind::Float32Array XRRay::matrix() const {
    return emlite::Val::get("matrix").as<jsbind::Float32Array>();
}


} // namespace webbind