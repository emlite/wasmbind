#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CacheQueryOptions
/// [`CacheQueryOptions`](https://developer.mozilla.org/en-US/docs/Web/API/CacheQueryOptions)
class CacheQueryOptions : public emlite::Val {
  explicit CacheQueryOptions(Handle h) noexcept;
public:
    static CacheQueryOptions take_ownership(Handle h) noexcept;
    explicit CacheQueryOptions(const emlite::Val &val) noexcept;
    CacheQueryOptions() noexcept;
    [[nodiscard]] CacheQueryOptions clone() const noexcept;
    [[nodiscard]] bool ignoreSearch() const;
    void ignoreSearch(bool value);
    [[nodiscard]] bool ignoreMethod() const;
    void ignoreMethod(bool value);
    [[nodiscard]] bool ignoreVary() const;
    void ignoreVary(bool value);
};

} // namespace webbind