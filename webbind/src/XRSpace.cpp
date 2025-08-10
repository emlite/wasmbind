#include <webbind/XRSpace.hpp>

namespace webbind {

XRSpace XRSpace::take_ownership(Handle h) noexcept {
        return XRSpace(h);
    }
XRSpace XRSpace::clone() const noexcept { return *this; }
emlite::Val XRSpace::instance() noexcept { return emlite::Val::global("XRSpace"); }
XRSpace::XRSpace(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
XRSpace::XRSpace(const emlite::Val &val) noexcept: EventTarget(val) {}


} // namespace webbind