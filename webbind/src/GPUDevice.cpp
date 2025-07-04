#include <webbind/GPUDevice.hpp>
#include <webbind/GPUSupportedFeatures.hpp>
#include <webbind/GPUSupportedLimits.hpp>
#include <webbind/GPUAdapterInfo.hpp>
#include <webbind/GPUQueue.hpp>
#include <webbind/GPUBuffer.hpp>
#include <webbind/GPUTexture.hpp>
#include <webbind/GPUSampler.hpp>
#include <webbind/GPUExternalTexture.hpp>
#include <webbind/GPUBindGroupLayout.hpp>
#include <webbind/GPUPipelineLayout.hpp>
#include <webbind/GPUBindGroup.hpp>
#include <webbind/GPUShaderModule.hpp>
#include <webbind/GPUComputePipeline.hpp>
#include <webbind/GPURenderPipeline.hpp>
#include <webbind/GPUCommandEncoder.hpp>
#include <webbind/GPURenderBundleEncoder.hpp>
#include <webbind/GPUQuerySet.hpp>
#include <webbind/GPUDeviceLostInfo.hpp>
#include <webbind/GPUError.hpp>


GPUBufferDescriptor::GPUBufferDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBufferDescriptor GPUBufferDescriptor::take_ownership(Handle h) noexcept {
        return GPUBufferDescriptor(h);
    }
GPUBufferDescriptor::GPUBufferDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUBufferDescriptor::GPUBufferDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUBufferDescriptor GPUBufferDescriptor::clone() const noexcept { return *this; }

jsbind::Any GPUBufferDescriptor::size() const {
    return emlite::Val::get("size").as<jsbind::Any>();
}

void GPUBufferDescriptor::size(const jsbind::Any& value) {
    emlite::Val::set("size", value);
}

jsbind::Any GPUBufferDescriptor::usage() const {
    return emlite::Val::get("usage").as<jsbind::Any>();
}

void GPUBufferDescriptor::usage(const jsbind::Any& value) {
    emlite::Val::set("usage", value);
}

bool GPUBufferDescriptor::mappedAtCreation() const {
    return emlite::Val::get("mappedAtCreation").as<bool>();
}

void GPUBufferDescriptor::mappedAtCreation(bool value) {
    emlite::Val::set("mappedAtCreation", value);
}

GPUTextureDescriptor::GPUTextureDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUTextureDescriptor GPUTextureDescriptor::take_ownership(Handle h) noexcept {
        return GPUTextureDescriptor(h);
    }
GPUTextureDescriptor::GPUTextureDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUTextureDescriptor::GPUTextureDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUTextureDescriptor GPUTextureDescriptor::clone() const noexcept { return *this; }

jsbind::Any GPUTextureDescriptor::size() const {
    return emlite::Val::get("size").as<jsbind::Any>();
}

void GPUTextureDescriptor::size(const jsbind::Any& value) {
    emlite::Val::set("size", value);
}

jsbind::Any GPUTextureDescriptor::mipLevelCount() const {
    return emlite::Val::get("mipLevelCount").as<jsbind::Any>();
}

void GPUTextureDescriptor::mipLevelCount(const jsbind::Any& value) {
    emlite::Val::set("mipLevelCount", value);
}

jsbind::Any GPUTextureDescriptor::sampleCount() const {
    return emlite::Val::get("sampleCount").as<jsbind::Any>();
}

void GPUTextureDescriptor::sampleCount(const jsbind::Any& value) {
    emlite::Val::set("sampleCount", value);
}

GPUTextureDimension GPUTextureDescriptor::dimension() const {
    return emlite::Val::get("dimension").as<GPUTextureDimension>();
}

void GPUTextureDescriptor::dimension(const GPUTextureDimension& value) {
    emlite::Val::set("dimension", value);
}

GPUTextureFormat GPUTextureDescriptor::format() const {
    return emlite::Val::get("format").as<GPUTextureFormat>();
}

void GPUTextureDescriptor::format(const GPUTextureFormat& value) {
    emlite::Val::set("format", value);
}

jsbind::Any GPUTextureDescriptor::usage() const {
    return emlite::Val::get("usage").as<jsbind::Any>();
}

void GPUTextureDescriptor::usage(const jsbind::Any& value) {
    emlite::Val::set("usage", value);
}

jsbind::Sequence<GPUTextureFormat> GPUTextureDescriptor::viewFormats() const {
    return emlite::Val::get("viewFormats").as<jsbind::Sequence<GPUTextureFormat>>();
}

void GPUTextureDescriptor::viewFormats(const jsbind::Sequence<GPUTextureFormat>& value) {
    emlite::Val::set("viewFormats", value);
}

