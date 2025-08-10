#include <webbind/GPUTextureDescriptor.hpp>

using emlite::Val;
namespace webbind {

GPUTextureDescriptor::GPUTextureDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUTextureDescriptor GPUTextureDescriptor::take_ownership(Handle h) noexcept {
        return GPUTextureDescriptor(h);
    }
GPUTextureDescriptor::GPUTextureDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPUTextureDescriptor::GPUTextureDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
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

jsbind::TypedArray<GPUTextureFormat> GPUTextureDescriptor::viewFormats() const {
    return emlite::Val::get("viewFormats").as<jsbind::TypedArray<GPUTextureFormat>>();
}

void GPUTextureDescriptor::viewFormats(const jsbind::TypedArray<GPUTextureFormat>& value) {
    emlite::Val::set("viewFormats", value);
}


} // namespace webbind