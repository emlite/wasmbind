#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AuthenticationExtensionsPRFValues;

/// Dictionary type AuthenticationExtensionsPRFInputs
class AuthenticationExtensionsPRFInputs : public emlite::Val {
  explicit AuthenticationExtensionsPRFInputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFInputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFInputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFInputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFInputs clone() const noexcept;
    /// Getter of the `eval` attribute.
    [[nodiscard]] AuthenticationExtensionsPRFValues eval() const;
    /// Setter of the `eval` attribute.
    void eval(const AuthenticationExtensionsPRFValues& value);
    /// Getter of the `evalByCredential` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValues> evalByCredential() const;
    /// Setter of the `evalByCredential` attribute.
    void evalByCredential(const jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValues>& value);
};

} // namespace webbind