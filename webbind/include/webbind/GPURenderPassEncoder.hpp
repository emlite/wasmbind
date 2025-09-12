#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class GPURenderBundle;
class GPUBindGroup;
class GPURenderPipeline;
class GPUBuffer;

/// Interface GPURenderPassEncoder
/// [`GPURenderPassEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder)
class GPURenderPassEncoder : public emlite::Val {
    explicit GPURenderPassEncoder(Handle h) noexcept;
public:
    explicit GPURenderPassEncoder(const emlite::Val &val) noexcept;
    static GPURenderPassEncoder take_ownership(Handle h) noexcept;
    [[nodiscard]] GPURenderPassEncoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The setViewport method.
    /// [`GPURenderPassEncoder.setViewport`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setViewport)
    jsbind::Undefined setViewport(float x, float y, float width, float height, float minDepth, float maxDepth);
    /// The setScissorRect method.
    /// [`GPURenderPassEncoder.setScissorRect`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setScissorRect)
    jsbind::Undefined setScissorRect(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height);
    /// The setBlendConstant method.
    /// [`GPURenderPassEncoder.setBlendConstant`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setBlendConstant)
    jsbind::Undefined setBlendConstant(const jsbind::Any& color);
    /// The setStencilReference method.
    /// [`GPURenderPassEncoder.setStencilReference`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setStencilReference)
    jsbind::Undefined setStencilReference(const jsbind::Any& reference);
    /// The beginOcclusionQuery method.
    /// [`GPURenderPassEncoder.beginOcclusionQuery`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/beginOcclusionQuery)
    jsbind::Undefined beginOcclusionQuery(const jsbind::Any& queryIndex);
    /// The endOcclusionQuery method.
    /// [`GPURenderPassEncoder.endOcclusionQuery`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/endOcclusionQuery)
    jsbind::Undefined endOcclusionQuery();
    /// The executeBundles method.
    /// [`GPURenderPassEncoder.executeBundles`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/executeBundles)
    jsbind::Undefined executeBundles(const jsbind::TypedArray<GPURenderBundle>& bundles);
    /// The end method.
    /// [`GPURenderPassEncoder.end`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/end)
    jsbind::Undefined end();
    /// [`GPURenderPassEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/label)
    /// [`GPURenderPassEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPURenderPassEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/label)
    void label(const jsbind::String& value);
    /// The pushDebugGroup method.
    /// [`GPURenderPassEncoder.pushDebugGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/pushDebugGroup)
    jsbind::Undefined pushDebugGroup(const jsbind::String& groupLabel);
    /// The popDebugGroup method.
    /// [`GPURenderPassEncoder.popDebugGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/popDebugGroup)
    jsbind::Undefined popDebugGroup();
    /// The insertDebugMarker method.
    /// [`GPURenderPassEncoder.insertDebugMarker`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/insertDebugMarker)
    jsbind::Undefined insertDebugMarker(const jsbind::String& markerLabel);
    /// The setBindGroup method.
    /// [`GPURenderPassEncoder.setBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setBindGroup)
    jsbind::Undefined setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup);
    /// The setBindGroup method.
    /// [`GPURenderPassEncoder.setBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setBindGroup)
    jsbind::Undefined setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup, const jsbind::TypedArray<jsbind::Any>& dynamicOffsets);
    /// The setBindGroup method.
    /// [`GPURenderPassEncoder.setBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setBindGroup)
    jsbind::Undefined setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup, const jsbind::Uint32Array& dynamicOffsetsData, const jsbind::Any& dynamicOffsetsDataStart, const jsbind::Any& dynamicOffsetsDataLength);
    /// The setPipeline method.
    /// [`GPURenderPassEncoder.setPipeline`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setPipeline)
    jsbind::Undefined setPipeline(const GPURenderPipeline& pipeline);
    /// The setIndexBuffer method.
    /// [`GPURenderPassEncoder.setIndexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setIndexBuffer)
    jsbind::Undefined setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat);
    /// The setIndexBuffer method.
    /// [`GPURenderPassEncoder.setIndexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setIndexBuffer)
    jsbind::Undefined setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat, const jsbind::Any& offset);
    /// The setIndexBuffer method.
    /// [`GPURenderPassEncoder.setIndexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setIndexBuffer)
    jsbind::Undefined setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat, const jsbind::Any& offset, const jsbind::Any& size);
    /// The setVertexBuffer method.
    /// [`GPURenderPassEncoder.setVertexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setVertexBuffer)
    jsbind::Undefined setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer);
    /// The setVertexBuffer method.
    /// [`GPURenderPassEncoder.setVertexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setVertexBuffer)
    jsbind::Undefined setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer, const jsbind::Any& offset);
    /// The setVertexBuffer method.
    /// [`GPURenderPassEncoder.setVertexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/setVertexBuffer)
    jsbind::Undefined setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer, const jsbind::Any& offset, const jsbind::Any& size);
    /// The draw method.
    /// [`GPURenderPassEncoder.draw`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/draw)
    jsbind::Undefined draw(const jsbind::Any& vertexCount);
    /// The draw method.
    /// [`GPURenderPassEncoder.draw`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/draw)
    jsbind::Undefined draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount);
    /// The draw method.
    /// [`GPURenderPassEncoder.draw`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/draw)
    jsbind::Undefined draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstVertex);
    /// The draw method.
    /// [`GPURenderPassEncoder.draw`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/draw)
    jsbind::Undefined draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstVertex, const jsbind::Any& firstInstance);
    /// The drawIndexed method.
    /// [`GPURenderPassEncoder.drawIndexed`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/drawIndexed)
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount);
    /// The drawIndexed method.
    /// [`GPURenderPassEncoder.drawIndexed`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/drawIndexed)
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount);
    /// The drawIndexed method.
    /// [`GPURenderPassEncoder.drawIndexed`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/drawIndexed)
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex);
    /// The drawIndexed method.
    /// [`GPURenderPassEncoder.drawIndexed`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/drawIndexed)
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex, const jsbind::Any& baseVertex);
    /// The drawIndexed method.
    /// [`GPURenderPassEncoder.drawIndexed`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/drawIndexed)
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex, const jsbind::Any& baseVertex, const jsbind::Any& firstInstance);
    /// The drawIndirect method.
    /// [`GPURenderPassEncoder.drawIndirect`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/drawIndirect)
    jsbind::Undefined drawIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset);
    /// The drawIndexedIndirect method.
    /// [`GPURenderPassEncoder.drawIndexedIndirect`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder/drawIndexedIndirect)
    jsbind::Undefined drawIndexedIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset);
};

} // namespace webbind