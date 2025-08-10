#include <webbind/GPU.hpp>
#include <webbind/GPUAdapter.hpp>
#include <webbind/GPURequestAdapterOptions.hpp>
#include <webbind/WGSLLanguageFeatures.hpp>

namespace webbind {

GPU GPU::take_ownership(Handle h) noexcept {
    return GPU(h);
}

GPU GPU::clone() const noexcept { return *this; }

emlite::Val GPU::instance() noexcept { return emlite::Val::global("GPU"); }

GPU::GPU(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

GPU::GPU(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<GPUAdapter> GPU::requestAdapter() {
    return emlite::Val::call("requestAdapter").as<jsbind::Promise<GPUAdapter>>();
}

jsbind::Promise<GPUAdapter> GPU::requestAdapter(const GPURequestAdapterOptions& options) {
    return emlite::Val::call("requestAdapter", options).as<jsbind::Promise<GPUAdapter>>();
}

GPUTextureFormat GPU::getPreferredCanvasFormat() {
    return emlite::Val::call("getPreferredCanvasFormat").as<GPUTextureFormat>();
}

WGSLLanguageFeatures GPU::wgslLanguageFeatures() const {
    return emlite::Val::get("wgslLanguageFeatures").as<WGSLLanguageFeatures>();
}


} // namespace webbind