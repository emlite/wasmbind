#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityResolveOptions
/// [`IdentityResolveOptions`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityResolveOptions)
class IdentityResolveOptions : public emlite::Val {
  explicit IdentityResolveOptions(Handle h) noexcept;
public:
    static IdentityResolveOptions take_ownership(Handle h) noexcept;
    explicit IdentityResolveOptions(const emlite::Val &val) noexcept;
    IdentityResolveOptions() noexcept;
    [[nodiscard]] IdentityResolveOptions clone() const noexcept;
    [[nodiscard]] jsbind::String accountId() const;
    void accountId(const jsbind::String& value);
};

} // namespace webbind