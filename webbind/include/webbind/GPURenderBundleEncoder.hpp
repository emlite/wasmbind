#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPURenderBundle;
class GPURenderBundleDescriptor;
class GPUBindGroup;
class GPURenderPipeline;
class GPUBuffer;


class GPURenderBundleDescriptor : public emlite::Val {
  explicit GPURenderBundleDescriptor(Handle h) noexcept;
public:
    static GPURenderBundleDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderBundleDescriptor(const emlite::Val &val) noexcept;
    GPURenderBundleDescriptor() noexcept;
    GPURenderBundleDescriptor clone() const noexcept;
};

class GPURenderBundleEncoder : public emlite::Val {
    explicit GPURenderBundleEncoder(Handle h) noexcept;

public:
    explicit GPURenderBundleEncoder(const emlite::Val &val) noexcept;
    static GPURenderBundleEncoder take_ownership(Handle h) noexcept;

    GPURenderBundleEncoder clone() const noexcept;
    GPURenderBundle finish();
    GPURenderBundle finish(const GPURenderBundleDescriptor& descriptor);
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
    jsbind::Undefined pushDebugGroup(const jsbind::USVString& groupLabel);
    jsbind::Undefined popDebugGroup();
    jsbind::Undefined insertDebugMarker(const jsbind::USVString& markerLabel);
    jsbind::Undefined setBindGroup(const jsbind::Any& index, const GPUBindGroup& bindGroup, const jsbind::Uint32Array& dynamicOffsetsData, const jsbind::Any& dynamicOffsetsDataStart, const jsbind::Any& dynamicOffsetsDataLength);
    jsbind::Undefined setPipeline(const GPURenderPipeline& pipeline);
    jsbind::Undefined setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat);
    jsbind::Undefined setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat, const jsbind::Any& offset);
    jsbind::Undefined setIndexBuffer(const GPUBuffer& buffer, const GPUIndexFormat& indexFormat, const jsbind::Any& offset, const jsbind::Any& size);
    jsbind::Undefined setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer);
    jsbind::Undefined setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer, const jsbind::Any& offset);
    jsbind::Undefined setVertexBuffer(const jsbind::Any& slot, const GPUBuffer& buffer, const jsbind::Any& offset, const jsbind::Any& size);
    jsbind::Undefined draw(const jsbind::Any& vertexCount);
    jsbind::Undefined draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount);
    jsbind::Undefined draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstVertex);
    jsbind::Undefined draw(const jsbind::Any& vertexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstVertex, const jsbind::Any& firstInstance);
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount);
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount);
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex);
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex, const jsbind::Any& baseVertex);
    jsbind::Undefined drawIndexed(const jsbind::Any& indexCount, const jsbind::Any& instanceCount, const jsbind::Any& firstIndex, const jsbind::Any& baseVertex, const jsbind::Any& firstInstance);
    jsbind::Undefined drawIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset);
    jsbind::Undefined drawIndexedIndirect(const GPUBuffer& indirectBuffer, const jsbind::Any& indirectOffset);
};

