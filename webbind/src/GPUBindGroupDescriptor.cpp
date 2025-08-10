#include <webbind/GPUBindGroupDescriptor.hpp>
#include <webbind/GPUBindGroupLayout.hpp>
#include <webbind/GPUBindGroupEntry.hpp>

namespace webbind {

GPUBindGroupDescriptor::GPUBindGroupDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUBindGroupDescriptor GPUBindGroupDescriptor::take_ownership(Handle h) noexcept {
    return GPUBindGroupDescriptor(h);
}

GPUBindGroupDescriptor::GPUBindGroupDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}

GPUBindGroupDescriptor::GPUBindGroupDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}

GPUBindGroupDescriptor GPUBindGroupDescriptor::clone() const noexcept { return *this; }

GPUBindGroupLayout GPUBindGroupDescriptor::layout() const {
    return emlite::Val::get("layout").as<GPUBindGroupLayout>();
}

void GPUBindGroupDescriptor::layout(const GPUBindGroupLayout& value) {
    emlite::Val::set("layout", value);
}

jsbind::TypedArray<GPUBindGroupEntry> GPUBindGroupDescriptor::entries() const {
    return emlite::Val::get("entries").as<jsbind::TypedArray<GPUBindGroupEntry>>();
}

void GPUBindGroupDescriptor::entries(const jsbind::TypedArray<GPUBindGroupEntry>& value) {
    emlite::Val::set("entries", value);
}


} // namespace webbind