#include <webbind/GPUCommandEncoder.hpp>
#include <webbind/GPURenderPassEncoder.hpp>
#include <webbind/GPURenderPassDescriptor.hpp>
#include <webbind/GPUComputePassEncoder.hpp>
#include <webbind/GPUComputePassDescriptor.hpp>
#include <webbind/GPUBuffer.hpp>
#include <webbind/GPUTexelCopyBufferInfo.hpp>
#include <webbind/GPUTexelCopyTextureInfo.hpp>
#include <webbind/GPUQuerySet.hpp>
#include <webbind/GPUCommandBuffer.hpp>
#include <webbind/GPUCommandBufferDescriptor.hpp>

namespace webbind {

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

jsbind::Undefined GPUCommandEncoder::copyBufferToBuffer(const GPUBuffer& source, const GPUBuffer& destination) {
    return emlite::Val::call("copyBufferToBuffer", source, destination).as<jsbind::Undefined>();
}

jsbind::Undefined GPUCommandEncoder::copyBufferToBuffer(const GPUBuffer& source, const GPUBuffer& destination, const jsbind::Any& size) {
    return emlite::Val::call("copyBufferToBuffer", source, destination, size).as<jsbind::Undefined>();
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


} // namespace webbind