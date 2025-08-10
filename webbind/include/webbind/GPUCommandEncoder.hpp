#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPURenderPassDescriptor.hpp"
#include "GPUComputePassDescriptor.hpp"
#include "GPUTexelCopyBufferInfo.hpp"
#include "GPUTexelCopyTextureInfo.hpp"
#include "GPUCommandBufferDescriptor.hpp"

namespace webbind {

class GPURenderPassEncoder;
class GPUComputePassEncoder;
class GPUBuffer;
class GPUQuerySet;
class GPUCommandBuffer;

/// Interface GPUCommandEncoder
/// [`GPUCommandEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder)
class GPUCommandEncoder : public emlite::Val {
    explicit GPUCommandEncoder(Handle h) noexcept;
public:
    explicit GPUCommandEncoder(const emlite::Val &val) noexcept;
    static GPUCommandEncoder take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCommandEncoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The beginRenderPass method.
    /// [`GPUCommandEncoder.beginRenderPass`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/beginRenderPass)
    GPURenderPassEncoder beginRenderPass(const GPURenderPassDescriptor& descriptor);
    /// The beginComputePass method.
    /// [`GPUCommandEncoder.beginComputePass`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/beginComputePass)
    GPUComputePassEncoder beginComputePass();
    /// The beginComputePass method.
    /// [`GPUCommandEncoder.beginComputePass`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/beginComputePass)
    GPUComputePassEncoder beginComputePass(const GPUComputePassDescriptor& descriptor);
    /// The copyBufferToBuffer method.
    /// [`GPUCommandEncoder.copyBufferToBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/copyBufferToBuffer)
    jsbind::Undefined copyBufferToBuffer(const GPUBuffer& source, const jsbind::Any& sourceOffset, const GPUBuffer& destination, const jsbind::Any& destinationOffset);
    /// The copyBufferToBuffer method.
    /// [`GPUCommandEncoder.copyBufferToBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/copyBufferToBuffer)
    jsbind::Undefined copyBufferToBuffer(const GPUBuffer& source, const jsbind::Any& sourceOffset, const GPUBuffer& destination, const jsbind::Any& destinationOffset, const jsbind::Any& size);
    /// The copyBufferToTexture method.
    /// [`GPUCommandEncoder.copyBufferToTexture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/copyBufferToTexture)
    jsbind::Undefined copyBufferToTexture(const GPUTexelCopyBufferInfo& source, const GPUTexelCopyTextureInfo& destination, const jsbind::Any& copySize);
    /// The copyTextureToBuffer method.
    /// [`GPUCommandEncoder.copyTextureToBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/copyTextureToBuffer)
    jsbind::Undefined copyTextureToBuffer(const GPUTexelCopyTextureInfo& source, const GPUTexelCopyBufferInfo& destination, const jsbind::Any& copySize);
    /// The copyTextureToTexture method.
    /// [`GPUCommandEncoder.copyTextureToTexture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/copyTextureToTexture)
    jsbind::Undefined copyTextureToTexture(const GPUTexelCopyTextureInfo& source, const GPUTexelCopyTextureInfo& destination, const jsbind::Any& copySize);
    /// The clearBuffer method.
    /// [`GPUCommandEncoder.clearBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/clearBuffer)
    jsbind::Undefined clearBuffer(const GPUBuffer& buffer);
    /// The clearBuffer method.
    /// [`GPUCommandEncoder.clearBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/clearBuffer)
    jsbind::Undefined clearBuffer(const GPUBuffer& buffer, const jsbind::Any& offset);
    /// The clearBuffer method.
    /// [`GPUCommandEncoder.clearBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/clearBuffer)
    jsbind::Undefined clearBuffer(const GPUBuffer& buffer, const jsbind::Any& offset, const jsbind::Any& size);
    /// The resolveQuerySet method.
    /// [`GPUCommandEncoder.resolveQuerySet`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/resolveQuerySet)
    jsbind::Undefined resolveQuerySet(const GPUQuerySet& querySet, const jsbind::Any& firstQuery, const jsbind::Any& queryCount, const GPUBuffer& destination, const jsbind::Any& destinationOffset);
    /// The finish method.
    /// [`GPUCommandEncoder.finish`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/finish)
    GPUCommandBuffer finish();
    /// The finish method.
    /// [`GPUCommandEncoder.finish`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/finish)
    GPUCommandBuffer finish(const GPUCommandBufferDescriptor& descriptor);
    /// [`GPUCommandEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/label)
    /// [`GPUCommandEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUCommandEncoder.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/label)
    void label(const jsbind::String& value);
    /// The pushDebugGroup method.
    /// [`GPUCommandEncoder.pushDebugGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/pushDebugGroup)
    jsbind::Undefined pushDebugGroup(const jsbind::String& groupLabel);
    /// The popDebugGroup method.
    /// [`GPUCommandEncoder.popDebugGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/popDebugGroup)
    jsbind::Undefined popDebugGroup();
    /// The insertDebugMarker method.
    /// [`GPUCommandEncoder.insertDebugMarker`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder/insertDebugMarker)
    jsbind::Undefined insertDebugMarker(const jsbind::String& markerLabel);
};

} // namespace webbind