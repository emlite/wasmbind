#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class GPURenderBundle;
class GPURenderBundleDescriptor;
class GPUBindGroup;
class GPURenderPipeline;
class GPUBuffer;

/// Interface GPURenderBundleEncoder
/// [`GPURenderBundleEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder)
class GPURenderBundleEncoder : public emlite::Val {
    explicit GPURenderBundleEncoder(Handle h) noexcept;
public:
    explicit GPURenderBundleEncoder(const emlite::Val &val) noexcept;
    static GPURenderBundleEncoder take_ownership(Handle h) noexcept;
    [[nodiscard]] GPURenderBundleEncoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The finish method.
    /// [`GPURenderBundleEncoder.finish`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/finish)
    GPURenderBundle finish();
    /// The finish method.
    /// [`GPURenderBundleEncoder.finish`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/finish)
    GPURenderBundle finish(const GPURenderBundleDescriptor& descriptor);
    /// [`GPURenderBundleEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/label)
    /// [`GPURenderBundleEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPURenderBundleEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/label)
    void label(const jsbind::String& value);
    /// The pushDebugGroup method.
    /// [`GPURenderBundleEncoder.pushDebugGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/pushDebugGroup)
    jsbind::Undefined pushDebugGroup(const jsbind::String& groupLabel);
    /// The popDebugGroup method.
    /// [`GPURenderBundleEncoder.popDebugGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/popDebugGroup)
    jsbind::Undefined popDebugGroup();
    /// The insertDebugMarker method.
    /// [`GPURenderBundleEncoder.insertDebugMarker`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/insertDebugMarker)
    jsbind::Undefined insertDebugMarker(const jsbind::String& markerLabel);
    /// The setBindGroup method.
    /// [`GPURenderBundleEncoder.setBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/setBindGroup)
    jsbind::Undefined setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup, const jsbind::Uint32Array& dynamicOffsetsData, const jsbind::Any& dynamicOffsetsDataStart, const jsbind::Any& dynamicOffsetsDataLength);
    /// The setPipeline method.
    /// [`GPURenderBundleEncoder.setPipeline`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/setPipeline)
    jsbind::Undefined setPipeline(const GPURenderPipeline& pipeline);
    /// The setIndexBuffer method.
    /// [`GPURenderBundleEncoder.setIndexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/setIndexBuffer)
    jsbind::Undefined setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat);
    /// The setIndexBuffer method.
    /// [`GPURenderBundleEncoder.setIndexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/setIndexBuffer)
    jsbind::Undefined setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat, const jsbind::Any& offset);
    /// The setIndexBuffer method.
    /// [`GPURenderBundleEncoder.setIndexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/setIndexBuffer)
    jsbind::Undefined setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat, const jsbind::Any& offset, const jsbind::Any& size);
    /// The setVertexBuffer method.
    /// [`GPURenderBundleEncoder.setVertexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/setVertexBuffer)
    jsbind::Undefined setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer);
    /// The setVertexBuffer method.
    /// [`GPURenderBundleEncoder.setVertexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/setVertexBuffer)
    jsbind::Undefined setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer, const jsbind::Any& offset);
    /// The setVertexBuffer method.
    /// [`GPURenderBundleEncoder.setVertexBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/setVertexBuffer)
    jsbind::Undefined setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer, const jsbind::Any& offset, const jsbind::Any& size);
    /// The draw method.
    /// [`GPURenderBundleEncoder.draw`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/draw)
    jsbind::Undefined draw(const jsbind::Any& vertexCount);
    /// The draw method.
    /// [`GPURenderBundleEncoder.draw`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/draw)
    jsbind::Undefined draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount);
    /// The draw method.
    /// [`GPURenderBundleEncoder.draw`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/draw)
    jsbind::Undefined draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstVertex);
    /// The draw method.
    /// [`GPURenderBundleEncoder.draw`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/draw)
    jsbind::Undefined draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstVertex, const jsbind::Any& firstInstance);
    /// The drawIndexed method.
    /// [`GPURenderBundleEncoder.drawIndexed`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/drawIndexed)
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount);
    /// The drawIndexed method.
    /// [`GPURenderBundleEncoder.drawIndexed`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/drawIndexed)
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount);
    /// The drawIndexed method.
    /// [`GPURenderBundleEncoder.drawIndexed`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/drawIndexed)
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex);
    /// The drawIndexed method.
    /// [`GPURenderBundleEncoder.drawIndexed`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/drawIndexed)
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex, const jsbind::Any& baseVertex);
    /// The drawIndexed method.
    /// [`GPURenderBundleEncoder.drawIndexed`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/drawIndexed)
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex, const jsbind::Any& baseVertex, const jsbind::Any& firstInstance);
    /// The drawIndirect method.
    /// [`GPURenderBundleEncoder.drawIndirect`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/drawIndirect)
    jsbind::Undefined drawIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset);
    /// The drawIndexedIndirect method.
    /// [`GPURenderBundleEncoder.drawIndexedIndirect`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder/drawIndexedIndirect)
    jsbind::Undefined drawIndexedIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset);
};

} // namespace webbind