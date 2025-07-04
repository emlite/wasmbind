#include <webbind/XRCPUDepthInformation.hpp>


XRCPUDepthInformation XRCPUDepthInformation::take_ownership(Handle h) noexcept {
        return XRCPUDepthInformation(h);
    }
XRCPUDepthInformation XRCPUDepthInformation::clone() const noexcept { return *this; }
XRCPUDepthInformation::XRCPUDepthInformation(Handle h) noexcept : XRDepthInformation(emlite::Val::take_ownership(h)) {}
XRCPUDepthInformation::XRCPUDepthInformation(const emlite::Val &val) noexcept: XRDepthInformation(val) {}


jsbind::ArrayBuffer XRCPUDepthInformation::data() const {
    return XRDepthInformation::get("data").as<jsbind::ArrayBuffer>();
}

float XRCPUDepthInformation::getDepthInMeters(float x, float y) {
    return XRDepthInformation::call("getDepthInMeters", x, y).as<float>();
}

