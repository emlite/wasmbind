#pragma once

#include <emlite/emlite.hpp>

namespace jsbind {
class Undefined : public emlite::Val {
    explicit Undefined(Handle h) noexcept;

  public:
    static Undefined take_ownership(Handle h) noexcept;
    Undefined(const emlite::Val &val) noexcept;
    Undefined() noexcept;
    [[nodiscard]] bool isUndefined() const;
    explicit operator bool() const;

    static const Undefined value;
};
} // namespace jsbind
