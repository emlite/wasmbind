#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CacheQueryOptions
class CacheQueryOptions : public emlite::Val {
  explicit CacheQueryOptions(Handle h) noexcept;
public:
    static CacheQueryOptions take_ownership(Handle h) noexcept;
    explicit CacheQueryOptions(const emlite::Val &val) noexcept;
    CacheQueryOptions() noexcept;
    [[nodiscard]] CacheQueryOptions clone() const noexcept;
    /// Getter of the `ignoreSearch` attribute.
    [[nodiscard]] bool ignoreSearch() const;
    /// Setter of the `ignoreSearch` attribute.
    void ignoreSearch(bool value);
    /// Getter of the `ignoreMethod` attribute.
    [[nodiscard]] bool ignoreMethod() const;
    /// Setter of the `ignoreMethod` attribute.
    void ignoreMethod(bool value);
    /// Getter of the `ignoreVary` attribute.
    [[nodiscard]] bool ignoreVary() const;
    /// Setter of the `ignoreVary` attribute.
    void ignoreVary(bool value);
};

} // namespace webbind