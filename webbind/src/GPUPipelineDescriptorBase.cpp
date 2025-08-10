#include <webbind/GPUPipelineDescriptorBase.hpp>

namespace webbind {

GPUPipelineDescriptorBase::GPUPipelineDescriptorBase(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUPipelineDescriptorBase GPUPipelineDescriptorBase::take_ownership(Handle h) noexcept {
    return GPUPipelineDescriptorBase(h);
}

GPUPipelineDescriptorBase::GPUPipelineDescriptorBase(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}

GPUPipelineDescriptorBase::GPUPipelineDescriptorBase() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}

GPUPipelineDescriptorBase GPUPipelineDescriptorBase::clone() const noexcept { return *this; }

jsbind::Any GPUPipelineDescriptorBase::layout() const {
    return emlite::Val::get("layout").as<jsbind::Any>();
}

void GPUPipelineDescriptorBase::layout(const jsbind::Any& value) {
    emlite::Val::set("layout", value);
}


} // namespace webbind