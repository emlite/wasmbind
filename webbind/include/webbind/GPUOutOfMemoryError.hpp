#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "GPUError.hpp"
#include "enums.hpp"


/// The GPUOutOfMemoryError class.
/// [`GPUOutOfMemoryError`](https://developer.mozilla.org/en-US/docs/Web/API/GPUOutOfMemoryError)
class GPUOutOfMemoryError : public GPUError {
    explicit GPUOutOfMemoryError(Handle h) noexcept;

public:
    explicit GPUOutOfMemoryError(const emlite::Val &val) noexcept;
    static GPUOutOfMemoryError take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUOutOfMemoryError clone() const noexcept;
    /// The `new GPUOutOfMemoryError(..)` constructor, creating a new GPUOutOfMemoryError instance
    GPUOutOfMemoryError(const jsbind::String& message);
};

