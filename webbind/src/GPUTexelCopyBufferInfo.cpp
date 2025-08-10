#include <webbind/GPUTexelCopyBufferInfo.hpp>
#include <webbind/GPUBuffer.hpp>

namespace webbind {

GPUTexelCopyBufferInfo::GPUTexelCopyBufferInfo(Handle h) noexcept : GPUTexelCopyBufferLayout(emlite::Val::take_ownership(h)) {}
GPUTexelCopyBufferInfo GPUTexelCopyBufferInfo::take_ownership(Handle h) noexcept {
    return GPUTexelCopyBufferInfo(h);
}

GPUTexelCopyBufferInfo::GPUTexelCopyBufferInfo(const emlite::Val &val) noexcept: GPUTexelCopyBufferLayout(val) {}

GPUTexelCopyBufferInfo::GPUTexelCopyBufferInfo() noexcept: GPUTexelCopyBufferLayout(emlite::Val::object()) {}

GPUTexelCopyBufferInfo GPUTexelCopyBufferInfo::clone() const noexcept { return *this; }

GPUBuffer GPUTexelCopyBufferInfo::buffer() const {
    return emlite::Val::get("buffer").as<GPUBuffer>();
}

void GPUTexelCopyBufferInfo::buffer(const GPUBuffer& value) {
    emlite::Val::set("buffer", value);
}


} // namespace webbind