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
    GPUBufferDescriptor clone() const noexcept;
    jsbind::Any size() const;
    void size(const jsbind::Any& value);
    jsbind::Any usage() const;
    void usage(const jsbind::Any& value);
    bool mappedAtCreation() const;
    void mappedAtCreation(bool value);
};

class GPUTextureDescriptor : public emlite::Val {
  explicit GPUTextureDescriptor(Handle h) noexcept;
public:
    static GPUTextureDescriptor take_ownership(Handle h) noexcept;
    explicit GPUTextureDescriptor(const emlite::Val &val) noexcept;
    GPUTextureDescriptor() noexcept;
    GPUTextureDescriptor clone() const noexcept;
    jsbind::Any size() const;
    void size(const jsbind::Any& value);
    jsbind::Any mipLevelCount() const;
    void mipLevelCount(const jsbind::Any& value);
    jsbind::Any sampleCount() const;
    void sampleCount(const jsbind::Any& value);
    GPUTextureDimension dimension() const;
    void dimension(const GPUTextureDimension& value);
    GPUTextureFormat format() const;
    void format(const GPUTextureFormat& value);
    jsbind::Any usage() const;
    void usage(const jsbind::Any& value);
    jsbind::Sequence<GPUTextureFormat> viewFormats() const;
    void viewFormats(const jsbind::Sequence<GPUTextureFormat>& value);
};

class GPUSamplerDescriptor : public emlite::Val {
  explicit GPUSamplerDescriptor(Handle h) noexcept;
public:
    static GPUSamplerDescriptor take_ownership(Handle h) noexcept;
    explicit GPUSamplerDescriptor(const emlite::Val &val) noexcept;
    GPUSamplerDescriptor() noexcept;
    GPUSamplerDescriptor clone() const noexcept;
    GPUAddressMode addressModeU() const;
    void addressModeU(const GPUAddressMode& value);
    GPUAddressMode addressModeV() const;
    void addressModeV(const GPUAddressMode& value);
    GPUAddressMode addressModeW() const;
    void addressModeW(const GPUAddressMode& value);
    GPUFilterMode magFilter() const;
    void magFilter(const GPUFilterMode& value);
    GPUFilterMode minFilter() const;
    void minFilter(const GPUFilterMode& value);
    GPUMipmapFilterMode mipmapFilter() const;
    void mipmapFilter(const GPUMipmapFilterMode& value);
    float lodMinClamp() const;
    void lodMinClamp(float value);
    float lodMaxClamp() const;
    void lodMaxClamp(float value);
    GPUCompareFunction compare() const;
    void compare(const GPUCompareFunction& value);
    unsigned short maxAnisotropy() const;
    void maxAnisotropy(unsigned short value);
};

class GPUExternalTextureDescriptor : public emlite::Val {
  explicit GPUExternalTextureDescriptor(Handle h) noexcept;
public:
    static GPUExternalTextureDescriptor take_ownership(Handle h) noexcept;
    explicit GPUExternalTextureDescriptor(const emlite::Val &val) noexcept;
    GPUExternalTextureDescriptor() noexcept;
    GPUExternalTextureDescriptor clone() const noexcept;
    jsbind::Any source() const;
    void source(const jsbind::Any& value);
    PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
};

class GPUBindGroupLayoutDescriptor : public emlite::Val {
  explicit GPUBindGroupLayoutDescriptor(Handle h) noexcept;
public:
    static GPUBindGroupLayoutDescriptor take_ownership(Handle h) noexcept;
    explicit GPUBindGroupLayoutDescriptor(const emlite::Val &val) noexcept;
    GPUBindGroupLayoutDescriptor() noexcept;
    GPUBindGroupLayoutDescriptor clone() const noexcept;
    jsbind::Sequence<jsbind::Any> entries() const;
    void entries(const jsbind::Sequence<jsbind::Any>& value);
};

class GPUPipelineLayoutDescriptor : public emlite::Val {
  explicit GPUPipelineLayoutDescriptor(Handle h) noexcept;
public:
    static GPUPipelineLayoutDescriptor take_ownership(Handle h) noexcept;
    explicit GPUPipelineLayoutDescriptor(const emlite::Val &val) noexcept;
    GPUPipelineLayoutDescriptor() noexcept;
    GPUPipelineLayoutDescriptor clone() const noexcept;
    jsbind::Sequence<GPUBindGroupLayout> bindGroupLayouts() const;
    void bindGroupLayouts(const jsbind::Sequence<GPUBindGroupLayout>& value);
};

class GPUBindGroupDescriptor : public emlite::Val {
  explicit GPUBindGroupDescriptor(Handle h) noexcept;
public:
    static GPUBindGroupDescriptor take_ownership(Handle h) noexcept;
    explicit GPUBindGroupDescriptor(const emlite::Val &val) noexcept;
    GPUBindGroupDescriptor() noexcept;
    GPUBindGroupDescriptor clone() const noexcept;
    GPUBindGroupLayout layout() const;
    void layout(const GPUBindGroupLayout& value);
    jsbind::Sequence<jsbind::Any> entries() const;
    void entries(const jsbind::Sequence<jsbind::Any>& value);
};

class GPUShaderModuleDescriptor : public emlite::Val {
  explicit GPUShaderModuleDescriptor(Handle h) noexcept;
public:
    static GPUShaderModuleDescriptor take_ownership(Handle h) noexcept;
    explicit GPUShaderModuleDescriptor(const emlite::Val &val) noexcept;
    GPUShaderModuleDescriptor() noexcept;
    GPUShaderModuleDescriptor clone() const noexcept;
    jsbind::USVString code() const;
    void code(const jsbind::USVString& value);
    jsbind::Sequence<jsbind::Any> compilationHints() const;
    void compilationHints(const jsbind::Sequence<jsbind::Any>& value);
};

