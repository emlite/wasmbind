#include "webbind/GPUBufferDescriptor.hpp"

using emlite::Val;
namespace webbind {

GPUBufferDescriptor::GPUBufferDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUBufferDescriptor GPUBufferDescriptor::take_ownership(Handle h) noexcept {
        return GPUBufferDescriptor(h);
    }
GPUBufferDescriptor::GPUBufferDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPUBufferDescriptor::GPUBufferDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
GPUBufferDescriptor GPUBufferDescriptor::clone() const noexcept { return *this; }

jsbind::Any GPUBufferDescriptor::size() const {
    return emlite::Val::get("size").as<jsbind::Any>();
}

void GPUBufferDescriptor::size(const jsbind::Any& value) {
    emlite::Val::set("size", value);
}

jsbind::Any GPUBufferDescriptor::usage() const {
    return emlite::Val::get("usage").as<jsbind::Any>();
}

void GPUBufferDescriptor::usage(const jsbind::Any& value) {
    emlite::Val::set("usage", value);
}

bool GPUBufferDescriptor::mappedAtCreation() const {
    return emlite::Val::get("mappedAtCreation").as<bool>();
}

void GPUBufferDescriptor::mappedAtCreation(bool value) {
    emlite::Val::set("mappedAtCreation", value);
}


} // namespace webbind