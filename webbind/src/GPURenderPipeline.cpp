#include <webbind/GPURenderPipeline.hpp>
#include <webbind/GPUBindGroupLayout.hpp>


GPURenderPipeline GPURenderPipeline::take_ownership(Handle h) noexcept {
        return GPURenderPipeline(h);
    }
GPURenderPipeline GPURenderPipeline::clone() const noexcept { return *this; }
GPURenderPipeline::GPURenderPipeline(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderPipeline::GPURenderPipeline(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString GPURenderPipeline::label() const {
    return emlite::Val::get("label").as<jsbind::USVString>();
}

void GPURenderPipeline::label(const jsbind::USVString& value) {
    emlite::Val::set("label", value);
}

GPUBindGroupLayout GPURenderPipeline::getBindGroupLayout(unsigned long index) {
    return emlite::Val::call("getBindGroupLayout", index).as<GPUBindGroupLayout>();
}

