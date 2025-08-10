#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AuthenticationExtensionsPRFValuesJSON;

/// Dictionary type AuthenticationExtensionsPRFOutputsJSON
class AuthenticationExtensionsPRFOutputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsPRFOutputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFOutputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFOutputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFOutputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFOutputsJSON clone() const noexcept;
    /// Getter of the `enabled` attribute.
    [[nodiscard]] bool enabled() const;
    /// Setter of the `enabled` attribute.
    void enabled(bool value);
    /// Getter of the `results` attribute.
    [[nodiscard]] AuthenticationExtensionsPRFValuesJSON results() const;
    /// Setter of the `results` attribute.
    void results(const AuthenticationExtensionsPRFValuesJSON& value);
};

} // namespace webbind