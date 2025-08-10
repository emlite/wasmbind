#include <webbind/GPUTexture.hpp>
#include <webbind/GPUTextureView.hpp>
#include <webbind/GPUTextureViewDescriptor.hpp>

namespace webbind {

GPUTexture GPUTexture::take_ownership(Handle h) noexcept {
        return GPUTexture(h);
    }
GPUTexture GPUTexture::clone() const noexcept { return *this; }
emlite::Val GPUTexture::instance() noexcept { return emlite::Val::global("GPUTexture"); }
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

jsbind::String GPUTexture::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUTexture::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}


} // namespace webbind