GPUSamplerDescriptor::GPUSamplerDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUSamplerDescriptor GPUSamplerDescriptor::take_ownership(Handle h) noexcept {
        return GPUSamplerDescriptor(h);
    }
GPUSamplerDescriptor::GPUSamplerDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUSamplerDescriptor::GPUSamplerDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUSamplerDescriptor GPUSamplerDescriptor::clone() const noexcept { return *this; }

GPUAddressMode GPUSamplerDescriptor::addressModeU() const {
    return emlite::Val::get("addressModeU").as<GPUAddressMode>();
}

void GPUSamplerDescriptor::addressModeU(const GPUAddressMode& value) {
    emlite::Val::set("addressModeU", value);
}

GPUAddressMode GPUSamplerDescriptor::addressModeV() const {
    return emlite::Val::get("addressModeV").as<GPUAddressMode>();
}

void GPUSamplerDescriptor::addressModeV(const GPUAddressMode& value) {
    emlite::Val::set("addressModeV", value);
}

GPUAddressMode GPUSamplerDescriptor::addressModeW() const {
    return emlite::Val::get("addressModeW").as<GPUAddressMode>();
}

void GPUSamplerDescriptor::addressModeW(const GPUAddressMode& value) {
    emlite::Val::set("addressModeW", value);
}

GPUFilterMode GPUSamplerDescriptor::magFilter() const {
    return emlite::Val::get("magFilter").as<GPUFilterMode>();
}

void GPUSamplerDescriptor::magFilter(const GPUFilterMode& value) {
    emlite::Val::set("magFilter", value);
}

GPUFilterMode GPUSamplerDescriptor::minFilter() const {
    return emlite::Val::get("minFilter").as<GPUFilterMode>();
}

void GPUSamplerDescriptor::minFilter(const GPUFilterMode& value) {
    emlite::Val::set("minFilter", value);
}

GPUMipmapFilterMode GPUSamplerDescriptor::mipmapFilter() const {
    return emlite::Val::get("mipmapFilter").as<GPUMipmapFilterMode>();
}

void GPUSamplerDescriptor::mipmapFilter(const GPUMipmapFilterMode& value) {
    emlite::Val::set("mipmapFilter", value);
}

float GPUSamplerDescriptor::lodMinClamp() const {
    return emlite::Val::get("lodMinClamp").as<float>();
}

void GPUSamplerDescriptor::lodMinClamp(float value) {
    emlite::Val::set("lodMinClamp", value);
}

float GPUSamplerDescriptor::lodMaxClamp() const {
    return emlite::Val::get("lodMaxClamp").as<float>();
}

void GPUSamplerDescriptor::lodMaxClamp(float value) {
    emlite::Val::set("lodMaxClamp", value);
}

GPUCompareFunction GPUSamplerDescriptor::compare() const {
    return emlite::Val::get("compare").as<GPUCompareFunction>();
}

void GPUSamplerDescriptor::compare(const GPUCompareFunction& value) {
    emlite::Val::set("compare", value);
}

unsigned short GPUSamplerDescriptor::maxAnisotropy() const {
    return emlite::Val::get("maxAnisotropy").as<unsigned short>();
}

void GPUSamplerDescriptor::maxAnisotropy(unsigned short value) {
    emlite::Val::set("maxAnisotropy", value);
}

GPUExternalTextureDescriptor::GPUExternalTextureDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUExternalTextureDescriptor GPUExternalTextureDescriptor::take_ownership(Handle h) noexcept {
        return GPUExternalTextureDescriptor(h);
    }
GPUExternalTextureDescriptor::GPUExternalTextureDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUExternalTextureDescriptor::GPUExternalTextureDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUExternalTextureDescriptor GPUExternalTextureDescriptor::clone() const noexcept { return *this; }

jsbind::Any GPUExternalTextureDescriptor::source() const {
    return emlite::Val::get("source").as<jsbind::Any>();
}

void GPUExternalTextureDescriptor::source(const jsbind::Any& value) {
    emlite::Val::set("source", value);
}

PredefinedColorSpace GPUExternalTextureDescriptor::colorSpace() const {
    return emlite::Val::get("colorSpace").as<PredefinedColorSpace>();
}

void GPUExternalTextureDescriptor::colorSpace(const PredefinedColorSpace& value) {
    emlite::Val::set("colorSpace", value);
}

GPUBindGroupLayoutDescriptor::GPUBindGroupLayoutDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBindGroupLayoutDescriptor GPUBindGroupLayoutDescriptor::take_ownership(Handle h) noexcept {
        return GPUBindGroupLayoutDescriptor(h);
    }
