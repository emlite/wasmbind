#include <webbind/GPURenderPassLayout.hpp>

using emlite::Val;
namespace webbind {

GPURenderPassLayout::GPURenderPassLayout(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPURenderPassLayout GPURenderPassLayout::take_ownership(Handle h) noexcept {
        return GPURenderPassLayout(h);
    }
GPURenderPassLayout::GPURenderPassLayout(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPURenderPassLayout::GPURenderPassLayout() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
GPURenderPassLayout GPURenderPassLayout::clone() const noexcept { return *this; }

jsbind::TypedArray<GPUTextureFormat> GPURenderPassLayout::colorFormats() const {
    return emlite::Val::get("colorFormats").as<jsbind::TypedArray<GPUTextureFormat>>();
}

void GPURenderPassLayout::colorFormats(const jsbind::TypedArray<GPUTextureFormat>& value) {
    emlite::Val::set("colorFormats", value);
}

GPUTextureFormat GPURenderPassLayout::depthStencilFormat() const {
    return emlite::Val::get("depthStencilFormat").as<GPUTextureFormat>();
}

void GPURenderPassLayout::depthStencilFormat(const GPUTextureFormat& value) {
    emlite::Val::set("depthStencilFormat", value);
}

jsbind::Any GPURenderPassLayout::sampleCount() const {
    return emlite::Val::get("sampleCount").as<jsbind::Any>();
}

void GPURenderPassLayout::sampleCount(const jsbind::Any& value) {
    emlite::Val::set("sampleCount", value);
}


} // namespace webbind