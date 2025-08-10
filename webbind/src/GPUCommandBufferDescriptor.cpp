#include <webbind/GPUCommandBufferDescriptor.hpp>

namespace webbind {

GPUCommandBufferDescriptor::GPUCommandBufferDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUCommandBufferDescriptor GPUCommandBufferDescriptor::take_ownership(Handle h) noexcept {
    return GPUCommandBufferDescriptor(h);
}

GPUCommandBufferDescriptor::GPUCommandBufferDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}

GPUCommandBufferDescriptor::GPUCommandBufferDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}

GPUCommandBufferDescriptor GPUCommandBufferDescriptor::clone() const noexcept { return *this; }


} // namespace webbind