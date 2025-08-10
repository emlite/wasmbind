#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticatorSelectionCriteria
/// [`AuthenticatorSelectionCriteria`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorSelectionCriteria)
class AuthenticatorSelectionCriteria : public emlite::Val {
  explicit AuthenticatorSelectionCriteria(Handle h) noexcept;
public:
    static AuthenticatorSelectionCriteria take_ownership(Handle h) noexcept;
    explicit AuthenticatorSelectionCriteria(const emlite::Val &val) noexcept;
    AuthenticatorSelectionCriteria() noexcept;
    [[nodiscard]] AuthenticatorSelectionCriteria clone() const noexcept;
    [[nodiscard]] jsbind::String authenticatorAttachment() const;
    void authenticatorAttachment(const jsbind::String& value);
    [[nodiscard]] jsbind::String residentKey() const;
    void residentKey(const jsbind::String& value);
    [[nodiscard]] bool requireResidentKey() const;
    void requireResidentKey(bool value);
    [[nodiscard]] jsbind::String userVerification() const;
    void userVerification(const jsbind::String& value);
};

} // namespace webbind