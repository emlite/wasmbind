#include <webbind/GPUAdapter.hpp>
#include <webbind/GPUSupportedFeatures.hpp>
#include <webbind/GPUSupportedLimits.hpp>
#include <webbind/GPUAdapterInfo.hpp>
#include <webbind/GPUDevice.hpp>


GPUDeviceDescriptor::GPUDeviceDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUDeviceDescriptor GPUDeviceDescriptor::take_ownership(Handle h) noexcept {
        return GPUDeviceDescriptor(h);
    }
GPUDeviceDescriptor::GPUDeviceDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUDeviceDescriptor::GPUDeviceDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUDeviceDescriptor GPUDeviceDescriptor::clone() const noexcept { return *this; }

jsbind::Sequence<GPUFeatureName> GPUDeviceDescriptor::requiredFeatures() const {
    return emlite::Val::get("requiredFeatures").as<jsbind::Sequence<GPUFeatureName>>();
}

void GPUDeviceDescriptor::requiredFeatures(const jsbind::Sequence<GPUFeatureName>& value) {
    emlite::Val::set("requiredFeatures", value);
}

jsbind::Record<jsbind::DOMString, jsbind::Any> GPUDeviceDescriptor::requiredLimits() const {
    return emlite::Val::get("requiredLimits").as<jsbind::Record<jsbind::DOMString, jsbind::Any>>();
}

void GPUDeviceDescriptor::requiredLimits(const jsbind::Record<jsbind::DOMString, jsbind::Any>& value) {
    emlite::Val::set("requiredLimits", value);
}

jsbind::Any GPUDeviceDescriptor::defaultQueue() const {
    return emlite::Val::get("defaultQueue").as<jsbind::Any>();
}

void GPUDeviceDescriptor::defaultQueue(const jsbind::Any& value) {
    emlite::Val::set("defaultQueue", value);
}

GPUAdapter GPUAdapter::take_ownership(Handle h) noexcept {
        return GPUAdapter(h);
    }
GPUAdapter GPUAdapter::clone() const noexcept { return *this; }
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

