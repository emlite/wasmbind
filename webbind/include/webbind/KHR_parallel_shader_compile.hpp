#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class KHR_parallel_shader_compile : public emlite::Val {
    explicit KHR_parallel_shader_compile(Handle h) noexcept;

public:
    explicit KHR_parallel_shader_compile(const emlite::Val &val) noexcept;
    static KHR_parallel_shader_compile take_ownership(Handle h) noexcept;

    KHR_parallel_shader_compile clone() const noexcept;
};

