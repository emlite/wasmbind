#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "GPUError.hpp"
#include "enums.hpp"


class GPUValidationError : public GPUError {
    explicit GPUValidationError(Handle h) noexcept;

public:
    explicit GPUValidationError(const emlite::Val &val) noexcept;
    static GPUValidationError take_ownership(Handle h) noexcept;

    GPUValidationError clone() const noexcept;
    GPUValidationError(const jsbind::String& message);
};

