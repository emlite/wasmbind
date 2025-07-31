#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "GPUError.hpp"
#include "enums.hpp"


/// The GPUInternalError class.
/// [`GPUInternalError`](https://developer.mozilla.org/en-US/docs/Web/API/GPUInternalError)
class GPUInternalError : public GPUError {
    explicit GPUInternalError(Handle h) noexcept;

public:
    explicit GPUInternalError(const emlite::Val &val) noexcept;
    static GPUInternalError take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUInternalError clone() const noexcept;
    /// The `new GPUInternalError(..)` constructor, creating a new GPUInternalError instance
    GPUInternalError(const jsbind::String& message);
};

