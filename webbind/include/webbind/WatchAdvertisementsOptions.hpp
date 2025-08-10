#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type WatchAdvertisementsOptions
class WatchAdvertisementsOptions : public emlite::Val {
  explicit WatchAdvertisementsOptions(Handle h) noexcept;
public:
    static WatchAdvertisementsOptions take_ownership(Handle h) noexcept;
    explicit WatchAdvertisementsOptions(const emlite::Val &val) noexcept;
    WatchAdvertisementsOptions() noexcept;
    [[nodiscard]] WatchAdvertisementsOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind