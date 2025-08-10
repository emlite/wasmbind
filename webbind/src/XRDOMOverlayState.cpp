#include <webbind/XRDOMOverlayState.hpp>

namespace webbind {

XRDOMOverlayState::XRDOMOverlayState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRDOMOverlayState XRDOMOverlayState::take_ownership(Handle h) noexcept {
    return XRDOMOverlayState(h);
}

XRDOMOverlayState::XRDOMOverlayState(const emlite::Val &val) noexcept: emlite::Val(val) {}

XRDOMOverlayState::XRDOMOverlayState() noexcept: emlite::Val(emlite::Val::object()) {}

XRDOMOverlayState XRDOMOverlayState::clone() const noexcept { return *this; }

XRDOMOverlayType XRDOMOverlayState::type() const {
    return emlite::Val::get("type").as<XRDOMOverlayType>();
}

void XRDOMOverlayState::type(const XRDOMOverlayType& value) {
    emlite::Val::set("type", value);
}


} // namespace webbind