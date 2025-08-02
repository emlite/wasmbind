#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMException.hpp"
#include "enums.hpp"


/// The GPUPipelineError class.
/// [`GPUPipelineError`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineError)
class GPUPipelineError : public DOMException {
    explicit GPUPipelineError(Handle h) noexcept;

public:
    explicit GPUPipelineError(const emlite::Val &val) noexcept;
    static GPUPipelineError take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUPipelineError clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new GPUPipelineError(..)` constructor, creating a new GPUPipelineError instance
    GPUPipelineError();
    /// The `new GPUPipelineError(..)` constructor, creating a new GPUPipelineError instance
    GPUPipelineError(const jsbind::String& message);
    /// The `new GPUPipelineError(..)` constructor, creating a new GPUPipelineError instance
    GPUPipelineError(const jsbind::String& message, const jsbind::Any& options);
    /// Getter of the `reason` attribute.
    /// [`GPUPipelineError.reason`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineError/reason)
    [[nodiscard]] GPUPipelineErrorReason reason() const;
};

