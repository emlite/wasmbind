#include <webbind/GPUError.hpp>

namespace webbind {

GPUError GPUError::take_ownership(Handle h) noexcept {
        return GPUError(h);
    }
GPUError GPUError::clone() const noexcept { return *this; }
emlite::Val GPUError::instance() noexcept { return emlite::Val::global("GPUError"); }
GPUError::GPUError(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUError::GPUError(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String GPUError::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}


} // namespace webbind