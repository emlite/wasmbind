#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PointerLockOptions
/// [`PointerLockOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PointerLockOptions)
class PointerLockOptions : public emlite::Val {
  explicit PointerLockOptions(Handle h) noexcept;
public:
    static PointerLockOptions take_ownership(Handle h) noexcept;
    explicit PointerLockOptions(const emlite::Val &val) noexcept;
    PointerLockOptions() noexcept;
    [[nodiscard]] PointerLockOptions clone() const noexcept;
    [[nodiscard]] bool unadjustedMovement() const;
    void unadjustedMovement(bool value);
};

} // namespace webbind