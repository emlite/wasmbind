#include <webbind/GPURenderPassEncoder.hpp>
#include <webbind/GPURenderBundle.hpp>
#include <webbind/GPUBindGroup.hpp>
#include <webbind/GPURenderPipeline.hpp>
#include <webbind/GPUBuffer.hpp>


GPURenderPassEncoder GPURenderPassEncoder::take_ownership(Handle h) noexcept {
        return GPURenderPassEncoder(h);
    }
GPURenderPassEncoder GPURenderPassEncoder::clone() const noexcept { return *this; }
emlite::Val GPURenderPassEncoder::instance() noexcept { return emlite::Val::global("GPURenderPassEncoder"); }
GPURenderPassEncoder::GPURenderPassEncoder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderPassEncoder::GPURenderPassEncoder(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined GPURenderPassEncoder::setViewport(float x, float y, float width, float height, float minDepth, float maxDepth) {
    return emlite::Val::call("setViewport", x, y, width, height, minDepth, maxDepth).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::setScissorRect(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height) {
    return emlite::Val::call("setScissorRect", x, y, width, height).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::setBlendConstant(const jsbind::Any& color) {
    return emlite::Val::call("setBlendConstant", color).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::setStencilReference(const jsbind::Any& reference) {
    return emlite::Val::call("setStencilReference", reference).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::beginOcclusionQuery(const jsbind::Any& queryIndex) {
    return emlite::Val::call("beginOcclusionQuery", queryIndex).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::endOcclusionQuery() {
    return emlite::Val::call("endOcclusionQuery").as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::executeBundles(const jsbind::TypedArray<GPURenderBundle>& bundles) {
    return emlite::Val::call("executeBundles", bundles).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::end() {
    return emlite::Val::call("end").as<jsbind::Undefined>();
}

jsbind::String GPURenderPassEncoder::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPURenderPassEncoder::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

jsbind::Undefined GPURenderPassEncoder::pushDebugGroup(const jsbind::String& groupLabel) {
    return emlite::Val::call("pushDebugGroup", groupLabel).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::popDebugGroup() {
    return emlite::Val::call("popDebugGroup").as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::insertDebugMarker(const jsbind::String& markerLabel) {
    return emlite::Val::call("insertDebugMarker", markerLabel).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup, const jsbind::Uint32Array& dynamicOffsetsData, const jsbind::Any& dynamicOffsetsDataStart, const jsbind::Any& dynamicOffsetsDataLength) {
    return emlite::Val::call("setBindGroup", index, bindGroup, dynamicOffsetsData, dynamicOffsetsDataStart, dynamicOffsetsDataLength).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::setPipeline(const GPURenderPipeline& pipeline) {
    return emlite::Val::call("setPipeline", pipeline).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat) {
    return emlite::Val::call("setIndexBuffer", buffer, indexFormat).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat, const jsbind::Any& offset) {
    return emlite::Val::call("setIndexBuffer", buffer, indexFormat, offset).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat, const jsbind::Any& offset, const jsbind::Any& size) {
    return emlite::Val::call("setIndexBuffer", buffer, indexFormat, offset, size).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer) {
    return emlite::Val::call("setVertexBuffer", slot, buffer).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer, const jsbind::Any& offset) {
    return emlite::Val::call("setVertexBuffer", slot, buffer, offset).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer, const jsbind::Any& offset, const jsbind::Any& size) {
    return emlite::Val::call("setVertexBuffer", slot, buffer, offset, size).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::draw(const jsbind::Any& vertexCount) {
    return emlite::Val::call("draw", vertexCount).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount) {
    return emlite::Val::call("draw", vertexCount, instanceCount).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstVertex) {
    return emlite::Val::call("draw", vertexCount, instanceCount, firstVertex).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstVertex, const jsbind::Any& firstInstance) {
    return emlite::Val::call("draw", vertexCount, instanceCount, firstVertex, firstInstance).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::drawIndexed(const jsbind::Any& indexCount) {
    return emlite::Val::call("drawIndexed", indexCount).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount) {
    return emlite::Val::call("drawIndexed", indexCount, instanceCount).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex) {
    return emlite::Val::call("drawIndexed", indexCount, instanceCount, firstIndex).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex, const jsbind::Any& baseVertex) {
    return emlite::Val::call("drawIndexed", indexCount, instanceCount, firstIndex, baseVertex).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex, const jsbind::Any& baseVertex, const jsbind::Any& firstInstance) {
    return emlite::Val::call("drawIndexed", indexCount, instanceCount, firstIndex, baseVertex, firstInstance).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::drawIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset) {
    return emlite::Val::call("drawIndirect", indirectBuffer, indirectOffset).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderPassEncoder::drawIndexedIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset) {
    return emlite::Val::call("drawIndexedIndirect", indirectBuffer, indirectOffset).as<jsbind::Undefined>();
}

