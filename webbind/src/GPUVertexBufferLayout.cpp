#include "webbind/GPUVertexBufferLayout.hpp"
#include "webbind/GPUVertexAttribute.hpp"

using emlite::Val;
namespace webbind {

GPUVertexBufferLayout::GPUVertexBufferLayout(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUVertexBufferLayout GPUVertexBufferLayout::take_ownership(Handle h) noexcept {
        return GPUVertexBufferLayout(h);
    }
GPUVertexBufferLayout::GPUVertexBufferLayout(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUVertexBufferLayout::GPUVertexBufferLayout() noexcept: emlite::Val(emlite::Val::object()) {}
GPUVertexBufferLayout GPUVertexBufferLayout::clone() const noexcept { return *this; }

jsbind::Any GPUVertexBufferLayout::arrayStride() const {
    return emlite::Val::get("arrayStride").as<jsbind::Any>();
}

void GPUVertexBufferLayout::arrayStride(const jsbind::Any& value) {
    emlite::Val::set("arrayStride", value);
}

GPUVertexStepMode GPUVertexBufferLayout::stepMode() const {
    return emlite::Val::get("stepMode").as<GPUVertexStepMode>();
}

void GPUVertexBufferLayout::stepMode(const GPUVertexStepMode& value) {
    emlite::Val::set("stepMode", value);
}

jsbind::TypedArray<GPUVertexAttribute> GPUVertexBufferLayout::attributes() const {
    return emlite::Val::get("attributes").as<jsbind::TypedArray<GPUVertexAttribute>>();
}

void GPUVertexBufferLayout::attributes(const jsbind::TypedArray<GPUVertexAttribute>& value) {
    emlite::Val::set("attributes", value);
}


} // namespace webbind