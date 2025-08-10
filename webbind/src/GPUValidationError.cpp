#include <webbind/GPUValidationError.hpp>

namespace webbind {

GPUValidationError GPUValidationError::take_ownership(Handle h) noexcept {
        return GPUValidationError(h);
    }
GPUValidationError GPUValidationError::clone() const noexcept { return *this; }
emlite::Val GPUValidationError::instance() noexcept { return emlite::Val::global("GPUValidationError"); }
GPUValidationError::GPUValidationError(Handle h) noexcept : GPUError(emlite::Val::take_ownership(h)) {}
GPUValidationError::GPUValidationError(const emlite::Val &val) noexcept: GPUError(val) {}

GPUValidationError::GPUValidationError(const jsbind::String& message) : GPUError(emlite::Val::global("GPUValidationError").new_(message)) {}


} // namespace webbind