#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class GPUSupportedFeatures;
class GPUSupportedLimits;
class GPUAdapterInfo;
class GPUQueue;
class GPUBuffer;
class GPUBufferDescriptor;
class GPUTexture;
class GPUTextureDescriptor;
class GPUSampler;
class GPUSamplerDescriptor;
class GPUExternalTexture;
class GPUExternalTextureDescriptor;
class GPUBindGroupLayout;
class GPUBindGroupLayoutDescriptor;
class GPUPipelineLayout;
class GPUPipelineLayoutDescriptor;
class GPUBindGroup;
class GPUBindGroupDescriptor;
class GPUShaderModule;
class GPUShaderModuleDescriptor;
class GPUComputePipeline;
class GPUComputePipelineDescriptor;
class GPURenderPipeline;
class GPURenderPipelineDescriptor;
class GPUCommandEncoder;
class GPUCommandEncoderDescriptor;
class GPURenderBundleEncoder;
class GPURenderBundleEncoderDescriptor;
class GPUQuerySet;
class GPUQuerySetDescriptor;
class GPUDeviceLostInfo;
class GPUError;

/// Interface GPUDevice
/// [`GPUDevice`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice)
class GPUDevice : public EventTarget {
    explicit GPUDevice(Handle h) noexcept;
public:
    explicit GPUDevice(const emlite::Val &val) noexcept;
    static GPUDevice take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUDevice clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`GPUDevice.features`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/features)
    /// [`GPUDevice.features`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/features)
    [[nodiscard]] GPUSupportedFeatures features() const;
    /// [`GPUDevice.limits`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/limits)
    /// [`GPUDevice.limits`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/limits)
    [[nodiscard]] GPUSupportedLimits limits() const;
    /// [`GPUDevice.adapterInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/adapterInfo)
    /// [`GPUDevice.adapterInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/adapterInfo)
    [[nodiscard]] GPUAdapterInfo adapterInfo() const;
    /// [`GPUDevice.queue`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/queue)
    /// [`GPUDevice.queue`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/queue)
    [[nodiscard]] GPUQueue queue() const;
    /// The destroy method.
    /// [`GPUDevice.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/destroy)
    jsbind::Undefined destroy();
    /// The createBuffer method.
    /// [`GPUDevice.createBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createBuffer)
    GPUBuffer createBuffer(const GPUBufferDescriptor& descriptor);
    /// The createTexture method.
    /// [`GPUDevice.createTexture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createTexture)
    GPUTexture createTexture(const GPUTextureDescriptor& descriptor);
    /// The createSampler method.
    /// [`GPUDevice.createSampler`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createSampler)
    GPUSampler createSampler();
    /// The createSampler method.
    /// [`GPUDevice.createSampler`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createSampler)
    GPUSampler createSampler(const GPUSamplerDescriptor& descriptor);
    /// The importExternalTexture method.
    /// [`GPUDevice.importExternalTexture`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/importExternalTexture)
    GPUExternalTexture importExternalTexture(const GPUExternalTextureDescriptor& descriptor);
    /// The createBindGroupLayout method.
    /// [`GPUDevice.createBindGroupLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createBindGroupLayout)
    GPUBindGroupLayout createBindGroupLayout(const GPUBindGroupLayoutDescriptor& descriptor);
    /// The createPipelineLayout method.
    /// [`GPUDevice.createPipelineLayout`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createPipelineLayout)
    GPUPipelineLayout createPipelineLayout(const GPUPipelineLayoutDescriptor& descriptor);
    /// The createBindGroup method.
    /// [`GPUDevice.createBindGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createBindGroup)
    GPUBindGroup createBindGroup(const GPUBindGroupDescriptor& descriptor);
    /// The createShaderModule method.
    /// [`GPUDevice.createShaderModule`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createShaderModule)
    GPUShaderModule createShaderModule(const GPUShaderModuleDescriptor& descriptor);
    /// The createComputePipeline method.
    /// [`GPUDevice.createComputePipeline`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createComputePipeline)
    GPUComputePipeline createComputePipeline(const GPUComputePipelineDescriptor& descriptor);
    /// The createRenderPipeline method.
    /// [`GPUDevice.createRenderPipeline`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createRenderPipeline)
    GPURenderPipeline createRenderPipeline(const GPURenderPipelineDescriptor& descriptor);
    /// The createComputePipelineAsync method.
    /// [`GPUDevice.createComputePipelineAsync`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createComputePipelineAsync)
    jsbind::Promise<GPUComputePipeline> createComputePipelineAsync(const GPUComputePipelineDescriptor& descriptor);
    /// The createRenderPipelineAsync method.
    /// [`GPUDevice.createRenderPipelineAsync`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createRenderPipelineAsync)
    jsbind::Promise<GPURenderPipeline> createRenderPipelineAsync(const GPURenderPipelineDescriptor& descriptor);
    /// The createCommandEncoder method.
    /// [`GPUDevice.createCommandEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createCommandEncoder)
    GPUCommandEncoder createCommandEncoder();
    /// The createCommandEncoder method.
    /// [`GPUDevice.createCommandEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createCommandEncoder)
    GPUCommandEncoder createCommandEncoder(const GPUCommandEncoderDescriptor& descriptor);
    /// The createRenderBundleEncoder method.
    /// [`GPUDevice.createRenderBundleEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createRenderBundleEncoder)
    GPURenderBundleEncoder createRenderBundleEncoder(const GPURenderBundleEncoderDescriptor& descriptor);
    /// The createQuerySet method.
    /// [`GPUDevice.createQuerySet`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/createQuerySet)
    GPUQuerySet createQuerySet(const GPUQuerySetDescriptor& descriptor);
    /// [`GPUDevice.lost`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/lost)
    /// [`GPUDevice.lost`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/lost)
    [[nodiscard]] jsbind::Promise<GPUDeviceLostInfo> lost() const;
    /// The pushErrorScope method.
    /// [`GPUDevice.pushErrorScope`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/pushErrorScope)
    jsbind::Undefined pushErrorScope(const GPUErrorFilter& filter);
    /// The popErrorScope method.
    /// [`GPUDevice.popErrorScope`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/popErrorScope)
    jsbind::Promise<GPUError> popErrorScope();
    /// [`GPUDevice.onuncapturederror`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/onuncapturederror)
    /// [`GPUDevice.onuncapturederror`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/onuncapturederror)
    [[nodiscard]] jsbind::Any onuncapturederror() const;
    /// Setter of the `onuncapturederror` attribute.
    /// [`GPUDevice.onuncapturederror`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/onuncapturederror)
    void onuncapturederror(const jsbind::Any& value);
    /// [`GPUDevice.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/label)
    /// [`GPUDevice.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUDevice.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/label)
    void label(const jsbind::String& value);
};

} // namespace webbind