#include "webbind/GPURenderPipeline.hpp"
#include "webbind/GPUBindGroupLayout.hpp"

namespace webbind {

GPURenderPipeline GPURenderPipeline::take_ownership(Handle h) noexcept {
        return GPURenderPipeline(h);
    }
GPURenderPipeline GPURenderPipeline::clone() const noexcept { return *this; }
emlite::Val GPURenderPipeline::instance() noexcept { return emlite::Val::global("GPURenderPipeline"); }
GPURenderPipeline::GPURenderPipeline(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderPipeline::GPURenderPipeline(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String GPURenderPipeline::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPURenderPipeline::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

GPUBindGroupLayout GPURenderPipeline::getBindGroupLayout(unsigned long index) {
    return emlite::Val::call("getBindGroupLayout", index).as<GPUBindGroupLayout>();
}


} // namespace webbind