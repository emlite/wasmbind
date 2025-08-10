#include "webbind/XRInputSourceEventInit.hpp"
#include "webbind/XRFrame.hpp"
#include "webbind/XRInputSource.hpp"

using emlite::Val;
namespace webbind {

XRInputSourceEventInit::XRInputSourceEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
XRInputSourceEventInit XRInputSourceEventInit::take_ownership(Handle h) noexcept {
        return XRInputSourceEventInit(h);
    }
XRInputSourceEventInit::XRInputSourceEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
XRInputSourceEventInit::XRInputSourceEventInit() noexcept: EventInit(emlite::Val::object()) {}
XRInputSourceEventInit XRInputSourceEventInit::clone() const noexcept { return *this; }

XRFrame XRInputSourceEventInit::frame() const {
    return emlite::Val::get("frame").as<XRFrame>();
}

void XRInputSourceEventInit::frame(const XRFrame& value) {
    emlite::Val::set("frame", value);
}

XRInputSource XRInputSourceEventInit::inputSource() const {
    return emlite::Val::get("inputSource").as<XRInputSource>();
}

void XRInputSourceEventInit::inputSource(const XRInputSource& value) {
    emlite::Val::set("inputSource", value);
}


} // namespace webbind