#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUBindGroupLayout : public emlite::Val {
    explicit GPUBindGroupLayout(Handle h) noexcept;

public:
    explicit GPUBindGroupLayout(const emlite::Val &val) noexcept;
    static GPUBindGroupLayout take_ownership(Handle h) noexcept;

    GPUBindGroupLayout clone() const noexcept;
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
};

