#include "webbind/GPURenderPassDepthStencilAttachment.hpp"
#include "webbind/GPUTextureView.hpp"

using emlite::Val;
namespace webbind {

GPURenderPassDepthStencilAttachment::GPURenderPassDepthStencilAttachment(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderPassDepthStencilAttachment GPURenderPassDepthStencilAttachment::take_ownership(Handle h) noexcept {
        return GPURenderPassDepthStencilAttachment(h);
    }
GPURenderPassDepthStencilAttachment::GPURenderPassDepthStencilAttachment(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPURenderPassDepthStencilAttachment::GPURenderPassDepthStencilAttachment() noexcept: emlite::Val(emlite::Val::object()) {}
GPURenderPassDepthStencilAttachment GPURenderPassDepthStencilAttachment::clone() const noexcept { return *this; }

GPUTextureView GPURenderPassDepthStencilAttachment::view() const {
    return emlite::Val::get("view").as<GPUTextureView>();
}

void GPURenderPassDepthStencilAttachment::view(const GPUTextureView& value) {
    emlite::Val::set("view", value);
}

float GPURenderPassDepthStencilAttachment::depthClearValue() const {
    return emlite::Val::get("depthClearValue").as<float>();
}

void GPURenderPassDepthStencilAttachment::depthClearValue(float value) {
    emlite::Val::set("depthClearValue", value);
}

GPULoadOp GPURenderPassDepthStencilAttachment::depthLoadOp() const {
    return emlite::Val::get("depthLoadOp").as<GPULoadOp>();
}

void GPURenderPassDepthStencilAttachment::depthLoadOp(const GPULoadOp& value) {
    emlite::Val::set("depthLoadOp", value);
}

GPUStoreOp GPURenderPassDepthStencilAttachment::depthStoreOp() const {
    return emlite::Val::get("depthStoreOp").as<GPUStoreOp>();
}

void GPURenderPassDepthStencilAttachment::depthStoreOp(const GPUStoreOp& value) {
    emlite::Val::set("depthStoreOp", value);
}

bool GPURenderPassDepthStencilAttachment::depthReadOnly() const {
    return emlite::Val::get("depthReadOnly").as<bool>();
}

void GPURenderPassDepthStencilAttachment::depthReadOnly(bool value) {
    emlite::Val::set("depthReadOnly", value);
}

jsbind::Any GPURenderPassDepthStencilAttachment::stencilClearValue() const {
    return emlite::Val::get("stencilClearValue").as<jsbind::Any>();
}

void GPURenderPassDepthStencilAttachment::stencilClearValue(const jsbind::Any& value) {
    emlite::Val::set("stencilClearValue", value);
}

GPULoadOp GPURenderPassDepthStencilAttachment::stencilLoadOp() const {
    return emlite::Val::get("stencilLoadOp").as<GPULoadOp>();
}

void GPURenderPassDepthStencilAttachment::stencilLoadOp(const GPULoadOp& value) {
    emlite::Val::set("stencilLoadOp", value);
}

GPUStoreOp GPURenderPassDepthStencilAttachment::stencilStoreOp() const {
    return emlite::Val::get("stencilStoreOp").as<GPUStoreOp>();
}

void GPURenderPassDepthStencilAttachment::stencilStoreOp(const GPUStoreOp& value) {
    emlite::Val::set("stencilStoreOp", value);
}

bool GPURenderPassDepthStencilAttachment::stencilReadOnly() const {
    return emlite::Val::get("stencilReadOnly").as<bool>();
}

void GPURenderPassDepthStencilAttachment::stencilReadOnly(bool value) {
    emlite::Val::set("stencilReadOnly", value);
}


} // namespace webbind