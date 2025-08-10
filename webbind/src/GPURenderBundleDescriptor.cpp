#include <webbind/GPURenderBundleDescriptor.hpp>

namespace webbind {

GPURenderBundleDescriptor::GPURenderBundleDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPURenderBundleDescriptor GPURenderBundleDescriptor::take_ownership(Handle h) noexcept {
    return GPURenderBundleDescriptor(h);
}

GPURenderBundleDescriptor::GPURenderBundleDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}

GPURenderBundleDescriptor::GPURenderBundleDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}

GPURenderBundleDescriptor GPURenderBundleDescriptor::clone() const noexcept { return *this; }


} // namespace webbind