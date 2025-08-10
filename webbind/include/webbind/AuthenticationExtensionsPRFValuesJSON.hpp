#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPRFValuesJSON
class AuthenticationExtensionsPRFValuesJSON : public emlite::Val {
  explicit AuthenticationExtensionsPRFValuesJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFValuesJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFValuesJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFValuesJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFValuesJSON clone() const noexcept;
    /// Getter of the `first` attribute.
    [[nodiscard]] jsbind::Any first() const;
    /// Setter of the `first` attribute.
    void first(const jsbind::Any& value);
    /// Getter of the `second` attribute.
    [[nodiscard]] jsbind::Any second() const;
    /// Setter of the `second` attribute.
    void second(const jsbind::Any& value);
};

} // namespace webbind