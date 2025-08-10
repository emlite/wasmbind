#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AuthenticationExtensionsPRFValuesJSON;

/// Dictionary type AuthenticationExtensionsPRFInputsJSON
class AuthenticationExtensionsPRFInputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsPRFInputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFInputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFInputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFInputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFInputsJSON clone() const noexcept;
    /// Getter of the `eval` attribute.
    [[nodiscard]] AuthenticationExtensionsPRFValuesJSON eval() const;
    /// Setter of the `eval` attribute.
    void eval(const AuthenticationExtensionsPRFValuesJSON& value);
    /// Getter of the `evalByCredential` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValuesJSON> evalByCredential() const;
    /// Setter of the `evalByCredential` attribute.
    void evalByCredential(const jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValuesJSON>& value);
};

} // namespace webbind