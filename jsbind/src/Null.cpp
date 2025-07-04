#include <jsbind/Null.hpp>

using namespace jsbind;

Null::Null() noexcept
    : emlite::Val(emlite::Val::null()) {}

Null::Null(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

Null Null::take_ownership(Handle h) noexcept {
    return Null(h);
}

Null::Null(const emlite::Val &val) noexcept
    : emlite::Val(val) {}

bool Null::isNull() const {
    return as_handle() == 0;
}

Null::operator bool() const { return !isNull(); }

const Null Null::value{};