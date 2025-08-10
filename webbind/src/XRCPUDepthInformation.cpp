#include <webbind/XRCPUDepthInformation.hpp>

namespace webbind {

XRCPUDepthInformation XRCPUDepthInformation::take_ownership(Handle h) noexcept {
        return XRCPUDepthInformation(h);
    }
XRCPUDepthInformation XRCPUDepthInformation::clone() const noexcept { return *this; }
emlite::Val XRCPUDepthInformation::instance() noexcept { return emlite::Val::global("XRCPUDepthInformation"); }
XRCPUDepthInformation::XRCPUDepthInformation(Handle h) noexcept : XRDepthInformation(emlite::Val::take_ownership(h)) {}
XRCPUDepthInformation::XRCPUDepthInformation(const emlite::Val &val) noexcept: XRDepthInformation(val) {}

jsbind::ArrayBuffer XRCPUDepthInformation::data() const {
    return XRDepthInformation::get("data").as<jsbind::ArrayBuffer>();
}

float XRCPUDepthInformation::getDepthInMeters(float x, float y) {
    return XRDepthInformation::call("getDepthInMeters", x, y).as<float>();
}


} // namespace webbind