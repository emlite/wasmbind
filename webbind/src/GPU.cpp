#include <webbind/GPU.hpp>
#include <webbind/GPUAdapter.hpp>
#include <webbind/WGSLLanguageFeatures.hpp>


GPURequestAdapterOptions::GPURequestAdapterOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPURequestAdapterOptions GPURequestAdapterOptions::take_ownership(Handle h) noexcept {
        return GPURequestAdapterOptions(h);
    }
GPURequestAdapterOptions::GPURequestAdapterOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPURequestAdapterOptions::GPURequestAdapterOptions() noexcept: emlite::Val(emlite::Val::object()) {}
GPURequestAdapterOptions GPURequestAdapterOptions::clone() const noexcept { return *this; }

jsbind::String GPURequestAdapterOptions::featureLevel() const {
    return emlite::Val::get("featureLevel").as<jsbind::String>();
}

void GPURequestAdapterOptions::featureLevel(const jsbind::String& value) {
    emlite::Val::set("featureLevel", value);
}

GPUPowerPreference GPURequestAdapterOptions::powerPreference() const {
    return emlite::Val::get("powerPreference").as<GPUPowerPreference>();
}

void GPURequestAdapterOptions::powerPreference(const GPUPowerPreference& value) {
    emlite::Val::set("powerPreference", value);
}

bool GPURequestAdapterOptions::forceFallbackAdapter() const {
    return emlite::Val::get("forceFallbackAdapter").as<bool>();
}

void GPURequestAdapterOptions::forceFallbackAdapter(bool value) {
    emlite::Val::set("forceFallbackAdapter", value);
}

bool GPURequestAdapterOptions::xrCompatible() const {
    return emlite::Val::get("xrCompatible").as<bool>();
}

void GPURequestAdapterOptions::xrCompatible(bool value) {
    emlite::Val::set("xrCompatible", value);
}

GPU GPU::take_ownership(Handle h) noexcept {
        return GPU(h);
    }
GPU GPU::clone() const noexcept { return *this; }
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

