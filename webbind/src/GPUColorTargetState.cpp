#include "webbind/GPUColorTargetState.hpp"
#include "webbind/GPUBlendState.hpp"

using emlite::Val;
namespace webbind {

GPUColorTargetState::GPUColorTargetState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUColorTargetState GPUColorTargetState::take_ownership(Handle h) noexcept {
        return GPUColorTargetState(h);
    }
GPUColorTargetState::GPUColorTargetState(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUColorTargetState::GPUColorTargetState() noexcept: emlite::Val(emlite::Val::object()) {}
GPUColorTargetState GPUColorTargetState::clone() const noexcept { return *this; }

GPUTextureFormat GPUColorTargetState::format() const {
    return emlite::Val::get("format").as<GPUTextureFormat>();
}

void GPUColorTargetState::format(const GPUTextureFormat& value) {
    emlite::Val::set("format", value);
}

GPUBlendState GPUColorTargetState::blend() const {
    return emlite::Val::get("blend").as<GPUBlendState>();
}

void GPUColorTargetState::blend(const GPUBlendState& value) {
    emlite::Val::set("blend", value);
}

jsbind::Any GPUColorTargetState::writeMask() const {
    return emlite::Val::get("writeMask").as<jsbind::Any>();
}

void GPUColorTargetState::writeMask(const jsbind::Any& value) {
    emlite::Val::set("writeMask", value);
}


} // namespace webbind