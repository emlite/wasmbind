#include <webbind/KHR_parallel_shader_compile.hpp>


KHR_parallel_shader_compile KHR_parallel_shader_compile::take_ownership(Handle h) noexcept {
        return KHR_parallel_shader_compile(h);
    }
KHR_parallel_shader_compile KHR_parallel_shader_compile::clone() const noexcept { return *this; }
emlite::Val KHR_parallel_shader_compile::instance() noexcept { return emlite::Val::global("KHR_parallel_shader_compile"); }
KHR_parallel_shader_compile::KHR_parallel_shader_compile(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
KHR_parallel_shader_compile::KHR_parallel_shader_compile(const emlite::Val &val) noexcept: emlite::Val(val) {}


