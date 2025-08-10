#include "webbind/GPUTextureBindingLayout.hpp"

using emlite::Val;
namespace webbind {

GPUTextureBindingLayout::GPUTextureBindingLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUTextureBindingLayout GPUTextureBindingLayout::take_ownership(Handle h) noexcept {
        return GPUTextureBindingLayout(h);
    }
GPUTextureBindingLayout::GPUTextureBindingLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUTextureBindingLayout::GPUTextureBindingLayout() noexcept: emlite::Val(emlite::Val::object()) {}
GPUTextureBindingLayout GPUTextureBindingLayout::clone() const noexcept { return *this; }

GPUTextureSampleType GPUTextureBindingLayout::sampleType() const {
    return emlite::Val::get("sampleType").as<GPUTextureSampleType>();
}

void GPUTextureBindingLayout::sampleType(const GPUTextureSampleType& value) {
    emlite::Val::set("sampleType", value);
}

GPUTextureViewDimension GPUTextureBindingLayout::viewDimension() const {
    return emlite::Val::get("viewDimension").as<GPUTextureViewDimension>();
}

void GPUTextureBindingLayout::viewDimension(const GPUTextureViewDimension& value) {
    emlite::Val::set("viewDimension", value);
}

bool GPUTextureBindingLayout::multisampled() const {
    return emlite::Val::get("multisampled").as<bool>();
}

void GPUTextureBindingLayout::multisampled(bool value) {
    emlite::Val::set("multisampled", value);
}


} // namespace webbind