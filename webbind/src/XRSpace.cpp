#include <webbind/XRSpace.hpp>


XRSpace XRSpace::take_ownership(Handle h) noexcept {
        return XRSpace(h);
    }
XRSpace XRSpace::clone() const noexcept { return *this; }
XRSpace::XRSpace(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
XRSpace::XRSpace(const emlite::Val &val) noexcept: EventTarget(val) {}


