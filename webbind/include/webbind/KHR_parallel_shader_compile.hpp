#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface KHR_parallel_shader_compile
/// [`KHR_parallel_shader_compile`](https://developer.mozilla.org/en-US/docs/Web/API/KHR_parallel_shader_compile)
class KHR_parallel_shader_compile : public emlite::Val {
    explicit KHR_parallel_shader_compile(Handle h) noexcept;
public:
    explicit KHR_parallel_shader_compile(const emlite::Val &val) noexcept;
    static KHR_parallel_shader_compile take_ownership(Handle h) noexcept;
    [[nodiscard]] KHR_parallel_shader_compile clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind