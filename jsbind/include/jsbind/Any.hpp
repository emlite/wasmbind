#pragma once

#include "utils.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {
class Any : public emlite::Val {
    explicit Any(Handle h) noexcept;

  public:
    static Any take_ownership(Handle h) noexcept;
    Any(const emlite::Val &v) noexcept;

    // this needs to copy
    template <typename T>
    Any(const T &v) noexcept : emlite::Val(v) {}

    Any() noexcept;

    static Any undefined() noexcept;
    static Any null() noexcept;
    [[nodiscard]] bool isUndefined() const;
    [[nodiscard]] bool isNull() const;
    explicit operator bool() const;

    DECLARE_CLONE(Any)
};
} // namespace jsbind
