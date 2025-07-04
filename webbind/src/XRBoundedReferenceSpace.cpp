#include <webbind/XRBoundedReferenceSpace.hpp>
#include <webbind/DOMPointReadOnly.hpp>


XRBoundedReferenceSpace XRBoundedReferenceSpace::take_ownership(Handle h) noexcept {
        return XRBoundedReferenceSpace(h);
    }
XRBoundedReferenceSpace XRBoundedReferenceSpace::clone() const noexcept { return *this; }
XRBoundedReferenceSpace::XRBoundedReferenceSpace(Handle h) noexcept : XRReferenceSpace(emlite::Val::take_ownership(h)) {}
XRBoundedReferenceSpace::XRBoundedReferenceSpace(const emlite::Val &val) noexcept: XRReferenceSpace(val) {}


jsbind::FrozenArray<DOMPointReadOnly> XRBoundedReferenceSpace::boundsGeometry() const {
    return XRReferenceSpace::get("boundsGeometry").as<jsbind::FrozenArray<DOMPointReadOnly>>();
}

