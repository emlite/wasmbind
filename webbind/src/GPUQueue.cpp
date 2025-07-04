#include <webbind/GPUQueue.hpp>
#include <webbind/GPUCommandBuffer.hpp>
#include <webbind/GPUBuffer.hpp>
#include <webbind/GPUCommandEncoder.hpp>


GPUTexelCopyBufferLayout::GPUTexelCopyBufferLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUTexelCopyBufferLayout GPUTexelCopyBufferLayout::take_ownership(Handle h) noexcept {
        return GPUTexelCopyBufferLayout(h);
    }
GPUTexelCopyBufferLayout::GPUTexelCopyBufferLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUTexelCopyBufferLayout::GPUTexelCopyBufferLayout() noexcept: emlite::Val(emlite::Val::object()) {}
GPUTexelCopyBufferLayout GPUTexelCopyBufferLayout::clone() const noexcept { return *this; }

jsbind::Any GPUTexelCopyBufferLayout::offset() const {
    return emlite::Val::get("offset").as<jsbind::Any>();
}

void GPUTexelCopyBufferLayout::offset(const jsbind::Any& value) {
    emlite::Val::set("offset", value);
}

jsbind::Any GPUTexelCopyBufferLayout::bytesPerRow() const {
    return emlite::Val::get("bytesPerRow").as<jsbind::Any>();
}

void GPUTexelCopyBufferLayout::bytesPerRow(const jsbind::Any& value) {
    emlite::Val::set("bytesPerRow", value);
}

jsbind::Any GPUTexelCopyBufferLayout::rowsPerImage() const {
    return emlite::Val::get("rowsPerImage").as<jsbind::Any>();
}

void GPUTexelCopyBufferLayout::rowsPerImage(const jsbind::Any& value) {
    emlite::Val::set("rowsPerImage", value);
}

GPUCopyExternalImageSourceInfo::GPUCopyExternalImageSourceInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCopyExternalImageSourceInfo GPUCopyExternalImageSourceInfo::take_ownership(Handle h) noexcept {
        return GPUCopyExternalImageSourceInfo(h);
    }
GPUCopyExternalImageSourceInfo::GPUCopyExternalImageSourceInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUCopyExternalImageSourceInfo::GPUCopyExternalImageSourceInfo() noexcept: emlite::Val(emlite::Val::object()) {}
GPUCopyExternalImageSourceInfo GPUCopyExternalImageSourceInfo::clone() const noexcept { return *this; }

jsbind::Any GPUCopyExternalImageSourceInfo::source() const {
    return emlite::Val::get("source").as<jsbind::Any>();
}

void GPUCopyExternalImageSourceInfo::source(const jsbind::Any& value) {
    emlite::Val::set("source", value);
}

jsbind::Any GPUCopyExternalImageSourceInfo::origin() const {
    return emlite::Val::get("origin").as<jsbind::Any>();
}

void GPUCopyExternalImageSourceInfo::origin(const jsbind::Any& value) {
    emlite::Val::set("origin", value);
}

bool GPUCopyExternalImageSourceInfo::flipY() const {
    return emlite::Val::get("flipY").as<bool>();
}

void GPUCopyExternalImageSourceInfo::flipY(bool value) {
    emlite::Val::set("flipY", value);
}

GPUCopyExternalImageDestInfo::GPUCopyExternalImageDestInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCopyExternalImageDestInfo GPUCopyExternalImageDestInfo::take_ownership(Handle h) noexcept {
        return GPUCopyExternalImageDestInfo(h);
    }
GPUCopyExternalImageDestInfo::GPUCopyExternalImageDestInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUCopyExternalImageDestInfo::GPUCopyExternalImageDestInfo() noexcept: emlite::Val(emlite::Val::object()) {}
GPUCopyExternalImageDestInfo GPUCopyExternalImageDestInfo::clone() const noexcept { return *this; }

PredefinedColorSpace GPUCopyExternalImageDestInfo::colorSpace() const {
    return emlite::Val::get("colorSpace").as<PredefinedColorSpace>();
}

void GPUCopyExternalImageDestInfo::colorSpace(const PredefinedColorSpace& value) {
    emlite::Val::set("colorSpace", value);
}

bool GPUCopyExternalImageDestInfo::premultipliedAlpha() const {
    return emlite::Val::get("premultipliedAlpha").as<bool>();
}

void GPUCopyExternalImageDestInfo::premultipliedAlpha(bool value) {
    emlite::Val::set("premultipliedAlpha", value);
}

GPUQueue GPUQueue::take_ownership(Handle h) noexcept {
        return GPUQueue(h);
    }
GPUQueue GPUQueue::clone() const noexcept { return *this; }
GPUQueue::GPUQueue(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUQueue::GPUQueue(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined GPUQueue::submit(const jsbind::Sequence<GPUCommandBuffer>& commandBuffers) {
    return emlite::Val::call("submit", commandBuffers).as<jsbind::Undefined>();
}

jsbind::Promise GPUQueue::onSubmittedWorkDone() {
    return emlite::Val::call("onSubmittedWorkDone").as<jsbind::Promise>();
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

jsbind::USVString GPUQueue::label() const {
    return emlite::Val::get("label").as<jsbind::USVString>();
}

void GPUQueue::label(const jsbind::USVString& value) {
    emlite::Val::set("label", value);
}

