#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticationExtensionsPRFValues.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPRFOutputs
/// [`AuthenticationExtensionsPRFOutputs`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsPRFOutputs)
class AuthenticationExtensionsPRFOutputs : public emlite::Val {
  explicit AuthenticationExtensionsPRFOutputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFOutputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFOutputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFOutputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFOutputs clone() const noexcept;
    [[nodiscard]] bool enabled() const;
    void enabled(bool value);
    [[nodiscard]] AuthenticationExtensionsPRFValues results() const;
    void results(const AuthenticationExtensionsPRFValues& value);
};

} // namespace webbind