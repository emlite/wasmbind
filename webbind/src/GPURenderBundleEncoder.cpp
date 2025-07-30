#include <webbind/GPURenderBundleEncoder.hpp>
#include <webbind/GPURenderBundle.hpp>
#include <webbind/GPUBindGroup.hpp>
#include <webbind/GPURenderPipeline.hpp>
#include <webbind/GPUBuffer.hpp>


GPURenderBundleDescriptor::GPURenderBundleDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderBundleDescriptor GPURenderBundleDescriptor::take_ownership(Handle h) noexcept {
        return GPURenderBundleDescriptor(h);
    }
GPURenderBundleDescriptor::GPURenderBundleDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPURenderBundleDescriptor::GPURenderBundleDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPURenderBundleDescriptor GPURenderBundleDescriptor::clone() const noexcept { return *this; }

GPURenderBundleEncoder GPURenderBundleEncoder::take_ownership(Handle h) noexcept {
        return GPURenderBundleEncoder(h);
    }
GPURenderBundleEncoder GPURenderBundleEncoder::clone() const noexcept { return *this; }
GPURenderBundleEncoder::GPURenderBundleEncoder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderBundleEncoder::GPURenderBundleEncoder(const emlite::Val &val) noexcept: emlite::Val(val) {}


GPURenderBundle GPURenderBundleEncoder::finish() {
    return emlite::Val::call("finish").as<GPURenderBundle>();
}

GPURenderBundle GPURenderBundleEncoder::finish(const GPURenderBundleDescriptor& descriptor) {
    return emlite::Val::call("finish", descriptor).as<GPURenderBundle>();
}

jsbind::String GPURenderBundleEncoder::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPURenderBundleEncoder::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

jsbind::Undefined GPURenderBundleEncoder::pushDebugGroup(const jsbind::String& groupLabel) {
    return emlite::Val::call("pushDebugGroup", groupLabel).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::popDebugGroup() {
    return emlite::Val::call("popDebugGroup").as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::insertDebugMarker(const jsbind::String& markerLabel) {
    return emlite::Val::call("insertDebugMarker", markerLabel).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup, const jsbind::Uint32Array& dynamicOffsetsData, const jsbind::Any& dynamicOffsetsDataStart, const jsbind::Any& dynamicOffsetsDataLength) {
    return emlite::Val::call("setBindGroup", index, bindGroup, dynamicOffsetsData, dynamicOffsetsDataStart, dynamicOffsetsDataLength).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::setPipeline(const GPURenderPipeline& pipeline) {
    return emlite::Val::call("setPipeline", pipeline).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat) {
    return emlite::Val::call("setIndexBuffer", buffer, indexFormat).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat, const jsbind::Any& offset) {
    return emlite::Val::call("setIndexBuffer", buffer, indexFormat, offset).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat, const jsbind::Any& offset, const jsbind::Any& size) {
    return emlite::Val::call("setIndexBuffer", buffer, indexFormat, offset, size).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer) {
    return emlite::Val::call("setVertexBuffer", slot, buffer).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer, const jsbind::Any& offset) {
    return emlite::Val::call("setVertexBuffer", slot, buffer, offset).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer, const jsbind::Any& offset, const jsbind::Any& size) {
    return emlite::Val::call("setVertexBuffer", slot, buffer, offset, size).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::draw(const jsbind::Any& vertexCount) {
    return emlite::Val::call("draw", vertexCount).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount) {
    return emlite::Val::call("draw", vertexCount, instanceCount).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstVertex) {
    return emlite::Val::call("draw", vertexCount, instanceCount, firstVertex).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstVertex, const jsbind::Any& firstInstance) {
    return emlite::Val::call("draw", vertexCount, instanceCount, firstVertex, firstInstance).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::drawIndexed(const jsbind::Any& indexCount) {
    return emlite::Val::call("drawIndexed", indexCount).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount) {
    return emlite::Val::call("drawIndexed", indexCount, instanceCount).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex) {
    return emlite::Val::call("drawIndexed", indexCount, instanceCount, firstIndex).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex, const jsbind::Any& baseVertex) {
    return emlite::Val::call("drawIndexed", indexCount, instanceCount, firstIndex, baseVertex).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex, const jsbind::Any& baseVertex, const jsbind::Any& firstInstance) {
    return emlite::Val::call("drawIndexed", indexCount, instanceCount, firstIndex, baseVertex, firstInstance).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::drawIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset) {
    return emlite::Val::call("drawIndirect", indirectBuffer, indirectOffset).as<jsbind::Undefined>();
}

jsbind::Undefined GPURenderBundleEncoder::drawIndexedIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset) {
    return emlite::Val::call("drawIndexedIndirect", indirectBuffer, indirectOffset).as<jsbind::Undefined>();
}

