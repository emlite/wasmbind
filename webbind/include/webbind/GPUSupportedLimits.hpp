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
    /// Getter of the `maxTextureDimension1D` attribute.
    /// [`GPUSupportedLimits.maxTextureDimension1D`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureDimension1D)
    [[nodiscard]] unsigned long maxTextureDimension1D() const;
    /// Getter of the `maxTextureDimension2D` attribute.
    /// [`GPUSupportedLimits.maxTextureDimension2D`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureDimension2D)
    [[nodiscard]] unsigned long maxTextureDimension2D() const;
    /// Getter of the `maxTextureDimension3D` attribute.
    /// [`GPUSupportedLimits.maxTextureDimension3D`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureDimension3D)
    [[nodiscard]] unsigned long maxTextureDimension3D() const;
    /// Getter of the `maxTextureArrayLayers` attribute.
    /// [`GPUSupportedLimits.maxTextureArrayLayers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxTextureArrayLayers)
    [[nodiscard]] unsigned long maxTextureArrayLayers() const;
    /// Getter of the `maxBindGroups` attribute.
    /// [`GPUSupportedLimits.maxBindGroups`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBindGroups)
    [[nodiscard]] unsigned long maxBindGroups() const;
    /// Getter of the `maxBindGroupsPlusVertexBuffers` attribute.
    /// [`GPUSupportedLimits.maxBindGroupsPlusVertexBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBindGroupsPlusVertexBuffers)
    [[nodiscard]] unsigned long maxBindGroupsPlusVertexBuffers() const;
    /// Getter of the `maxBindingsPerBindGroup` attribute.
    /// [`GPUSupportedLimits.maxBindingsPerBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBindingsPerBindGroup)
    [[nodiscard]] unsigned long maxBindingsPerBindGroup() const;
    /// Getter of the `maxDynamicUniformBuffersPerPipelineLayout` attribute.
    /// [`GPUSupportedLimits.maxDynamicUniformBuffersPerPipelineLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxDynamicUniformBuffersPerPipelineLayout)
    [[nodiscard]] unsigned long maxDynamicUniformBuffersPerPipelineLayout() const;
    /// Getter of the `maxDynamicStorageBuffersPerPipelineLayout` attribute.
    /// [`GPUSupportedLimits.maxDynamicStorageBuffersPerPipelineLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxDynamicStorageBuffersPerPipelineLayout)
    [[nodiscard]] unsigned long maxDynamicStorageBuffersPerPipelineLayout() const;
    /// Getter of the `maxSampledTexturesPerShaderStage` attribute.
    /// [`GPUSupportedLimits.maxSampledTexturesPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxSampledTexturesPerShaderStage)
    [[nodiscard]] unsigned long maxSampledTexturesPerShaderStage() const;
    /// Getter of the `maxSamplersPerShaderStage` attribute.
    /// [`GPUSupportedLimits.maxSamplersPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxSamplersPerShaderStage)
    [[nodiscard]] unsigned long maxSamplersPerShaderStage() const;
    /// Getter of the `maxStorageBuffersPerShaderStage` attribute.
    /// [`GPUSupportedLimits.maxStorageBuffersPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxStorageBuffersPerShaderStage)
    [[nodiscard]] unsigned long maxStorageBuffersPerShaderStage() const;
    /// Getter of the `maxStorageTexturesPerShaderStage` attribute.
    /// [`GPUSupportedLimits.maxStorageTexturesPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxStorageTexturesPerShaderStage)
    [[nodiscard]] unsigned long maxStorageTexturesPerShaderStage() const;
    /// Getter of the `maxUniformBuffersPerShaderStage` attribute.
    /// [`GPUSupportedLimits.maxUniformBuffersPerShaderStage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxUniformBuffersPerShaderStage)
    [[nodiscard]] unsigned long maxUniformBuffersPerShaderStage() const;
    /// Getter of the `maxUniformBufferBindingSize` attribute.
    /// [`GPUSupportedLimits.maxUniformBufferBindingSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxUniformBufferBindingSize)
    [[nodiscard]] long long maxUniformBufferBindingSize() const;
    /// Getter of the `maxStorageBufferBindingSize` attribute.
    /// [`GPUSupportedLimits.maxStorageBufferBindingSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxStorageBufferBindingSize)
    [[nodiscard]] long long maxStorageBufferBindingSize() const;
    /// Getter of the `minUniformBufferOffsetAlignment` attribute.
    /// [`GPUSupportedLimits.minUniformBufferOffsetAlignment`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/minUniformBufferOffsetAlignment)
    [[nodiscard]] unsigned long minUniformBufferOffsetAlignment() const;
    /// Getter of the `minStorageBufferOffsetAlignment` attribute.
    /// [`GPUSupportedLimits.minStorageBufferOffsetAlignment`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/minStorageBufferOffsetAlignment)
    [[nodiscard]] unsigned long minStorageBufferOffsetAlignment() const;
    /// Getter of the `maxVertexBuffers` attribute.
    /// [`GPUSupportedLimits.maxVertexBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxVertexBuffers)
    [[nodiscard]] unsigned long maxVertexBuffers() const;
    /// Getter of the `maxBufferSize` attribute.
    /// [`GPUSupportedLimits.maxBufferSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxBufferSize)
    [[nodiscard]] long long maxBufferSize() const;
    /// Getter of the `maxVertexAttributes` attribute.
    /// [`GPUSupportedLimits.maxVertexAttributes`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxVertexAttributes)
    [[nodiscard]] unsigned long maxVertexAttributes() const;
    /// Getter of the `maxVertexBufferArrayStride` attribute.
    /// [`GPUSupportedLimits.maxVertexBufferArrayStride`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxVertexBufferArrayStride)
    [[nodiscard]] unsigned long maxVertexBufferArrayStride() const;
    /// Getter of the `maxInterStageShaderVariables` attribute.
    /// [`GPUSupportedLimits.maxInterStageShaderVariables`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxInterStageShaderVariables)
    [[nodiscard]] unsigned long maxInterStageShaderVariables() const;
    /// Getter of the `maxColorAttachments` attribute.
    /// [`GPUSupportedLimits.maxColorAttachments`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxColorAttachments)
    [[nodiscard]] unsigned long maxColorAttachments() const;
    /// Getter of the `maxColorAttachmentBytesPerSample` attribute.
    /// [`GPUSupportedLimits.maxColorAttachmentBytesPerSample`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxColorAttachmentBytesPerSample)
    [[nodiscard]] unsigned long maxColorAttachmentBytesPerSample() const;
    /// Getter of the `maxComputeWorkgroupStorageSize` attribute.
    /// [`GPUSupportedLimits.maxComputeWorkgroupStorageSize`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupStorageSize)
    [[nodiscard]] unsigned long maxComputeWorkgroupStorageSize() const;
    /// Getter of the `maxComputeInvocationsPerWorkgroup` attribute.
    /// [`GPUSupportedLimits.maxComputeInvocationsPerWorkgroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeInvocationsPerWorkgroup)
    [[nodiscard]] unsigned long maxComputeInvocationsPerWorkgroup() const;
    /// Getter of the `maxComputeWorkgroupSizeX` attribute.
    /// [`GPUSupportedLimits.maxComputeWorkgroupSizeX`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupSizeX)
    [[nodiscard]] unsigned long maxComputeWorkgroupSizeX() const;
    /// Getter of the `maxComputeWorkgroupSizeY` attribute.
    /// [`GPUSupportedLimits.maxComputeWorkgroupSizeY`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupSizeY)
    [[nodiscard]] unsigned long maxComputeWorkgroupSizeY() const;
    /// Getter of the `maxComputeWorkgroupSizeZ` attribute.
    /// [`GPUSupportedLimits.maxComputeWorkgroupSizeZ`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupSizeZ)
    [[nodiscard]] unsigned long maxComputeWorkgroupSizeZ() const;
    /// Getter of the `maxComputeWorkgroupsPerDimension` attribute.
    /// [`GPUSupportedLimits.maxComputeWorkgroupsPerDimension`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits/maxComputeWorkgroupsPerDimension)
    [[nodiscard]] unsigned long maxComputeWorkgroupsPerDimension() const;
};

} // namespace webbind