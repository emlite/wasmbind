#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BackgroundSyncOptions
/// [`BackgroundSyncOptions`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundSyncOptions)
class BackgroundSyncOptions : public emlite::Val {
  explicit BackgroundSyncOptions(Handle h) noexcept;
public:
    static BackgroundSyncOptions take_ownership(Handle h) noexcept;
    explicit BackgroundSyncOptions(const emlite::Val &val) noexcept;
    BackgroundSyncOptions() noexcept;
    [[nodiscard]] BackgroundSyncOptions clone() const noexcept;
    [[nodiscard]] long long minInterval() const;
    void minInterval(long long value);
};

} // namespace webbind