#include <webbind/GPUVertexState.hpp>
#include <webbind/GPUVertexBufferLayout.hpp>

using emlite::Val;
namespace webbind {

GPUVertexState::GPUVertexState(Handle h) noexcept : GPUProgrammableStage(emlite::Val::take_ownership(h)) {}
GPUVertexState GPUVertexState::take_ownership(Handle h) noexcept {
        return GPUVertexState(h);
    }
GPUVertexState::GPUVertexState(const emlite::Val &val) noexcept: GPUProgrammableStage(val) {}
GPUVertexState::GPUVertexState() noexcept: GPUProgrammableStage(emlite::Val::object()) {}
GPUVertexState GPUVertexState::clone() const noexcept { return *this; }

jsbind::TypedArray<GPUVertexBufferLayout> GPUVertexState::buffers() const {
    return emlite::Val::get("buffers").as<jsbind::TypedArray<GPUVertexBufferLayout>>();
}

void GPUVertexState::buffers(const jsbind::TypedArray<GPUVertexBufferLayout>& value) {
    emlite::Val::set("buffers", value);
}


} // namespace webbind