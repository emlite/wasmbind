#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "LockInfo.hpp"

namespace webbind {

/// Dictionary type LockManagerSnapshot
/// [`LockManagerSnapshot`](https://developer.mozilla.org/en-US/docs/Web/API/LockManagerSnapshot)
class LockManagerSnapshot : public emlite::Val {
  explicit LockManagerSnapshot(Handle h) noexcept;
public:
    static LockManagerSnapshot take_ownership(Handle h) noexcept;
    explicit LockManagerSnapshot(const emlite::Val &val) noexcept;
    LockManagerSnapshot() noexcept;
    [[nodiscard]] LockManagerSnapshot clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<LockInfo> held() const;
    void held(const jsbind::TypedArray<LockInfo>& value);
    [[nodiscard]] jsbind::TypedArray<LockInfo> pending() const;
    void pending(const jsbind::TypedArray<LockInfo>& value);
};

} // namespace webbind