GPUBindGroupLayoutDescriptor::GPUBindGroupLayoutDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUBindGroupLayoutDescriptor::GPUBindGroupLayoutDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUBindGroupLayoutDescriptor GPUBindGroupLayoutDescriptor::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::Any> GPUBindGroupLayoutDescriptor::entries() const {
    return emlite::Val::get("entries").as<jsbind::Sequence<jsbind::Any>>();
}

void GPUBindGroupLayoutDescriptor::entries(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("entries", value);
}

GPUPipelineLayoutDescriptor::GPUPipelineLayoutDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUPipelineLayoutDescriptor GPUPipelineLayoutDescriptor::take_ownership(Handle h) noexcept {
        return GPUPipelineLayoutDescriptor(h);
    }
GPUPipelineLayoutDescriptor::GPUPipelineLayoutDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUPipelineLayoutDescriptor::GPUPipelineLayoutDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUPipelineLayoutDescriptor GPUPipelineLayoutDescriptor::clone() const noexcept { return *this; }

jsbind::Sequence<GPUBindGroupLayout> GPUPipelineLayoutDescriptor::bindGroupLayouts() const {
    return emlite::Val::get("bindGroupLayouts").as<jsbind::Sequence<GPUBindGroupLayout>>();
}

void GPUPipelineLayoutDescriptor::bindGroupLayouts(const jsbind::Sequence<GPUBindGroupLayout>& value) {
    emlite::Val::set("bindGroupLayouts", value);
}

GPUBindGroupDescriptor::GPUBindGroupDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBindGroupDescriptor GPUBindGroupDescriptor::take_ownership(Handle h) noexcept {
        return GPUBindGroupDescriptor(h);
    }
GPUBindGroupDescriptor::GPUBindGroupDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUBindGroupDescriptor::GPUBindGroupDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUBindGroupDescriptor GPUBindGroupDescriptor::clone() const noexcept { return *this; }

GPUBindGroupLayout GPUBindGroupDescriptor::layout() const {
    return emlite::Val::get("layout").as<GPUBindGroupLayout>();
}

void GPUBindGroupDescriptor::layout(const GPUBindGroupLayout& value) {
    emlite::Val::set("layout", value);
}

jsbind::Sequence<jsbind::Any> GPUBindGroupDescriptor::entries() const {
    return emlite::Val::get("entries").as<jsbind::Sequence<jsbind::Any>>();
}

void GPUBindGroupDescriptor::entries(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("entries", value);
}

GPUShaderModuleDescriptor::GPUShaderModuleDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUShaderModuleDescriptor GPUShaderModuleDescriptor::take_ownership(Handle h) noexcept {
        return GPUShaderModuleDescriptor(h);
    }
GPUShaderModuleDescriptor::GPUShaderModuleDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUShaderModuleDescriptor::GPUShaderModuleDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUShaderModuleDescriptor GPUShaderModuleDescriptor::clone() const noexcept { return *this; }

jsbind::USVString GPUShaderModuleDescriptor::code() const {
    return emlite::Val::get("code").as<jsbind::USVString>();
}

void GPUShaderModuleDescriptor::code(const jsbind::USVString& value) {
    emlite::Val::set("code", value);
}

jsbind::Sequence<jsbind::Any> GPUShaderModuleDescriptor::compilationHints() const {
    return emlite::Val::get("compilationHints").as<jsbind::Sequence<jsbind::Any>>();
}

void GPUShaderModuleDescriptor::compilationHints(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("compilationHints", value);
}

GPUComputePipelineDescriptor::GPUComputePipelineDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUComputePipelineDescriptor GPUComputePipelineDescriptor::take_ownership(Handle h) noexcept {
        return GPUComputePipelineDescriptor(h);
    }
GPUComputePipelineDescriptor::GPUComputePipelineDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUComputePipelineDescriptor::GPUComputePipelineDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUComputePipelineDescriptor GPUComputePipelineDescriptor::clone() const noexcept { return *this; }

jsbind::Any GPUComputePipelineDescriptor::compute() const {
    return emlite::Val::get("compute").as<jsbind::Any>();
}

void GPUComputePipelineDescriptor::compute(const jsbind::Any& value) {
    emlite::Val::set("compute", value);
}

GPURenderPipelineDescriptor::GPURenderPipelineDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderPipelineDescriptor GPURenderPipelineDescriptor::take_ownership(Handle h) noexcept {
        return GPURenderPipelineDescriptor(h);
    }
GPURenderPipelineDescriptor::GPURenderPipelineDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPURenderPipelineDescriptor::GPURenderPipelineDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPURenderPipelineDescriptor GPURenderPipelineDescriptor::clone() const noexcept { return *this; }

