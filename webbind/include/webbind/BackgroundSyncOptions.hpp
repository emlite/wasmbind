#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BackgroundSyncOptions
class BackgroundSyncOptions : public emlite::Val {
  explicit BackgroundSyncOptions(Handle h) noexcept;
public:
    static BackgroundSyncOptions take_ownership(Handle h) noexcept;
    explicit BackgroundSyncOptions(const emlite::Val &val) noexcept;
    BackgroundSyncOptions() noexcept;
    [[nodiscard]] BackgroundSyncOptions clone() const noexcept;
    /// Getter of the `minInterval` attribute.
    [[nodiscard]] long long minInterval() const;
    /// Setter of the `minInterval` attribute.
    void minInterval(long long value);
};

} // namespace webbind