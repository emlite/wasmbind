#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

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


class GPUBufferDescriptor : public emlite::Val {
  explicit GPUBufferDescriptor(Handle h) noexcept;
public:
    static GPUBufferDescriptor take_ownership(Handle h) noexcept;
    explicit GPUBufferDescriptor(const emlite::Val &val) noexcept;
    GPUBufferDescriptor() noexcept;
    [[nodiscard]] GPUBufferDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::Any size() const;
    void size(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any usage() const;
    void usage(const jsbind::Any& value);
    [[nodiscard]] bool mappedAtCreation() const;
    void mappedAtCreation(bool value);
};

class GPUTextureDescriptor : public emlite::Val {
  explicit GPUTextureDescriptor(Handle h) noexcept;
public:
    static GPUTextureDescriptor take_ownership(Handle h) noexcept;
    explicit GPUTextureDescriptor(const emlite::Val &val) noexcept;
    GPUTextureDescriptor() noexcept;
    [[nodiscard]] GPUTextureDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::Any size() const;
    void size(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any mipLevelCount() const;
    void mipLevelCount(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any sampleCount() const;
    void sampleCount(const jsbind::Any& value);
    [[nodiscard]] GPUTextureDimension dimension() const;
    void dimension(const GPUTextureDimension& value);
    [[nodiscard]] GPUTextureFormat format() const;
    void format(const GPUTextureFormat& value);
    [[nodiscard]] jsbind::Any usage() const;
    void usage(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<GPUTextureFormat> viewFormats() const;
    void viewFormats(const jsbind::TypedArray<GPUTextureFormat>& value);
};

class GPUSamplerDescriptor : public emlite::Val {
  explicit GPUSamplerDescriptor(Handle h) noexcept;
public:
    static GPUSamplerDescriptor take_ownership(Handle h) noexcept;
    explicit GPUSamplerDescriptor(const emlite::Val &val) noexcept;
    GPUSamplerDescriptor() noexcept;
    [[nodiscard]] GPUSamplerDescriptor clone() const noexcept;
    [[nodiscard]] GPUAddressMode addressModeU() const;
    void addressModeU(const GPUAddressMode& value);
    [[nodiscard]] GPUAddressMode addressModeV() const;
    void addressModeV(const GPUAddressMode& value);
    [[nodiscard]] GPUAddressMode addressModeW() const;
    void addressModeW(const GPUAddressMode& value);
    [[nodiscard]] GPUFilterMode magFilter() const;
    void magFilter(const GPUFilterMode& value);
    [[nodiscard]] GPUFilterMode minFilter() const;
    void minFilter(const GPUFilterMode& value);
    [[nodiscard]] GPUMipmapFilterMode mipmapFilter() const;
    void mipmapFilter(const GPUMipmapFilterMode& value);
    [[nodiscard]] float lodMinClamp() const;
    void lodMinClamp(float value);
    [[nodiscard]] float lodMaxClamp() const;
    void lodMaxClamp(float value);
    [[nodiscard]] GPUCompareFunction compare() const;
    void compare(const GPUCompareFunction& value);
    [[nodiscard]] unsigned short maxAnisotropy() const;
    void maxAnisotropy(unsigned short value);
};

class GPUExternalTextureDescriptor : public emlite::Val {
  explicit GPUExternalTextureDescriptor(Handle h) noexcept;
public:
    static GPUExternalTextureDescriptor take_ownership(Handle h) noexcept;
    explicit GPUExternalTextureDescriptor(const emlite::Val &val) noexcept;
    GPUExternalTextureDescriptor() noexcept;
    [[nodiscard]] GPUExternalTextureDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::Any source() const;
    void source(const jsbind::Any& value);
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
};

class GPUBindGroupLayoutDescriptor : public emlite::Val {
  explicit GPUBindGroupLayoutDescriptor(Handle h) noexcept;
public:
    static GPUBindGroupLayoutDescriptor take_ownership(Handle h) noexcept;
    explicit GPUBindGroupLayoutDescriptor(const emlite::Val &val) noexcept;
    GPUBindGroupLayoutDescriptor() noexcept;
    [[nodiscard]] GPUBindGroupLayoutDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> entries() const;
    void entries(const jsbind::TypedArray<jsbind::Any>& value);
};

class GPUPipelineLayoutDescriptor : public emlite::Val {
  explicit GPUPipelineLayoutDescriptor(Handle h) noexcept;
public:
    static GPUPipelineLayoutDescriptor take_ownership(Handle h) noexcept;
    explicit GPUPipelineLayoutDescriptor(const emlite::Val &val) noexcept;
    GPUPipelineLayoutDescriptor() noexcept;
    [[nodiscard]] GPUPipelineLayoutDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<GPUBindGroupLayout> bindGroupLayouts() const;
    void bindGroupLayouts(const jsbind::TypedArray<GPUBindGroupLayout>& value);
};

class GPUBindGroupDescriptor : public emlite::Val {
  explicit GPUBindGroupDescriptor(Handle h) noexcept;
public:
    static GPUBindGroupDescriptor take_ownership(Handle h) noexcept;
    explicit GPUBindGroupDescriptor(const emlite::Val &val) noexcept;
    GPUBindGroupDescriptor() noexcept;
    [[nodiscard]] GPUBindGroupDescriptor clone() const noexcept;
    [[nodiscard]] GPUBindGroupLayout layout() const;
    void layout(const GPUBindGroupLayout& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> entries() const;
    void entries(const jsbind::TypedArray<jsbind::Any>& value);
};

class GPUShaderModuleDescriptor : public emlite::Val {
  explicit GPUShaderModuleDescriptor(Handle h) noexcept;
public:
    static GPUShaderModuleDescriptor take_ownership(Handle h) noexcept;
    explicit GPUShaderModuleDescriptor(const emlite::Val &val) noexcept;
    GPUShaderModuleDescriptor() noexcept;
    [[nodiscard]] GPUShaderModuleDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::String code() const;
    void code(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> compilationHints() const;
    void compilationHints(const jsbind::TypedArray<jsbind::Any>& value);
};

class GPUComputePipelineDescriptor : public emlite::Val {
  explicit GPUComputePipelineDescriptor(Handle h) noexcept;
public:
    static GPUComputePipelineDescriptor take_ownership(Handle h) noexcept;
    explicit GPUComputePipelineDescriptor(const emlite::Val &val) noexcept;
    GPUComputePipelineDescriptor() noexcept;
    [[nodiscard]] GPUComputePipelineDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::Any compute() const;
    void compute(const jsbind::Any& value);
};

class GPURenderPipelineDescriptor : public emlite::Val {
  explicit GPURenderPipelineDescriptor(Handle h) noexcept;
public:
    static GPURenderPipelineDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderPipelineDescriptor(const emlite::Val &val) noexcept;
    GPURenderPipelineDescriptor() noexcept;
    [[nodiscard]] GPURenderPipelineDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::Any vertex() const;
    void vertex(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any primitive() const;
    void primitive(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any depthStencil() const;
    void depthStencil(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any multisample() const;
    void multisample(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any fragment() const;
    void fragment(const jsbind::Any& value);
};

class GPUCommandEncoderDescriptor : public emlite::Val {
  explicit GPUCommandEncoderDescriptor(Handle h) noexcept;
public:
    static GPUCommandEncoderDescriptor take_ownership(Handle h) noexcept;
    explicit GPUCommandEncoderDescriptor(const emlite::Val &val) noexcept;
    GPUCommandEncoderDescriptor() noexcept;
    [[nodiscard]] GPUCommandEncoderDescriptor clone() const noexcept;
};

class GPURenderBundleEncoderDescriptor : public emlite::Val {
  explicit GPURenderBundleEncoderDescriptor(Handle h) noexcept;
public:
    static GPURenderBundleEncoderDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderBundleEncoderDescriptor(const emlite::Val &val) noexcept;
    GPURenderBundleEncoderDescriptor() noexcept;
    [[nodiscard]] GPURenderBundleEncoderDescriptor clone() const noexcept;
    [[nodiscard]] bool depthReadOnly() const;
    void depthReadOnly(bool value);
    [[nodiscard]] bool stencilReadOnly() const;
    void stencilReadOnly(bool value);
};

class GPUQuerySetDescriptor : public emlite::Val {
  explicit GPUQuerySetDescriptor(Handle h) noexcept;
public:
    static GPUQuerySetDescriptor take_ownership(Handle h) noexcept;
    explicit GPUQuerySetDescriptor(const emlite::Val &val) noexcept;
    GPUQuerySetDescriptor() noexcept;
    [[nodiscard]] GPUQuerySetDescriptor clone() const noexcept;
    [[nodiscard]] GPUQueryType type() const;
    void type(const GPUQueryType& value);
    [[nodiscard]] jsbind::Any count() const;
    void count(const jsbind::Any& value);
};

/// The GPUDevice class.
/// [`GPUDevice`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice)
class GPUDevice : public EventTarget {
    explicit GPUDevice(Handle h) noexcept;

public:
    explicit GPUDevice(const emlite::Val &val) noexcept;
    static GPUDevice take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUDevice clone() const noexcept;
    /// Getter of the `features` attribute.
    /// [`GPUDevice.features`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/features)
    [[nodiscard]] GPUSupportedFeatures features() const;
    /// Getter of the `limits` attribute.
    /// [`GPUDevice.limits`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/limits)
    [[nodiscard]] GPUSupportedLimits limits() const;
    /// Getter of the `adapterInfo` attribute.
    /// [`GPUDevice.adapterInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/adapterInfo)
    [[nodiscard]] GPUAdapterInfo adapterInfo() const;
    /// Getter of the `queue` attribute.
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
    /// Getter of the `lost` attribute.
    /// [`GPUDevice.lost`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/lost)
    [[nodiscard]] jsbind::Promise<GPUDeviceLostInfo> lost() const;
    /// The pushErrorScope method.
    /// [`GPUDevice.pushErrorScope`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/pushErrorScope)
    jsbind::Undefined pushErrorScope(const GPUErrorFilter& filter);
    /// The popErrorScope method.
    /// [`GPUDevice.popErrorScope`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/popErrorScope)
    jsbind::Promise<GPUError> popErrorScope();
    /// Getter of the `onuncapturederror` attribute.
    /// [`GPUDevice.onuncapturederror`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/onuncapturederror)
    [[nodiscard]] jsbind::Any onuncapturederror() const;
    /// Setter of the `onuncapturederror` attribute.
    /// [`GPUDevice.onuncapturederror`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/onuncapturederror)
    void onuncapturederror(const jsbind::Any& value);
    /// Getter of the `label` attribute.
    /// [`GPUDevice.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUDevice.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice/label)
    void label(const jsbind::String& value);
};

