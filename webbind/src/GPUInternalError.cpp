#include <webbind/GPUInternalError.hpp>


GPUInternalError GPUInternalError::take_ownership(Handle h) noexcept {
        return GPUInternalError(h);
    }
GPUInternalError GPUInternalError::clone() const noexcept { return *this; }
GPUInternalError::GPUInternalError(Handle h) noexcept : GPUError(emlite::Val::take_ownership(h)) {}
GPUInternalError::GPUInternalError(const emlite::Val &val) noexcept: GPUError(val) {}


GPUInternalError::GPUInternalError(const jsbind::DOMString& message): GPUError(emlite::Val::global("GPUInternalError").new_(message)) {}

