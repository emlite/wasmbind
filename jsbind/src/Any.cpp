#include <jsbind/Any.hpp>

using namespace jsbind;

Any::Any(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Any Any::take_ownership(Handle h) noexcept { return Any(h); }

Any::Any(const emlite::Val &v) noexcept : emlite::Val(v) {}

Any::Any() noexcept : emlite::Val(emlite::Val::undefined()) {}

Any Any::undefined() noexcept { return Any{emlite::Val::undefined()}; }

Any Any::null() noexcept { return Any{emlite::Val::null()}; }

[[nodiscard]] bool Any::isUndefined() const { return as_handle() == 1; }
[[nodiscard]] bool Any::isNull() const { return as_handle() == 0; }

Any::operator bool() const { return as_handle() > 3; }

DEFINE_CLONE(Any)