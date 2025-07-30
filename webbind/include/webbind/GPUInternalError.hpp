#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "GPUError.hpp"
#include "enums.hpp"


class GPUInternalError : public GPUError {
    explicit GPUInternalError(Handle h) noexcept;

public:
    explicit GPUInternalError(const emlite::Val &val) noexcept;
    static GPUInternalError take_ownership(Handle h) noexcept;

    GPUInternalError clone() const noexcept;
    GPUInternalError(const jsbind::String& message);
};

