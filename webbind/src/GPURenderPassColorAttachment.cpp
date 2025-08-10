#include "webbind/GPURenderPassColorAttachment.hpp"
#include "webbind/GPUTextureView.hpp"

using emlite::Val;
namespace webbind {

GPURenderPassColorAttachment::GPURenderPassColorAttachment(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderPassColorAttachment GPURenderPassColorAttachment::take_ownership(Handle h) noexcept {
        return GPURenderPassColorAttachment(h);
    }
GPURenderPassColorAttachment::GPURenderPassColorAttachment(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPURenderPassColorAttachment::GPURenderPassColorAttachment() noexcept: emlite::Val(emlite::Val::object()) {}
GPURenderPassColorAttachment GPURenderPassColorAttachment::clone() const noexcept { return *this; }

GPUTextureView GPURenderPassColorAttachment::view() const {
    return emlite::Val::get("view").as<GPUTextureView>();
}

void GPURenderPassColorAttachment::view(const GPUTextureView& value) {
    emlite::Val::set("view", value);
}

jsbind::Any GPURenderPassColorAttachment::depthSlice() const {
    return emlite::Val::get("depthSlice").as<jsbind::Any>();
}

void GPURenderPassColorAttachment::depthSlice(const jsbind::Any& value) {
    emlite::Val::set("depthSlice", value);
}

GPUTextureView GPURenderPassColorAttachment::resolveTarget() const {
    return emlite::Val::get("resolveTarget").as<GPUTextureView>();
}

void GPURenderPassColorAttachment::resolveTarget(const GPUTextureView& value) {
    emlite::Val::set("resolveTarget", value);
}

jsbind::Any GPURenderPassColorAttachment::clearValue() const {
    return emlite::Val::get("clearValue").as<jsbind::Any>();
}

void GPURenderPassColorAttachment::clearValue(const jsbind::Any& value) {
    emlite::Val::set("clearValue", value);
}

GPULoadOp GPURenderPassColorAttachment::loadOp() const {
    return emlite::Val::get("loadOp").as<GPULoadOp>();
}

void GPURenderPassColorAttachment::loadOp(const GPULoadOp& value) {
    emlite::Val::set("loadOp", value);
}

GPUStoreOp GPURenderPassColorAttachment::storeOp() const {
    return emlite::Val::get("storeOp").as<GPUStoreOp>();
}

void GPURenderPassColorAttachment::storeOp(const GPUStoreOp& value) {
    emlite::Val::set("storeOp", value);
}


} // namespace webbind