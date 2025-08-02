#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPURenderPassEncoder;
class GPURenderPassDescriptor;
class GPUComputePassEncoder;
class GPUComputePassDescriptor;
class GPUBuffer;
class GPUTexelCopyBufferInfo;
class GPUTexelCopyTextureInfo;
class GPUQuerySet;
class GPUCommandBuffer;
class GPUCommandBufferDescriptor;
class GPUTexture;


class GPURenderPassDescriptor : public emlite::Val {
  explicit GPURenderPassDescriptor(Handle h) noexcept;
public:
    static GPURenderPassDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderPassDescriptor(const emlite::Val &val) noexcept;
    GPURenderPassDescriptor() noexcept;
    [[nodiscard]] GPURenderPassDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> colorAttachments() const;
    void colorAttachments(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::Any depthStencilAttachment() const;
    void depthStencilAttachment(const jsbind::Any& value);
    [[nodiscard]] GPUQuerySet occlusionQuerySet() const;
    void occlusionQuerySet(const GPUQuerySet& value);
    [[nodiscard]] jsbind::Any timestampWrites() const;
    void timestampWrites(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any maxDrawCount() const;
    void maxDrawCount(const jsbind::Any& value);
};

class GPUComputePassDescriptor : public emlite::Val {
  explicit GPUComputePassDescriptor(Handle h) noexcept;
public:
    static GPUComputePassDescriptor take_ownership(Handle h) noexcept;
    explicit GPUComputePassDescriptor(const emlite::Val &val) noexcept;
    GPUComputePassDescriptor() noexcept;
    [[nodiscard]] GPUComputePassDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::Any timestampWrites() const;
    void timestampWrites(const jsbind::Any& value);
};

class GPUTexelCopyBufferInfo : public emlite::Val {
  explicit GPUTexelCopyBufferInfo(Handle h) noexcept;
public:
    static GPUTexelCopyBufferInfo take_ownership(Handle h) noexcept;
    explicit GPUTexelCopyBufferInfo(const emlite::Val &val) noexcept;
    GPUTexelCopyBufferInfo() noexcept;
    [[nodiscard]] GPUTexelCopyBufferInfo clone() const noexcept;
    [[nodiscard]] GPUBuffer buffer() const;
    void buffer(const GPUBuffer& value);
};

class GPUTexelCopyTextureInfo : public emlite::Val {
  explicit GPUTexelCopyTextureInfo(Handle h) noexcept;
public:
    static GPUTexelCopyTextureInfo take_ownership(Handle h) noexcept;
    explicit GPUTexelCopyTextureInfo(const emlite::Val &val) noexcept;
    GPUTexelCopyTextureInfo() noexcept;
    [[nodiscard]] GPUTexelCopyTextureInfo clone() const noexcept;
    [[nodiscard]] GPUTexture texture() const;
    void texture(const GPUTexture& value);
    [[nodiscard]] jsbind::Any mipLevel() const;
    void mipLevel(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any origin() const;
    void origin(const jsbind::Any& value);
    [[nodiscard]] GPUTextureAspect aspect() const;
    void aspect(const GPUTextureAspect& value);
};

class GPUCommandBufferDescriptor : public emlite::Val {
  explicit GPUCommandBufferDescriptor(Handle h) noexcept;
public:
    static GPUCommandBufferDescriptor take_ownership(Handle h) noexcept;
    explicit GPUCommandBufferDescriptor(const emlite::Val &val) noexcept;
    GPUCommandBufferDescriptor() noexcept;
    [[nodiscard]] GPUCommandBufferDescriptor clone() const noexcept;
};

/// The GPUCommandEncoder class.
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
    /// Getter of the `label` attribute.
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

