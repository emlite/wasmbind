#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type WatchAdvertisementsOptions
/// [`WatchAdvertisementsOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WatchAdvertisementsOptions)
class WatchAdvertisementsOptions : public emlite::Val {
  explicit WatchAdvertisementsOptions(Handle h) noexcept;
public:
    static WatchAdvertisementsOptions take_ownership(Handle h) noexcept;
    explicit WatchAdvertisementsOptions(const emlite::Val &val) noexcept;
    WatchAdvertisementsOptions() noexcept;
    [[nodiscard]] WatchAdvertisementsOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind