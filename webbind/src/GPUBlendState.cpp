#include <webbind/GPUBlendState.hpp>
#include <webbind/GPUBlendComponent.hpp>

using emlite::Val;
namespace webbind {

GPUBlendState::GPUBlendState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBlendState GPUBlendState::take_ownership(Handle h) noexcept {
        return GPUBlendState(h);
    }
GPUBlendState::GPUBlendState(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUBlendState::GPUBlendState() noexcept: emlite::Val(emlite::Val::object()) {}
GPUBlendState GPUBlendState::clone() const noexcept { return *this; }

GPUBlendComponent GPUBlendState::color() const {
    return emlite::Val::get("color").as<GPUBlendComponent>();
}

void GPUBlendState::color(const GPUBlendComponent& value) {
    emlite::Val::set("color", value);
}

GPUBlendComponent GPUBlendState::alpha() const {
    return emlite::Val::get("alpha").as<GPUBlendComponent>();
}

void GPUBlendState::alpha(const GPUBlendComponent& value) {
    emlite::Val::set("alpha", value);
}


} // namespace webbind