class GPUComputePipelineDescriptor : public emlite::Val {
  explicit GPUComputePipelineDescriptor(Handle h) noexcept;
public:
    static GPUComputePipelineDescriptor take_ownership(Handle h) noexcept;
    explicit GPUComputePipelineDescriptor(const emlite::Val &val) noexcept;
    GPUComputePipelineDescriptor() noexcept;
    GPUComputePipelineDescriptor clone() const noexcept;
    jsbind::Any compute() const;
    void compute(const jsbind::Any& value);
};

class GPURenderPipelineDescriptor : public emlite::Val {
  explicit GPURenderPipelineDescriptor(Handle h) noexcept;
public:
    static GPURenderPipelineDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderPipelineDescriptor(const emlite::Val &val) noexcept;
    GPURenderPipelineDescriptor() noexcept;
    GPURenderPipelineDescriptor clone() const noexcept;
    jsbind::Any vertex() const;
    void vertex(const jsbind::Any& value);
    jsbind::Any primitive() const;
    void primitive(const jsbind::Any& value);
    jsbind::Any depthStencil() const;
    void depthStencil(const jsbind::Any& value);
    jsbind::Any multisample() const;
    void multisample(const jsbind::Any& value);
    jsbind::Any fragment() const;
    void fragment(const jsbind::Any& value);
};

class GPUCommandEncoderDescriptor : public emlite::Val {
  explicit GPUCommandEncoderDescriptor(Handle h) noexcept;
public:
    static GPUCommandEncoderDescriptor take_ownership(Handle h) noexcept;
    explicit GPUCommandEncoderDescriptor(const emlite::Val &val) noexcept;
    GPUCommandEncoderDescriptor() noexcept;
    GPUCommandEncoderDescriptor clone() const noexcept;
};

class GPURenderBundleEncoderDescriptor : public emlite::Val {
  explicit GPURenderBundleEncoderDescriptor(Handle h) noexcept;
public:
    static GPURenderBundleEncoderDescriptor take_ownership(Handle h) noexcept;
    explicit GPURenderBundleEncoderDescriptor(const emlite::Val &val) noexcept;
    GPURenderBundleEncoderDescriptor() noexcept;
    GPURenderBundleEncoderDescriptor clone() const noexcept;
    bool depthReadOnly() const;
    void depthReadOnly(bool value);
    bool stencilReadOnly() const;
    void stencilReadOnly(bool value);
};

class GPUQuerySetDescriptor : public emlite::Val {
  explicit GPUQuerySetDescriptor(Handle h) noexcept;
public:
    static GPUQuerySetDescriptor take_ownership(Handle h) noexcept;
    explicit GPUQuerySetDescriptor(const emlite::Val &val) noexcept;
    GPUQuerySetDescriptor() noexcept;
    GPUQuerySetDescriptor clone() const noexcept;
    GPUQueryType type() const;
    void type(const GPUQueryType& value);
    jsbind::Any count() const;
    void count(const jsbind::Any& value);
};

class GPUDevice : public EventTarget {
    explicit GPUDevice(Handle h) noexcept;

public:
    explicit GPUDevice(const emlite::Val &val) noexcept;
    static GPUDevice take_ownership(Handle h) noexcept;

    GPUDevice clone() const noexcept;
    GPUSupportedFeatures features() const;
    GPUSupportedLimits limits() const;
    GPUAdapterInfo adapterInfo() const;
    GPUQueue queue() const;
    jsbind::Undefined destroy();
    GPUBuffer createBuffer(const GPUBufferDescriptor& descriptor);
    GPUTexture createTexture(const GPUTextureDescriptor& descriptor);
    GPUSampler createSampler();
    GPUSampler createSampler(const GPUSamplerDescriptor& descriptor);
    GPUExternalTexture importExternalTexture(const GPUExternalTextureDescriptor& descriptor);
    GPUBindGroupLayout createBindGroupLayout(const GPUBindGroupLayoutDescriptor& descriptor);
    GPUPipelineLayout createPipelineLayout(const GPUPipelineLayoutDescriptor& descriptor);
    GPUBindGroup createBindGroup(const GPUBindGroupDescriptor& descriptor);
    GPUShaderModule createShaderModule(const GPUShaderModuleDescriptor& descriptor);
    GPUComputePipeline createComputePipeline(const GPUComputePipelineDescriptor& descriptor);
    GPURenderPipeline createRenderPipeline(const GPURenderPipelineDescriptor& descriptor);
    jsbind::Promise<GPUComputePipeline> createComputePipelineAsync(const GPUComputePipelineDescriptor& descriptor);
    jsbind::Promise<GPURenderPipeline> createRenderPipelineAsync(const GPURenderPipelineDescriptor& descriptor);
    GPUCommandEncoder createCommandEncoder();
    GPUCommandEncoder createCommandEncoder(const GPUCommandEncoderDescriptor& descriptor);
    GPURenderBundleEncoder createRenderBundleEncoder(const GPURenderBundleEncoderDescriptor& descriptor);
    GPUQuerySet createQuerySet(const GPUQuerySetDescriptor& descriptor);
    jsbind::Promise<GPUDeviceLostInfo> lost() const;
    jsbind::Undefined pushErrorScope(const GPUErrorFilter& filter);
    jsbind::Promise<GPUError> popErrorScope();
    jsbind::Any onuncapturederror() const;
    void onuncapturederror(const jsbind::Any& value);
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
};

