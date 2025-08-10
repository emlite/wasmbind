#include <webbind/GPUQueueDescriptor.hpp>

using emlite::Val;
namespace webbind {

GPUQueueDescriptor::GPUQueueDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUQueueDescriptor GPUQueueDescriptor::take_ownership(Handle h) noexcept {
        return GPUQueueDescriptor(h);
    }
GPUQueueDescriptor::GPUQueueDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPUQueueDescriptor::GPUQueueDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
GPUQueueDescriptor GPUQueueDescriptor::clone() const noexcept { return *this; }


} // namespace webbind