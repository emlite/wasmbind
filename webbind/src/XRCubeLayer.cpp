#include <webbind/XRCubeLayer.hpp>
#include <webbind/XRSpace.hpp>
#include <webbind/DOMPointReadOnly.hpp>

namespace webbind {

XRCubeLayer XRCubeLayer::take_ownership(Handle h) noexcept {
        return XRCubeLayer(h);
    }
XRCubeLayer XRCubeLayer::clone() const noexcept { return *this; }
emlite::Val XRCubeLayer::instance() noexcept { return emlite::Val::global("XRCubeLayer"); }
XRCubeLayer::XRCubeLayer(Handle h) noexcept : XRCompositionLayer(emlite::Val::take_ownership(h)) {}
XRCubeLayer::XRCubeLayer(const emlite::Val &val) noexcept: XRCompositionLayer(val) {}

XRSpace XRCubeLayer::space() const {
    return XRCompositionLayer::get("space").as<XRSpace>();
}

void XRCubeLayer::space(const XRSpace& value) {
    XRCompositionLayer::set("space", value);
}

DOMPointReadOnly XRCubeLayer::orientation() const {
    return XRCompositionLayer::get("orientation").as<DOMPointReadOnly>();
}

void XRCubeLayer::orientation(const DOMPointReadOnly& value) {
    XRCompositionLayer::set("orientation", value);
}

jsbind::Any XRCubeLayer::onredraw() const {
    return XRCompositionLayer::get("onredraw").as<jsbind::Any>();
}

void XRCubeLayer::onredraw(const jsbind::Any& value) {
    XRCompositionLayer::set("onredraw", value);
}


} // namespace webbind