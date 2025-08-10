#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BackgroundFetchUIOptions.hpp"

namespace webbind {

/// Dictionary type BackgroundFetchOptions
/// [`BackgroundFetchOptions`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchOptions)
class BackgroundFetchOptions : public BackgroundFetchUIOptions {
  explicit BackgroundFetchOptions(Handle h) noexcept;
public:
    static BackgroundFetchOptions take_ownership(Handle h) noexcept;
    explicit BackgroundFetchOptions(const emlite::Val &val) noexcept;
    BackgroundFetchOptions() noexcept;
    [[nodiscard]] BackgroundFetchOptions clone() const noexcept;
    [[nodiscard]] long long downloadTotal() const;
    void downloadTotal(long long value);
};

} // namespace webbind