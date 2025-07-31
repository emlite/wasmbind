#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "GPUError.hpp"
#include "enums.hpp"


/// The GPUValidationError class.
/// [`GPUValidationError`](https://developer.mozilla.org/en-US/docs/Web/API/GPUValidationError)
class GPUValidationError : public GPUError {
    explicit GPUValidationError(Handle h) noexcept;

public:
    explicit GPUValidationError(const emlite::Val &val) noexcept;
    static GPUValidationError take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUValidationError clone() const noexcept;
    /// The `new GPUValidationError(..)` constructor, creating a new GPUValidationError instance
    GPUValidationError(const jsbind::String& message);
};

