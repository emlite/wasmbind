#include <webbind/XRPlane.hpp>
#include <webbind/XRSpace.hpp>
#include <webbind/DOMPointReadOnly.hpp>


XRPlane XRPlane::take_ownership(Handle h) noexcept {
        return XRPlane(h);
    }
XRPlane XRPlane::clone() const noexcept { return *this; }
XRPlane::XRPlane(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRPlane::XRPlane(const emlite::Val &val) noexcept: emlite::Val(val) {}


XRSpace XRPlane::planeSpace() const {
    return emlite::Val::get("planeSpace").as<XRSpace>();
}

jsbind::FrozenArray<DOMPointReadOnly> XRPlane::polygon() const {
    return emlite::Val::get("polygon").as<jsbind::FrozenArray<DOMPointReadOnly>>();
}

XRPlaneOrientation XRPlane::orientation() const {
    return emlite::Val::get("orientation").as<XRPlaneOrientation>();
}

jsbind::Any XRPlane::lastChangedTime() const {
    return emlite::Val::get("lastChangedTime").as<jsbind::Any>();
}

jsbind::DOMString XRPlane::semanticLabel() const {
    return emlite::Val::get("semanticLabel").as<jsbind::DOMString>();
}

