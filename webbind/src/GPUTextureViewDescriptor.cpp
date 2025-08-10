#include <webbind/GPUTextureViewDescriptor.hpp>

namespace webbind {

GPUTextureViewDescriptor::GPUTextureViewDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUTextureViewDescriptor GPUTextureViewDescriptor::take_ownership(Handle h) noexcept {
    return GPUTextureViewDescriptor(h);
}

GPUTextureViewDescriptor::GPUTextureViewDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}

GPUTextureViewDescriptor::GPUTextureViewDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}

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


} // namespace webbind