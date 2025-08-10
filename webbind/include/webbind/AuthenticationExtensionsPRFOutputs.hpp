#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticationExtensionsPRFValues.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPRFOutputs
class AuthenticationExtensionsPRFOutputs : public emlite::Val {
  explicit AuthenticationExtensionsPRFOutputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFOutputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFOutputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFOutputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFOutputs clone() const noexcept;
    /// Getter of the `enabled` attribute.
    [[nodiscard]] bool enabled() const;
    /// Setter of the `enabled` attribute.
    void enabled(bool value);
    /// Getter of the `results` attribute.
    [[nodiscard]] AuthenticationExtensionsPRFValues results() const;
    /// Setter of the `results` attribute.
    void results(const AuthenticationExtensionsPRFValues& value);
};

} // namespace webbind