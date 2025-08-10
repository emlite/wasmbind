#include "webbind/GPUDeviceDescriptor.hpp"
#include "webbind/GPUQueueDescriptor.hpp"

using emlite::Val;
namespace webbind {

GPUDeviceDescriptor::GPUDeviceDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUDeviceDescriptor GPUDeviceDescriptor::take_ownership(Handle h) noexcept {
        return GPUDeviceDescriptor(h);
    }
GPUDeviceDescriptor::GPUDeviceDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPUDeviceDescriptor::GPUDeviceDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
GPUDeviceDescriptor GPUDeviceDescriptor::clone() const noexcept { return *this; }

jsbind::TypedArray<GPUFeatureName> GPUDeviceDescriptor::requiredFeatures() const {
    return emlite::Val::get("requiredFeatures").as<jsbind::TypedArray<GPUFeatureName>>();
}

void GPUDeviceDescriptor::requiredFeatures(const jsbind::TypedArray<GPUFeatureName>& value) {
    emlite::Val::set("requiredFeatures", value);
}

jsbind::Record<jsbind::String, jsbind::Any> GPUDeviceDescriptor::requiredLimits() const {
    return emlite::Val::get("requiredLimits").as<jsbind::Record<jsbind::String, jsbind::Any>>();
}

void GPUDeviceDescriptor::requiredLimits(const jsbind::Record<jsbind::String, jsbind::Any>& value) {
    emlite::Val::set("requiredLimits", value);
}

GPUQueueDescriptor GPUDeviceDescriptor::defaultQueue() const {
    return emlite::Val::get("defaultQueue").as<GPUQueueDescriptor>();
}

void GPUDeviceDescriptor::defaultQueue(const GPUQueueDescriptor& value) {
    emlite::Val::set("defaultQueue", value);
}


} // namespace webbind