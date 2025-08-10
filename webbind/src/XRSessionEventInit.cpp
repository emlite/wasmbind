#include <webbind/XRSessionEventInit.hpp>
#include <webbind/XRSession.hpp>

namespace webbind {

XRSessionEventInit::XRSessionEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
XRSessionEventInit XRSessionEventInit::take_ownership(Handle h) noexcept {
    return XRSessionEventInit(h);
}

XRSessionEventInit::XRSessionEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

XRSessionEventInit::XRSessionEventInit() noexcept: EventInit(emlite::Val::object()) {}

XRSessionEventInit XRSessionEventInit::clone() const noexcept { return *this; }

XRSession XRSessionEventInit::session() const {
    return emlite::Val::get("session").as<XRSession>();
}

void XRSessionEventInit::session(const XRSession& value) {
    emlite::Val::set("session", value);
}


} // namespace webbind