#include "webbind/GPURequestAdapterOptions.hpp"

using emlite::Val;
namespace webbind {

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


} // namespace webbind