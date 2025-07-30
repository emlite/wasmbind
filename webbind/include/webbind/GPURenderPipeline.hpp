#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUBindGroupLayout;


class GPURenderPipeline : public emlite::Val {
    explicit GPURenderPipeline(Handle h) noexcept;

public:
    explicit GPURenderPipeline(const emlite::Val &val) noexcept;
    static GPURenderPipeline take_ownership(Handle h) noexcept;

    GPURenderPipeline clone() const noexcept;
    jsbind::String label() const;
    void label(const jsbind::String& value);
    GPUBindGroupLayout getBindGroupLayout(unsigned long index);
};

