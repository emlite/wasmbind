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
    GPURenderPassDescriptor clone() const noexcept;
    jsbind::Sequence<jsbind::Any> colorAttachments() const;
    void colorAttachments(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Any depthStencilAttachment() const;
    void depthStencilAttachment(const jsbind::Any& value);
    GPUQuerySet occlusionQuerySet() const;
    void occlusionQuerySet(const GPUQuerySet& value);
    jsbind::Any timestampWrites() const;
    void timestampWrites(const jsbind::Any& value);
    jsbind::Any maxDrawCount() const;
    void maxDrawCount(const jsbind::Any& value);
};

class GPUComputePassDescriptor : public emlite::Val {
  explicit GPUComputePassDescriptor(Handle h) noexcept;
public:
    static GPUComputePassDescriptor take_ownership(Handle h) noexcept;
    explicit GPUComputePassDescriptor(const emlite::Val &val) noexcept;
    GPUComputePassDescriptor() noexcept;
    GPUComputePassDescriptor clone() const noexcept;
    jsbind::Any timestampWrites() const;
    void timestampWrites(const jsbind::Any& value);
};

class GPUTexelCopyBufferInfo : public emlite::Val {
  explicit GPUTexelCopyBufferInfo(Handle h) noexcept;
public:
    static GPUTexelCopyBufferInfo take_ownership(Handle h) noexcept;
    explicit GPUTexelCopyBufferInfo(const emlite::Val &val) noexcept;
    GPUTexelCopyBufferInfo() noexcept;
    GPUTexelCopyBufferInfo clone() const noexcept;
    GPUBuffer buffer() const;
    void buffer(const GPUBuffer& value);
};

class GPUTexelCopyTextureInfo : public emlite::Val {
  explicit GPUTexelCopyTextureInfo(Handle h) noexcept;
public:
    static GPUTexelCopyTextureInfo take_ownership(Handle h) noexcept;
    explicit GPUTexelCopyTextureInfo(const emlite::Val &val) noexcept;
    GPUTexelCopyTextureInfo() noexcept;
    GPUTexelCopyTextureInfo clone() const noexcept;
    GPUTexture texture() const;
    void texture(const GPUTexture& value);
    jsbind::Any mipLevel() const;
    void mipLevel(const jsbind::Any& value);
    jsbind::Any origin() const;
    void origin(const jsbind::Any& value);
    GPUTextureAspect aspect() const;
    void aspect(const GPUTextureAspect& value);
};

class GPUCommandBufferDescriptor : public emlite::Val {
  explicit GPUCommandBufferDescriptor(Handle h) noexcept;
public:
    static GPUCommandBufferDescriptor take_ownership(Handle h) noexcept;
    explicit GPUCommandBufferDescriptor(const emlite::Val &val) noexcept;
    GPUCommandBufferDescriptor() noexcept;
    GPUCommandBufferDescriptor clone() const noexcept;
};

class GPUCommandEncoder : public emlite::Val {
    explicit GPUCommandEncoder(Handle h) noexcept;

public:
    explicit GPUCommandEncoder(const emlite::Val &val) noexcept;
    static GPUCommandEncoder take_ownership(Handle h) noexcept;

    GPUCommandEncoder clone() const noexcept;
    GPURenderPassEncoder beginRenderPass(const GPURenderPassDescriptor& descriptor);
    GPUComputePassEncoder beginComputePass(const GPUComputePassDescriptor& descriptor);
    jsbind::Undefined copyBufferToBuffer(const GPUBuffer& source, const jsbind::Any& sourceOffset, const GPUBuffer& destination, const jsbind::Any& destinationOffset, const jsbind::Any& size);
    jsbind::Undefined copyBufferToTexture(const GPUTexelCopyBufferInfo& source, const GPUTexelCopyTextureInfo& destination, const jsbind::Any& copySize);
    jsbind::Undefined copyTextureToBuffer(const GPUTexelCopyTextureInfo& source, const GPUTexelCopyBufferInfo& destination, const jsbind::Any& copySize);
    jsbind::Undefined copyTextureToTexture(const GPUTexelCopyTextureInfo& source, const GPUTexelCopyTextureInfo& destination, const jsbind::Any& copySize);
    jsbind::Undefined clearBuffer(const GPUBuffer& buffer, const jsbind::Any& offset, const jsbind::Any& size);
    jsbind::Undefined resolveQuerySet(const GPUQuerySet& querySet, const jsbind::Any& firstQuery, const jsbind::Any& queryCount, const GPUBuffer& destination, const jsbind::Any& destinationOffset);
    GPUCommandBuffer finish(const GPUCommandBufferDescriptor& descriptor);
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
    jsbind::Undefined pushDebugGroup(const jsbind::USVString& groupLabel);
    jsbind::Undefined popDebugGroup();
    jsbind::Undefined insertDebugMarker(const jsbind::USVString& markerLabel);
};

