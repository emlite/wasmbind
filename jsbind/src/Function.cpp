#include <jsbind/Function.hpp>

using namespace jsbind;

Function::Function(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

Function Function::take_ownership(Handle h) noexcept {
    return Function(h);
}

Function::Function(const emlite::Val &val) noexcept
    : emlite::Val(val) {}

DEFINE_CLONE(Function)