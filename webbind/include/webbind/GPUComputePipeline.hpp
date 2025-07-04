#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUBindGroupLayout;


class GPUComputePipeline : public emlite::Val {
    explicit GPUComputePipeline(Handle h) noexcept;

public:
    explicit GPUComputePipeline(const emlite::Val &val) noexcept;
    static GPUComputePipeline take_ownership(Handle h) noexcept;

    GPUComputePipeline clone() const noexcept;
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
    GPUBindGroupLayout getBindGroupLayout(unsigned long index);
};

