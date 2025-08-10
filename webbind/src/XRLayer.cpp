#include <webbind/XRLayer.hpp>

namespace webbind {

XRLayer XRLayer::take_ownership(Handle h) noexcept {
    return XRLayer(h);
}

XRLayer XRLayer::clone() const noexcept { return *this; }

emlite::Val XRLayer::instance() noexcept { return emlite::Val::global("XRLayer"); }

XRLayer::XRLayer(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

XRLayer::XRLayer(const emlite::Val &val) noexcept: EventTarget(val) {}


} // namespace webbind