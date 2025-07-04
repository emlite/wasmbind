#include <webbind/GPUComputePipeline.hpp>
#include <webbind/GPUBindGroupLayout.hpp>


GPUComputePipeline GPUComputePipeline::take_ownership(Handle h) noexcept {
        return GPUComputePipeline(h);
    }
GPUComputePipeline GPUComputePipeline::clone() const noexcept { return *this; }
GPUComputePipeline::GPUComputePipeline(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUComputePipeline::GPUComputePipeline(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString GPUComputePipeline::label() const {
    return emlite::Val::get("label").as<jsbind::USVString>();
}

void GPUComputePipeline::label(const jsbind::USVString& value) {
    emlite::Val::set("label", value);
}

GPUBindGroupLayout GPUComputePipeline::getBindGroupLayout(unsigned long index) {
    return emlite::Val::call("getBindGroupLayout", index).as<GPUBindGroupLayout>();
}

