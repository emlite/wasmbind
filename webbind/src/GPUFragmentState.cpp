#include "webbind/GPUFragmentState.hpp"
#include "webbind/GPUColorTargetState.hpp"

using emlite::Val;
namespace webbind {

GPUFragmentState::GPUFragmentState(Handle h) noexcept : GPUProgrammableStage(emlite::Val::take_ownership(h)) {}
GPUFragmentState GPUFragmentState::take_ownership(Handle h) noexcept {
        return GPUFragmentState(h);
    }
GPUFragmentState::GPUFragmentState(const emlite::Val &val) noexcept: GPUProgrammableStage(val) {}
GPUFragmentState::GPUFragmentState() noexcept: GPUProgrammableStage(emlite::Val::object()) {}
GPUFragmentState GPUFragmentState::clone() const noexcept { return *this; }

jsbind::TypedArray<GPUColorTargetState> GPUFragmentState::targets() const {
    return emlite::Val::get("targets").as<jsbind::TypedArray<GPUColorTargetState>>();
}

void GPUFragmentState::targets(const jsbind::TypedArray<GPUColorTargetState>& value) {
    emlite::Val::set("targets", value);
}


} // namespace webbind