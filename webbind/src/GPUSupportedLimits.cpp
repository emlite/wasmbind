#include <webbind/GPUSupportedLimits.hpp>


GPUSupportedLimits GPUSupportedLimits::take_ownership(Handle h) noexcept {
        return GPUSupportedLimits(h);
    }
GPUSupportedLimits GPUSupportedLimits::clone() const noexcept { return *this; }
GPUSupportedLimits::GPUSupportedLimits(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUSupportedLimits::GPUSupportedLimits(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long GPUSupportedLimits::maxTextureDimension1D() const {
    return emlite::Val::get("maxTextureDimension1D").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxTextureDimension2D() const {
    return emlite::Val::get("maxTextureDimension2D").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxTextureDimension3D() const {
    return emlite::Val::get("maxTextureDimension3D").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxTextureArrayLayers() const {
    return emlite::Val::get("maxTextureArrayLayers").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxBindGroups() const {
    return emlite::Val::get("maxBindGroups").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxBindGroupsPlusVertexBuffers() const {
    return emlite::Val::get("maxBindGroupsPlusVertexBuffers").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxBindingsPerBindGroup() const {
    return emlite::Val::get("maxBindingsPerBindGroup").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxDynamicUniformBuffersPerPipelineLayout() const {
    return emlite::Val::get("maxDynamicUniformBuffersPerPipelineLayout").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxDynamicStorageBuffersPerPipelineLayout() const {
    return emlite::Val::get("maxDynamicStorageBuffersPerPipelineLayout").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxSampledTexturesPerShaderStage() const {
    return emlite::Val::get("maxSampledTexturesPerShaderStage").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxSamplersPerShaderStage() const {
    return emlite::Val::get("maxSamplersPerShaderStage").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxStorageBuffersPerShaderStage() const {
    return emlite::Val::get("maxStorageBuffersPerShaderStage").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxStorageTexturesPerShaderStage() const {
    return emlite::Val::get("maxStorageTexturesPerShaderStage").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxUniformBuffersPerShaderStage() const {
    return emlite::Val::get("maxUniformBuffersPerShaderStage").as<unsigned long>();
}

long long GPUSupportedLimits::maxUniformBufferBindingSize() const {
    return emlite::Val::get("maxUniformBufferBindingSize").as<long long>();
}

long long GPUSupportedLimits::maxStorageBufferBindingSize() const {
    return emlite::Val::get("maxStorageBufferBindingSize").as<long long>();
}

unsigned long GPUSupportedLimits::minUniformBufferOffsetAlignment() const {
    return emlite::Val::get("minUniformBufferOffsetAlignment").as<unsigned long>();
}

unsigned long GPUSupportedLimits::minStorageBufferOffsetAlignment() const {
    return emlite::Val::get("minStorageBufferOffsetAlignment").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxVertexBuffers() const {
    return emlite::Val::get("maxVertexBuffers").as<unsigned long>();
}

long long GPUSupportedLimits::maxBufferSize() const {
    return emlite::Val::get("maxBufferSize").as<long long>();
}

unsigned long GPUSupportedLimits::maxVertexAttributes() const {
    return emlite::Val::get("maxVertexAttributes").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxVertexBufferArrayStride() const {
    return emlite::Val::get("maxVertexBufferArrayStride").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxInterStageShaderVariables() const {
    return emlite::Val::get("maxInterStageShaderVariables").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxColorAttachments() const {
    return emlite::Val::get("maxColorAttachments").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxColorAttachmentBytesPerSample() const {
    return emlite::Val::get("maxColorAttachmentBytesPerSample").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxComputeWorkgroupStorageSize() const {
    return emlite::Val::get("maxComputeWorkgroupStorageSize").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxComputeInvocationsPerWorkgroup() const {
    return emlite::Val::get("maxComputeInvocationsPerWorkgroup").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxComputeWorkgroupSizeX() const {
    return emlite::Val::get("maxComputeWorkgroupSizeX").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxComputeWorkgroupSizeY() const {
    return emlite::Val::get("maxComputeWorkgroupSizeY").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxComputeWorkgroupSizeZ() const {
    return emlite::Val::get("maxComputeWorkgroupSizeZ").as<unsigned long>();
}

unsigned long GPUSupportedLimits::maxComputeWorkgroupsPerDimension() const {
    return emlite::Val::get("maxComputeWorkgroupsPerDimension").as<unsigned long>();
}

