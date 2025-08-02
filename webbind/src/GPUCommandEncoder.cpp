#include <webbind/GPUCommandEncoder.hpp>
#include <webbind/GPURenderPassEncoder.hpp>
#include <webbind/GPUComputePassEncoder.hpp>
#include <webbind/GPUBuffer.hpp>
#include <webbind/GPUQuerySet.hpp>
#include <webbind/GPUCommandBuffer.hpp>
#include <webbind/GPUTexture.hpp>


GPURenderPassDescriptor::GPURenderPassDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderPassDescriptor GPURenderPassDescriptor::take_ownership(Handle h) noexcept {
        return GPURenderPassDescriptor(h);
    }
GPURenderPassDescriptor::GPURenderPassDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPURenderPassDescriptor::GPURenderPassDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPURenderPassDescriptor GPURenderPassDescriptor::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Any> GPURenderPassDescriptor::colorAttachments() const {
    return emlite::Val::get("colorAttachments").as<jsbind::TypedArray<jsbind::Any>>();
}

void GPURenderPassDescriptor::colorAttachments(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("colorAttachments", value);
}

jsbind::Any GPURenderPassDescriptor::depthStencilAttachment() const {
    return emlite::Val::get("depthStencilAttachment").as<jsbind::Any>();
}

void GPURenderPassDescriptor::depthStencilAttachment(const jsbind::Any& value) {
    emlite::Val::set("depthStencilAttachment", value);
}

GPUQuerySet GPURenderPassDescriptor::occlusionQuerySet() const {
    return emlite::Val::get("occlusionQuerySet").as<GPUQuerySet>();
}

void GPURenderPassDescriptor::occlusionQuerySet(const GPUQuerySet& value) {
    emlite::Val::set("occlusionQuerySet", value);
}

jsbind::Any GPURenderPassDescriptor::timestampWrites() const {
    return emlite::Val::get("timestampWrites").as<jsbind::Any>();
}

void GPURenderPassDescriptor::timestampWrites(const jsbind::Any& value) {
    emlite::Val::set("timestampWrites", value);
}

jsbind::Any GPURenderPassDescriptor::maxDrawCount() const {
    return emlite::Val::get("maxDrawCount").as<jsbind::Any>();
}

void GPURenderPassDescriptor::maxDrawCount(const jsbind::Any& value) {
    emlite::Val::set("maxDrawCount", value);
}

GPUComputePassDescriptor::GPUComputePassDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUComputePassDescriptor GPUComputePassDescriptor::take_ownership(Handle h) noexcept {
        return GPUComputePassDescriptor(h);
    }
GPUComputePassDescriptor::GPUComputePassDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUComputePassDescriptor::GPUComputePassDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUComputePassDescriptor GPUComputePassDescriptor::clone() const noexcept { return *this; }

jsbind::Any GPUComputePassDescriptor::timestampWrites() const {
    return emlite::Val::get("timestampWrites").as<jsbind::Any>();
}

void GPUComputePassDescriptor::timestampWrites(const jsbind::Any& value) {
    emlite::Val::set("timestampWrites", value);
}

GPUTexelCopyBufferInfo::GPUTexelCopyBufferInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUTexelCopyBufferInfo GPUTexelCopyBufferInfo::take_ownership(Handle h) noexcept {
        return GPUTexelCopyBufferInfo(h);
    }
GPUTexelCopyBufferInfo::GPUTexelCopyBufferInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUTexelCopyBufferInfo::GPUTexelCopyBufferInfo() noexcept: emlite::Val(emlite::Val::object()) {}
GPUTexelCopyBufferInfo GPUTexelCopyBufferInfo::clone() const noexcept { return *this; }

GPUBuffer GPUTexelCopyBufferInfo::buffer() const {
    return emlite::Val::get("buffer").as<GPUBuffer>();
}

void GPUTexelCopyBufferInfo::buffer(const GPUBuffer& value) {
    emlite::Val::set("buffer", value);
}

GPUTexelCopyTextureInfo::GPUTexelCopyTextureInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUTexelCopyTextureInfo GPUTexelCopyTextureInfo::take_ownership(Handle h) noexcept {
        return GPUTexelCopyTextureInfo(h);
    }
GPUTexelCopyTextureInfo::GPUTexelCopyTextureInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUTexelCopyTextureInfo::GPUTexelCopyTextureInfo() noexcept: emlite::Val(emlite::Val::object()) {}
GPUTexelCopyTextureInfo GPUTexelCopyTextureInfo::clone() const noexcept { return *this; }

GPUTexture GPUTexelCopyTextureInfo::texture() const {
    return emlite::Val::get("texture").as<GPUTexture>();
}

void GPUTexelCopyTextureInfo::texture(const GPUTexture& value) {
    emlite::Val::set("texture", value);
}

jsbind::Any GPUTexelCopyTextureInfo::mipLevel() const {
    return emlite::Val::get("mipLevel").as<jsbind::Any>();
}

void GPUTexelCopyTextureInfo::mipLevel(const jsbind::Any& value) {
    emlite::Val::set("mipLevel", value);
}

jsbind::Any GPUTexelCopyTextureInfo::origin() const {
    return emlite::Val::get("origin").as<jsbind::Any>();
}

void GPUTexelCopyTextureInfo::origin(const jsbind::Any& value) {
    emlite::Val::set("origin", value);
}

GPUTextureAspect GPUTexelCopyTextureInfo::aspect() const {
    return emlite::Val::get("aspect").as<GPUTextureAspect>();
}

