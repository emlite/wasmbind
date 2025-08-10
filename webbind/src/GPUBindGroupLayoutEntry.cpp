#include <webbind/GPUBindGroupLayoutEntry.hpp>
#include <webbind/GPUBufferBindingLayout.hpp>
#include <webbind/GPUSamplerBindingLayout.hpp>
#include <webbind/GPUTextureBindingLayout.hpp>
#include <webbind/GPUStorageTextureBindingLayout.hpp>
#include <webbind/GPUExternalTextureBindingLayout.hpp>

namespace webbind {

GPUBindGroupLayoutEntry::GPUBindGroupLayoutEntry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBindGroupLayoutEntry GPUBindGroupLayoutEntry::take_ownership(Handle h) noexcept {
    return GPUBindGroupLayoutEntry(h);
}

GPUBindGroupLayoutEntry::GPUBindGroupLayoutEntry(const emlite::Val &val) noexcept: emlite::Val(val) {}

GPUBindGroupLayoutEntry::GPUBindGroupLayoutEntry() noexcept: emlite::Val(emlite::Val::object()) {}

GPUBindGroupLayoutEntry GPUBindGroupLayoutEntry::clone() const noexcept { return *this; }

jsbind::Any GPUBindGroupLayoutEntry::binding() const {
    return emlite::Val::get("binding").as<jsbind::Any>();
}

void GPUBindGroupLayoutEntry::binding(const jsbind::Any& value) {
    emlite::Val::set("binding", value);
}

jsbind::Any GPUBindGroupLayoutEntry::visibility() const {
    return emlite::Val::get("visibility").as<jsbind::Any>();
}

void GPUBindGroupLayoutEntry::visibility(const jsbind::Any& value) {
    emlite::Val::set("visibility", value);
}

GPUBufferBindingLayout GPUBindGroupLayoutEntry::buffer() const {
    return emlite::Val::get("buffer").as<GPUBufferBindingLayout>();
}

void GPUBindGroupLayoutEntry::buffer(const GPUBufferBindingLayout& value) {
    emlite::Val::set("buffer", value);
}

GPUSamplerBindingLayout GPUBindGroupLayoutEntry::sampler() const {
    return emlite::Val::get("sampler").as<GPUSamplerBindingLayout>();
}

void GPUBindGroupLayoutEntry::sampler(const GPUSamplerBindingLayout& value) {
    emlite::Val::set("sampler", value);
}

GPUTextureBindingLayout GPUBindGroupLayoutEntry::texture() const {
    return emlite::Val::get("texture").as<GPUTextureBindingLayout>();
}

void GPUBindGroupLayoutEntry::texture(const GPUTextureBindingLayout& value) {
    emlite::Val::set("texture", value);
}

GPUStorageTextureBindingLayout GPUBindGroupLayoutEntry::storageTexture() const {
    return emlite::Val::get("storageTexture").as<GPUStorageTextureBindingLayout>();
}

void GPUBindGroupLayoutEntry::storageTexture(const GPUStorageTextureBindingLayout& value) {
    emlite::Val::set("storageTexture", value);
}

GPUExternalTextureBindingLayout GPUBindGroupLayoutEntry::externalTexture() const {
    return emlite::Val::get("externalTexture").as<GPUExternalTextureBindingLayout>();
}

void GPUBindGroupLayoutEntry::externalTexture(const GPUExternalTextureBindingLayout& value) {
    emlite::Val::set("externalTexture", value);
}


} // namespace webbind