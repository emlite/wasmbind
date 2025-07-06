#include <jsbind/Function.hpp>

using namespace jsbind;

Function::Function(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

Function Function::take_ownership(Handle h) noexcept {
    return Function(h);
}

Function::Function(const emlite::Val &val) noexcept
    : emlite::Val(val) {}

Function::Function(
    Callback f, const emlite::Val &data
) noexcept
    : emlite::Val(emlite::Val::make_fn(f, data)) {}

Function::Function(emlite::Closure<Val(emlite::Params)> &&f
) noexcept
    : emlite::Val(emlite::Val::make_fn(
          (emlite::Closure<Val(emlite::Params)> &&)f
      )) {}

DEFINE_CLONE(Function)