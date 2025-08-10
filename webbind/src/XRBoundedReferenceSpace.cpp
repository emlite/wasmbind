#include <webbind/XRBoundedReferenceSpace.hpp>
#include <webbind/DOMPointReadOnly.hpp>

namespace webbind {

XRBoundedReferenceSpace XRBoundedReferenceSpace::take_ownership(Handle h) noexcept {
    return XRBoundedReferenceSpace(h);
}

XRBoundedReferenceSpace XRBoundedReferenceSpace::clone() const noexcept { return *this; }

emlite::Val XRBoundedReferenceSpace::instance() noexcept { return emlite::Val::global("XRBoundedReferenceSpace"); }

XRBoundedReferenceSpace::XRBoundedReferenceSpace(Handle h) noexcept : XRReferenceSpace(emlite::Val::take_ownership(h)) {}

XRBoundedReferenceSpace::XRBoundedReferenceSpace(const emlite::Val &val) noexcept: XRReferenceSpace(val) {}

jsbind::TypedArray<DOMPointReadOnly> XRBoundedReferenceSpace::boundsGeometry() const {
    return XRReferenceSpace::get("boundsGeometry").as<jsbind::TypedArray<DOMPointReadOnly>>();
}


} // namespace webbind