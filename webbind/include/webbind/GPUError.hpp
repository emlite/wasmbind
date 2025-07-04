#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUError : public emlite::Val {
    explicit GPUError(Handle h) noexcept;

public:
    explicit GPUError(const emlite::Val &val) noexcept;
    static GPUError take_ownership(Handle h) noexcept;

    GPUError clone() const noexcept;
    jsbind::DOMString message() const;
};

