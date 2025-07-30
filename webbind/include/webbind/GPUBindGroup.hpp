#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUBindGroup : public emlite::Val {
    explicit GPUBindGroup(Handle h) noexcept;

public:
    explicit GPUBindGroup(const emlite::Val &val) noexcept;
    static GPUBindGroup take_ownership(Handle h) noexcept;

    GPUBindGroup clone() const noexcept;
    jsbind::String label() const;
    void label(const jsbind::String& value);
};

