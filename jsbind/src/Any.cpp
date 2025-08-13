#include <jsbind/Any.hpp>

using namespace jsbind;

emlite::Val Any::instance() noexcept { return emlite::Val::global("Any"); }

Any::Any(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Any Any::take_ownership(Handle h) noexcept { return Any(h); }

Any::Any(const emlite::Val &v) noexcept : emlite::Val(v) {}

Any::Any() noexcept : emlite::Val(emlite::Val::undefined()) {}

Any Any::undefined() noexcept { return Any{emlite::Val::undefined()}; }

Any Any::null() noexcept { return Any{emlite::Val::null()}; }

[[nodiscard]] bool Any::isUndefined() const { return is_undefined(); }
[[nodiscard]] bool Any::isNull() const { return is_null(); }

Any::operator bool() const { return !is_null() && !is_undefined() && !operator!(); }

DEFINE_CLONE(Any)