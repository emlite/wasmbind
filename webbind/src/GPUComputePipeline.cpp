#include "webbind/GPUComputePipeline.hpp"
#include "webbind/GPUBindGroupLayout.hpp"

namespace webbind {

GPUComputePipeline GPUComputePipeline::take_ownership(Handle h) noexcept {
        return GPUComputePipeline(h);
    }
GPUComputePipeline GPUComputePipeline::clone() const noexcept { return *this; }
emlite::Val GPUComputePipeline::instance() noexcept { return emlite::Val::global("GPUComputePipeline"); }
GPUComputePipeline::GPUComputePipeline(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUComputePipeline::GPUComputePipeline(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String GPUComputePipeline::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUComputePipeline::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

GPUBindGroupLayout GPUComputePipeline::getBindGroupLayout(unsigned long index) {
    return emlite::Val::call("getBindGroupLayout", index).as<GPUBindGroupLayout>();
}


} // namespace webbind