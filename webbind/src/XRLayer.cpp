#include <webbind/XRLayer.hpp>


XRLayer XRLayer::take_ownership(Handle h) noexcept {
        return XRLayer(h);
    }
XRLayer XRLayer::clone() const noexcept { return *this; }
XRLayer::XRLayer(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
XRLayer::XRLayer(const emlite::Val &val) noexcept: EventTarget(val) {}


