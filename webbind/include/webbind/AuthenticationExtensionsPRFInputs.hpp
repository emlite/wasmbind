#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticationExtensionsPRFValues.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPRFInputs
/// [`AuthenticationExtensionsPRFInputs`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsPRFInputs)
class AuthenticationExtensionsPRFInputs : public emlite::Val {
  explicit AuthenticationExtensionsPRFInputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFInputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFInputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFInputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFInputs clone() const noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFValues eval() const;
    void eval(const AuthenticationExtensionsPRFValues& value);
    [[nodiscard]] jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValues> evalByCredential() const;
    void evalByCredential(const jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValues>& value);
};

} // namespace webbind