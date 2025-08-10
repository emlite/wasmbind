#include <webbind/GPUQueue.hpp>
#include <webbind/GPUCommandBuffer.hpp>
#include <webbind/GPUBuffer.hpp>
#include <webbind/GPUTexelCopyTextureInfo.hpp>
#include <webbind/GPUTexelCopyBufferLayout.hpp>
#include <webbind/GPUCopyExternalImageSourceInfo.hpp>
#include <webbind/GPUCopyExternalImageDestInfo.hpp>

namespace webbind {

GPUQueue GPUQueue::take_ownership(Handle h) noexcept {
    return GPUQueue(h);
}

GPUQueue GPUQueue::clone() const noexcept { return *this; }

emlite::Val GPUQueue::instance() noexcept { return emlite::Val::global("GPUQueue"); }

GPUQueue::GPUQueue(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

GPUQueue::GPUQueue(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined GPUQueue::submit(const jsbind::TypedArray<GPUCommandBuffer>& commandBuffers) {
    return emlite::Val::call("submit", commandBuffers).as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> GPUQueue::onSubmittedWorkDone() {
    return emlite::Val::call("onSubmittedWorkDone").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined GPUQueue::writeBuffer(const GPUBuffer& buffer, const jsbind::Any& bufferOffset, const jsbind::Any& data) {
    return emlite::Val::call("writeBuffer", buffer, bufferOffset, data).as<jsbind::Undefined>();
}

jsbind::Undefined GPUQueue::writeBuffer(const GPUBuffer& buffer, const jsbind::Any& bufferOffset, const jsbind::Any& data, const jsbind::Any& dataOffset) {
    return emlite::Val::call("writeBuffer", buffer, bufferOffset, data, dataOffset).as<jsbind::Undefined>();
}

jsbind::Undefined GPUQueue::writeBuffer(const GPUBuffer& buffer, const jsbind::Any& bufferOffset, const jsbind::Any& data, const jsbind::Any& dataOffset, const jsbind::Any& size) {
    return emlite::Val::call("writeBuffer", buffer, bufferOffset, data, dataOffset, size).as<jsbind::Undefined>();
}

jsbind::Undefined GPUQueue::writeTexture(const GPUTexelCopyTextureInfo& destination, const jsbind::Any& data, const GPUTexelCopyBufferLayout& dataLayout, const jsbind::Any& size) {
    return emlite::Val::call("writeTexture", destination, data, dataLayout, size).as<jsbind::Undefined>();
}

jsbind::Undefined GPUQueue::copyExternalImageToTexture(const GPUCopyExternalImageSourceInfo& source, const GPUCopyExternalImageDestInfo& destination, const jsbind::Any& copySize) {
    return emlite::Val::call("copyExternalImageToTexture", source, destination, copySize).as<jsbind::Undefined>();
}

jsbind::String GPUQueue::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUQueue::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}


} // namespace webbind