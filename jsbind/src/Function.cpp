#include <jsbind/Function.hpp>

using namespace jsbind;

Function::Function(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

Function Function::take_ownership(Handle h) noexcept {
    return Function(h);
}

Function::Function(const emlite::Val &val) noexcept
    : emlite::Val(val) {}

Function::Function(const char *name)
    : emlite::Val(emlite::Val::global(name)) {}

Any Function::apply(
    const Any &this_arg, const Array &args_array
) {
    return emlite::Val::call("apply", this_arg, args_array)
        .as<Any>();
}

DEFINE_CLONE(Function)