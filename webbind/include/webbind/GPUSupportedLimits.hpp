#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUSupportedLimits : public emlite::Val {
    explicit GPUSupportedLimits(Handle h) noexcept;

public:
    explicit GPUSupportedLimits(const emlite::Val &val) noexcept;
    static GPUSupportedLimits take_ownership(Handle h) noexcept;

    GPUSupportedLimits clone() const noexcept;
    unsigned long maxTextureDimension1D() const;
    unsigned long maxTextureDimension2D() const;
    unsigned long maxTextureDimension3D() const;
    unsigned long maxTextureArrayLayers() const;
    unsigned long maxBindGroups() const;
    unsigned long maxBindGroupsPlusVertexBuffers() const;
    unsigned long maxBindingsPerBindGroup() const;
    unsigned long maxDynamicUniformBuffersPerPipelineLayout() const;
    unsigned long maxDynamicStorageBuffersPerPipelineLayout() const;
    unsigned long maxSampledTexturesPerShaderStage() const;
    unsigned long maxSamplersPerShaderStage() const;
    unsigned long maxStorageBuffersPerShaderStage() const;
    unsigned long maxStorageTexturesPerShaderStage() const;
    unsigned long maxUniformBuffersPerShaderStage() const;
    long long maxUniformBufferBindingSize() const;
    long long maxStorageBufferBindingSize() const;
    unsigned long minUniformBufferOffsetAlignment() const;
    unsigned long minStorageBufferOffsetAlignment() const;
    unsigned long maxVertexBuffers() const;
    long long maxBufferSize() const;
    unsigned long maxVertexAttributes() const;
    unsigned long maxVertexBufferArrayStride() const;
    unsigned long maxInterStageShaderVariables() const;
    unsigned long maxColorAttachments() const;
    unsigned long maxColorAttachmentBytesPerSample() const;
    unsigned long maxComputeWorkgroupStorageSize() const;
    unsigned long maxComputeInvocationsPerWorkgroup() const;
    unsigned long maxComputeWorkgroupSizeX() const;
    unsigned long maxComputeWorkgroupSizeY() const;
    unsigned long maxComputeWorkgroupSizeZ() const;
    unsigned long maxComputeWorkgroupsPerDimension() const;
};

