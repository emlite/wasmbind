#include <webbind/GPUOutOfMemoryError.hpp>


GPUOutOfMemoryError GPUOutOfMemoryError::take_ownership(Handle h) noexcept {
        return GPUOutOfMemoryError(h);
    }
GPUOutOfMemoryError GPUOutOfMemoryError::clone() const noexcept { return *this; }
GPUOutOfMemoryError::GPUOutOfMemoryError(Handle h) noexcept : GPUError(emlite::Val::take_ownership(h)) {}
GPUOutOfMemoryError::GPUOutOfMemoryError(const emlite::Val &val) noexcept: GPUError(val) {}


GPUOutOfMemoryError::GPUOutOfMemoryError(const jsbind::DOMString& message) : GPUError(emlite::Val::global("GPUOutOfMemoryError").new_(message)) {}

