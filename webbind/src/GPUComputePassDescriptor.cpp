#include "webbind/GPUComputePassDescriptor.hpp"
#include "webbind/GPUComputePassTimestampWrites.hpp"

using emlite::Val;
namespace webbind {

GPUComputePassDescriptor::GPUComputePassDescriptor(Handle h) noexcept : GPUObjectDescriptorBase(emlite::Val::take_ownership(h)) {}
GPUComputePassDescriptor GPUComputePassDescriptor::take_ownership(Handle h) noexcept {
        return GPUComputePassDescriptor(h);
    }
GPUComputePassDescriptor::GPUComputePassDescriptor(const emlite::Val &val) noexcept: GPUObjectDescriptorBase(val) {}
GPUComputePassDescriptor::GPUComputePassDescriptor() noexcept: GPUObjectDescriptorBase(emlite::Val::object()) {}
GPUComputePassDescriptor GPUComputePassDescriptor::clone() const noexcept { return *this; }

GPUComputePassTimestampWrites GPUComputePassDescriptor::timestampWrites() const {
    return emlite::Val::get("timestampWrites").as<GPUComputePassTimestampWrites>();
}

void GPUComputePassDescriptor::timestampWrites(const GPUComputePassTimestampWrites& value) {
    emlite::Val::set("timestampWrites", value);
}


} // namespace webbind