jsbind::Any GPURenderPipelineDescriptor::vertex() const {
    return emlite::Val::get("vertex").as<jsbind::Any>();
}

void GPURenderPipelineDescriptor::vertex(const jsbind::Any& value) {
    emlite::Val::set("vertex", value);
}

jsbind::Any GPURenderPipelineDescriptor::primitive() const {
    return emlite::Val::get("primitive").as<jsbind::Any>();
}

void GPURenderPipelineDescriptor::primitive(const jsbind::Any& value) {
    emlite::Val::set("primitive", value);
}

jsbind::Any GPURenderPipelineDescriptor::depthStencil() const {
    return emlite::Val::get("depthStencil").as<jsbind::Any>();
}

void GPURenderPipelineDescriptor::depthStencil(const jsbind::Any& value) {
    emlite::Val::set("depthStencil", value);
}

jsbind::Any GPURenderPipelineDescriptor::multisample() const {
    return emlite::Val::get("multisample").as<jsbind::Any>();
}

void GPURenderPipelineDescriptor::multisample(const jsbind::Any& value) {
    emlite::Val::set("multisample", value);
}

jsbind::Any GPURenderPipelineDescriptor::fragment() const {
    return emlite::Val::get("fragment").as<jsbind::Any>();
}

void GPURenderPipelineDescriptor::fragment(const jsbind::Any& value) {
    emlite::Val::set("fragment", value);
}

GPUCommandEncoderDescriptor::GPUCommandEncoderDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCommandEncoderDescriptor GPUCommandEncoderDescriptor::take_ownership(Handle h) noexcept {
        return GPUCommandEncoderDescriptor(h);
    }
GPUCommandEncoderDescriptor::GPUCommandEncoderDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUCommandEncoderDescriptor::GPUCommandEncoderDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUCommandEncoderDescriptor GPUCommandEncoderDescriptor::clone() const noexcept { return *this; }

GPURenderBundleEncoderDescriptor::GPURenderBundleEncoderDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURenderBundleEncoderDescriptor GPURenderBundleEncoderDescriptor::take_ownership(Handle h) noexcept {
        return GPURenderBundleEncoderDescriptor(h);
    }
GPURenderBundleEncoderDescriptor::GPURenderBundleEncoderDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPURenderBundleEncoderDescriptor::GPURenderBundleEncoderDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPURenderBundleEncoderDescriptor GPURenderBundleEncoderDescriptor::clone() const noexcept { return *this; }

bool GPURenderBundleEncoderDescriptor::depthReadOnly() const {
    return emlite::Val::get("depthReadOnly").as<bool>();
}

void GPURenderBundleEncoderDescriptor::depthReadOnly(bool value) {
    emlite::Val::set("depthReadOnly", value);
}

bool GPURenderBundleEncoderDescriptor::stencilReadOnly() const {
    return emlite::Val::get("stencilReadOnly").as<bool>();
}

void GPURenderBundleEncoderDescriptor::stencilReadOnly(bool value) {
    emlite::Val::set("stencilReadOnly", value);
}

GPUQuerySetDescriptor::GPUQuerySetDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUQuerySetDescriptor GPUQuerySetDescriptor::take_ownership(Handle h) noexcept {
        return GPUQuerySetDescriptor(h);
    }
GPUQuerySetDescriptor::GPUQuerySetDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUQuerySetDescriptor::GPUQuerySetDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUQuerySetDescriptor GPUQuerySetDescriptor::clone() const noexcept { return *this; }

GPUQueryType GPUQuerySetDescriptor::type() const {
    return emlite::Val::get("type").as<GPUQueryType>();
}

void GPUQuerySetDescriptor::type(const GPUQueryType& value) {
    emlite::Val::set("type", value);
}

jsbind::Any GPUQuerySetDescriptor::count() const {
    return emlite::Val::get("count").as<jsbind::Any>();
}

void GPUQuerySetDescriptor::count(const jsbind::Any& value) {
    emlite::Val::set("count", value);
}

GPUDevice GPUDevice::take_ownership(Handle h) noexcept {
        return GPUDevice(h);
    }
