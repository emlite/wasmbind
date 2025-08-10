#include "webbind/GPUCommandBuffer.hpp"

namespace webbind {

GPUCommandBuffer GPUCommandBuffer::take_ownership(Handle h) noexcept {
        return GPUCommandBuffer(h);
    }
GPUCommandBuffer GPUCommandBuffer::clone() const noexcept { return *this; }
emlite::Val GPUCommandBuffer::instance() noexcept { return emlite::Val::global("GPUCommandBuffer"); }
GPUCommandBuffer::GPUCommandBuffer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCommandBuffer::GPUCommandBuffer(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String GPUCommandBuffer::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUCommandBuffer::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}


} // namespace webbind