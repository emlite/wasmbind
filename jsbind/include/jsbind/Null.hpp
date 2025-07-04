#pragma once

#include <emlite/emlite.hpp>

namespace jsbind {
class Null : public emlite::Val {
    explicit Null(Handle h) noexcept;

  public:
    static Null take_ownership(Handle h) noexcept;
    Null(const emlite::Val &val) noexcept;
    Null() noexcept;
    [[nodiscard]] bool isNull() const;
    explicit operator bool() const;

    static const Null value;
};
} // namespace jsbind
