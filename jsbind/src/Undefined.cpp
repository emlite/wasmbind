#include <jsbind/Undefined.hpp>

using namespace jsbind;

Undefined::Undefined() noexcept
    : emlite::Val(emlite::Val::undefined()) {}

Undefined::Undefined(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

Undefined Undefined::take_ownership(Handle h) noexcept {
    return Undefined(h);
}

Undefined::Undefined(const emlite::Val &val) noexcept
    : emlite::Val(val) {}

bool Undefined::isUndefined() const {
    return as_handle() == 1;
}

Undefined::operator bool() const { return !isUndefined(); }

const Undefined Undefined::value{};