void GPUTexelCopyTextureInfo::aspect(const GPUTextureAspect& value) {
    emlite::Val::set("aspect", value);
}

GPUCommandBufferDescriptor::GPUCommandBufferDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCommandBufferDescriptor GPUCommandBufferDescriptor::take_ownership(Handle h) noexcept {
        return GPUCommandBufferDescriptor(h);
    }
GPUCommandBufferDescriptor::GPUCommandBufferDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUCommandBufferDescriptor::GPUCommandBufferDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUCommandBufferDescriptor GPUCommandBufferDescriptor::clone() const noexcept { return *this; }

GPUCommandEncoder GPUCommandEncoder::take_ownership(Handle h) noexcept {
        return GPUCommandEncoder(h);
    }
GPUCommandEncoder GPUCommandEncoder::clone() const noexcept { return *this; }
emlite::Val GPUCommandEncoder::instance() noexcept { return emlite::Val::global("GPUCommandEncoder"); }
GPUCommandEncoder::GPUCommandEncoder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCommandEncoder::GPUCommandEncoder(const emlite::Val &val) noexcept: emlite::Val(val) {}


GPURenderPassEncoder GPUCommandEncoder::beginRenderPass(const GPURenderPassDescriptor& descriptor) {
    return emlite::Val::call("beginRenderPass", descriptor).as<GPURenderPassEncoder>();
}

GPUComputePassEncoder GPUCommandEncoder::beginComputePass() {
    return emlite::Val::call("beginComputePass").as<GPUComputePassEncoder>();
}

GPUComputePassEncoder GPUCommandEncoder::beginComputePass(const GPUComputePassDescriptor& descriptor) {
    return emlite::Val::call("beginComputePass", descriptor).as<GPUComputePassEncoder>();
}

jsbind::Undefined GPUCommandEncoder::copyBufferToBuffer(const GPUBuffer& source, const jsbind::Any& sourceOffset, const GPUBuffer& destination, const jsbind::Any& destinationOffset) {
    return emlite::Val::call("copyBufferToBuffer", source, sourceOffset, destination, destinationOffset).as<jsbind::Undefined>();
}

jsbind::Undefined GPUCommandEncoder::copyBufferToBuffer(const GPUBuffer& source, const jsbind::Any& sourceOffset, const GPUBuffer& destination, const jsbind::Any& destinationOffset, const jsbind::Any& size) {
    return emlite::Val::call("copyBufferToBuffer", source, sourceOffset, destination, destinationOffset, size).as<jsbind::Undefined>();
}

jsbind::Undefined GPUCommandEncoder::copyBufferToTexture(const GPUTexelCopyBufferInfo& source, const GPUTexelCopyTextureInfo& destination, const jsbind::Any& copySize) {
    return emlite::Val::call("copyBufferToTexture", source, destination, copySize).as<jsbind::Undefined>();
}

jsbind::Undefined GPUCommandEncoder::copyTextureToBuffer(const GPUTexelCopyTextureInfo& source, const GPUTexelCopyBufferInfo& destination, const jsbind::Any& copySize) {
    return emlite::Val::call("copyTextureToBuffer", source, destination, copySize).as<jsbind::Undefined>();
}

jsbind::Undefined GPUCommandEncoder::copyTextureToTexture(const GPUTexelCopyTextureInfo& source, const GPUTexelCopyTextureInfo& destination, const jsbind::Any& copySize) {
    return emlite::Val::call("copyTextureToTexture", source, destination, copySize).as<jsbind::Undefined>();
}

jsbind::Undefined GPUCommandEncoder::clearBuffer(const GPUBuffer& buffer) {
    return emlite::Val::call("clearBuffer", buffer).as<jsbind::Undefined>();
}

jsbind::Undefined GPUCommandEncoder::clearBuffer(const GPUBuffer& buffer, const jsbind::Any& offset) {
    return emlite::Val::call("clearBuffer", buffer, offset).as<jsbind::Undefined>();
}

jsbind::Undefined GPUCommandEncoder::clearBuffer(const GPUBuffer& buffer, const jsbind::Any& offset, const jsbind::Any& size) {
    return emlite::Val::call("clearBuffer", buffer, offset, size).as<jsbind::Undefined>();
}

jsbind::Undefined GPUCommandEncoder::resolveQuerySet(const GPUQuerySet& querySet, const jsbind::Any& firstQuery, const jsbind::Any& queryCount, const GPUBuffer& destination, const jsbind::Any& destinationOffset) {
    return emlite::Val::call("resolveQuerySet", querySet, firstQuery, queryCount, destination, destinationOffset).as<jsbind::Undefined>();
}

GPUCommandBuffer GPUCommandEncoder::finish() {
    return emlite::Val::call("finish").as<GPUCommandBuffer>();
}

GPUCommandBuffer GPUCommandEncoder::finish(const GPUCommandBufferDescriptor& descriptor) {
    return emlite::Val::call("finish", descriptor).as<GPUCommandBuffer>();
}

jsbind::String GPUCommandEncoder::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUCommandEncoder::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

jsbind::Undefined GPUCommandEncoder::pushDebugGroup(const jsbind::String& groupLabel) {
    return emlite::Val::call("pushDebugGroup", groupLabel).as<jsbind::Undefined>();
}

jsbind::Undefined GPUCommandEncoder::popDebugGroup() {
    return emlite::Val::call("popDebugGroup").as<jsbind::Undefined>();
}

jsbind::Undefined GPUCommandEncoder::insertDebugMarker(const jsbind::String& markerLabel) {
    return emlite::Val::call("insertDebugMarker", markerLabel).as<jsbind::Undefined>();
}

