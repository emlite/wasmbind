#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPRFValues
class AuthenticationExtensionsPRFValues : public emlite::Val {
  explicit AuthenticationExtensionsPRFValues(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFValues take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFValues(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFValues() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFValues clone() const noexcept;
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