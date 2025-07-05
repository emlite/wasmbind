#include <webbind/GPUTexture.hpp>
#include <webbind/GPUTextureView.hpp>


GPUTextureViewDescriptor::GPUTextureViewDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUTextureViewDescriptor GPUTextureViewDescriptor::take_ownership(Handle h) noexcept {
        return GPUTextureViewDescriptor(h);
    }
GPUTextureViewDescriptor::GPUTextureViewDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUTextureViewDescriptor::GPUTextureViewDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
GPUTextureViewDescriptor GPUTextureViewDescriptor::clone() const noexcept { return *this; }

GPUTextureFormat GPUTextureViewDescriptor::format() const {
    return emlite::Val::get("format").as<GPUTextureFormat>();
}

void GPUTextureViewDescriptor::format(const GPUTextureFormat& value) {
    emlite::Val::set("format", value);
}

GPUTextureViewDimension GPUTextureViewDescriptor::dimension() const {
    return emlite::Val::get("dimension").as<GPUTextureViewDimension>();
}

void GPUTextureViewDescriptor::dimension(const GPUTextureViewDimension& value) {
    emlite::Val::set("dimension", value);
}

jsbind::Any GPUTextureViewDescriptor::usage() const {
    return emlite::Val::get("usage").as<jsbind::Any>();
}

void GPUTextureViewDescriptor::usage(const jsbind::Any& value) {
    emlite::Val::set("usage", value);
}

GPUTextureAspect GPUTextureViewDescriptor::aspect() const {
    return emlite::Val::get("aspect").as<GPUTextureAspect>();
}

void GPUTextureViewDescriptor::aspect(const GPUTextureAspect& value) {
    emlite::Val::set("aspect", value);
}

jsbind::Any GPUTextureViewDescriptor::baseMipLevel() const {
    return emlite::Val::get("baseMipLevel").as<jsbind::Any>();
}

void GPUTextureViewDescriptor::baseMipLevel(const jsbind::Any& value) {
    emlite::Val::set("baseMipLevel", value);
}

jsbind::Any GPUTextureViewDescriptor::mipLevelCount() const {
    return emlite::Val::get("mipLevelCount").as<jsbind::Any>();
}

void GPUTextureViewDescriptor::mipLevelCount(const jsbind::Any& value) {
    emlite::Val::set("mipLevelCount", value);
}

jsbind::Any GPUTextureViewDescriptor::baseArrayLayer() const {
    return emlite::Val::get("baseArrayLayer").as<jsbind::Any>();
}

void GPUTextureViewDescriptor::baseArrayLayer(const jsbind::Any& value) {
    emlite::Val::set("baseArrayLayer", value);
}

jsbind::Any GPUTextureViewDescriptor::arrayLayerCount() const {
    return emlite::Val::get("arrayLayerCount").as<jsbind::Any>();
}

void GPUTextureViewDescriptor::arrayLayerCount(const jsbind::Any& value) {
    emlite::Val::set("arrayLayerCount", value);
}

GPUTexture GPUTexture::take_ownership(Handle h) noexcept {
        return GPUTexture(h);
    }
GPUTexture GPUTexture::clone() const noexcept { return *this; }
GPUTexture::GPUTexture(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUTexture::GPUTexture(const emlite::Val &val) noexcept: emlite::Val(val) {}


GPUTextureView GPUTexture::createView() {
    return emlite::Val::call("createView").as<GPUTextureView>();
}

GPUTextureView GPUTexture::createView(const GPUTextureViewDescriptor& descriptor) {
    return emlite::Val::call("createView", descriptor).as<GPUTextureView>();
}

jsbind::Undefined GPUTexture::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}

jsbind::Any GPUTexture::width() const {
    return emlite::Val::get("width").as<jsbind::Any>();
}

jsbind::Any GPUTexture::height() const {
    return emlite::Val::get("height").as<jsbind::Any>();
}

jsbind::Any GPUTexture::depthOrArrayLayers() const {
    return emlite::Val::get("depthOrArrayLayers").as<jsbind::Any>();
}

jsbind::Any GPUTexture::mipLevelCount() const {
    return emlite::Val::get("mipLevelCount").as<jsbind::Any>();
}

jsbind::Any GPUTexture::sampleCount() const {
    return emlite::Val::get("sampleCount").as<jsbind::Any>();
}

GPUTextureDimension GPUTexture::dimension() const {
    return emlite::Val::get("dimension").as<GPUTextureDimension>();
}

GPUTextureFormat GPUTexture::format() const {
    return emlite::Val::get("format").as<GPUTextureFormat>();
}

jsbind::Any GPUTexture::usage() const {
    return emlite::Val::get("usage").as<jsbind::Any>();
}

jsbind::USVString GPUTexture::label() const {
    return emlite::Val::get("label").as<jsbind::USVString>();
}

void GPUTexture::label(const jsbind::USVString& value) {
    emlite::Val::set("label", value);
}

