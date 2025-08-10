#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityResolveOptions
class IdentityResolveOptions : public emlite::Val {
  explicit IdentityResolveOptions(Handle h) noexcept;
public:
    static IdentityResolveOptions take_ownership(Handle h) noexcept;
    explicit IdentityResolveOptions(const emlite::Val &val) noexcept;
    IdentityResolveOptions() noexcept;
    [[nodiscard]] IdentityResolveOptions clone() const noexcept;
    /// Getter of the `accountId` attribute.
    [[nodiscard]] jsbind::String accountId() const;
    /// Setter of the `accountId` attribute.
    void accountId(const jsbind::String& value);
};

} // namespace webbind