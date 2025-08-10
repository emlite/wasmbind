#include <webbind/GPUPipelineLayoutDescriptor.hpp>
#include <webbind/GPUBindGroupLayout.hpp>

using emlite::Val;
namespace webbind {

GPUPipelineLayoutDescriptor::GPUPipelineLayoutDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUPipelineLayoutDescriptor GPUPipelineLayoutDescriptor::take_ownership(Handle h) noexcept {
        return GPUPipelineLayoutDescriptor(h);
    }
GPUPipelineLayoutDescriptor::GPUPipelineLayoutDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPUPipelineLayoutDescriptor::GPUPipelineLayoutDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
GPUPipelineLayoutDescriptor GPUPipelineLayoutDescriptor::clone() const noexcept { return *this; }

jsbind::TypedArray<GPUBindGroupLayout> GPUPipelineLayoutDescriptor::bindGroupLayouts() const {
    return emlite::Val::get("bindGroupLayouts").as<jsbind::TypedArray<GPUBindGroupLayout>>();
}

void GPUPipelineLayoutDescriptor::bindGroupLayouts(const jsbind::TypedArray<GPUBindGroupLayout>& value) {
    emlite::Val::set("bindGroupLayouts", value);
}


} // namespace webbind