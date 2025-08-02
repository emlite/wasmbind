#include <webbind/GPUDeviceLostInfo.hpp>


GPUDeviceLostInfo GPUDeviceLostInfo::take_ownership(Handle h) noexcept {
        return GPUDeviceLostInfo(h);
    }
GPUDeviceLostInfo GPUDeviceLostInfo::clone() const noexcept { return *this; }
emlite::Val GPUDeviceLostInfo::instance() noexcept { return emlite::Val::global("GPUDeviceLostInfo"); }
GPUDeviceLostInfo::GPUDeviceLostInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUDeviceLostInfo::GPUDeviceLostInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}


GPUDeviceLostReason GPUDeviceLostInfo::reason() const {
    return emlite::Val::get("reason").as<GPUDeviceLostReason>();
}

jsbind::String GPUDeviceLostInfo::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}

