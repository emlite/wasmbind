#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUCommandBuffer : public emlite::Val {
    explicit GPUCommandBuffer(Handle h) noexcept;

public:
    explicit GPUCommandBuffer(const emlite::Val &val) noexcept;
    static GPUCommandBuffer take_ownership(Handle h) noexcept;

    GPUCommandBuffer clone() const noexcept;
    jsbind::String label() const;
    void label(const jsbind::String& value);
};

