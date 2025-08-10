#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPRFValues
/// [`AuthenticationExtensionsPRFValues`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsPRFValues)
class AuthenticationExtensionsPRFValues : public emlite::Val {
  explicit AuthenticationExtensionsPRFValues(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFValues take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFValues(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFValues() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFValues clone() const noexcept;
    [[nodiscard]] jsbind::Any first() const;
    void first(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any second() const;
    void second(const jsbind::Any& value);
};

} // namespace webbind