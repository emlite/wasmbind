#include "webbind/GPUDevice.hpp"
#include "webbind/GPUSupportedFeatures.hpp"
#include "webbind/GPUSupportedLimits.hpp"
#include "webbind/GPUAdapterInfo.hpp"
#include "webbind/GPUQueue.hpp"
#include "webbind/GPUBuffer.hpp"
#include "webbind/GPUBufferDescriptor.hpp"
#include "webbind/GPUTexture.hpp"
#include "webbind/GPUTextureDescriptor.hpp"
#include "webbind/GPUSampler.hpp"
#include "webbind/GPUSamplerDescriptor.hpp"
#include "webbind/GPUExternalTexture.hpp"
#include "webbind/GPUExternalTextureDescriptor.hpp"
#include "webbind/GPUBindGroupLayout.hpp"
#include "webbind/GPUBindGroupLayoutDescriptor.hpp"
#include "webbind/GPUPipelineLayout.hpp"
#include "webbind/GPUPipelineLayoutDescriptor.hpp"
#include "webbind/GPUBindGroup.hpp"
#include "webbind/GPUBindGroupDescriptor.hpp"
#include "webbind/GPUShaderModule.hpp"
#include "webbind/GPUShaderModuleDescriptor.hpp"
#include "webbind/GPUComputePipeline.hpp"
#include "webbind/GPUComputePipelineDescriptor.hpp"
#include "webbind/GPURenderPipeline.hpp"
#include "webbind/GPURenderPipelineDescriptor.hpp"
#include "webbind/GPUCommandEncoder.hpp"
#include "webbind/GPUCommandEncoderDescriptor.hpp"
#include "webbind/GPURenderBundleEncoder.hpp"
#include "webbind/GPURenderBundleEncoderDescriptor.hpp"
#include "webbind/GPUQuerySet.hpp"
#include "webbind/GPUQuerySetDescriptor.hpp"
#include "webbind/GPUDeviceLostInfo.hpp"
#include "webbind/GPUError.hpp"

namespace webbind {

GPUDevice GPUDevice::take_ownership(Handle h) noexcept {
        return GPUDevice(h);
    }
GPUDevice GPUDevice::clone() const noexcept { return *this; }
emlite::Val GPUDevice::instance() noexcept { return emlite::Val::global("GPUDevice"); }
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

GPUSampler GPUDevice::createSampler() {
    return EventTarget::call("createSampler").as<GPUSampler>();
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

jsbind::Promise<GPUComputePipeline> GPUDevice::createComputePipelineAsync(const GPUComputePipelineDescriptor& descriptor) {
    return EventTarget::call("createComputePipelineAsync", descriptor).as<jsbind::Promise<GPUComputePipeline>>();
}

jsbind::Promise<GPURenderPipeline> GPUDevice::createRenderPipelineAsync(const GPURenderPipelineDescriptor& descriptor) {
    return EventTarget::call("createRenderPipelineAsync", descriptor).as<jsbind::Promise<GPURenderPipeline>>();
}

GPUCommandEncoder GPUDevice::createCommandEncoder() {
    return EventTarget::call("createCommandEncoder").as<GPUCommandEncoder>();
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

jsbind::Promise<GPUDeviceLostInfo> GPUDevice::lost() const {
    return EventTarget::get("lost").as<jsbind::Promise<GPUDeviceLostInfo>>();
}

jsbind::Undefined GPUDevice::pushErrorScope(const GPUErrorFilter& filter) {
    return EventTarget::call("pushErrorScope", filter).as<jsbind::Undefined>();
}

jsbind::Promise<GPUError> GPUDevice::popErrorScope() {
    return EventTarget::call("popErrorScope").as<jsbind::Promise<GPUError>>();
}

jsbind::Any GPUDevice::onuncapturederror() const {
    return EventTarget::get("onuncapturederror").as<jsbind::Any>();
}

void GPUDevice::onuncapturederror(const jsbind::Any& value) {
    EventTarget::set("onuncapturederror", value);
}

jsbind::String GPUDevice::label() const {
    return EventTarget::get("label").as<jsbind::String>();
}

void GPUDevice::label(const jsbind::String& value) {
    EventTarget::set("label", value);
}


} // namespace webbind