#include <webbind/GPURenderPipelineDescriptor.hpp>
#include <webbind/GPUVertexState.hpp>
#include <webbind/GPUPrimitiveState.hpp>
#include <webbind/GPUDepthStencilState.hpp>
#include <webbind/GPUMultisampleState.hpp>
#include <webbind/GPUFragmentState.hpp>

using emlite::Val;
namespace webbind {

GPURenderPipelineDescriptor::GPURenderPipelineDescriptor(Handle h) noexcept : GPUPipelineDescriptorBase(emlite::Val::take_ownership(h)) {}
GPURenderPipelineDescriptor GPURenderPipelineDescriptor::take_ownership(Handle h) noexcept {
        return GPURenderPipelineDescriptor(h);
    }
GPURenderPipelineDescriptor::GPURenderPipelineDescriptor(const emlite::Val &val) noexcept: GPUPipelineDescriptorBase(val) {}
GPURenderPipelineDescriptor::GPURenderPipelineDescriptor() noexcept: GPUPipelineDescriptorBase(emlite::Val::object()) {}
GPURenderPipelineDescriptor GPURenderPipelineDescriptor::clone() const noexcept { return *this; }

GPUVertexState GPURenderPipelineDescriptor::vertex() const {
    return emlite::Val::get("vertex").as<GPUVertexState>();
}

void GPURenderPipelineDescriptor::vertex(const GPUVertexState& value) {
    emlite::Val::set("vertex", value);
}

GPUPrimitiveState GPURenderPipelineDescriptor::primitive() const {
    return emlite::Val::get("primitive").as<GPUPrimitiveState>();
}

void GPURenderPipelineDescriptor::primitive(const GPUPrimitiveState& value) {
    emlite::Val::set("primitive", value);
}

GPUDepthStencilState GPURenderPipelineDescriptor::depthStencil() const {
    return emlite::Val::get("depthStencil").as<GPUDepthStencilState>();
}

void GPURenderPipelineDescriptor::depthStencil(const GPUDepthStencilState& value) {
    emlite::Val::set("depthStencil", value);
}

GPUMultisampleState GPURenderPipelineDescriptor::multisample() const {
    return emlite::Val::get("multisample").as<GPUMultisampleState>();
}

void GPURenderPipelineDescriptor::multisample(const GPUMultisampleState& value) {
    emlite::Val::set("multisample", value);
}

GPUFragmentState GPURenderPipelineDescriptor::fragment() const {
    return emlite::Val::get("fragment").as<GPUFragmentState>();
}

void GPURenderPipelineDescriptor::fragment(const GPUFragmentState& value) {
    emlite::Val::set("fragment", value);
}


} // namespace webbind