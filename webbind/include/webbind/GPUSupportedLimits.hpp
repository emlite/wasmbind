#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface GPUSupportedLimits
/// [`GPUSupportedLimits`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits)
class GPUSupportedLimits : public emlite::Val {
    explicit GPUSupportedLimits(Handle h) noexcept;
public:
    explicit GPUSupportedLimits(const emlite::Val &val) noexcept;
    static GPUSupportedLimits take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUSupportedLimits clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`GPUSupportedLimits.maxTextureDimension1D`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureDimension1D)
    /// [`GPUSupportedLimits.maxTextureDimension1D`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureDimension1D)
    [[nodiscard]] unsigned long maxTextureDimension1D() const;
    /// [`GPUSupportedLimits.maxTextureDimension2D`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureDimension2D)
    /// [`GPUSupportedLimits.maxTextureDimension2D`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureDimension2D)
    [[nodiscard]] unsigned long maxTextureDimension2D() const;
    /// [`GPUSupportedLimits.maxTextureDimension3D`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureDimension3D)
    /// [`GPUSupportedLimits.maxTextureDimension3D`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureDimension3D)
    [[nodiscard]] unsigned long maxTextureDimension3D() const;
    /// [`GPUSupportedLimits.maxTextureArrayLayers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureArrayLayers)
    /// [`GPUSupportedLimits.maxTextureArrayLayers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureArrayLayers)
    [[nodiscard]] unsigned long maxTextureArrayLayers() const;
    /// [`GPUSupportedLimits.maxBindGroups`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBindGroups)
    /// [`GPUSupportedLimits.maxBindGroups`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBindGroups)
    [[nodiscard]] unsigned long maxBindGroups() const;
    /// [`GPUSupportedLimits.maxBindGroupsPlusVertexBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBindGroupsPlusVertexBuffers)
    /// [`GPUSupportedLimits.maxBindGroupsPlusVertexBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBindGroupsPlusVertexBuffers)
    [[nodiscard]] unsigned long maxBindGroupsPlusVertexBuffers() const;
    /// [`GPUSupportedLimits.maxBindingsPerBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBindingsPerBindGroup)
    /// [`GPUSupportedLimits.maxBindingsPerBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBindingsPerBindGroup)
    [[nodiscard]] unsigned long maxBindingsPerBindGroup() const;
    /// [`GPUSupportedLimits.maxDynamicUniformBuffersPerPipelineLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxDynamicUniformBuffersPerPipelineLayout)
    /// [`GPUSupportedLimits.maxDynamicUniformBuffersPerPipelineLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxDynamicUniformBuffersPerPipelineLayout)
    [[nodiscard]] unsigned long maxDynamicUniformBuffersPerPipelineLayout() const;
    /// [`GPUSupportedLimits.maxDynamicStorageBuffersPerPipelineLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxDynamicStorageBuffersPerPipelineLayout)
    /// [`GPUSupportedLimits.maxDynamicStorageBuffersPerPipelineLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxDynamicStorageBuffersPerPipelineLayout)
    [[nodiscard]] unsigned long maxDynamicStorageBuffersPerPipelineLayout() const;
    /// [`GPUSupportedLimits.maxSampledTexturesPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxSampledTexturesPerShaderStage)
    /// [`GPUSupportedLimits.maxSampledTexturesPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxSampledTexturesPerShaderStage)
    [[nodiscard]] unsigned long maxSampledTexturesPerShaderStage() const;
    /// [`GPUSupportedLimits.maxSamplersPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxSamplersPerShaderStage)
    /// [`GPUSupportedLimits.maxSamplersPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxSamplersPerShaderStage)
    [[nodiscard]] unsigned long maxSamplersPerShaderStage() const;
    /// [`GPUSupportedLimits.maxStorageBuffersPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxStorageBuffersPerShaderStage)
    /// [`GPUSupportedLimits.maxStorageBuffersPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxStorageBuffersPerShaderStage)
    [[nodiscard]] unsigned long maxStorageBuffersPerShaderStage() const;
    /// [`GPUSupportedLimits.maxStorageTexturesPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxStorageTexturesPerShaderStage)
    /// [`GPUSupportedLimits.maxStorageTexturesPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxStorageTexturesPerShaderStage)
    [[nodiscard]] unsigned long maxStorageTexturesPerShaderStage() const;
    /// [`GPUSupportedLimits.maxUniformBuffersPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxUniformBuffersPerShaderStage)
    /// [`GPUSupportedLimits.maxUniformBuffersPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxUniformBuffersPerShaderStage)
    [[nodiscard]] unsigned long maxUniformBuffersPerShaderStage() const;
    /// [`GPUSupportedLimits.maxUniformBufferBindingSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxUniformBufferBindingSize)
    /// [`GPUSupportedLimits.maxUniformBufferBindingSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxUniformBufferBindingSize)
    [[nodiscard]] long long maxUniformBufferBindingSize() const;
    /// [`GPUSupportedLimits.maxStorageBufferBindingSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxStorageBufferBindingSize)
    /// [`GPUSupportedLimits.maxStorageBufferBindingSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxStorageBufferBindingSize)
    [[nodiscard]] long long maxStorageBufferBindingSize() const;
    /// [`GPUSupportedLimits.minUniformBufferOffsetAlignment`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/minUniformBufferOffsetAlignment)
    /// [`GPUSupportedLimits.minUniformBufferOffsetAlignment`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/minUniformBufferOffsetAlignment)
    [[nodiscard]] unsigned long minUniformBufferOffsetAlignment() const;
    /// [`GPUSupportedLimits.minStorageBufferOffsetAlignment`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/minStorageBufferOffsetAlignment)
    /// [`GPUSupportedLimits.minStorageBufferOffsetAlignment`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/minStorageBufferOffsetAlignment)
    [[nodiscard]] unsigned long minStorageBufferOffsetAlignment() const;
    /// [`GPUSupportedLimits.maxVertexBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxVertexBuffers)
    /// [`GPUSupportedLimits.maxVertexBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxVertexBuffers)
    [[nodiscard]] unsigned long maxVertexBuffers() const;
    /// [`GPUSupportedLimits.maxBufferSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBufferSize)
    /// [`GPUSupportedLimits.maxBufferSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBufferSize)
    [[nodiscard]] long long maxBufferSize() const;
    /// [`GPUSupportedLimits.maxVertexAttributes`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxVertexAttributes)
    /// [`GPUSupportedLimits.maxVertexAttributes`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxVertexAttributes)
    [[nodiscard]] unsigned long maxVertexAttributes() const;
    /// [`GPUSupportedLimits.maxVertexBufferArrayStride`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxVertexBufferArrayStride)
    /// [`GPUSupportedLimits.maxVertexBufferArrayStride`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxVertexBufferArrayStride)
    [[nodiscard]] unsigned long maxVertexBufferArrayStride() const;
    /// [`GPUSupportedLimits.maxInterStageShaderVariables`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxInterStageShaderVariables)
    /// [`GPUSupportedLimits.maxInterStageShaderVariables`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxInterStageShaderVariables)
    [[nodiscard]] unsigned long maxInterStageShaderVariables() const;
    /// [`GPUSupportedLimits.maxColorAttachments`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxColorAttachments)
    /// [`GPUSupportedLimits.maxColorAttachments`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxColorAttachments)
    [[nodiscard]] unsigned long maxColorAttachments() const;
    /// [`GPUSupportedLimits.maxColorAttachmentBytesPerSample`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxColorAttachmentBytesPerSample)
    /// [`GPUSupportedLimits.maxColorAttachmentBytesPerSample`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxColorAttachmentBytesPerSample)
    [[nodiscard]] unsigned long maxColorAttachmentBytesPerSample() const;
    /// [`GPUSupportedLimits.maxComputeWorkgroupStorageSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupStorageSize)
    /// [`GPUSupportedLimits.maxComputeWorkgroupStorageSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupStorageSize)
    [[nodiscard]] unsigned long maxComputeWorkgroupStorageSize() const;
    /// [`GPUSupportedLimits.maxComputeInvocationsPerWorkgroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeInvocationsPerWorkgroup)
    /// [`GPUSupportedLimits.maxComputeInvocationsPerWorkgroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeInvocationsPerWorkgroup)
    [[nodiscard]] unsigned long maxComputeInvocationsPerWorkgroup() const;
    /// [`GPUSupportedLimits.maxComputeWorkgroupSizeX`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupSizeX)
    /// [`GPUSupportedLimits.maxComputeWorkgroupSizeX`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupSizeX)
    [[nodiscard]] unsigned long maxComputeWorkgroupSizeX() const;
    /// [`GPUSupportedLimits.maxComputeWorkgroupSizeY`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupSizeY)
    /// [`GPUSupportedLimits.maxComputeWorkgroupSizeY`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupSizeY)
    [[nodiscard]] unsigned long maxComputeWorkgroupSizeY() const;
    /// [`GPUSupportedLimits.maxComputeWorkgroupSizeZ`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupSizeZ)
    /// [`GPUSupportedLimits.maxComputeWorkgroupSizeZ`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupSizeZ)
    [[nodiscard]] unsigned long maxComputeWorkgroupSizeZ() const;
    /// [`GPUSupportedLimits.maxComputeWorkgroupsPerDimension`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupsPerDimension)
    /// [`GPUSupportedLimits.maxComputeWorkgroupsPerDimension`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupsPerDimension)
    [[nodiscard]] unsigned long maxComputeWorkgroupsPerDimension() const;
};

} // namespace webbind