#include "webbind/GPUMultisampleState.hpp"

using emlite::Val;
namespace webbind {

GPUMultisampleState::GPUMultisampleState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUMultisampleState GPUMultisampleState::take_ownership(Handle h) noexcept {
        return GPUMultisampleState(h);
    }
GPUMultisampleState::GPUMultisampleState(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUMultisampleState::GPUMultisampleState() noexcept: emlite::Val(emlite::Val::object()) {}
GPUMultisampleState GPUMultisampleState::clone() const noexcept { return *this; }

jsbind::Any GPUMultisampleState::count() const {
    return emlite::Val::get("count").as<jsbind::Any>();
}

void GPUMultisampleState::count(const jsbind::Any& value) {
    emlite::Val::set("count", value);
}

jsbind::Any GPUMultisampleState::mask() const {
    return emlite::Val::get("mask").as<jsbind::Any>();
}

void GPUMultisampleState::mask(const jsbind::Any& value) {
    emlite::Val::set("mask", value);
}

bool GPUMultisampleState::alphaToCoverageEnabled() const {
    return emlite::Val::get("alphaToCoverageEnabled").as<bool>();
}

void GPUMultisampleState::alphaToCoverageEnabled(bool value) {
    emlite::Val::set("alphaToCoverageEnabled", value);
}


} // namespace webbind