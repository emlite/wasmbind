#include <webbind/GPUComputePipelineDescriptor.hpp>
#include <webbind/GPUProgrammableStage.hpp>

using emlite::Val;
namespace webbind {

GPUComputePipelineDescriptor::GPUComputePipelineDescriptor(Handle h) noexcept : GPUPipelineDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUComputePipelineDescriptor GPUComputePipelineDescriptor::take_ownership(Handle h) noexcept {
        return GPUComputePipelineDescriptor(h);
    }
GPUComputePipelineDescriptor::GPUComputePipelineDescriptor(const emlite::Val &val) noexcept: GPUPipelineDescriptorBase(val) {}
GPUComputePipelineDescriptor::GPUComputePipelineDescriptor() noexcept: GPUPipelineDescriptorBase(emlite::Val::object()) {}
GPUComputePipelineDescriptor GPUComputePipelineDescriptor::clone() const noexcept { return *this; }

GPUProgrammableStage GPUComputePipelineDescriptor::compute() const {
    return emlite::Val::get("compute").as<GPUProgrammableStage>();
}

void GPUComputePipelineDescriptor::compute(const GPUProgrammableStage& value) {
    emlite::Val::set("compute", value);
}


} // namespace webbind