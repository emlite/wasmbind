#include <jsbind/Function.hpp>

using namespace jsbind;

Function::Function(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

Function Function::take_ownership(Handle h) noexcept {
    return Function(h);
}

Function::Function(const emlite::Val &val) noexcept
    : emlite::Val(val) {}

Function::Function(Callback f) noexcept
    : emlite::Val(emlite::Val::make_fn(f)) {}

Params Function::params(Handle h) {
    size_t len = 0;
    auto params =
        emlite::Val::vec_from_js_array<emlite::Val>(
            emlite::Val::take_ownership(h), len
        );
    auto ret =
        Params{(emlite::Uniq<emlite::Val[]> &&)params, len};
    return ret;
}

DEFINE_CLONE(Function)