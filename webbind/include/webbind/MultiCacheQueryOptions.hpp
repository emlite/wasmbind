#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CacheQueryOptions.hpp"

namespace webbind {

/// Dictionary type MultiCacheQueryOptions
/// [`MultiCacheQueryOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MultiCacheQueryOptions)
class MultiCacheQueryOptions : public CacheQueryOptions {
  explicit MultiCacheQueryOptions(Handle h) noexcept;
public:
    static MultiCacheQueryOptions take_ownership(Handle h) noexcept;
    explicit MultiCacheQueryOptions(const emlite::Val &val) noexcept;
    MultiCacheQueryOptions() noexcept;
    [[nodiscard]] MultiCacheQueryOptions clone() const noexcept;
    [[nodiscard]] jsbind::String cacheName() const;
    void cacheName(const jsbind::String& value);
};

} // namespace webbind