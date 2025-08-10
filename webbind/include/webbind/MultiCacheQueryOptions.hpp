#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CacheQueryOptions.hpp"

namespace webbind {

/// Dictionary type MultiCacheQueryOptions
class MultiCacheQueryOptions : public CacheQueryOptions {
  explicit MultiCacheQueryOptions(Handle h) noexcept;
public:
    static MultiCacheQueryOptions take_ownership(Handle h) noexcept;
    explicit MultiCacheQueryOptions(const emlite::Val &val) noexcept;
    MultiCacheQueryOptions() noexcept;
    [[nodiscard]] MultiCacheQueryOptions clone() const noexcept;
    /// Getter of the `cacheName` attribute.
    [[nodiscard]] jsbind::String cacheName() const;
    /// Setter of the `cacheName` attribute.
    void cacheName(const jsbind::String& value);
};

} // namespace webbind