#include "webbind/GPUStorageTextureBindingLayout.hpp"

using emlite::Val;
namespace webbind {

GPUStorageTextureBindingLayout::GPUStorageTextureBindingLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUStorageTextureBindingLayout GPUStorageTextureBindingLayout::take_ownership(Handle h) noexcept {
        return GPUStorageTextureBindingLayout(h);
    }
GPUStorageTextureBindingLayout::GPUStorageTextureBindingLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUStorageTextureBindingLayout::GPUStorageTextureBindingLayout() noexcept: emlite::Val(emlite::Val::object()) {}
GPUStorageTextureBindingLayout GPUStorageTextureBindingLayout::clone() const noexcept { return *this; }

GPUStorageTextureAccess GPUStorageTextureBindingLayout::access() const {
    return emlite::Val::get("access").as<GPUStorageTextureAccess>();
}

void GPUStorageTextureBindingLayout::access(const GPUStorageTextureAccess& value) {
    emlite::Val::set("access", value);
}

GPUTextureFormat GPUStorageTextureBindingLayout::format() const {
    return emlite::Val::get("format").as<GPUTextureFormat>();
}

void GPUStorageTextureBindingLayout::format(const GPUTextureFormat& value) {
    emlite::Val::set("format", value);
}

GPUTextureViewDimension GPUStorageTextureBindingLayout::viewDimension() const {
    return emlite::Val::get("viewDimension").as<GPUTextureViewDimension>();
}

void GPUStorageTextureBindingLayout::viewDimension(const GPUTextureViewDimension& value) {
    emlite::Val::set("viewDimension", value);
}


} // namespace webbind