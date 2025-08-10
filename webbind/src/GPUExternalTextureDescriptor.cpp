#include <webbind/GPUExternalTextureDescriptor.hpp>

namespace webbind {

GPUExternalTextureDescriptor::GPUExternalTextureDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUExternalTextureDescriptor GPUExternalTextureDescriptor::take_ownership(Handle h) noexcept {
    return GPUExternalTextureDescriptor(h);
}

GPUExternalTextureDescriptor::GPUExternalTextureDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}

GPUExternalTextureDescriptor::GPUExternalTextureDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}

GPUExternalTextureDescriptor GPUExternalTextureDescriptor::clone() const noexcept { return *this; }

jsbind::Any GPUExternalTextureDescriptor::source() const {
    return emlite::Val::get("source").as<jsbind::Any>();
}

void GPUExternalTextureDescriptor::source(const jsbind::Any& value) {
    emlite::Val::set("source", value);
}

PredefinedColorSpace GPUExternalTextureDescriptor::colorSpace() const {
    return emlite::Val::get("colorSpace").as<PredefinedColorSpace>();
}

void GPUExternalTextureDescriptor::colorSpace(const PredefinedColorSpace& value) {
    emlite::Val::set("colorSpace", value);
}


} // namespace webbind