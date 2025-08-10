#include <webbind/GPUOutOfMemoryError.hpp>

namespace webbind {

GPUOutOfMemoryError GPUOutOfMemoryError::take_ownership(Handle h) noexcept {
        return GPUOutOfMemoryError(h);
    }
GPUOutOfMemoryError GPUOutOfMemoryError::clone() const noexcept { return *this; }
emlite::Val GPUOutOfMemoryError::instance() noexcept { return emlite::Val::global("GPUOutOfMemoryError"); }
GPUOutOfMemoryError::GPUOutOfMemoryError(Handle h) noexcept : GPUError(emlite::Val::take_ownership(h)) {}
GPUOutOfMemoryError::GPUOutOfMemoryError(const emlite::Val &val) noexcept: GPUError(val) {}

GPUOutOfMemoryError::GPUOutOfMemoryError(const jsbind::String& message) : GPUError(emlite::Val::global("GPUOutOfMemoryError").new_(message)) {}


} // namespace webbind