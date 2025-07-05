#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPURenderBundle;
class GPUBindGroup;
class GPURenderPipeline;
class GPUBuffer;


class GPURenderPassEncoder : public emlite::Val {
    explicit GPURenderPassEncoder(Handle h) noexcept;

public:
    explicit GPURenderPassEncoder(const emlite::Val &val) noexcept;
    static GPURenderPassEncoder take_ownership(Handle h) noexcept;

    GPURenderPassEncoder clone() const noexcept;
    jsbind::Undefined setViewport(float x, float y, float width, float height, float minDepth, float maxDepth);
    jsbind::Undefined setScissorRect(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& width, const jsbind::Any& height);
    jsbind::Undefined setBlendConstant(const jsbind::Any& color);
    jsbind::Undefined setStencilReference(const jsbind::Any& reference);
    jsbind::Undefined beginOcclusionQuery(const jsbind::Any& queryIndex);
    jsbind::Undefined endOcclusionQuery();
    jsbind::Undefined executeBundles(const jsbind::Sequence<GPURenderBundle>& bundles);
    jsbind::Undefined end();
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

