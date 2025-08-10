#include "webbind/GPUBindGroupLayoutDescriptor.hpp"
#include "webbind/GPUBindGroupLayoutEntry.hpp"

using emlite::Val;
namespace webbind {

GPUBindGroupLayoutDescriptor::GPUBindGroupLayoutDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUBindGroupLayoutDescriptor GPUBindGroupLayoutDescriptor::take_ownership(Handle h) noexcept {
        return GPUBindGroupLayoutDescriptor(h);
    }
GPUBindGroupLayoutDescriptor::GPUBindGroupLayoutDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPUBindGroupLayoutDescriptor::GPUBindGroupLayoutDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
GPUBindGroupLayoutDescriptor GPUBindGroupLayoutDescriptor::clone() const noexcept { return *this; }

jsbind::TypedArray<GPUBindGroupLayoutEntry> GPUBindGroupLayoutDescriptor::entries() const {
    return emlite::Val::get("entries").as<jsbind::TypedArray<GPUBindGroupLayoutEntry>>();
}

void GPUBindGroupLayoutDescriptor::entries(const jsbind::TypedArray<GPUBindGroupLayoutEntry>& value) {
    emlite::Val::set("entries", value);
}


} // namespace webbind