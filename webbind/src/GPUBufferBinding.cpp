#include <webbind/GPUBufferBinding.hpp>
#include <webbind/GPUBuffer.hpp>

namespace webbind {

GPUBufferBinding::GPUBufferBinding(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBufferBinding GPUBufferBinding::take_ownership(Handle h) noexcept {
    return GPUBufferBinding(h);
}

GPUBufferBinding::GPUBufferBinding(const emlite::Val &val) noexcept: emlite::Val(val) {}

GPUBufferBinding::GPUBufferBinding() noexcept: emlite::Val(emlite::Val::object()) {}

GPUBufferBinding GPUBufferBinding::clone() const noexcept { return *this; }

GPUBuffer GPUBufferBinding::buffer() const {
    return emlite::Val::get("buffer").as<GPUBuffer>();
}

void GPUBufferBinding::buffer(const GPUBuffer& value) {
    emlite::Val::set("buffer", value);
}

jsbind::Any GPUBufferBinding::offset() const {
    return emlite::Val::get("offset").as<jsbind::Any>();
}

void GPUBufferBinding::offset(const jsbind::Any& value) {
    emlite::Val::set("offset", value);
}

jsbind::Any GPUBufferBinding::size() const {
    return emlite::Val::get("size").as<jsbind::Any>();
}

void GPUBufferBinding::size(const jsbind::Any& value) {
    emlite::Val::set("size", value);
}


} // namespace webbind