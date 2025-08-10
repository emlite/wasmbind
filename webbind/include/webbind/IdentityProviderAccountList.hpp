#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class IdentityProviderAccount;

/// Dictionary type IdentityProviderAccountList
class IdentityProviderAccountList : public emlite::Val {
  explicit IdentityProviderAccountList(Handle h) noexcept;
public:
    static IdentityProviderAccountList take_ownership(Handle h) noexcept;
    explicit IdentityProviderAccountList(const emlite::Val &val) noexcept;
    IdentityProviderAccountList() noexcept;
    [[nodiscard]] IdentityProviderAccountList clone() const noexcept;
    /// Getter of the `accounts` attribute.
    [[nodiscard]] jsbind::TypedArray<IdentityProviderAccount> accounts() const;
    /// Setter of the `accounts` attribute.
    void accounts(const jsbind::TypedArray<IdentityProviderAccount>& value);
};

} // namespace webbind