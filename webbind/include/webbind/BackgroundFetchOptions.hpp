#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BackgroundFetchUIOptions.hpp"

namespace webbind {

/// Dictionary type BackgroundFetchOptions
class BackgroundFetchOptions : public BackgroundFetchUIOptions {
  explicit BackgroundFetchOptions(Handle h) noexcept;
public:
    static BackgroundFetchOptions take_ownership(Handle h) noexcept;
    explicit BackgroundFetchOptions(const emlite::Val &val) noexcept;
    BackgroundFetchOptions() noexcept;
    [[nodiscard]] BackgroundFetchOptions clone() const noexcept;
    /// Getter of the `downloadTotal` attribute.
    [[nodiscard]] long long downloadTotal() const;
    /// Setter of the `downloadTotal` attribute.
    void downloadTotal(long long value);
};

} // namespace webbind