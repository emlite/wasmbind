#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticationExtensionsPRFValuesJSON.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPRFOutputsJSON
/// [`AuthenticationExtensionsPRFOutputsJSON`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsPRFOutputsJSON)
class AuthenticationExtensionsPRFOutputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsPRFOutputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFOutputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFOutputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFOutputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFOutputsJSON clone() const noexcept;
    [[nodiscard]] bool enabled() const;
    void enabled(bool value);
    [[nodiscard]] AuthenticationExtensionsPRFValuesJSON results() const;
    void results(const AuthenticationExtensionsPRFValuesJSON& value);
};

} // namespace webbind