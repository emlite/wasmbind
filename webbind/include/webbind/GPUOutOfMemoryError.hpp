#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "GPUError.hpp"
#include "enums.hpp"


class GPUOutOfMemoryError : public GPUError {
    explicit GPUOutOfMemoryError(Handle h) noexcept;

public:
    explicit GPUOutOfMemoryError(const emlite::Val &val) noexcept;
    static GPUOutOfMemoryError take_ownership(Handle h) noexcept;

    GPUOutOfMemoryError clone() const noexcept;
    GPUOutOfMemoryError(const jsbind::String& message);
};

