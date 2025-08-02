#include <webbind/GPUPipelineError.hpp>


GPUPipelineError GPUPipelineError::take_ownership(Handle h) noexcept {
        return GPUPipelineError(h);
    }
GPUPipelineError GPUPipelineError::clone() const noexcept { return *this; }
emlite::Val GPUPipelineError::instance() noexcept { return emlite::Val::global("GPUPipelineError"); }
GPUPipelineError::GPUPipelineError(Handle h) noexcept : DOMException(emlite::Val::take_ownership(h)) {}
GPUPipelineError::GPUPipelineError(const emlite::Val &val) noexcept: DOMException(val) {}


GPUPipelineError::GPUPipelineError() : DOMException(emlite::Val::global("GPUPipelineError").new_()) {}

GPUPipelineError::GPUPipelineError(const jsbind::String& message) : DOMException(emlite::Val::global("GPUPipelineError").new_(message)) {}

GPUPipelineError::GPUPipelineError(const jsbind::String& message, const jsbind::Any& options) : DOMException(emlite::Val::global("GPUPipelineError").new_(message, options)) {}

GPUPipelineErrorReason GPUPipelineError::reason() const {
    return DOMException::get("reason").as<GPUPipelineErrorReason>();
}

