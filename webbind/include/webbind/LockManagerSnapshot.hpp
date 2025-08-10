#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "LockInfo.hpp"

namespace webbind {

/// Dictionary type LockManagerSnapshot
class LockManagerSnapshot : public emlite::Val {
  explicit LockManagerSnapshot(Handle h) noexcept;
public:
    static LockManagerSnapshot take_ownership(Handle h) noexcept;
    explicit LockManagerSnapshot(const emlite::Val &val) noexcept;
    LockManagerSnapshot() noexcept;
    [[nodiscard]] LockManagerSnapshot clone() const noexcept;
    /// Getter of the `held` attribute.
    [[nodiscard]] jsbind::TypedArray<LockInfo> held() const;
    /// Setter of the `held` attribute.
    void held(const jsbind::TypedArray<LockInfo>& value);
    /// Getter of the `pending` attribute.
    [[nodiscard]] jsbind::TypedArray<LockInfo> pending() const;
    /// Setter of the `pending` attribute.
    void pending(const jsbind::TypedArray<LockInfo>& value);
};

} // namespace webbind