GPUDevice GPUDevice::clone() const noexcept { return *this; }
GPUDevice::GPUDevice(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
GPUDevice::GPUDevice(const emlite::Val &val) noexcept: EventTarget(val) {}


GPUSupportedFeatures GPUDevice::features() const {
    return EventTarget::get("features").as<GPUSupportedFeatures>();
}

GPUSupportedLimits GPUDevice::limits() const {
    return EventTarget::get("limits").as<GPUSupportedLimits>();
}

GPUAdapterInfo GPUDevice::adapterInfo() const {
    return EventTarget::get("adapterInfo").as<GPUAdapterInfo>();
}

GPUQueue GPUDevice::queue() const {
    return EventTarget::get("queue").as<GPUQueue>();
}

jsbind::Undefined GPUDevice::destroy() {
    return EventTarget::call("destroy").as<jsbind::Undefined>();
}

GPUBuffer GPUDevice::createBuffer(const GPUBufferDescriptor& descriptor) {
    return EventTarget::call("createBuffer", descriptor).as<GPUBuffer>();
}

GPUTexture GPUDevice::createTexture(const GPUTextureDescriptor& descriptor) {
    return EventTarget::call("createTexture", descriptor).as<GPUTexture>();
}

GPUSampler GPUDevice::createSampler(const GPUSamplerDescriptor& descriptor) {
    return EventTarget::call("createSampler", descriptor).as<GPUSampler>();
}

GPUExternalTexture GPUDevice::importExternalTexture(const GPUExternalTextureDescriptor& descriptor) {
    return EventTarget::call("importExternalTexture", descriptor).as<GPUExternalTexture>();
}

GPUBindGroupLayout GPUDevice::createBindGroupLayout(const GPUBindGroupLayoutDescriptor& descriptor) {
    return EventTarget::call("createBindGroupLayout", descriptor).as<GPUBindGroupLayout>();
}

GPUPipelineLayout GPUDevice::createPipelineLayout(const GPUPipelineLayoutDescriptor& descriptor) {
    return EventTarget::call("createPipelineLayout", descriptor).as<GPUPipelineLayout>();
}

GPUBindGroup GPUDevice::createBindGroup(const GPUBindGroupDescriptor& descriptor) {
    return EventTarget::call("createBindGroup", descriptor).as<GPUBindGroup>();
}

GPUShaderModule GPUDevice::createShaderModule(const GPUShaderModuleDescriptor& descriptor) {
    return EventTarget::call("createShaderModule", descriptor).as<GPUShaderModule>();
}

GPUComputePipeline GPUDevice::createComputePipeline(const GPUComputePipelineDescriptor& descriptor) {
    return EventTarget::call("createComputePipeline", descriptor).as<GPUComputePipeline>();
}

GPURenderPipeline GPUDevice::createRenderPipeline(const GPURenderPipelineDescriptor& descriptor) {
    return EventTarget::call("createRenderPipeline", descriptor).as<GPURenderPipeline>();
}

jsbind::Promise GPUDevice::createComputePipelineAsync(const GPUComputePipelineDescriptor& descriptor) {
    return EventTarget::call("createComputePipelineAsync", descriptor).as<jsbind::Promise>();
}

jsbind::Promise GPUDevice::createRenderPipelineAsync(const GPURenderPipelineDescriptor& descriptor) {
    return EventTarget::call("createRenderPipelineAsync", descriptor).as<jsbind::Promise>();
}

GPUCommandEncoder GPUDevice::createCommandEncoder(const GPUCommandEncoderDescriptor& descriptor) {
    return EventTarget::call("createCommandEncoder", descriptor).as<GPUCommandEncoder>();
}

GPURenderBundleEncoder GPUDevice::createRenderBundleEncoder(const GPURenderBundleEncoderDescriptor& descriptor) {
    return EventTarget::call("createRenderBundleEncoder", descriptor).as<GPURenderBundleEncoder>();
}

GPUQuerySet GPUDevice::createQuerySet(const GPUQuerySetDescriptor& descriptor) {
    return EventTarget::call("createQuerySet", descriptor).as<GPUQuerySet>();
}

jsbind::Promise GPUDevice::lost() const {
    return EventTarget::get("lost").as<jsbind::Promise>();
}

jsbind::Undefined GPUDevice::pushErrorScope(const GPUErrorFilter& filter) {
    return EventTarget::call("pushErrorScope", filter).as<jsbind::Undefined>();
}

jsbind::Promise GPUDevice::popErrorScope() {
    return EventTarget::call("popErrorScope").as<jsbind::Promise>();
}

jsbind::Any GPUDevice::onuncapturederror() const {
    return EventTarget::get("onuncapturederror").as<jsbind::Any>();
}

void GPUDevice::onuncapturederror(const jsbind::Any& value) {
    EventTarget::set("onuncapturederror", value);
}

jsbind::USVString GPUDevice::label() const {
    return EventTarget::get("label").as<jsbind::USVString>();
}

void GPUDevice::label(const jsbind::USVString& value) {
    EventTarget::set("label", value);
}

