#include <webbind/GPUCommandEncoderDescriptor.hpp>

namespace webbind {

GPUCommandEncoderDescriptor::GPUCommandEncoderDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUCommandEncoderDescriptor GPUCommandEncoderDescriptor::take_ownership(Handle h) noexcept {
    return GPUCommandEncoderDescriptor(h);
}

GPUCommandEncoderDescriptor::GPUCommandEncoderDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}

GPUCommandEncoderDescriptor::GPUCommandEncoderDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}

GPUCommandEncoderDescriptor GPUCommandEncoderDescriptor::clone() const noexcept { return *this; }


} // namespace webbind