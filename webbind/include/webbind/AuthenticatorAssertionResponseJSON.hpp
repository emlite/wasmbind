#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticatorAssertionResponseJSON
class AuthenticatorAssertionResponseJSON : public emlite::Val {
  explicit AuthenticatorAssertionResponseJSON(Handle h) noexcept;
public:
    static AuthenticatorAssertionResponseJSON take_ownership(Handle h) noexcept;
    explicit AuthenticatorAssertionResponseJSON(const emlite::Val &val) noexcept;
    AuthenticatorAssertionResponseJSON() noexcept;
    [[nodiscard]] AuthenticatorAssertionResponseJSON clone() const noexcept;
    /// Getter of the `clientDataJSON` attribute.
    [[nodiscard]] jsbind::Any clientDataJSON() const;
    /// Setter of the `clientDataJSON` attribute.
    void clientDataJSON(const jsbind::Any& value);
    /// Getter of the `authenticatorData` attribute.
    [[nodiscard]] jsbind::Any authenticatorData() const;
    /// Setter of the `authenticatorData` attribute.
    void authenticatorData(const jsbind::Any& value);
    /// Getter of the `signature` attribute.
    [[nodiscard]] jsbind::Any signature() const;
    /// Setter of the `signature` attribute.
    void signature(const jsbind::Any& value);
    /// Getter of the `userHandle` attribute.
    [[nodiscard]] jsbind::Any userHandle() const;
    /// Setter of the `userHandle` attribute.
    void userHandle(const jsbind::Any& value);
};

} // namespace webbind