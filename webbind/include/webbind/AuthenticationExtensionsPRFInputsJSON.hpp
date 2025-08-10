#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticationExtensionsPRFValuesJSON.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPRFInputsJSON
/// [`AuthenticationExtensionsPRFInputsJSON`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsPRFInputsJSON)
class AuthenticationExtensionsPRFInputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsPRFInputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFInputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFInputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFInputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFInputsJSON clone() const noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFValuesJSON eval() const;
    void eval(const AuthenticationExtensionsPRFValuesJSON& value);
    [[nodiscard]] jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValuesJSON> evalByCredential() const;
    void evalByCredential(const jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValuesJSON>& value);
};

} // namespace webbind