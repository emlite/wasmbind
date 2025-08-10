#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticatorSelectionCriteria
class AuthenticatorSelectionCriteria : public emlite::Val {
  explicit AuthenticatorSelectionCriteria(Handle h) noexcept;
public:
    static AuthenticatorSelectionCriteria take_ownership(Handle h) noexcept;
    explicit AuthenticatorSelectionCriteria(const emlite::Val &val) noexcept;
    AuthenticatorSelectionCriteria() noexcept;
    [[nodiscard]] AuthenticatorSelectionCriteria clone() const noexcept;
    /// Getter of the `authenticatorAttachment` attribute.
    [[nodiscard]] jsbind::String authenticatorAttachment() const;
    /// Setter of the `authenticatorAttachment` attribute.
    void authenticatorAttachment(const jsbind::String& value);
    /// Getter of the `residentKey` attribute.
    [[nodiscard]] jsbind::String residentKey() const;
    /// Setter of the `residentKey` attribute.
    void residentKey(const jsbind::String& value);
    /// Getter of the `requireResidentKey` attribute.
    [[nodiscard]] bool requireResidentKey() const;
    /// Setter of the `requireResidentKey` attribute.
    void requireResidentKey(bool value);
    /// Getter of the `userVerification` attribute.
    [[nodiscard]] jsbind::String userVerification() const;
    /// Setter of the `userVerification` attribute.
    void userVerification(const jsbind::String& value);
};

} // namespace webbind