#include <jsbind/Function.hpp>

using namespace jsbind;

Function::Function(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Function Function::take_ownership(Handle h) noexcept { return Function(h); }

Function::Function(const emlite::Val &val) noexcept : emlite::Val(val) {}

emlite::Val Function::instance() noexcept { return emlite::Val::global("Function"); }

Function::Function(const char *name) : emlite::Val(emlite::Val::global(name)) {}

Result<Function, Error> Function::get(const char *name) {
    return Function(name).as<Result<Function, Error>>();
}

Option<Function> Function::global(const char *name) {
    emlite::Val v = emlite::Val::global(name);
    if (v.is_undefined() || !v.is_function()) {
        return nullopt;
    }
    return Function(v);
}

String Function::toString() const noexcept { return emlite::Val::call("toString").as<String>(); }

Result<Any, Error> Function::apply(const Any &this_arg, const Array &args_array) {
    return emlite::Val::call("apply", this_arg, args_array).as<Result<Any, Error>>();
}

DEFINE_CLONE(Function)