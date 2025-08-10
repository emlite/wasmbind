#include <webbind/GPUAdapter.hpp>
#include <webbind/GPUSupportedFeatures.hpp>
#include <webbind/GPUSupportedLimits.hpp>
#include <webbind/GPUAdapterInfo.hpp>
#include <webbind/GPUDevice.hpp>
#include <webbind/GPUDeviceDescriptor.hpp>

namespace webbind {

GPUAdapter GPUAdapter::take_ownership(Handle h) noexcept {
    return GPUAdapter(h);
}

GPUAdapter GPUAdapter::clone() const noexcept { return *this; }

emlite::Val GPUAdapter::instance() noexcept { return emlite::Val::global("GPUAdapter"); }

GPUAdapter::GPUAdapter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

GPUAdapter::GPUAdapter(const emlite::Val &val) noexcept: emlite::Val(val) {}

GPUSupportedFeatures GPUAdapter::features() const {
    return emlite::Val::get("features").as<GPUSupportedFeatures>();
}

GPUSupportedLimits GPUAdapter::limits() const {
    return emlite::Val::get("limits").as<GPUSupportedLimits>();
}

GPUAdapterInfo GPUAdapter::info() const {
    return emlite::Val::get("info").as<GPUAdapterInfo>();
}

jsbind::Promise<GPUDevice> GPUAdapter::requestDevice() {
    return emlite::Val::call("requestDevice").as<jsbind::Promise<GPUDevice>>();
}

jsbind::Promise<GPUDevice> GPUAdapter::requestDevice(const GPUDeviceDescriptor& descriptor) {
    return emlite::Val::call("requestDevice", descriptor).as<jsbind::Promise<GPUDevice>>();
}


} // namespace webbind